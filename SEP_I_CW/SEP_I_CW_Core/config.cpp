class CfgPatches
{
	class SEP_I_CW_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	access=1;
	class SEP_I_CW_ALT_Units
	{
        displayName = "[SEP] Commonwealth (Altian)";
        side = 2;
	    flag = "\SEP_I_CW\SEP_I_CW_Core\SEP_I_CW_ALT_Icon_ca.paa";
        icon = "\SEP_I_CW\SEP_I_CW_Core\SEP_I_CW_ALT_Flag_co.paa";
        priority = 1;
	};
};

class CfgEditorSubcategories
{
    class SEP_I_CW_ALT_Units_Infantry
    {
        displayName="Men (Altian)";
    };
	
    class SEP_I_CW_SIKH_Units_Infantry
    {
        displayName="Men (Sikh)";
    };
};