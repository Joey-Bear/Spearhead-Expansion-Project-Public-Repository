class CfgPatches
{
	class SEP_Misc
	{
		author="Joe";
		name="Joe";
		// Added Items
		units[]=
		{
			"SEP_Flag_FrenchTanoa",
			"SEP_Flag_EHM"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=1.0;
	};
};

class CfgEditorCategories
{
	class SEP_Misc
	{
		displayName="[SEP] Objects";
	};
};
class CfgEditorSubcategories
{
	class SEP_Misc_Flags
	{
		displayName="Flags";
	};
};

class CfgVehicles
{
	class Flag_AltisColonial_F;
	class SEP_Flag_FrenchTanoa : Flag_AltisColonial_F
	{
		author="Joe";
		scope=2;
		scopeCurator=2;
		displayName="French Horizon Islands";
		editorCategory="SEP_Misc";
		editorSubcategory="SEP_Misc_Flags";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\SEP_MISC\data\SEP_Flag_FrenchTanoa_co.paa'";
		};
	};
	class SEP_Flag_EHM: SEP_Flag_FrenchTanoa
	{
		author="Joe";
		scope=2;
		scopeCurator=2;
		displayName="Everon Homeland Militia";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\SEP_MISC\data\SEP_Flag_EHM_co'";
		};
	};
};