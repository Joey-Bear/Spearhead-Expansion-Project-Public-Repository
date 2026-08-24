class SEP_B_GER_VolkGren_Rflmn_STG : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (StG 44)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Rflmn_STG.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_M44_Open";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_VolkGren_Rflmn_MP40 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (MP 40)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Rflmn_MP40.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_VolkGren_Rflmn_G43 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Private 1 cl.)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Rflmn_G43.jpg";
	icon = "iconManSemiauto";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_VolkGren_Rflmn_K98 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98k)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_VolkGren_Rflmn_Flame : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Flame Rifleman";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Rflmn_Flame.jpg";
	icon = "iconMan";
	role = "Flamethrower";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_VolkGren_Rflmn_Lite : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Light)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Rflmn_Lite.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "SEP_B_GER_U_FieldUniform_M44_Open";

	linkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Cap","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_STG44","Put","Throw"};
	respawnWeapons[] = {"SPE_STG44","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};	

class SEP_B_GER_VolkGren_Rflmn_Unr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "SEP_B_GER_U_FieldUniform_M44_Open";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_VolkGren_Gren : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Unbloused";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_A_frame_Grenadier";
};

class SEP_B_GER_VolkGren_MG_MG34 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 34)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};

class SEP_B_GER_VolkGren_AMG : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Unbloused";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	
	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Backpack_MGAmmo";
};

class SEP_B_GER_VolkGren_MG_MG42 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG-42)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_MG_MG42.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_MG_VolkGren_MG34";
};
	
class SEP_B_GER_VolkGren_SL : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_camo3";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_Gef";
};

class SEP_B_GER_VolkGren_AT_Soldier_SL : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader (Panzerfaust 60)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_AT_Soldier_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_camo3";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
	
	backpack = "B_SPE_GER_Belt_bag_Gef";
};

class SEP_B_GER_VolkGren_ASL : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Squad Leader";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_SL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_camo5";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_VolkGren_Sniper : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_camo5";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98ZF39","Put","Throw"};
	respawnWeapons[] = {"SPE_K98ZF39","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Belt_bag_K98k_MG";
};

class SEP_B_GER_VolkGren_AT_Grenadier : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT soldier (AT Grenade)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_AT_Grenadier.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";	
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24x7)};
	
	backpack = "B_SPE_GER_A_frame_AT";
};

class SEP_B_GER_VolkGren_AT_PZ30 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 30)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_AT_PZ30.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";	

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_30m"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_PzFaust_30m"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Pzf30Loaded";
};

class SEP_B_GER_VolkGren_AT_PZ60 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerfaust 60)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_AT_PZ60.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";	

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_G43","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_G43","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_Loaded";
};

class SEP_B_GER_VolkGren_LAT_Klein_Rifleman : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Faustpatrone)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_LAT_Klein_Rifleman.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";	

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_G43","Put","Throw","SPE_Faustpatrone"};
	respawnWeapons[] = {"SPE_G43","Put","Throw","SPE_Faustpatrone"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Pzf_Belt_bag_zelt_KleinLoaded";
};

class SEP_B_GER_VolkGren_AT_Soldier : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (Panzerschreck)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_AT_Soldier.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";	

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_G43","Put","Throw","SPE_RPzB_54"};
	respawnWeapons[] = {"SPE_G43","Put","Throw","SPE_RPzB_54"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_RPzB_Belt_bag_zelt_Loaded";
};
		
class SEP_B_GER_VolkGren_Medic : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Medic";

	linkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "B_SPE_GER_MedicBackpack";
};

class SEP_B_GER_VolkGren_Sapper_Gefr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Sapper_Gefr.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Gefreiter_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
	
class SEP_B_GER_VolkGren_Sapper : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Sapper.jpg";
	icon = "iconManExplosive";
	role = "Sapper";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	
	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Explosives";
};
		
class SEP_B_GER_VolkGren_Ofcr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Ofcr.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Hauptmann";

	linkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
};

class SEP_B_GER_VolkGren_Radioman : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_G43","Put","Throw"};
	respawnWeapons[] = {"SPE_G43","Put","Throw"};

	magazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_15(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Radio";
};

class SEP_B_GER_VolkGren_AT_Soldier_Assistant : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (Panzerschreck)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Gren";		
	editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_VolkGren_AT_Soldier_Assistant.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_Gaiters";

	linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98_Late","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_2(SPE_Blendkorper_2H)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_2(SPE_Blendkorper_2H)};
	
	backpack = "B_SPE_GER_RPzB_Belt_bag_Loaded";
};