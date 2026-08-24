//===================================
//Custom Classes (Men - Commandos)
//SEP Commonwealth
//===================================

class SEP_I_CW_CMD_Rflmn : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Rflmn.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Rflmn_Unr : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Canteen","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Grenadier : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_grenadier";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_AmmoBearer : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_ammo";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Bren_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Bren_Gunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};
	respawnWeapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_roll_3";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Bren_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Bren_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_erla_bren_roll_1_side_asst";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Sergeant : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sergeant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Sergeant.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_SGT";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Section_Lead : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Section_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_CPL";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Tin","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Tin","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_Team_Lead : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lance Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Team_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_LCPL";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_gas_mk5_roll_2";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};
	
class SEP_I_CW_CMD_PIAT_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_PIAT_Gunner.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_piat";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_PIAT_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_PIAT_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_piat";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};
		
class SEP_I_CW_CMD_Medic : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_medic";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_Engineer : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Engineer.jpg";
	icon = "iconManEngineer";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_shovel_roll_engineer";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Cpt : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Cpt.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_CPT";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};		
};

class SEP_I_CW_CMD_1LT : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lieutenant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_1LT.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_1LT";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_2_SL";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};		
};

class SEP_I_CW_CMD_Mortar_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_mortar_loaded";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Mortar_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Mortar_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_mortar_loaded";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_Medic_SB : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Stretcher Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Medic_SB.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_medic_sb";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_Sniper : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_bandoleer_2_sniper";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

//===================================
//Custom Classes (Men - Commandos)
//SEP Commonwealth (Tropic)
//===================================

class SEP_I_CW_CMD_T_Rflmn : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Rflmn.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Rflmn_Unr : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_3_rifleman";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Grenadier : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_p39","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield_GL","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_grenadier";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_AmmoBearer : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_puttee_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_ammo";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Bren_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Bren_Gunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_long_trop";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};
	respawnWeapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_roll_3";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Bren_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Bren_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_erla_bren_roll_1_side_asst";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Sergeant : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sergeant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Sergeant.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_Bush_short";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41_binoc","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_2_SL";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Section_Lead : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Section_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_Bush_short_puttee_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_golok","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_golok","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_2_SL";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_T_Team_Lead : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lance Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Team_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_long_puttee";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_2_TL";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};
	
class SEP_I_CW_CMD_T_PIAT_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_PIAT_Gunner.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_KD_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_PIAT"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_PIAT_gas_assault_loaded";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_PIAT_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_PIAT_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_KD_long";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_PIAT_loaded";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};
		
class SEP_I_CW_CMD_T_Medic : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_medic";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_n61_medical_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_T_Engineer : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Engineer.jpg";
	icon = "iconManEngineer";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_Bush_long_trop_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_Rifle_no1","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_shovel_roll_engineer";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Cpt : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Cpt.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_Bush_BD_1LT";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz_sack","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_Enfield_No2","Put","Throw"};
	respawnWeapons[] = {"SPEX_Enfield_No2","Put","Throw"};

	magazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_3(SPEX_6rnd_9x20R)};
	
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};		
};

class SEP_I_CW_CMD_T_1LT : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lieutenant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_1LT.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_Bush_long_1LT";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_Enfield_No2"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPEX_6rnd_9x20R)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_2_SL";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};		
};

class SEP_I_CW_CMD_T_Mortar_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_KD_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_CW_Vest_P37_N61","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};
	respawnWeapons[] = {"SPEX_M1928_Thompson","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};

	magazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_20Rnd_Thompson_45ACP_t),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_mortar_loaded";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Mortar_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Mortar_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_KD_long";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no1_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_mortar_loaded";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_T_Medic_SB : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Stretcher Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Medic_SB.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_medic_sb";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_Enfield","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	
	backpack = "B_SPEX_CW_Sack_P37_N61_erla_roll_1_medic";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_T_Sniper : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 2;
	faction = "SPEX_CW_ARMY_TROP";
	editorSubcategory = "SEP_I_CW_CMD_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_T_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_KD_full_roll";

	linkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_mutsdas","V_SPEX_cw_vest_p37_N61_no4_P41_2_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "B_SPEX_CW_Sack_bandoleer_2_sniper";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

//===================================
//Custom Classes (Men - Commandos, Landing)
//SEP Commonwealth
//===================================

class SEP_I_CW_CMD_L_Rflmn : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Rflmn.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_bergan_od3_rifleman";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Rflmn_Unr : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (Unarmed)";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Rflmn_Unr.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {};
	respawnWeapons[] = {};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "SEP_CW_B_bergan_od3_rifleman";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Grenadier : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Grenadier.jpg";
	icon = "iconManGrenadier";
	role = "Grenadier";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_P1907_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No1_Mk3_mid_Enfield_GL_wires","Put","Throw"};
	respawnWeapons[] = {"SPEX_No1_Mk3_mid_Enfield_GL_wires","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_bergan_od3_gren";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_AmmoBearer : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ammo Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_AmmoBearer.jpg";
	icon = "iconManRifleman";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_bergan_od3_ammo";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Bren_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Bren_Gunner.jpg";
	icon = "iconManMG";
	role = "MachineGunner";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};
	respawnWeapons[] = {"SPEX_LMG_303_Mk1","Put","Throw"};

	magazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_bergan_od3";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Bren_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Asst. Automatic Rifleman";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Bren_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "SEP_CW_B_bergan_od3_brenasst";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Sergeant : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sergeant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Sergeant.jpg";
	icon = "iconManOfficer";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_SGT";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_bergan_od3_everest";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Section_Lead : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Section_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_CPL";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "SEP_CW_B_bergan_od3_everest";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_L_Team_Lead : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lance Corporal";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Team_Lead.jpg";
	icon = "iconManLeader";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_LCPL";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};

	backpack = "SEP_CW_B_bergan_od3_everest";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};
	
class SEP_I_CW_CMD_L_PIAT_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_PIAT_Gunner.jpg";
	icon = "iconManAT";
	role = "MissileSpecialist";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw","SPEX_PIAT"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw","SPEX_PIAT"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_piat";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_PIAT_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "PIAT Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_PIAT_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_piat";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};
		
class SEP_I_CW_CMD_L_Medic : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Medic";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Medic.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_medic";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M1911","Put","Throw"};

	magazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
	respawnMagazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
	
	backpack = "SEP_CW_B_bergan_od3_medic";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_L_Engineer : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Engineer.jpg";
	icon = "iconManEngineer";
	role = "Rifleman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N61_dday_no4_p41_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_bergan_od3_engi";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Cpt : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Captain";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Cpt.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_CPT";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_M1911","Put","Throw"};
	respawnWeapons[] = {"SPE_M1911","Put","Throw"};

	magazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
	respawnMagazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
	
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};		
};

class SEP_I_CW_CMD_L_1LT : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Lieutenant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_1LT.jpg";
	icon = "iconManCommander";
	role = "SquadLeader";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_1LT";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPEX_Binocular_CW"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw","SPE_M1911"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw","SPE_M1911"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPE_7Rnd_45ACP_1911)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI),MAG_3(SPE_7Rnd_45ACP_1911)};
	
	backpack = "SEP_CW_B_bergan_od3";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};		
};

class SEP_I_CW_CMD_L_Mortar_Gunner : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Gunner";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Mortar_Gunner.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_p41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPE_Sten_Mk2","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};
	respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw","SPEX_2_Inch_Mk7_Mortar_Slung"};

	magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_mortar";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Mortar_Asst : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Mortar Assistant";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Mortar_Asst.jpg";
	icon = "iconManRifleman";
	role = "Assistant";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_P41","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	backpack = "SEP_CW_B_mortar";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};

class SEP_I_CW_CMD_L_Medic_SB : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Stretcher Bearer";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Medic_SB.jpg";
	icon = "iconManMedic";
	role = "CombatLifeSaver";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD_medic_sb";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_dunkel","Put","Throw"};

	magazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	respawnMagazines[] = {MAG_20(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No77)};
	
	backpack = "SEP_CW_B_bergan_od3_medic";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};	
};

class SEP_I_CW_CMD_L_Sniper : SEP_I_CW_CMD_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper";
	side = 2;
	faction = "SPEX_CW_ARMY";
	editorSubcategory = "SEP_I_CW_CMD_L_Units_Infantry";
	editorPreview="\SEP\SEP_I_CW\SEP_I_CW_Characters\data\ui\editorPreviews\SEP_I_CW_CMD_L_Sniper.jpg";
	icon = "iconManRecon";
	role = "Marksman";

	identityTypes[] = {"LanguageENGB_F","Head_EURO","NoGlasses"};

	uniformClass = "U_SPEX_CW_BD";

	linkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_beret_cdo","SEP_CW_V_AssaultJerkin_N03_dday_no4_bandoleer","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_ACC_No4_Mk2_Bayo","SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};
	respawnWeapons[] = {"SPEX_No4_Mk1_Enfield_Scoped_dunkel","Put","Throw"};

	magazines[] = {MAG_30(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	respawnMagazines[] = {MAG_30(SPEX_10Rnd_770x56),MAG_2(SPEX_CW_No36_MKI)};
	
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SPEX_UK_CDO'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SPEX_UK_CDO";
	};
};