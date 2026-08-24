//===================================
//Custom Classes (Men - Developers)
//SEP Civilians
//===================================

class SEP_C_CIV_Dev_Joseph : SEP_C_CIV_Soldier_Base
{
	author = "Joe";
	scope = 2;
	scopeCurator = 2;
	displayName = "Joseph Spearman";
	side = 3;
	faction = "SEP_C_CIV_Units";
	editorSubcategory = "SEP_C_CIV_Units_Developers";
	editorPreview="\SEP\SEP_C_CIV\SEP_C_CIV_Characters\data\ui\editorPreviews\SEP_C_CIV_Dev_Joseph.jpg";
	Icon = "iconMan";
	role = "Unarmed";

	identityTypes[] = {"LanguageENGB_F","Head_Joseph_01","NoGlasses"};

	uniformClass = "U_SPEX_CW_RAF_BD";

	linkedItems[] = {"H_SPEX_CW_RAF_visor","V_SPEX_CW_Vest_P37_N97_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	respawnlinkedItems[] = {"H_SPEX_CW_RAF_visor","V_SPEX_CW_Vest_P37_N97_offz","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
	
	Items[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};
	RespawnItems[] = {"SPEX_CW_FirstAidKit","SPEX_CW_FirstAidKit"};

	weapons[] = {"Throw","Put"};
	respawnWeapons[] = {"Throw","Put"};

	magazines[] = {};
	respawnMagazines[] = {};
	
	backpack = "";
	class EventHandlers: EventHandlers
	{
		init = "[_this select 0,'SEP_Badge'] call bis_fnc_setUnitInsignia;";
	};
	class AttributeValues
	{
		unitInsignia = "SEP_Badge";
	};
};
