//===================================
//Custom Classes (Men)
//SEP Polish Resistance
//===================================

class SEP_I_AK_Rflmn_K98 : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (K98k)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";
  
	uniformClass = "SEP_I_AK_U_Worker_1";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_AK_Rflmn_Sten : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Sten)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Sten.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";
  
	uniformClass = "SEP_I_AK_U_Worker_1";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_I_AK_Rflmn_MP40 : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (MP 40)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_MP40.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";
  
	uniformClass = "SEP_I_AK_U_Worker_Coverall_2";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_I_AK_Rflmn_Flame : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Flammenwerfer 41)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Flame.jpg";
	icon = "iconMan";
	role = "Flamethrower";
	
	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";
  
	uniformClass = "SEP_I_AK_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};
	
class SEP_I_AK_Rflmn_Lite : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Light)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";
  
	uniformClass = "SEP_I_AK_U_Jacket_zwart_alt";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_FFI_Gasbag";
};	

class SEP_I_AK_Rflmn_Unr : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Unarmed)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_1";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_AK_Gren : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Jacket_zwart_alt";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_satchel";
};
	
class SEP_I_AK_MG_MG34 : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 34)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_1";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MG34","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_I_AK_B_MG_MG34";
};

class SEP_I_AK_AMG : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	
	weapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_I_AK_B_MG_MG34";	
};
		
class SEP_I_AK_SL : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader (MP 40)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_FieldUniform_Sumpf";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "";	
};

class SEP_I_AK_ASL: SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader (K98k)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";	
};

class SEP_I_AK_Sniper : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper (K98k ZF39)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	
	weapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_AK_AT_PZ30 : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tank Hunter (Panzerfaust 30)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_AT_PZ30.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_1";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_musette";
};

class SEP_I_AK_AT_PZ60 : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tank Hunter (Panzerfaust 60)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_AT_PZ60.jpg";  
	icon = "iconManAT";		
	role = "MissileSpecialist";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Jacket_grijs";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_musette";
};
	
class SEP_I_AK_Medic : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Jacket_zwart_alt";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_I_AK_B_Medic";
};

class SEP_I_AK_Sabo : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Saboteur";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Sabo.jpg";
	icon = "iconManExplosive";
	role = "SpecialOperative";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_I_AK_B_Explosives";
};
		
class SEP_I_AK_Ofcr : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Cell Leader";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Ofcr.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Swetr_vest_4";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};

	backpack = "";
};

class SEP_I_AK_Mortar_Gunner : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (GrW 278/1)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Worker_Coverall_2";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_I_AK_Mortar_AGunner : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (GrW 278/1)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Mortar_AGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Swetr_vest_4";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_I_AK_Mortar_AmmoBearer : SEP_I_AK_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (GrW 278/1)";
	side = 2;
	faction = "SEP_I_AK_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Mortar_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
	genericNames = "EnochMen";

	uniformClass = "SEP_I_AK_U_Jacket_zwart_alt";

	linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};