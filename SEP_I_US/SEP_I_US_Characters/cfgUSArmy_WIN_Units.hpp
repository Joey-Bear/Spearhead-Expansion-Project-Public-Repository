class SEP_I_US_WIN_Rflmn : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Rflmn.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_M43_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_OD7_Garand","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_OD7_Garand","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Garand","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Garand","Put","Throw"};

    magazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Backpack_M6_M43";
};
    
class SEP_I_US_WIN_Rflmn_Unr : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Unarmed)";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Rflmn_Unr.jpg";
	icon = "iconMan";
	role = "Rifleman";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_M43_trop_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_os","V_SPE_US_Vest_OD7_Garand","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_os","V_SPE_US_Vest_OD7_Garand","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {};
    respawnWeapons[] = {};

    magazines[] = {};
    respawnMagazines[] = {};
    
    backpack = "B_SPE_US_Backpack";
};

class SEP_I_US_WIN_AmmoBearer : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_AmmoBearer.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_M43_snow";

    linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_OD7_Carbine_m43","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_OD7_Carbine_m43","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

    magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Backpack_Bandoleer_AmmoBearer";
};

class SEP_I_US_WIN_Driver : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Driver.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "U_SPE_US_Tank_Crew6";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

    magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "";
};

class SEP_I_US_WIN_Driver_Lite : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Driver (Light)";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Driver_Lite.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "U_SPE_US_Tank_Crew6";

    linkedItems[] = {"H_SPE_US_jeep_cap_polar","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_jeep_cap_polar","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

    magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "";
};

class SEP_I_US_WIN_Gren : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_M43_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_OD7_Garand_gp","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_OD7_Garand_gp","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};
    respawnWeapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};

    magazines[] = {MAG_11(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M21A1),MAG_2(SPE_1Rnd_G_M2_ANM8)};
    respawnMagazines[] = {MAG_11(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M21A1),MAG_2(SPE_1Rnd_G_M2_ANM8)};
    
    backpack = "B_SPE_US_Backpack_M43_Bandoleer";
};

class SEP_I_US_WIN_AR : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Automatic Rifleman";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_AR.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_M43_trop_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_up","V_SPE_US_Vest_Bar","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_up","V_SPE_US_Vest_Bar","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1918A2_BAR","Put","Throw"};
    respawnWeapons[] = {"SPE_M1918A2_BAR","Put","Throw"};

    magazines[] = {MAG_11(SPE_20Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_20Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Backpack_M43";
};

class SEP_I_US_WIN_AAR : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Automatic Rifleman";
	side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_AAR.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_Coat_snow";

	linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPE_ACC_M1_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_M1_Bayo","FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M1_Garand","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Garand","Put","Throw"};

	magazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_US_AMGBag";
};
    
class SEP_I_US_WIN_SL : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_M43_trop_snow";

    linkedItems[] = {"H_SPE_US_Helmet_NCO_net","V_SPE_US_Vest_Thompson_nco","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","SPE_Binocular_US"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO_net","V_SPE_US_Vest_Thompson_nco","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","SPE_Binocular_US"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1A1_Thompson","SPE_M1911","Put","Throw"};
    respawnWeapons[] = {"SPE_M1A1_Thompson","SPE_M1911","Put","Throw"};

    magazines[] = {MAG_7(SPE_30Rnd_Thompson_45ACP),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_7(SPE_30Rnd_Thompson_45ACP),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Backpack_M43";
};

class SEP_I_US_WIN_ASL : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Squad Leader";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_M43_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine_mk2","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","SPE_Binocular_US"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine_mk2","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","SPE_Binocular_US"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

    magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Backpack_Mk2";
};

class SEP_I_US_WIN_Sniper : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_Scrim_ns","V_SPE_US_Vest_Garand_M43","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","ItemMap","SPE_Binocular_US"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_Scrim_ns","V_SPE_US_Vest_Garand_M43","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","ItemMap","SPE_Binocular_US"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};
    respawnWeapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};

    magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Suspender_band";
};

class SEP_I_US_WIN_AT : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT Soldier";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_AT.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","Put","Throw","SPE_M1A1_Bazooka"};
    respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw","SPE_M1A1_Bazooka"};

    magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_1(SPE_15Rnd_762x33),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Backpack_RocketBag";
};
        
class SEP_I_US_WIN_Medic : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_Med","V_SPE_US_Vest_Medic3","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_Med","V_SPE_US_Vest_Medic3","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit","SPE_US_Medkit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit","SPE_US_Medkit"};

    weapons[] = {"SPE_M1_Garand","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Garand","Put","Throw"};

    magazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_M18)};
    respawnMagazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_M18)};
    
    backpack = "";
};

class SEP_I_US_WIN_Engi : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Engi.jpg";
	icon = "iconManEngineer";
	role = "Sapper";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_M43_snow";

	linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_US_Backpack_eng";
};

/* Hidden */
class SEP_I_US_WIN_Engi_Expl : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Engineer (Explosives)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Engi_Expl.jpg";
	icon = "iconManEngineer";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_M43_trop_snow";

	linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "_xx_SEP_I_US_WIN_B_Explosives";
};
        
class SEP_I_US_WIN_Cpt : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Captain";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Cpt.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";

    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_Cap","V_SPE_US_Vest_45_off","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","SPE_Binocular_US"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_Cap","V_SPE_US_Vest_45_off","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap","SPE_Binocular_US"};
    
    weapons[] = {"SPE_M1A1_Thompson","SPE_M1911","Put","Throw"};
    respawnWeapons[] = {"SPE_M1A1_Thompson","SPE_M1911","Put","Throw"};

    magazines[] = {MAG_5(SPE_20Rnd_Thompson_45ACP),MAG_4(SPE_7Rnd_45ACP_1911)};
    respawnMagazines[] = {MAG_5(SPE_20Rnd_Thompson_45ACP),MAG_4(SPE_7Rnd_45ACP_1911)};
    
	backpack = "B_SPE_US_M36_Captain_Early";
};

class SEP_I_US_WIN_Radioman : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_Net_ns","V_SPEV_SPE_US_Vest_Garand_M43_GER_VestKar98","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_Net_ns","V_SPE_US_Vest_Garand_M43","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Garand","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Garand","Put","Throw"};

    magazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_8Rnd_762x63),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Radio_alt";
};

class SEP_I_US_WIN_Mortar_Gunner : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Gunner (81 mm M1)";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Mortar_Gunner.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","SPE_M1_81_Barrel","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","SPE_M1_81_Barrel","Put","Throw"};

    magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_packboard_mortar_loaded";
};

class SEP_I_US_WIN_Mortar_AGunner : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Asst. Gunner (81 mm M1)";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Mortar_AGunner.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","SPE_M1_81_Stand","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","SPE_M1_81_Stand","Put","Throw"};

    magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_packboard_mortar_loaded";
};

class SEP_I_US_WIN_Mortar_AmmoBearer : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ammo Bearer (81 mm M1)";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Mortar_AmmoBearer.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_Net_up","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_Net_up","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_ACC_M1_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","SPE_M1_81_Stand","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","SPE_M1_81_Stand","Put","Throw"};

    magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_packboard_mortar_loaded";
};

class SEP_I_US_WIN_Flamethrower_Operator : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Flamethrower Operator";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Flamethrower_Operator.jpg";
	icon = "iconMan";
	role = "Flamethrower";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_Coat_snow";

	linkedItems[] = {"H_SPE_US_Helmet_ns","G_SPE_Polar_Goggles","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","G_SPE_Polar_Goggles","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M2_Flamethrower","SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M2_Flamethrower","SPE_M1911","Put","Throw"};

	magazines[] = {MAG_4(SPE_7Rnd_45ACP_1911)};
	respawnMagazines[] = {MAG_4(SPE_7Rnd_45ACP_1911)};

	backpack = "B_SPE_US_M2Flamethrower";
};

class SEP_I_US_WIN_HMGunner : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_HMGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_M43_trop_snow";

	linkedItems[] = {"SEP_I_US_H_M1Helmet_WIN_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_US_H_M1Helmet_WIN_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1919A4","SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M1919A4","SPE_M1911","Put","Throw"};

	magazines[] = {MAG_4(SPE_50Rnd_762x63),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_4(SPE_50Rnd_762x63),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_US_HMGbag";
};

class SEP_I_US_WIN_HMGunner_M2 : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (M2)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_HMGunner_M2.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_Coat_snow";

	linkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","SPE_M2_50","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","SPE_M2_50","Put","Throw"};

	magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_US_GP_bag_M2";
};

class SEP_I_US_WIN_HMG_AmmoBearer : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (HMG)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_HMG_AmmoBearer.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_Coat_snow";

	linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_US_packboard_ammo_HMG";
};

class SEP_I_US_WIN_HMG_AmmoBearer_M2 : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (M2 HMG)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_HMG_AmmoBearer_M2.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_M43_snow";

	linkedItems[] = {"SEP_I_US_H_M1Helmet_WIN","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"SEP_I_US_H_M1Helmet_WIN","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_US_packboard_ammo_HMG_M2";
};

class SEP_I_US_WIN_AHMGunner : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Machine-Gunner";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_AHMGunner.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_M43_snow";

	linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M1_Carbine","SPE_M2_Tripod","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","SPE_M2_Tripod","Put","Throw"};

	magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_50Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_50Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_US_HMGAssistantBag";
};

class SEP_I_US_WIN_AHMGunner_M2 : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Machine-Gunner (M2)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_AHMGunner_M2.jpg";
	icon = "iconManSemiauto";
	role = "Assistant";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_Coat_snow";

	linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M1_Carbine","SPE_M3_Tripod","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","SPE_M3_Tripod","Put","Throw"};

	magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_US_packboard_ammo_HMG_M2";
};

class SEP_I_US_WIN_GunCrew : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gun Crew";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory = "SPE_EdSubcat_US_GunCrew";
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_GunCrew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_M43_trop_snow";

	linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_US_Suspender";
};

class SEP_I_US_WIN_GunCrew_Srgt : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gun Crew (Sergeant)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory = "SPE_EdSubcat_US_GunCrew";
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_GunCrew_Srgt.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "SEP_I_US_U_Coat_snow";

	linkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_US_Suspender";
};

class SEP_I_US_WIN_Pilot : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Flying Officer";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Pilot.jpg";
	icon = "iconManPilot";
	role = "Crewman";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "U_SPE_US_Pilot_lthr_boot";

	linkedItems[] = {"H_SPE_US_Helmet_Pilot_Glasses_Up","V_SPE_US_LifeVest","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_Pilot_Glasses_Up","V_SPE_US_LifeVest","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M1911","Put","Throw"};

	magazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
	respawnMagazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
	
	backpack = "B_SPE_US_TypeA3";
};

class SEP_I_US_WIN_Tank_Crew : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tanker (Private)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory = "SPE_EdSubcat_US_TankCrew";
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Tank_Crew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "U_SPE_US_Tank_Crew2";

	linkedItems[] = {"H_SPE_US_Helmet_Tank_NG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_NG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
	respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

	magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_US_WIN_Tank_Sergeant : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tanker (Sergeant)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory = "SPE_EdSubcat_US_TankCrew";
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Tank_Sergeant.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "U_SPE_US_Tank_Crew2";

	linkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
	respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

	magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_US_WIN_Tank_Second_Lieutenant : SPE_US_Soldier_base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tanker (Second Lieutenant)";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	editorSubcategory = "SPE_EdSubcat_US_TankCrew";
	editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Tank_Second_Lieutenant.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_EnglishMen";

	uniformClass = "U_SPE_US_Tank_Crew2";

	linkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45_off","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45_off","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M1911","Put","Throw"};

	magazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_US_WIN_Sentry_Carb : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sentry (Carbine)";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Sentry_Carb.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_Coat_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Carbine","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_M1_Carbine","Put","Throw"};
    respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

    magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Suspender";
};

class SEP_I_US_WIN_Sentry_Shotgun : SPE_US_Soldier_base
{
    author = "Joe";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sentry (Shotgun)";
    side = 2;
    faction = "SEP_I_US_Winter_Units";
    editorSubcategory="EdSubcat_Personnel";		
    editorPreview="\SEP\SEP_I_US\SEP_I_US_Characters\data\editorPreviews\SEP_I_US_WIN_Sentry_Shotgun.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
    
    identityTypes[] = {"LanguageENG_F","Head_EURO","SPE_US_Glasses"};
    genericNames = "SPE_EnglishMen";
    
    uniformClass = "SEP_I_US_U_M43_trop_snow";

    linkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Garand","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    respawnlinkedItems[] = {"H_SPE_US_Helmet_band_net_ns","V_SPE_US_Vest_Garand","SPE_US_ItemCompass","SPE_US_ItemWatch","ItemMap"};
    
    Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
    RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

    weapons[] = {"SPE_Model_37_Trenchgun","Put","Throw"};
    respawnWeapons[] = {"SPE_Model_37_Trenchgun","Put","Throw"};

    magazines[] = {MAG_10(SPE_5Rnd_12x70_Pellets),MAG_2(SPE_US_Mk_2)};
    respawnMagazines[] = {MAG_10(SPE_5Rnd_12x70_Pellets),MAG_2(SPE_US_Mk_2)};
    
    backpack = "B_SPE_US_Suspender";
};