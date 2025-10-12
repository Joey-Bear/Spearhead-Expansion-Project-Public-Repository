class SEP_B_GER_Early_Rflmn_K98 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (K98k)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Early_Rflmn_Lite : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Light)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Rflmn_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Early_Rflmn_Unr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Early_AmmoBearer : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (GrW 278/1)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_Early_AmmoBearer_HMG : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (HMG)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_AmmoBearer_HMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_HMGAmmo";
};

class SEP_B_GER_Early_ASL : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Squad Leader";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_m36_Gefreiter";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

class SEP_B_GER_Early_Mortar_AGunner : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (GrW 278/1)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Mortar_AGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Stand"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Stand"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_Early_AHMGunner : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (HMG)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_AHMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_Lafette_Tripod"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_Lafette_Tripod"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_HMGAmmo";
};

class SEP_B_GER_Early_AT_Grenadier : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "AT Soldier (AT Grenade)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_AT_Grenadier.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag_AT";
};

class SEP_B_GER_Early_Hauptmann : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Hauptmann.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Hauptmann";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Early_Oberst : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Colonel";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Oberst.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Oberst";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Early_Driver : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Driver.jpg";
	icon = "iconManRifleman";
	role = "Crewman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Early_Driver_Lite : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver (Light)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Driver_Lite.jpg";
	icon = "iconManRifleman";
	role = "Crewman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Early_Ober_Lieutenant : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "First Lieutenant";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Ober_Lieutenant.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Oberleutnant";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Early_Flamethrower_Operator : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Flame Rifleman";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Flamethrower_Operator.jpg";
	icon = "iconMan";
	role = "Flamethrower";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_Early_Ober_Grenadier : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Ober_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag_Grenadier";
};

class SEP_B_GER_Early_Mortar_Gunner : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (GrW 278/1)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Barrel"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_GrW278_1_Barrel"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_B_GER_Early_HMGunner : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (HMG / MG 34)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_HMGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_MGCan";
};

class SEP_B_GER_Early_Halftrack_Driver : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Half-Track Driver";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Halftrack_Driver.jpg";
	icon = "iconManSMG";
	role = "Crewman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_B_GER_Early_AMGunner : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_AMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_MGCan";
};

class SEP_B_GER_Early_MGunner : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 34)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_MGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Early_Medic : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Medic";
};

class SEP_B_GER_Early_Radioman : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Radio";
};

class SEP_B_GER_Early_Sapper : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Sapper.jpg";
	icon = "iconManExplosive";
	role = "Sapper";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_SapperBackpack2";
};

class SEP_B_GER_Early_Sapper_Gefr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sapper (Corporal)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Sapper_Gefr.jpg";
	icon = "iconManExplosive";
	role = "Sapper";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_m36_Gefreiter";

	linkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "B_SPE_GER_SapperBackpack2";
};

class SEP_B_GER_Early_Lieutenant : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Second Lieutenant";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Lieutenant.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Leutnant";

	linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
	
	backpack = "";
};

class SEP_B_GER_Early_Sentry_K98k : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (K98k)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Sentry_K98k.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Early_Sentry_MP40 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sentry (MP 40)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Sentry_MP40.jpg";
	icon = "iconManSMG";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_M38_inf","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Early_SL : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory = "SEP_B_GER_Units_Infantry_Early";	
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_m36_uffz";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Gascape";
};

/* Hidden */
class SEP_B_GER_Early_Rflmn_Flame : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Flame Rifleman";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Rflmn_Flame.jpg";
	icon = "iconMan";
	role = "Flamethrower";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";
  
	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

	magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Flammenwerfer_41";
};

class SEP_B_GER_Early_Gren : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Grenadier";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Early_MG_MG34 : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Machine-Gunner (MG 34)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Early_AMG : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_erla_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	
	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_GER_B_Early_Ammoalt";
};
	
class SEP_B_GER_Early_Sniper : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Sniper";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Sniper.jpg";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Soldier_M36_Boots";

	linkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_Helmet_M35","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_GER_Medkit","SPE_GER_Medkit"};

	weapons[] = {"SEP_WP_Gewehr98_Sniper","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98_Sniper","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57_t),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57_t),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_GER_B_Early_Beltbag";
};

class SEP_B_GER_Early_Ofcr : SEP_B_GER_Soldier_Base
{
	author = "Joe";
	scope = 1;
	scopeCurator = 1;
	displayName = "Captain";
	side = 1;
	faction = "SPE_WEHRMACHT";
	editorSubcategory="SEP_B_GER_Units_Infantry_Early";		
	editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Early_Ofcr.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_GermanMen";

	uniformClass = "U_SPE_GER_Hauptmann";

	linkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","G_SPE_Binoculars","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};

	Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_Medkit","SPE_GER_Medkit"};
	
	weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
};