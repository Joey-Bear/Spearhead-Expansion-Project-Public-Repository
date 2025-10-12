#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_FRE_Characters
	{
        units[] = {

        };
        weapons[] = {
			//Weapons//
			//Headgear//
			"SEP_I_FRE_H_AdrianMle15_brn",
			"SEP_I_FRE_H_AdrianMle15_ns_brn"
		};
		requiredAddons[] =
		{
			A3_Characters_F
		};
	};
};

class cfgWeapons
{
//===================================
//Class Parent Names
//===================================
	
	class ItemCore;
	class HeadgearItem;
	class VestItem;
	class Vest_Camo_Base;
	class UniformItem;
	class Uniform_Base;

    /* Bases */
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	
	class H_HelmetB: ItemCore
	{
	  	class ItemInfo;
	};
	
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	
	//Equipment Inheritances - Spearhead 1944//
			
//===================================
//Custom Classes (Headgear)
//===================================

	class SEP_I_FRE_H_AdrianMle15_brn: H_HelmetB
	{
		author = "OokamiJamie";
		displayName = "FR Adrian Mle. 1915";
		picture = "\SEP_I_FRE\SEP_I_FRE_Characters\data\icons\SEP_I_FRE_H_AdrianMle15_brn_ca.paa";
		scope = 2;
		model = "\SEP_I_FRE\SEP_I_FRE_Characters\SEP_FRE_H_AdrianMle15.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_FRE\SEP_I_FRE_Characters\Data\SEP_I_FRE_H_AdrianMle15_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass = 20;
			hiddenSelections[] = 
			{
				"camo"
			};
			hiddenSelectionsTextures[] = 
			{
				"\SEP_I_FRE\SEP_I_FRE_Characters\Data\SEP_I_FRE_H_AdrianMle15_CO.paa"
			};
			uniformModel = "\SEP_I_FRE\SEP_I_FRE_Characters\SEP_FRE_H_AdrianMle15.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	
    class SEP_I_FRE_H_AdrianMle15_ns_brn: H_HelmetB
	{
		author = "OokamiJamie";
		displayName = "FR Adrian Mle. 1915 (Folded)";
		picture = "\SEP_I_FRE\SEP_I_FRE_Characters\data\icons\SEP_I_FRE_H_AdrianMle15_ns_brn_ca.paa";
		scope = 2;
		model = "\SEP_I_FRE\SEP_I_FRE_Characters\SEP_FRE_H_AdrianMle15_up.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_FRE\SEP_I_FRE_Characters\Data\SEP_I_FRE_H_AdrianMle15_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass = 20;
			hiddenSelections[] = 
			{
				"camo"
			};
			hiddenSelectionsTextures[] = 
			{
				"\SEP_I_FRE\SEP_I_FRE_Characters\Data\SEP_I_FRE_H_AdrianMle15_CO.paa"
			};
			uniformModel = "\SEP_I_FRE\SEP_I_FRE_Characters\SEP_FRE_H_AdrianMle15_up.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};
