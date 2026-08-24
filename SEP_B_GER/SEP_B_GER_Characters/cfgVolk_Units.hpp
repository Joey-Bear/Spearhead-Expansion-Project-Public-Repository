class SEP_B_GER_Volk_Rflmn : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98k)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Volk_Rflmn_MP507 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (MP 507)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn_MP507.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_Volk";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_MP507","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_MP507","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Volk_Rflmn_Unr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};
	
class SEP_B_GER_Volk_Militia_K98 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (K98k)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Jacket_bruin_swetr";

	linkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_FFI_Gasbag";
};

class SEP_B_GER_Volk_Militia_G98 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Gewehr 98)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_G98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_FFI_Gasbag";
};

class SEP_B_GER_Volk_Militia_MP507 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (MP 507)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_MP507.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Casual_1";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_MP507","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_MP507","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
};

class SEP_B_GER_Volk_Militia_Unr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Unarmed)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_Jacket_bruin_swetr";

	linkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};
	
class SEP_B_GER_Volk_Gren : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk";

	linkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag_Grenadier";
};
	
class SEP_B_GER_Volk_MG_MG34 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG-34)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_Volk_MG34";
};

class SEP_B_GER_Volk_AMG : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_Worker_Coverall_1";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	
	weapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_GER_B_MG_Volk_MG34";	
};
		
class SEP_B_GER_Volk_SL : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd_Unter";

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
/*
class SEP_B_GER_Volk_ASL : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Squad Leader";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_SL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd_Gefr";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";	
};*/

class SEP_B_GER_Volk_Sniper : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	weapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Volk_AT_Grenadier : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT soldier (AT Grenade)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

class SEP_B_GER_Volk_AT_PZ30 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 30)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AT_PZ30.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_Jacket_zwart_swetr";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_musette";
};

class SEP_B_GER_Volk_AT_PZ60 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 60)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AT_PZ60.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_Jacket_grijs";

	linkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_musette";
};

class SEP_B_GER_Volk_AT_Soldier : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerschreck)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AT_Soldier.jpg";  
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_RPzB_54"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_RPzB_Belt_bag_zelt_Loaded";
};

class SEP_B_GER_Volk_AT_Soldier_Assistant : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (Panzerschreck)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AT_Soldier_Assistant.jpg";   
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_Mantel_M40_volk";

	linkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_Stahlhelm_M16","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Blendkorper_2H),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Blendkorper_2H),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_RPzB_Belt_bag_Loaded";
};
	
class SEP_B_GER_Volk_Medic : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_Jacket_bruin_swetr";

	linkedItems[] = {"H_SPE_GER_Helmet_Medic","G_SPE_Dienst_Brille","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_Medic","G_SPE_Dienst_Brille","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "_xx_SEP_B_GER_B_Volk_Medic";
};

class SEP_B_GER_Volk_Sapper_Gefr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sapper_Gefr.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd_Unter";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};

class SEP_B_GER_Volk_Sapper : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sapper.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
		
class SEP_B_GER_Volk_Ofcr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Ofcr.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Hauptmann";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};

};

class SEP_B_GER_Volk_Sentry_G98 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (Gewehr 98)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sentry_G98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Mantel_M40_volk";

	linkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_Volk_Sentry_Shotgun : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (Shotgun)";
	side = 1;
	faction = "SEP_B_GER_Volk_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sentry_Shotgun.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_Mantel_M40_volk";

	linkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_Fusil_Mle_208_12","Put","Throw"};
	respawnWeapons[] = {"SPE_Fusil_Mle_208_12","Put","Throw"};

	magazines[] = {MAG_20(SPE_2Rnd_12x65_Pellets),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_2Rnd_12x65_Pellets),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};