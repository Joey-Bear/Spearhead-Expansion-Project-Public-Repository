class SEP_B_GER_WIN_Rflmn_K98 : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Rflmn_K98.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Rflmn_Flame : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
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
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};
    
class SEP_B_GER_WIN_Rflmn_Unr : B_Soldier_unarmed_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman, Unarmed";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Rflmn_Unr.jpg";

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
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Driver : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Driver.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_Helmet_ns","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet_ns","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_zelt";
};

class SEP_B_GER_WIN_Driver_Lite : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver (Light)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Driver.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"H_SPE_GER_Cap","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_zelt";
};

class SEP_B_GER_WIN_Gren : B_Soldier_GL_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
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

class SEP_B_GER_WIN_MG_MG34 : B_support_MG_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine Gunner (MG 34)";
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

class SEP_B_GER_WIN_AMG : B_support_AMG_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Machine Gunner";
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

class SEP_B_GER_WIN_MG_MG42 : B_support_MG_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine Gunner (MG 42)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_MG_MG42.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_MGAmmo";
};
    
class SEP_B_GER_WIN_SL : B_Soldier_SL_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SL.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau_mix_uffz";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame";
};

class SEP_B_GER_WIN_ASL : B_Soldier_TL_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Squad Leader";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_ASL.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Sniper : B_sniper_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sniper.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win_ns","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98ZF39","Put","Throw"};
    respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_zelt";
};

class SEP_B_GER_WIN_AT_Grenadier : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT soldier (AT Grenade)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_Grenadier.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

class SEP_B_GER_WIN_AT_Faust : B_soldier_AT_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
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

class SEP_B_GER_WIN_AT_PZ30 : B_soldier_AT_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
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

class SEP_B_GER_WIN_AT_PZ60 : B_soldier_AT_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
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

class SEP_B_GER_WIN_AT_PZShreck : B_soldier_AT_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT Soldier (Panzerschreck)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_AT_PZ60.jpg";   

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};
    respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_RPzB_Belt_bag_zelt_Loaded";
};
        
class SEP_B_GER_WIN_Medic : B_medic_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Medic.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

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

class SEP_B_GER_WIN_Sapper_Gefr : B_engineer_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sapper (Corporal)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sapper_Gefr.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmCover_win","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "_xx_SEP_B_GER_B_Explosives";
};

class SEP_B_GER_WIN_Sapper : B_engineer_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sapper";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Sapper.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Parka_grau";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "_xx_SEP_B_GER_B_Explosives";
};
        
class SEP_B_GER_WIN_Ofcr : B_officer_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
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
    
    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
};

class SEP_B_GER_WIN_Radioman : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Radioman.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
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

class SEP_B_GER_WIN_Mortar_Gunner : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Mortar_Gunner.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_WIN_Mortar_AGunner : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Mortar_AGunner.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_WIN_Mortar_AmmoBearer : B_Soldier_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Mortar_AmmoBearer.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

//Flak-Korps

class SEP_B_GER_WIN_Flak_Gun_Crew : B_Soldier_F
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
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Flak_Gun_SL : B_Soldier_SL_F
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
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix_uffz";

    linkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1_ns","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_StahlhelmM40_WIN_1_ns","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

//Artillery

class SEP_B_GER_WIN_Gun_Crew : B_Soldier_F
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
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Gun_SL : B_Soldier_SL_F
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
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_grau_mix_uffz";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_WIN_1","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_WIN_Gun_Leut : B_officer_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gun Officer (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Gun_Leut.jpg";
	icon = "iconManCommander";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "U_SPE_GER_Art_leutnant";

    linkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
};

//Tank crew

class SEP_B_GER_WIN_Tank_Crew : B_Soldier_F
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
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_TankPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_TankPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_WIN_Tank_SL : B_Soldier_SL_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Tank Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Tank_SL.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_WIN_Tank_Leut : B_officer_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Tank Crew Officer (Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_Tank_Leut.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_WIN_SPG_Crew : B_Soldier_F
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
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_SPGPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_SPGPrivateCap","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_WIN_SPG_SL : B_Soldier_SL_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "SPG Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SPG_SL.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_WIN_SPG_Leut : B_officer_F
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "SPG Crew Officer (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_Winter_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_WIN_SPG_Leut.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Parka_wht";

    linkedItems[] = {"H_SPE_GER_M38_Art_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_M38_Art_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

//Pilot

class SEP_B_GER_WIN_Pilot : B_Pilot_F
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
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "U_SPE_GER_LW_pilot_weiss";

    linkedItems[] = {"H_SPE_GER_LW_PilotHelmet","V_SPE_GER_LW_Schwimm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_LW_PilotHelmet","V_SPE_GER_LW_Schwimm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Rauchsichtzeichen_Orange)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Rauchsichtzeichen_Orange)};
    
	backpack = "B_SPE_GER_LW_Paradrop";
};

