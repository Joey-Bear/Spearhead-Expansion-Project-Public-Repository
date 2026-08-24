class CfgPatches
{
	class SEP_C_CIV_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	class SEP_C_CIV_Units
	{
        displayName = "[SEP] Civilians";
        side = 3;
	    flag = "\SEP_C_CIV\SEP_C_CIV_Core\SEP_C_CIV_Icon_ca.paa";
        icon = "\SEP_C_CIV\SEP_C_CIV_Core\SEP_C_CIV_Flag_co.paa";
        priority = 1;
	};
};

class CfgEditorSubcategories
{
    class SEP_C_CIV_Units_Developers
    {
        displayName="Men - Developers";
    };
};