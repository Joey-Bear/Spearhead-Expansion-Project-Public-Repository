class SEP_B_GER_BD_WIN_Rflmn_K98 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Mantel_M36";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_BD_WIN_Rflmn_Lite : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Light)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Rflmn_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "";
};
    
class SEP_B_GER_BD_WIN_Rflmn_Unr : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Unarmed)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

    uniformClass = "SEP_B_GER_U_Mantel_M36";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {};
    respawnWeapons[] = {};

    magazines[] = {};
    respawnMagazines[] = {};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

/* Hidden */
class SEP_B_GER_BD_WIN_Rflmn_Flame : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Rifleman (Flammenwerfer 41)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Rflmn_Flame.jpg";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
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

class SEP_B_GER_BD_WIN_Driver : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Driver.jpg";
	icon = "iconManRifleman";
	role = "Crewman";   
	
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

class SEP_B_GER_BD_WIN_Driver_Lite : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver (Light)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Driver_Lite.jpg";
	icon = "iconManRifleman";
	role = "Crewman";   
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "";
};

/* Hidden */
class SEP_B_GER_BD_WIN_Gren : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Grenadier";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Gren.jpg";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2_utility","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_GW","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame_Grenadier";
};

class SEP_B_GER_BD_WIN_Ober_Grenadier : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Ober_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
class SEP_B_GER_BD_WIN_MG_MG34 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Machine Gunner (MG 34)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_MG_MG34.jpg";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
class SEP_B_GER_BD_WIN_AMG : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Asst. Machine Gunner";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AMG.jpg";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
class SEP_B_GER_BD_WIN_MG_MG42 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Machine Gunner (MG 42)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_MG_MG42.jpg";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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

class SEP_B_GER_BD_WIN_MGunner2 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (MG 34)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_MGunner2.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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


class SEP_B_GER_BD_WIN_MGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (MG 42)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_MGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

    uniformClass = "SEP_B_GER_U_Mantel_M36";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_MG";
};

class SEP_B_GER_BD_WIN_AMGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine-Gunner (Assist.)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
    
class SEP_B_GER_BD_WIN_SL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

    uniformClass = "SEP_B_GER_U_Mantel_M36_Uffz";

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

class SEP_B_GER_BD_WIN_ASL : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Assist. Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
class SEP_B_GER_BD_WIN_Sniper : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Sniper";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Sniper.jpg";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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

class SEP_B_GER_BD_WIN_AT_Grenadier : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT soldier (AT Grenade)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AT_Grenadier.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

/* Hidden */
class SEP_B_GER_BD_WIN_AT_Faust : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Faustpatrone)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AT_Faust.jpg";   

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
class SEP_B_GER_BD_WIN_AT_PZ30 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Panzerfaust 30)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AT_PZ30.jpg";   

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
class SEP_B_GER_BD_WIN_AT_PZ60 : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Panzerfaust 60)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AT_PZ60.jpg";   

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
class SEP_B_GER_BD_WIN_AT_PZShreck : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "AT Soldier (Panzerschreck)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AT_PZ60.jpg";   

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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
        
class SEP_B_GER_BD_WIN_Medic : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2","V_SPE_WIN_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_2","V_SPE_WIN_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Handrauchzeichen_Violet)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Handrauchzeichen_Violet)};
    
    backpack = "B_SPE_GER_MedicBackpack";
};

class SEP_B_GER_BD_WIN_Sapper_Gefr : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sapper (Corporal)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Sapper_Gefr.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

    uniformClass = "SEP_B_GER_U_Mantel_M36";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_m39),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_m39),MAG_2(SPE_NB39)};
    
    backpack = "B_SPE_GER_SapperBackpack2";
};

class SEP_B_GER_BD_WIN_Sapper : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sapper";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Sapper.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_SapperBackpack2";
};

/* Hidden */
class SEP_B_GER_BD_WIN_Ofcr : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Captain";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Ofcr.jpg";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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

class SEP_B_GER_BD_WIN_Hauptmann : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Captain";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Hauptmann.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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

class SEP_B_GER_BD_WIN_Oberst : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Colonel";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Oberst.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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

class SEP_B_GER_BD_WIN_Radioman : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Radio";
};

class SEP_B_GER_BD_WIN_Mortar_Gunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_BD_WIN_Mortar_AGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Mortar_AGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_BD_WIN_Mortar_AmmoBearer : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Mortar_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_BD_WIN_HMG_AmmoBearer : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (HMG)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_HMG_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_HMGAmmo";
};

class SEP_B_GER_BD_WIN_AT_Soldier_Assistant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (Panzerschreck)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AT_Soldier_Assistant.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_RPzB_Belt_bag_Loaded";
};

class SEP_B_GER_BD_WIN_AHMGunner : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Gunner (HMG)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_AHMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_HMGAmmo";
};

class SEP_B_GER_BD_WIN_Ober_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "First Lieutenant";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Ober_Lieutenant.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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

class SEP_B_GER_BD_WIN_Flamethrower_Operator : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Flame Rifleman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Flamethrower_Operator.jpg";
	icon = "iconMan";
	role = "Flamethrower";
    
    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";
    
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

class SEP_B_GER_BD_WIN_HMGunner2 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (HMG / MG 34)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Blue_Division_Winter";	
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_HMGunner2.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
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

class SEP_B_GER_BD_WIN_HMGunner : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (HMG / MG 42)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Blue_Division_Winter";	
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_HMGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_Parka_wht";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_HMG";
};

class SEP_B_GER_BD_WIN_Lieutenant : SEP_B_GER_WIN_Soldier_Base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Second Lieutenant";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="SEP_B_GER_Units_Infantry_Blue_Division_Winter";		
    editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Lieutenant.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
    genericNames = "HispanicMen";

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

class SEP_B_GER_BD_WIN_Sentry_K98k : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (K98k)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Blue_Division_Winter";	
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Sentry_K98k.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_Parka_grau";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_BD_WIN_Sentry_MP40 : SEP_B_GER_WIN_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (MP 40)";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Blue_Division_Winter";	
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_BD_WIN_Sentry_MP40.jpg";
	icon = "iconManSMG";
	role = "Rifleman";
	
	identityTypes[] = {"LanguageGRE_F","Head_Hispanic","SPE_GER_Glasses"};
	genericNames = "HispanicMen";
  
	uniformClass = "SEP_B_GER_U_Parka_grau_mix";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_1942_BD","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag";
};