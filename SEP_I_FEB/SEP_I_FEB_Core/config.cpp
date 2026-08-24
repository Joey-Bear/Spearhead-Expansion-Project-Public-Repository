class CfgPatches
{
	class SEP_I_FEB_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	class SEP_I_FEB_Units
	{
        displayName = "[SEP] Força Expedicionária Brasileira";
        side = 2;
		flag = "\SEP\SEP_I_FEB\SEP_I_FEB_Core\data\flag_FEB_co.paa";
		icon = "\SEP\SEP_I_FEB\SEP_I_FEB_Core\data\cfgFactionClasses_FEB_ca.paa";
        priority = 1;
	};
};

class CfgUnitInsignia
{
	class SEP_I_FEB_Badge
	{
		author="Joe";
		displayName="Força Expedicionária Brasileira";
		texture="\SEP\SEP_I_FEB\SEP_I_FEB_Core\data\unitinsignia\SEP_I_FEB_Badge_ca.paa";
		material = "\A3\UI_F\Data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};