class CfgPatches
{
	class SEP_I_RAR_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	access=1;
	class SEP_I_RAR_Units
	{
        displayName = "[SEP] Royal Altian Regiment";
        side = 2;
	    flag = "\SEP_I_RAR\SEP_I_RAR_Core\SEP_I_RAR_Icon_ca.paa";
        icon = "\SEP_I_RAR\SEP_I_RAR_Core\SEP_I_RAR_Flag_co.paa";
        priority = 1;
	};
};

class CfgEditorSubcategories
{
    class SEP_I_RAR_Units_TankCrew
    {
        displayName="Men (Tank crew)";
    };
    class SEP_I_RAR_Units_GunCrew
    {
        displayName="Men (Artillery)";
    };
    class SEP_I_RAR_Units_Cars
    {
        displayName="Cars";
    };
    class SEP_I_RAR_Units_Statics
    {
        displayName="Turrets";
    };
};
