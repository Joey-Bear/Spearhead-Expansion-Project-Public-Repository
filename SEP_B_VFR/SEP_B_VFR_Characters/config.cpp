#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_B_VFR_Characters
	{
        units[] = {
			//Infantry//
			"SEP_B_VFR_Sentry_MAS38",
			"SEP_B_VFR_NP_Sentry_MAS38"
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
	class B_Soldier_F;

	class SEP_B_VFR_Man_Base: B_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SPE_MILICE";
		identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_CIVIL_Glasses"};
		genericNames = "SPE_FrenchMen";
	};
	class SEP_B_VFR_Soldier_Base: SEP_B_VFR_Man_Base
	{
		uniformClass = "U_SPE_milice_1";
		class EventHandlers;
	};
	
//===================================
//Custom Classes (INFANTRY)
//[SPE] La Milice - Men
//===================================

    class SEP_B_VFR_Sentry_MAS38 : SEP_B_VFR_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sentry (MAS-38)";
        side = 1;
        faction = "SPE_MILICE";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_VFR\SEP_B_VFR_Characters\data\editorPreviews\SEP_B_VFR_Sentry_MAS38.jpg";
		icon = "iconManSMG";
		role = "Rifleman";
		
        identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_CIVIL_Glasses"};
		genericNames = "SPE_FrenchMen";
      
        uniformClass = "U_SPE_milice_1";

        linkedItems[] = {"H_SPE_Milice_beret_1","V_SPE_milice_Vest_smg","SPE_GER_FL_Signal_Flashlight","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_Milice_beret_1","V_SPE_milice_Vest_smg","SPE_GER_FL_Signal_Flashlight","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

        weapons[] = {"SEP_WP_MAS38","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_MAS38","Put","Throw"};

        magazines[] = {MAG_10(SEP_WP_MAS38_Mag),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SEP_WP_MAS38_Mag),MAG_2(SPE_Shg24)};
		
    };
	
//===================================
//Custom Classes (INFANTRY)
//[SPE] La Milice - Men (Non-Permanente)
//===================================

    class SEP_B_VFR_NP_Sentry_MAS38 : SEP_B_VFR_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sentry (MAS-38)";
        side = 1;
        faction = "SPE_MILICE";
		editorSubcategory = "SPE_EdSubcat_Milice_FG_NonPermanent";
		editorPreview="\SEP_B_VFR\SEP_B_VFR_Characters\data\editorPreviews\SEP_B_VFR_NP_Sentry_MAS38.jpg";
		icon = "iconManSMG";
		role = "Rifleman";
		
        identitytypes[] = {"SPE_LanguageFRE","Head_Euro","SPE_CIVIL_Glasses"};
		genericNames = "SPE_FrenchMen";
      
        uniformClass = "U_SPE_milice_2";

        linkedItems[] = {"H_SPE_Milice_beret_1","V_SPE_milice_Vest_smg","SPE_GER_FL_Signal_Flashlight","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_Milice_beret_1","V_SPE_milice_Vest_smg","SPE_GER_FL_Signal_Flashlight","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

        weapons[] = {"SEP_WP_MAS38","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_MAS38","Put","Throw"};

        magazines[] = {MAG_10(SEP_WP_MAS38_Mag),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SEP_WP_MAS38_Mag),MAG_2(SPE_Shg24)};
		
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
    class West
	{
        class SPE_MILICE
		{
            name = "[SPE] La Milice";
			
            class Infantry
			{
                name = "Infantry";
				
				class SEP_B_VFR_2Man_Sentry 
				{
                    name = "2 Man Sentry";
                    side = 1;
                    faction = "SPE_MILICE";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_VFR_Sentry_MAS38";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SPE_Milice_FG_Sentry";
                    };		
                };				
			};
			
            class Infantry_NonPermanent
			{
                name = "Infantry (Non-Permanente)";
				
				class SEP_B_VFR_NP_2Man_Sentry 
				{
                    name = "2 Man Sentry";
                    side = 1;
                    faction = "SPE_MILICE";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_VFR_NP_Sentry_MAS38";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SPE_Milice_FG_NP_Sentry";
                    };		
                };				
			};
		};
    };
};
