class SEP_B_EHM_Militia_G98 : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Militia_G98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";		
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_EHM_B_Early_Gascape";
};

class SEP_B_EHM_Militia_Lite : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Light)";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Militia_Lite.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_EHM_U_FieldUniform_Rolled";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_EHM_B_Early_Beltbag";
};

class SEP_B_EHM_Militia_Unr : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Unarmed)";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Militia_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "_xx_SEP_B_EHM_B_Early_Gascape";
};
	
class SEP_B_EHM_MG_MG34 : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 34)";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_EHM_B_MG_MG34";
};

class SEP_B_EHM_AMG : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	
	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_EHM_B_MG_MG34";	
};

class SEP_B_EHM_HMGunner : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (HMG / MG 34)";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_HMGunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform_Rolled";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_EHM_B_MG_MG34";
};

class SEP_B_EHM_AHMGunner : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (HMG)";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_AHMGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	
	weapons[] = {"SEP_WP_Gewehr98","SPE_Lafette_Tripod","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","SPE_Lafette_Tripod","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_EHM_B_MG_MG34";	
};

class SEP_B_EHM_HMG_AmmoBearer : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (HMG)";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_HMG_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	
	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_B_EHM_B_MG_MG34";	
};
		
class SEP_B_EHM_SL : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";		

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle_sidearm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle_sidearm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","SPE_P08","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_EHM_B_Early_Beltbag";	
};

class SEP_B_EHM_ASL : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Squad Leader";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";	

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform_Rolled";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_B_EHM_B_Early_Gascape";	
};
	
class SEP_B_EHM_Medic : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";

	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","G_SPE_Dienst_Brille","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","G_SPE_Dienst_Brille","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
	
	backpack = "_xx_SEP_B_EHM_B_Early_Medic";
};

class SEP_B_EHM_RTO : SEP_B_EHM_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 1;
	faction = "SEP_B_EHM_Units";
	editorSubcategory = "EdSubcat_Personnel";
	editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_RTO.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";	
	
	identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
	genericNames = "SPE_FrenchMen";
  
	uniformClass = "SEP_B_EHM_U_FieldUniform";

	linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
	RespawnItems[] = {"SEP_WP_ACC_Gewehr98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

	weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
	respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

	magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_Milice_Radio";
};