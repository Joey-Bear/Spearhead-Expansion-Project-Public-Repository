class CfgPatches
{
	class SEP_Ammo
	{
        author="Cover Fire Studios";
        version = "1.0.5";
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]=
		{
			"SEP_A_765_17",
			"SEP_A_765_20",
			"SEP_A_9_17",
			"SEP_A_9_20",
			"SEP_A_763x25"
		};
		requiredAddons[]=
		{
			"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_SPE_Assets_c_Weapons_Sounds_c"
		};
	};
};

/* Configuration */
#include "cfgAmmo.hpp"