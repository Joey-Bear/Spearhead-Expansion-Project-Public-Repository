#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_C_CIV_Characters
	{
        units[] = 
		{
			//Civilians > Men - Developers//
			"SEP_C_CIV_Dev_Joseph"
        };
        weapons[] = {};
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Heads",
			"A3_Characters_F_Mark",
			"A3_Characters_F_Tacops",
			"A3_Characters_F_Orange_Facewear",
			"A3_Characters_F_Enoch_Facewear",
			"A3_Characters_F_Tank_Uniforms",
			"A3_Weapons_F",
			"A3_Weapons_F_Items",
			"WW2_SPE_Core_c_Core_c"
		};
	};
};

class CfgVehicles 
{
	//Infantry Inheritances - Vanilla//
	class SPE_Civilian_base;
	
	//Infantry Inheritances - Spearhead Expansion Project//
	class SEP_C_CIV_Man_Base: SPE_Civilian_base
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SEP_C_CIV_Units";
		identityTypes[] = {"LanguageENGB_F","Head_Joseph_01","NoGlasses"};
		genericNames = "Developer01Name";
	};
	class SEP_C_CIV_Soldier_Base: SEP_C_CIV_Man_Base
	{
		uniformClass = "U_SPEX_CW_RAF_BD";
		class EventHandlers;
	};
		
	//Equipment Inheritances - Spearhead 1944//
	
//===================================
//Custom Classes (Men - Developers)
//SEP Civilians
//===================================

    #include "cfgCIV_Units.hpp"
			
//===================================
//Textures - Uniforms
//===================================
		
//===================================
//Custom Classes (Backpacks)
//===================================
};