//===================================
//Custom Classes (Men)
//SEP Wehrmacht (Winter)
//===================================

class SEP_B_GER_WIN_Rflmn_K98 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_WIN_Rflmn_Lite : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Light)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Rflmn_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

class SEP_B_GER_WIN_Ober_Rflmn : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Private 1 cl.)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Ober_Rflmn.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_G43","Put","Throw"};
    respawnWeapons[] = {"SPE_G43","Put","Throw"};

    magazines[] = {MAG_10(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame_G43_MG";
};

class SEP_B_GER_WIN_Rflmn_STG : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (StG 44)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Rflmn_STG.jpg";
	icon = "iconManSMG";
	role = "Assault";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_STG44","Put","Throw"};
    respawnWeapons[] = {"SPE_STG44","Put","Throw"};

    magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame_STG44_MG";
};
    
class SEP_B_GER_WIN_Rflmn_Unr : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Unarmed)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {};
    respawnWeapons[] = {};

    magazines[] = {};
    respawnMagazines[] = {};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

/* Hidden */
class SEP_B_GER_WIN_Rflmn_Flame : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Rifleman (Flammenwerfer 41)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Rflmn_Flame.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_WIN_Driver : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Driver.jpg";
	icon = "iconManRifleman";
	role = "Crewman";   
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_Helmet_ns","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet_ns","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

class SEP_B_GER_WIN_Driver_Lite : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver (Light)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Driver_Lite.jpg";
	icon = "iconManRifleman";
	role = "Crewman";   
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

/* Hidden */
class SEP_B_GER_WIN_Gren : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Grenadier";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Gren.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_GW","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame";
};

class SEP_B_GER_WIN_Ober_Grenadier : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Ober_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_GW","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame_Grenadier";
};

/* Hidden */
class SEP_B_GER_WIN_MG_MG34 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Machine-Gunner (MG 34)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_MG_MG34.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_utility","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_utility","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_MGAmmo";
};

/* Hidden */
class SEP_B_GER_WIN_AMG : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Asst. Machine-Gunner";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AMG.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    
    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

    backpack = "B_SPE_GER_Backpack_MGAmmo";
};

/* Hidden */
class SEP_B_GER_WIN_MG_MG42 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Machine-Gunner (MG 42)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_MG_MG42.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_WIN_MGunner2 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (MG 34)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_MGunner2.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_utility","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_utility","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_MG";
};


class SEP_B_GER_WIN_MGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (MG 42)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_MGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_MG";
};

class SEP_B_GER_WIN_AMGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (Assist.)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    
    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

    backpack = "B_SPE_GER_Backpack_MGAmmo";
};
    
class SEP_B_GER_WIN_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix_uffz";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame_Gef";
};

class SEP_B_GER_WIN_AT_Soldier_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader (Panzerfaust 60)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_Soldier_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix_uffz";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1_net","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1_net","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_PzFaust_60m","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_PzFaust_60m","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_Gef";
};

class SEP_B_GER_WIN_ASL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Assist. Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_Gef";
};

/* Hidden */
class SEP_B_GER_WIN_Sniper : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Sniper";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sniper.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98ZF39","Put","Throw"};
    respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_zelt";
};

class SEP_B_GER_WIN_AT_Grenadier : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT soldier (AT Grenade)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_Grenadier.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

/* Hidden */
class SEP_B_GER_WIN_AT_Faust : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Faustpatrone)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_Faust.jpg";   

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw","SPE_Faustpatrone"};
    respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_Faustpatrone"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_KleinLoaded";
};

/* Hidden */
class SEP_B_GER_WIN_AT_PZ30 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Panzerfaust 30)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_PZ30.jpg";   

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};
    respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Pzf30Loaded";
};

/* Hidden */
class SEP_B_GER_WIN_AT_PZ60 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Panzerfaust 60)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_PZ60.jpg";   

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};
    respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Loaded";
};

/* Hidden */
class SEP_B_GER_WIN_AT_PZShreck : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Panzerschreck)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_PZ60.jpg";   

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};
    respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_RPzB_Belt_bag_zelt_Loaded";
};

class SEP_B_GER_WIN_LAT_Klein_Rifleman : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT Soldier (Faustpatrone)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_LAT_Klein_Rifleman.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw","SPE_Faustpatrone"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_Faustpatrone"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_KleinLoaded";
};

class SEP_B_GER_WIN_LAT_30m_Rifleman : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT Soldier (Panzerfaust 30)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_LAT_30m_Rifleman.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Pzf30Loaded";
};

class SEP_B_GER_WIN_LAT_Rifleman : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT Soldier (Panzerfaust 60)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_LAT_Rifleman.jpg";  
	icon = "iconManAT";
	role = "MissileSpecialist";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Loaded";
};

class SEP_B_GER_WIN_AT_Soldier : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT Soldier (Panzerschreck)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_Soldier.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_54"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_54"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322)};
    
    backpack = "B_SPE_GER_RPzB_Belt_bag_zelt_Loaded";
};
        
class SEP_B_GER_WIN_Medic : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2","V_SPE_WIN_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2","V_SPE_WIN_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Handrauchzeichen_Violet)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Handrauchzeichen_Violet)};
    
    backpack = "B_SPE_GER_MedicBackpack";
};

class SEP_B_GER_WIN_Sapper_Gefr : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sapper (Corporal)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sapper_Gefr.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_M40_Burlap_WIN","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_m39),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_m39),MAG_2(SPE_NB39)};
    
    backpack = "B_SPE_GER_SapperBackpack2";
};

class SEP_B_GER_WIN_Sapper : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sapper";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sapper.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_SapperBackpack2";
};

/* Hidden */
class SEP_B_GER_WIN_Ofcr : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Captain";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Ofcr.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "U_SPE_GER_Hauptmann";

    linkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
 
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
 
    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
};

class SEP_B_GER_WIN_Hauptmann : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Captain";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Hauptmann.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Mantel_M40";

    linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};

    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
  
    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_5(SPE_32Rnd_9x19),MAG_4(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_5(SPE_32Rnd_9x19),MAG_4(SPE_8Rnd_9x19_P08)};
    
	backpack = "";
};

class SEP_B_GER_WIN_Oberst : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Colonel";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Oberst.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Mantel_M40";

    linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};

    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    
    weapons[] = {"SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_P08","Put","Throw"};

    magazines[] = {MAG_8(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_8(SPE_8Rnd_9x19_P08)};
    
	backpack = "";
};

class SEP_B_GER_WIN_Radioman : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Radio";
};

class SEP_B_GER_WIN_Mortar_Gunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","SPE_GrW278_1_Barrel","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","SPE_GrW278_1_Barrel","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_WIN_Mortar_AGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Mortar_AGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","SPE_GrW278_1_Stand","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","SPE_GrW278_1_Stand","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_WIN_Mortar_AmmoBearer : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Mortar_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_WIN_HMG_AmmoBearer : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (HMG)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_HMG_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_HMGAmmo";
};

class SEP_B_GER_WIN_AT_Soldier_Assistant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (Panzerschreck)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_Soldier_Assistant.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet_M40_net","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_RPzB_Belt_bag_Loaded";
};

class SEP_B_GER_WIN_AHMGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Gunner (HMG)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AHMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_Late","SPE_Lafette_Tripod","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_Late","SPE_Lafette_Tripod","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_HMGAmmo";
};

class SEP_B_GER_WIN_Ober_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "First Lieutenant";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Ober_Lieutenant.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Mantel_M40";

    linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};

    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    
    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_5(SPE_32Rnd_9x19),MAG_4(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_5(SPE_32Rnd_9x19),MAG_4(SPE_8Rnd_9x19_P08)};
    
	backpack = "";
};

class SEP_B_GER_WIN_Flamethrower_Operator : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Flame Rifleman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Flamethrower_Operator.jpg";
	icon = "iconMan";
	role = "Flamethrower";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","G_SPE_Dust_Goggles_2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","G_SPE_Dust_Goggles_2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_WIN_HMGunner2 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (HMG / MG 34)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Personnel";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_HMGunner2.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Parka_grau_mix";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_HMG";
};

class SEP_B_GER_WIN_HMGunner : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (HMG / MG 42)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Personnel";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_HMGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Parka_wht";

	linkedItems[] = {"H_SPE_GER_Helmet_net","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_net","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_HMG";
};

class SEP_B_GER_WIN_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Second Lieutenant";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Lieutenant.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Mantel_M40";

    linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};

    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    
    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_5(SPE_32Rnd_9x19),MAG_4(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_5(SPE_32Rnd_9x19),MAG_4(SPE_8Rnd_9x19_P08)};
    
	backpack = "";
};

class SEP_B_GER_WIN_Sentry_K98k : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (K98k)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Personnel";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sentry_K98k.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Parka_grau";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Sentry_MP40 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (MP 40)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Personnel";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sentry_MP40.jpg";
	icon = "iconManSMG";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Parka_grau_mix";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag";
};

//===================================
//Custom Classes (Men - Flak-Korps)
//SEP Wehrmacht (Winter)
//===================================

class SEP_B_GER_WIN_Flak_Gun_Crew : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gun Crew";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_FlakGunCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Flak_Gun_Crew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_LwFD_ART_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Flak_Gun_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gun Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_FlakGunCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Flak_Gun_SL.jpg";
    icon = "iconManOfficer";
	role = "Crewman";
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_LwFD_ART_Parka_wht_uffz";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1_ns","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1_ns","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
    
    backpack = "";
};

//===================================
//Custom Classes (Men - Artillery)
//SEP Wehrmacht (Winter)
//===================================

class SEP_B_GER_WIN_Gun_Crew : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gun Crew";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Gun_Crew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
   
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Gun_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gun Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Gun_SL.jpg";
	icon = "iconManOfficer";
    role = "Crewman";
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix_uffz";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
    
    backpack = "";
};

/* Hidden */
class SEP_B_GER_WIN_Gun_Leut : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Gun Officer (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Gun_Leut.jpg";
	icon = "iconManCommander";
    role = "Crewman";
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "U_SPE_GER_Art_leutnant";

    linkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
	backpack = "";
};

class SEP_B_GER_WIN_Gun_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gun Officer (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Gun_Lieutenant.jpg";
	icon = "iconManCommander";
    role = "Crewman";
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
    
	backpack = "";
};

//===================================
//Custom Classes (Men - Tank crew)
//SEP Wehrmacht (Winter)
//===================================

class SEP_B_GER_WIN_Tank_Crew : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Tank Crew";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Tank_Crew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_TankPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_TankPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

/* Hidden */
class SEP_B_GER_WIN_Tank_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Tank Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Tank_SL.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

class SEP_B_GER_WIN_Tank_Unterofficer : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Tank Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Tank_Unterofficer.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

/* Hidden */
class SEP_B_GER_WIN_Tank_Leut : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Tank Crew Officer (Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Tank_Leut.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

class SEP_B_GER_WIN_Tank_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Tank Crew Officer (Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Tank_Lieutenant.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

class SEP_B_GER_WIN_SPG_Crew : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "SPG Crew";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SPG_Crew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_SPGPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_SPGPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

/* Hidden */
class SEP_B_GER_WIN_SPG_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "SPG Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SPG_SL.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

class SEP_B_GER_WIN_SPG_Unterofficer : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "SPG Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SPG_Unterofficer.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

/* Hidden */
class SEP_B_GER_WIN_SPG_Leut : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "SPG Officer (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SPG_Leut.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_M38_Art_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_M38_Art_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

class SEP_B_GER_WIN_SPG_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "SPG Officer (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SPG_Lieutenant.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_M38_Art_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_M38_Art_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
	backpack = "";
};

//===================================
//Custom Classes (Men - Pilot)
//SEP Wehrmacht (Winter)
//===================================

class SEP_B_GER_WIN_Pilot : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Pilot";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Pilot.jpg";
	icon = "iconManPilot";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "U_SPE_GER_LW_pilot_weiss";

    linkedItems[] = {"H_SPE_GER_LW_PilotHelmet","V_SPE_GER_LW_Schwimm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_LW_PilotHelmet","V_SPE_GER_LW_Schwimm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Rauchsichtzeichen_Orange)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Rauchsichtzeichen_Orange)};
    
	backpack = "B_SPE_GER_LW_Paradrop";
};

//===================================
//Custom Classes (Men - Scouts)
//SEP Wehrmacht (Winter)
//===================================

class SEP_B_GER_WIN_Scout_ASL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Assist. Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";	
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_Gef";
};

class SEP_B_GER_WIN_Scout_Ober_Grenadier : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_Ober_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_GW","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame_Grenadier";
};

class SEP_B_GER_WIN_Scout_Halftrack_Driver : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Half-Track Driver";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_Halftrack_Driver.jpg";
	icon = "iconManSMG";
	role = "Crewman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

class SEP_B_GER_WIN_Scout_AMGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (Assist.)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_AMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_k98_late","Put","Throw"};
    respawnWeapons[] = {"SPE_k98_late","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_WIN_Scout_MGunner2 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (MG 34)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_MGunner2.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_mg34","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_mg34","SPE_P08","Throw","Put"};

    magazines[] = {MAG_7(SPE_50rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_7(SPE_50rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08)};
    
    backpack = "B_SPE_GER_Belt_bag_MG";
};

class SEP_B_GER_WIN_Scout_MGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (MG 42)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_MGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG42","SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_MG42","SPE_P08","Throw","Put"};

    magazines[] = {MAG_7(SPE_50Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08)};
    respawnMagazines[] = {MAG_7(SPE_50rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08)};
    
    backpack = "B_SPE_GER_Belt_bag_MG";
};

class SEP_B_GER_WIN_Scout_Rflmn_K98 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_WIN_Scout_Rflmn_Pvt : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Private 1 cl.)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_Rflmn_Pvt.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_G43","Put","Throw"};
    respawnWeapons[] = {"SPE_G43","Put","Throw"};

    magazines[] = {MAG_10(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame_G43_MG";
};

class SEP_B_GER_WIN_Scout_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Second Lieutenant";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_Lieutenant.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";	
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

class SEP_B_GER_WIN_Scout_Sniper : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98ZF39","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_K98ZF39","SPE_P08","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

class SEP_B_GER_WIN_Scout_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_Scouts";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Scout_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";	
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_STG44","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_STG44","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_Gef";
};

//===================================
//Custom Classes (Men - Fallschirmjäger)
//SEP Wehrmacht (Winter)
//===================================

	class SEP_B_GER_FSJ_WIN_Rflmn_K98 : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Rflmn_K98.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_camo3","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_camo3","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98","Put","Throw"};
		respawnWeapons[] = {"SPE_K98","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_K98k_MG";
	};
	
	class SEP_B_GER_FSJ_WIN_Rflmn_FG42 : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (FG 42)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Rflmn_FG42.jpg";
		icon = "iconManSemiauto";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestFG42_Bandoleer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestFG42_Bandoleer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_FG42_E","Put","Throw"};
		respawnWeapons[] = {"SPE_FG42_E","Put","Throw"};

		magazines[] = {MAG_10(SPE_20Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_20Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_FG42_MG";
	};

	class SEP_B_GER_FSJ_WIN_Rflmn_STG : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (StG 44)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Rflmn_STG.jpg";
		icon = "iconManSMG";
		role = "Assault";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_STG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_STG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_STG44","Put","Throw"};
		respawnWeapons[] = {"SPE_STG44","Put","Throw"};

		magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_STG44_MG";
	};
	
	class SEP_B_GER_FSJ_WIN_AmmoBearer : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer (GrW 278/1)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AmmoBearer.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
	};
	
	class SEP_B_GER_FSJ_WIN_AmmoBearer_HMG : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer (HMG)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AmmoBearer_HMG.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_VestKar98_Bandoleer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_VestKar98_Bandoleer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_FSJ_Backpack_HMGAmmo";
	};
	
	class SEP_B_GER_FSJ_WIN_AmmoBearer_Panzerschreck : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer (Panzerschreck)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AmmoBearer_Panzerschreck.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98","Put","Throw"};
		respawnWeapons[] = {"SPE_K98","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_FSJ_RPzB_Belt_bag_Loaded";
	};
	
	class SEP_B_GER_FSJ_WIN_ASL : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assist. Squad Leader";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_ASL.jpg";
		icon = "iconManLeader";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestFG42_Bandoleer_pistol","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestFG42_Bandoleer_pistol","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_FG42_E","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_FG42_E","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_20Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_20Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_Gef";
	};
	
	class SEP_B_GER_FSJ_WIN_Mortar_AGunner : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Gunner (GrW 278/1)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Mortar_AGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Stand"};
		respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Stand"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
	};
	
	class SEP_B_GER_FSJ_WIN_AHMGunner : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Gunner (HMG)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AHMGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_camo3","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_camo3","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_Lafette_Tripod"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_Lafette_Tripod"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_HMG";
	};
	
	class SEP_B_GER_FSJ_WIN_AT_Grenadier : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (AT Grenade)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AT_Grenadier.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_AT";
	};
		
	class SEP_B_GER_FSJ_WIN_LAT_Rifleman : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (Panzerfaust 60)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_LAT_Rifleman.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98_Bandoleer_sumpf","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98_Bandoleer_sumpf","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_FSJ_Pzf_Belt_bag_zelt_Loaded";
	};
	
	class SEP_B_GER_FSJ_WIN_AT_Soldier : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (Panzerschreck)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AT_Soldier.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_43"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_43"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_FSJ_RPzB_Belt_bag_zelt_Loaded";
	};
	
	class SEP_B_GER_FSJ_WIN_Ober_Grenadier : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Ober_Grenadier.jpg";
		icon = "iconManGrenadier";
		role = "Grenadier";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late_GW","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late_GW","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_Grenadier";
	};
	
	class SEP_B_GER_FSJ_WIN_Mortar_Gunner : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (GrW 278/1)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Mortar_Gunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_GrW278_1_Barrel"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_GrW278_1_Barrel"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
	};
	
	class SEP_B_GER_FSJ_WIN_HMGunner2 : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (HMG / MG 34)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_HMGunner2.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_MG";
	};
	
	class SEP_B_GER_FSJ_WIN_HMGunner : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (HMG / MG 42)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_HMGunner.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_MG";
	};
	
	class SEP_B_GER_FSJ_WIN_AMGunner : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine-Gunner (Assist.)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AMGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_FSJ_Backpack_MGAmmo";
	};
	
	class SEP_B_GER_FSJ_WIN_MGunner : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine-Gunner (MG 34)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_MGunner.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_MG";
	};
	
	class SEP_B_GER_FSJ_WIN_MGunner2 : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine-Gunner (MG 42)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_MGunner2.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_MG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_MG";
	};
	
	class SEP_B_GER_FSJ_WIN_Medic : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Medic.jpg";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_medic","V_SPE_GER_FSJ_Sani2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_medic","V_SPE_GER_FSJ_Sani2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98","Put","Throw"};
		respawnWeapons[] = {"SPE_K98","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_MedicBackpack";
	};
	
	class SEP_B_GER_FSJ_WIN_Radioman : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radioman";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Radioman.jpg";
		icon = "iconManRTO";
		role = "RadioOperator";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98","Put","Throw"};
		respawnWeapons[] = {"SPE_K98","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Radio";
	};
	
	class SEP_B_GER_FSJ_WIN_Sapper : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sapper";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Sapper.jpg";
		icon = "iconManExplosive";
		role = "Sapper";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_Pio","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet","V_SPE_GER_FSJ_Pio","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_SapperBackpack2";
	};

	class SEP_B_GER_FSJ_WIN_Sapper_Gefr : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sapper (Corporal)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Sapper_Gefr.jpg";
		icon = "iconManExplosive";
		role = "Sapper";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_camo3","V_SPE_GER_FSJ_Pio","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_camo3","V_SPE_GER_FSJ_Pio","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "B_SPE_GER_SapperBackpack2";
	};
	
	class SEP_B_GER_FSJ_WIN_Untersturmfuhrer : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Second Lieutenant";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Untersturmfuhrer.jpg";
		icon = "iconManCommander";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_LW_U_Mantel_Gaiters";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};
	
	class SEP_B_GER_FSJ_WIN_Sniper : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Sniper.jpg";
		icon = "iconManRecon";
		role = "Marksman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_camo_VestKar98_Bandoleer_pistol_sumpf","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_camo_VestKar98_Bandoleer_pistol_sumpf","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98ZF39","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_K98ZF39","Put","Throw","SPE_P08"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};

	class SEP_B_GER_FSJ_WIN_Sniper_FG42 : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper (FG 42)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_Sniper_FG42.jpg";
		icon = "iconManRecon";
		role = "Marksman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_wht";

		linkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestFG42_Bandoleer_pistol_sumpf","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_VestFG42_Bandoleer_pistol_sumpf","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_FG42_E_ZFG42","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_FG42_E_ZFG42","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_20Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_20Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_FG42_MG";
	};

	class SEP_B_GER_FSJ_WIN_SL : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_SL.jpg";
		icon = "iconManOfficer";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_LW_U_Mantel_Gaiters";

		linkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_FSJ_M38_Helmet_Cover_split2","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_Gef";
	};
	
	class SEP_B_GER_FSJ_WIN_AT_Soldier_SL : SEP_B_GER_WIN_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader (Panzerfaust 60)";
		side = 1;
		faction = "SEP_B_GER_Winter_Units";
		editorSubcategory = "FSJ_battle";
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_FSJ_WIN_AT_Soldier_SL.jpg";
		icon = "iconManOfficer";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_U_LwFD_FSJ_Parka_grau_mix_uffz";

		linkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_SMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"SEP_B_GER_H_FSJ_M38_Helmet_WIN","V_SPE_GER_FSJ_SMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_60m"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_60m"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
		
		backpack = "B_SPE_Ger_FSJ_Belt_bag_Gef";
	};