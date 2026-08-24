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
	class SEP_I_CW_ALT_Units
	{
        displayName = "[SEP] Commonwealth (Altian)";
        side = 2;
	    flag = "\SEP\SEP_I_CW\SEP_I_CW_Core\SEP_I_CW_ALT_Icon_ca.paa";
        icon = "\SEP\SEP_I_CW\SEP_I_CW_Core\SEP_I_CW_ALT_Flag_co.paa";
        priority = 1;
	};
};

class CfgEditorSubcategories
{
	//Altian//
    class SEP_I_CW_ALT_Units_Infantry
    {
        displayName="Men (Altian)";
    };
	
	//Sikh//
    class SEP_I_CW_SIKH_Units_Infantry
    {
        displayName="Men (Sikh)";
    };
	
	//Commandos
    class SEP_I_CW_CMD_Units_Infantry
    {
        displayName="Men (Commandos)";
    };
	
	//Commandos, Landing
    class SEP_I_CW_CMD_L_Units_Infantry
    {
        displayName="Men (Commandos, Landing)";
    };
};