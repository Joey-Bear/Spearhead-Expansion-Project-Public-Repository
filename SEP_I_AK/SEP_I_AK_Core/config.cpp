class CfgPatches
{
	class SEP_I_AK_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	access=1;
	class SEP_I_AK_Units
	{
        displayName = "[SEP] Polish Resistance";
        side = 2;
		flag = "\SEP_I_AK\SEP_I_AK_Core\data\flag_AK_co.paa";
		icon = "\SEP_I_AK\SEP_I_AK_Core\data\cfgFactionClasses_AK_ca.paa";
        priority = 1;
	};
};

class CfgEditorSubcategories
{
    class SEP_I_AK_Units_Infantry
    {
        displayName="Men";
    };
};
