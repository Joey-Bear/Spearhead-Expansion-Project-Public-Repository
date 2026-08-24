//===================================
//Custom Classes (Men - Sikh)
//SEP Commonwealth
//===================================

class SEP_I_CW_SIKH_Rflmn : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Rflmn.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
};

class SEP_I_CW_SIKH_Rflmn_Unr : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
};

class SEP_I_CW_SIKH_Grenadier : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_grenadier";
};

class SEP_I_CW_SIKH_Driver : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Driver.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61";
};

class SEP_I_CW_SIKH_AmmoBearer : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_bren_roll_2_front_ammo";
};

class SEP_I_CW_SIKH_Bren_Gunner : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Bren_Gunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};
	respawnWeapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_roll_3";
};

class SEP_I_CW_SIKH_Bren_Asst : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Bren_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_erla_bren_roll_1_side_asst";
};

class SEP_I_CW_SIKH_Sergeant : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sergeant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Sergeant.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_SGT";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
};

class SEP_I_CW_SIKH_Section_Lead : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Section_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_CPL";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Tin","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Tin","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
};

class SEP_I_CW_SIKH_Team_Lead : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lance Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Team_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_LCPL";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
};
	
class SEP_I_CW_SIKH_PIAT_Gunner : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_PIAT_Gunner.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_PIAT_gas_assault_loaded";
};

class SEP_I_CW_SIKH_PIAT_Asst : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_PIAT_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_PIAT_loaded";
};
		
class SEP_I_CW_SIKH_Medic : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_medic";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
};

class SEP_I_CW_SIKH_Engineer : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Engineer.jpg";
	icon = "iconManEngineer";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_shovel_roll_engineer";
};

class SEP_I_CW_SIKH_Cpt : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Cpt.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_CPT";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};	
};

class SEP_I_CW_SIKH_1LT : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lieutenant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_1LT.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_1LT";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_2_SL";	
};

class SEP_I_CW_SIKH_Radioman : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_no38_roll";
};

class SEP_I_CW_SIKH_Mortar_Gunner : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_mortar_loaded";
};

class SEP_I_CW_SIKH_Mortar_Asst : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Mortar_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_mortar_loaded";
};

class SEP_I_CW_SIKH_Medic_SB : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Stretcher Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Medic_SB.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_medic_sb";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
};

class SEP_I_CW_SIKH_Sniper : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_bandoleer_2_sniper";
};
	
//===================================
//Custom Classes (Men - Sikh)
//SEP Commonwealth (Tropical)
//===================================

class SEP_I_CW_SIKH_Trop_Rflmn : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Rflmn.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
};

class SEP_I_CW_SIKH_Trop_Rflmn_Unr : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
};

class SEP_I_CW_SIKH_Trop_Grenadier : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_grenadier";
};

class SEP_I_CW_SIKH_Trop_Driver : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Driver";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Driver.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61";
};

class SEP_I_CW_SIKH_Trop_AmmoBearer : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_bren_roll_2_front_ammo";
};

class SEP_I_CW_SIKH_Trop_Bren_Gunner : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Bren_Gunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};
	respawnWeapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_roll_3";
};

class SEP_I_CW_SIKH_Trop_Bren_Asst : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Bren_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_erla_bren_roll_1_side_asst";
};

class SEP_I_CW_SIKH_Trop_Sergeant : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sergeant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Sergeant.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
};

class SEP_I_CW_SIKH_Trop_Section_Lead : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Section_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Tin","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Tin","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
};

class SEP_I_CW_SIKH_Trop_Team_Lead : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lance Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Team_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
};
	
class SEP_I_CW_SIKH_Trop_PIAT_Gunner : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_PIAT_Gunner.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_PIAT_gas_assault_loaded";
};

class SEP_I_CW_SIKH_Trop_PIAT_Asst : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_PIAT_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_PIAT_loaded";
};
		
class SEP_I_CW_SIKH_Trop_Medic : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_medic";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
};

class SEP_I_CW_SIKH_Trop_Engineer : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Engineer.jpg";
	icon = "iconManEngineer";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_shovel_roll_engineer";
};

class SEP_I_CW_SIKH_Trop_Cpt : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Cpt.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_Bush_long";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};	
};

class SEP_I_CW_SIKH_Trop_1LT : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lieutenant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_1LT.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_Bush_long";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_2_SL";	
};

class SEP_I_CW_SIKH_Trop_Radioman : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Radioman";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Radioman.jpg";
	icon = "iconManRTO";
	role = "RadioOperator";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_no38_roll";
};

class SEP_I_CW_SIKH_Trop_Mortar_Gunner : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_mortar_loaded";
};

class SEP_I_CW_SIKH_Trop_Mortar_Asst : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Mortar_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_mortar_loaded";
};

class SEP_I_CW_SIKH_Trop_Medic_SB : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Stretcher Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Medic_SB.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_medic_sb";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
};

class SEP_I_CW_SIKH_Trop_Sniper : SEP_I_CW_SIKH_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_SIKH_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_SIKH_Trop_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"LanguageENGB_F","Head_Sikh","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"SEP_I_CW_H_Turban_Wht","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_bandoleer_2_sniper";
};