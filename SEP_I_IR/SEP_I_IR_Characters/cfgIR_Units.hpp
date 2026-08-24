//===================================
//Custom Classes (Men)
//SEP La Resistenza
//===================================

class SEP_I_IR_Rflmn_K98 : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (K98k)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Rflmn_K98.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";
  
	uniformClass = "SEP_I_IR_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_IR_Rflmn_MK3 : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Lee Enfield)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Rflmn_MK3.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";
	
	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";
  
	uniformClass = "SEP_I_IR_U_Casual_Rolled_4";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_late_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_late_Enfield","Put","Throw"};

	magazines[] = {MAG_25(SPEX_10Rnd_770x56),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPEX_10Rnd_770x56),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_IR_Rflmn_Sten : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Sten)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Rflmn_Sten.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";
  
	uniformClass = "SEP_I_IR_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_Shg24)};
	
	backpack = "";
};

class SEP_I_IR_Rflmn_MP40 : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (MP 40)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Rflmn_MP40.jpg";
	icon = "iconManSMG";
	role = "Assault";
	
	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";
  
	uniformClass = "SEP_I_IR_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "";
};
	
class SEP_I_IR_Rflmn_Unr : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Militia (Unarmed)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_IR_Gren : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Gren.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Jacket_zwart_alt";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98_GW","Put","Throw"};
	respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_satchel";
};
	
class SEP_I_IR_MG_MG34 : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (MG 34)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_MG_MG34.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_MG34","Put","Throw"};
	respawnWeapons[] = {"SPE_MG34","Put","Throw"};

	magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_I_IR_B_MG_MG34";
};

class SEP_I_IR_AMG : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Machine-Gunner (Assist.)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_AMG.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	
	weapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_I_IR_B_MG_MG34";	
};
		
class SEP_I_IR_SL : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader (MP 40)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_SL.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Jacket_bruin_swetr";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_MP40","Put","Throw"};
	respawnWeapons[] = {"SPE_MP40","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
	
	backpack = "";	
};

class SEP_I_IR_ASL: SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader (K98k)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_ASL.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "";	
};

class SEP_I_IR_Sniper : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper (K98k ZF39)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	
	weapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_satchel";
};

class SEP_I_IR_AT_PZ30 : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tank Hunter (Panzerfaust 30)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_AT_PZ30.jpg";   
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_1";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_musette";
};

class SEP_I_IR_AT_PZ60 : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Tank Hunter (Panzerfaust 60)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_AT_PZ60.jpg";  
	icon = "iconManAT";		
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Jacket_grijs";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};
	respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_CIV_musette";
};
	
class SEP_I_IR_Medic : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Jacket_zwart_alt";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_late_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_late_Enfield","Put","Throw"};

	magazines[] = {MAG_25(SPEX_10Rnd_770x56),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPEX_10Rnd_770x56),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_I_IR_B_Medic";
};

class SEP_I_IR_Sabo : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Saboteur";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Sabo.jpg";
	icon = "iconManExplosive";
	role = "SpecialOperative";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_I_IR_B_Explosives";
};
		
class SEP_I_IR_Ofcr : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Cell Leader";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Ofcr.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Swetr_vest_4";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	weapons[] = {"SPEX_M1928_Thompson","SPE_P08","Put","Throw"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","SPE_P08","Put","Throw"};

	magazines[] = {MAG_2(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};

	backpack = "";
};

class SEP_I_IR_Mortar_Gunner : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gunner (GrW 278/1)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_Coverall_2";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_I_IR_Mortar_AGunner : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Gunner (GrW 278/1)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Mortar_AGunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Swetr_vest_4";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_I_IR_Mortar_AmmoBearer : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer (GrW 278/1)";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Mortar_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Jacket_zwart_alt";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
};

class SEP_I_IR_PIAT_Gunner : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Gunner";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_PIAT_Gunner.jpg";  
	icon = "iconManAT";		
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Jacket_grijs";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw","SPEX_PIAT"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw","SPEX_PIAT"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_1(SPEX_1Rnd_89mm_PIAT),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_1(SPEX_1Rnd_89mm_PIAT),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPEX_CW_Sack_PIAT_gas_assault_loaded";
};

class SEP_I_IR_PIAT_Asst : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Assistant";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_PIAT_Asst.jpg";  
	icon = "iconManAT";		
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Casual_1";

	linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_late_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_late_Enfield","Put","Throw"};

	magazines[] = {MAG_25(SPEX_10Rnd_770x56),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPEX_10Rnd_770x56),MAG_2(SPE_Shg24)};
	
	backpack = "B_SPEX_CW_Sack_PIAT_gas_assault_loaded";
};

class SEP_I_IR_Bren_Gunner : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Automatic Rifleman";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Bren_Gunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Casual_7";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_3","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_3","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_LMG_303_Mk2","Put","Throw"};
	respawnWeapons[] = {"SPE_LMG_303_Mk2","Put","Throw"};

	magazines[] = {MAG_2(SPE_30Rnd_770x56),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_2(SPE_30Rnd_770x56),MAG_2(SPE_Shg24)};
	
	backpack = "_xx_SEP_I_IR_B_AR_Bren";
};

class SEP_I_IR_Bren_Asst : SEP_I_IR_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Assist. Automatic Rifleman";
	side = 2;
	faction = "SEP_I_IR_Units";
	editorSubcategory = "EdSubcat_Personnel";		
	editorPreview="\SEP\SEP_I_IR\SEP_I_IR_Characters\data\ui\editorPreviews\SEP_I_IR_Bren_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageGRE_F","Head_Greek","SPE_GER_Glasses"};
	genericNames = "ItalianMen";

	uniformClass = "SEP_I_IR_U_Worker_3";

	linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
	
	Items[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPE_ACC_K98_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	
	weapons[] = {"SPE_K98","Put","Throw"};
	respawnWeapons[] = {"SPE_K98","Put","Throw"};

	magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
	respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

	backpack = "_xx_SEP_I_IR_B_AR_Bren";	
};