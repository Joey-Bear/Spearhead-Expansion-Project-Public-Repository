class SEP_B_GER_DAK_Rflmn_K98 : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Rifleman";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Rflmn_K98.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_DAK_Rflmn_Pith : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Rifleman (Pith)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Rflmn_Pith.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_Rolled";

    linkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};	
    
class SEP_B_GER_DAK_Rflmn_Unr : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Rifleman, Unarmed";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Rflmn_Unr.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_MixedUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {};
    respawnWeapons[] = {};

    magazines[] = {};
    respawnMagazines[] = {};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_DAK_Driver : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Driver";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Driver.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_Rolled";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_DAK_Driver_Lite : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Driver (Light)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Driver_Lite.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_Rolled";

    linkedItems[] = {"SEP_B_GER_H_FieldCap_DAK","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_DAK","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_DAK_Gren : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Grenadier";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Gren.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_MixedUniform_DAK_Rolled";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_Glasses_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_Glasses_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98_GW","Put","Throw"};
    respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_DAK_MG_MG34 : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Machine Gunner (MG 34)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_MG_MG34.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_Rolled_alt";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_ns_DAK","V_SPE_DAK_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_ns_DAK","V_SPE_DAK_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_DAK_AMG : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Asst. Machine Gunner";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_AMG.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_MixedUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    
    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

    backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_DAK_MG_MG42 : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Machine Gunner (MG 42)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_MG_MG42.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_MixedUniform_DAK_Rolled";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_ns_DAK","V_SPE_DAK_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_ns_DAK","V_SPE_DAK_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Backpack_MGAmmo";
};
    
class SEP_B_GER_DAK_SL : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Squad Leader";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_SL.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_MixedUniform_DAK_NCO";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_Glasses_ns_DAK","V_SPE_DAK_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_Glasses_ns_DAK","V_SPE_DAK_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_A_frame";
};

class SEP_B_GER_DAK_ASL : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Asst. Squad Leader";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_ASL.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_MixedUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_DAK_Sniper : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Sniper";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Sniper.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_alt";

    linkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"SEP_B_GER_H_PithHelmet_ns","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98ZF39","Put","Throw"};
    respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};
        
class SEP_B_GER_DAK_Medic : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Medic";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Medic.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_MixedUniform_DAK_Rolled";

    linkedItems[] = {"SEP_B_GER_H_FieldCap_DAK","V_SPE_DAK_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_DAK","V_SPE_DAK_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
    
    backpack = "B_SPE_GER_MedicBackpack";
};

class SEP_B_GER_DAK_Sapper_Gefr : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Sapper (Corporal)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Sapper_Gefr.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_Rolled";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_Glasses_ns_DAK","V_SPE_DAK_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_Glasses_ns_DAK","V_SPE_DAK_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "_xx_SEP_B_GER_B_Explosives";
};

class SEP_B_GER_DAK_Sapper : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Sapper";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Sapper.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_FieldUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_FieldCap_DAK_alt","V_SPE_DAK_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_DAK_alt","V_SPE_DAK_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "_xx_SEP_B_GER_B_Explosives";
};
        
class SEP_B_GER_DAK_Ofcr : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Captain";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Ofcr.jpg";

    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";

    uniformClass = "SEP_B_GER_U_Officer_DAK";

    linkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_DAK_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_DAK_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
    
    weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

    magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
    
};

class SEP_B_GER_DAK_Radioman : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Radioman";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Radioman.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_MixedUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_FieldCap_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Radio";
};

class SEP_B_GER_DAK_Mortar_Gunner : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Mortar_Gunner.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_DAK_Mortar_AGunner : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Asst. Gunner (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Mortar_AGunner.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_DAK_Mortar_AmmoBearer : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Ammo Bearer (GrW 278/1)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Mortar_AmmoBearer.jpg";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK";

    linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M35_DAK","V_SPE_DAK_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

//Artillery

class SEP_B_GER_DAK_GunCrew : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Gun Crew";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_GunCrew.jpg";
    icon = "iconManTankcrew";
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_ART";

    linkedItems[] = {"SEP_B_GER_H_SideCap_DAK","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_SideCap_DAK","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_DAK_GunCrew_SquadLead : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Gun Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_GunCrew_SquadLead.jpg";
    icon = "iconManOfficer";
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_FieldUniform_DAK_ART_NCO";

    linkedItems[] = {"SEP_B_GER_H_SideCap_DAK","V_SPE_erla_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_SideCap_DAK","V_SPE_erla_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_DAK_GunCrew_Lieutenant : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Gun Crew (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_GunCrew";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_GunCrew_Lieutenant.jpg";
    icon = "iconManCommander";
	
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_Officer_DAK_Art";

    linkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_ArtOfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

//Flak-Korps

class SEP_B_GER_DAK_Flak_Gun_Crew : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Gun Crew";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_FlakGunCrew";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Flak_Gun_Crew.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_alt";

    linkedItems[] = {"SEP_B_GER_H_PithHelmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_PithHelmet","V_SPE_GER_FSJ_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_K98","Put","Throw"};
    respawnWeapons[] = {"SPE_K98","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

class SEP_B_GER_DAK_Flak_Gun_SL : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Gun Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_FlakGunCrew";	
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Flak_Gun_SL.jpg";
	icon = "iconManOfficer";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_alt";

    linkedItems[] = {"SEP_B_GER_H_PithHelmet","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_PithHelmet","V_SPE_GER_FSJ_NCO","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_MP40","Put","Throw"};
    respawnWeapons[] = {"SPE_MP40","Put","Throw"};

    magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
    
    backpack = "B_SPE_GER_Belt_bag";
};

//Tank crew

class SEP_B_GER_DAK_Tank_Crew : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Tank Crew";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Tank_Crew.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_Rolled_alt";

    linkedItems[] = {"SEP_B_GER_H_TankerFieldCap_DAK","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_TankerFieldCap_DAK","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_DAK_Tank_SL : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Tank Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Tank_SL.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_Rolled_alt";

    linkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_PzNCOCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_DAK_Tank_Leut : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Tank Crew Officer (Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Tank_Leut.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_alt";

    linkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_TankOfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_DAK_SPG_Crew : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "SPG Crew";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_SPG_Crew.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_Rolled_alt";

    linkedItems[] = {"SEP_B_GER_H_TankerFieldCap_DAK","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"SEP_B_GER_H_TankerFieldCap_DAK","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_DAK_SPG_SL : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "SPG Crew (Sergeant)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_SPG_SL.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_Rolled_alt";

    linkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_M38_art_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};
    respawnWeapons[] = {"SPE_mp40","SPE_P08","SPE_Binocular_GER","Throw","Put"};

    magazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    respawnMagazines[] = {MAG_4(SPE_32rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_NB39)};
    
};

class SEP_B_GER_DAK_SPG_Leut : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "SPG Crew Officer (2nd Lieutenant)";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_SPG_Leut.jpg";
	icon = "iconManTankcrew";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "SEP_B_GER_U_ShortUniform_DAK_alt";

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

class SEP_B_GER_DAK_Pilot : SEP_B_GER_Soldier_Base
{
    author = "Joe";
    scope = 1;
    scopeCurator = 1;
    displayName = "Pilot";
    side = 1;
    faction = "SEP_B_GER_DAK_Units";
    editorSubcategory = "EdSubcat_Personnel";
    editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_DAK_Pilot.jpg";
	icon = "iconManPilot";
    
    identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
    genericNames = "SPE_GermanMen";
    
    uniformClass = "U_SPE_GER_LW_pilot_trop";

    linkedItems[] = {"H_SPE_GER_LW_S_PilotHelmet","V_SPE_GER_LW_Schwimm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    respawnlinkedItems[] = {"H_SPE_GER_LW_S_PilotHelmet","V_SPE_GER_LW_Schwimm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
    
    Items[] = {"FirstAidKit","FirstAidKit"};
    RespawnItems[] = {"FirstAidKit","FirstAidKit"};

    weapons[] = {"SPE_P08","Throw","Put"};
    respawnWeapons[] = {"SPE_P08","Throw","Put"};

    magazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Rauchsichtzeichen_Orange)};
    respawnMagazines[] = {MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Rauchsichtzeichen_Orange)};
    
	backpack = "B_SPE_GER_LW_Paradrop";
};