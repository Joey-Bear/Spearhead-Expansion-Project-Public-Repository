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
	access=1;
	class SEP_I_IHTC_Units
	{
        displayName = "[SEP] Îles Horizon Troupes Coloniales";
        side = 2;
	    flag = "";
        icon = "";
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
