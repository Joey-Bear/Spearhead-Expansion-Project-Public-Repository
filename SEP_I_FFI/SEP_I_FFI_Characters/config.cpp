#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_FFI_Characters
	{
        units[] = {
			//Infantry//
			"SEP_I_FFI_Fighter_MAS38"
        };
        weapons[] = {
			//Weapons//
			//Headgear//
			//NVGs//
			//Uniforms//
			//Vests//
			//Backpacks//
		};
		requiredAddons[]={};
	};
};

class cfgWeapons
{
//===================================
//Class Parent Names
//===================================
	
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base;
	class UniformItem;
	class Uniform_Base;
	class HeadgearItem;

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
	class SEP_I_FFI_H_Stahlhelm_M16;
	
//===================================
//Custom Classes (Headgear)
//===================================
	
//===================================
//Custom Classes (Uniforms)
//===================================
	
//===================================
//Custom Classes (NVGs)
//===================================
				
//===================================
//Custom Classes (Vests)
//===================================
	
//===================================
//Custom Classes (Weapons)
//===================================
};

class CfgVehicles 
{

	//Infantry Inheritances - Vanilla//
	class I_soldier_F;

	class SEP_I_FFI_Man_Base: I_soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SPE_FFI";
		identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_CIVIL_Glasses"};
		genericNames = "SPE_FrenchMen";
	};
	class SEP_I_FFI_Soldier_Base: SEP_I_FFI_Man_Base
	{
		uniformClass = "U_SPE_FFI_Casual_2_trop";
		class EventHandlers;
	};
	
//===================================
//Custom Classes (INFANTRY)
//[SPE] La Milice - Men
//===================================

    class SEP_I_FFI_Fighter_MAS38 : SEP_I_FFI_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter (MAS-38)";
        side = 2;
        faction = "SPE_FFI";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_FFI\SEP_I_FFI_Characters\data\editorPreviews\SEP_I_FFI_Fighter_MAS38.jpg";
		icon = "iconManSMG";
		role = "Rifleman";
		
        identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_CIVIL_Glasses"};
		genericNames = "SPE_FrenchMen";
      
        uniformClass = "U_SPE_FFI_Casual_1_trop";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_SMG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_SMG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

        weapons[] = {"SEP_WP_MAS38","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_MAS38","Put","Throw"};

        magazines[] = {MAG_10(SEP_WP_MAS38_Mag),MAG_1(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SEP_WP_MAS38_Mag),MAG_1(SPE_Shg24)};
		
    };
							
//===================================
//Textures - Uniforms
//===================================
		
//===================================
//Custom Classes (Backpacks)
//===================================
};

class CfgGroups 
{
    class Indep
	{
        class SPE_FFI
		{
            name = "[SPE] French Interior Forces";
			
            class Infantry
			{
                name = "Infantry";
				
				class SEP_I_FFI_Partisan_Team
				{
                    name = "Partisan Team";
                    side = 2;
                    faction = "SPE_FFI";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SPE_FFI_TeamLeader_Sten";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SPE_FFI_Fighter";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SPE_FFI_Grenadier";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FFI_Fighter_MAS38";
                    };					
                };				
			};
		};
    };
};
