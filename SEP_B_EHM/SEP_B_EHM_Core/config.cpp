class CfgPatches
{
	class SEP_B_EHM_Core
	{
		units[]={};
		weapons[]={};
		addonRootClass = "SEP_B_EHM";
		requiredAddons[]=
		{
			"SEP_B_EHM"
		};
	};
};

class CfgFactionClasses
{
	class SEP_B_EHM_Units
	{
		displayName = "[SEP] Everon Homeland Militia";
		priority = 3;
		side = 1;
		flag = "\SEP_B_EHM\SEP_B_EHM_Core\data\flag_EHM_co.paa";
		icon = "\SEP_B_EHM\SEP_B_EHM_Core\data\cfgFactionClasses_EHM_ca.paa";
	};
};