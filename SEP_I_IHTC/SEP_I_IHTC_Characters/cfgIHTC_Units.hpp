//===================================
//Custom Classes (Men)
//SEP Îles Horizon Troupes Coloniales
//===================================

class SEP_I_IHTC_Rflmn_M1903 : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_M1903.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";
  
	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
	respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_IHTC_Rflmn_Carb : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Carbine)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_Carb.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";
  
	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "";
};
	
class SEP_I_IHTC_Rflmn_Lite : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman, Light";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";
  
	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
	respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_FFI_Gasbag";
};	

class SEP_I_IHTC_Rflmn_Unr : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_IHTC_Gren : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";
	
	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";
  
	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};
	respawnWeapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_CIV_satchel";
};
		
class SEP_I_IHTC_AR : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Automatic Rifleman";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_AR.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_FM_24_M29","Put","Throw"};
	respawnWeapons[] = {"SPE_FM_24_M29","Put","Throw"};

	magazines[] = {MAG_15(SPE_25Rnd_75x54),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_15(SPE_25Rnd_75x54),MAG_2(SPE_US_Mk_2)};
	
	backpack = "_xx_SEP_I_IHTC_B_AR";
};

class SEP_I_IHTC_AAR : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Automatic Rifleman";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_AAR.jpg";
	icon = "iconManRifleman";
	role = "Assistant";		

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
	respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};

	backpack = "_xx_SEP_I_IHTC_B_AAR";	
};
		
class SEP_I_IHTC_SL : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1A1_Thompson","Put","Throw"};
	respawnWeapons[] = {"SPE_M1A1_Thompson","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
	
	backpack = "";	
};

class SEP_I_IHTC_ASL : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Squad Leader";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "";	
};

class SEP_I_IHTC_Sniper : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";		

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	
	weapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};
	respawnWeapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
	
	backpack = "B_SPE_CIV_satchel";
};
	
class SEP_I_IHTC_AT : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_AT.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};
	respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};

	magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
	
	backpack = "_xx_SEP_I_IHTC_B_AT";
};
	
class SEP_I_IHTC_Medic : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Medic_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
	respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

	magazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "_xx_SEP_I_IHTC_B_Medic";
};
	
class SEP_I_IHTC_Engi : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Engi.jpg";
	icon = "iconManEngineer";
	role = "Sapper";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "_xx_SEP_I_IHTC_B_Engineer";
};

/* Hidden */
class SEP_I_IHTC_Engi_Expl : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Engineer (Explosives)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Engi_Expl.jpg";
	icon = "iconManEngineer";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
	backpack = "_xx_SEP_I_IHTC_B_Explosives";
};
		
class SEP_I_IHTC_Cpt : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Cpt.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	weapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};

	backpack = "";
};

class SEP_I_IHTC_Radio : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Radio.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_US_Radio";
};

class SEP_I_IHTC_Mortar_Gunner : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (81 mm M1)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_FR_packboard_mortar_loaded";
};

class SEP_I_IHTC_Mortar_AGunner : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (81 mm M1)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Mortar_AGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_FR_packboard_mortar_loaded";
};

class SEP_I_IHTC_Mortar_AmmoBearer : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (81 mm M1)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Mortar_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

	backpack = "B_SPE_FR_packboard_mortar_loaded";
};

class SEP_I_IHTC_GunCrew : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gun Crew";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="SEP_I_IHTC_Units_GunCrew";
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_GunCrew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";		

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_IHTC_GunCrew_Srgt : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gun Crew (Sergeant)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="SEP_I_IHTC_Units_GunCrew";
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_GunCrew_Srgt.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_IHTC_Tank_Crew : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tanker (Private)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="SEP_I_IHTC_Units_TankCrew";
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Tank_Crew.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";

	uniformClass = "U_SPE_US_Tank_Coverall_Trop_Legging";

	linkedItems[] = {"H_SPE_US_Helmet_Tank_NG","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_NG","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
	respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

	magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_IHTC_Tank_Sergeant : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tanker (Sergeant)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="SEP_I_IHTC_Units_TankCrew";
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Tank_Sergeant.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "U_SPE_US_Tank_Coverall_Trop_Legging";

	linkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
	respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

	magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_IHTC_Tank_Second_Lieutenant : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tanker (Second Lieutenant)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="SEP_I_IHTC_Units_TankCrew";
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Tank_Second_Lieutenant.jpg";
	icon = "iconManTankcrew";
	role = "Crewman";

	identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "U_SPE_US_Tank_Coverall_Trop_Legging";

	linkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M1911","Put","Throw"};

	magazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_IHTC_Driver : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Driver.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";
  
	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
};

class SEP_I_IHTC_Driver_Lite : SEP_I_IHTC_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver (Light)";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory="EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Driver_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
	genericNames = "TanoanMen";
  
	uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

	linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"FirstAidKit","FirstAidKit"};
	RespawnItems[] = {"FirstAidKit","FirstAidKit"};

	weapons[] = {"SPE_M1_Carbine","Put","Throw"};
	respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

	magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
	
};