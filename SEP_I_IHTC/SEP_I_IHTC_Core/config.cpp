class CfgPatches
{
	class SEP_I_IHTC_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	class SEP_I_IHTC_Units
	{
        displayName = "[SEP] Îles Horizon Troupes Coloniales";
        side = 2;
		flag = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Core\data\flag_IHTC_co.paa";
		icon = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Core\data\cfgFactionClasses_IHTC_ca.paa";
        priority = 1;
	};
};

class CfgEditorSubcategories
{
    class SEP_I_IHTC_Units_Infantry
    {
        displayName="Men";
    };
    class SEP_I_IHTC_Units_GunCrew
    {
        displayName="Men (Artillery)";
    };
    class SEP_I_IHTC_Units_TankCrew
    {
        displayName="Men (Tank crew)";
    };
};
