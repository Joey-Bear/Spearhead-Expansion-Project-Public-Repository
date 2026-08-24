#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_B_EHM_Characters
	{
        units[] = 
		{
			//Infantry//
			"SEP_B_EHM_Militia_G98",
			"SEP_B_EHM_Militia_Lite",
			"SEP_B_EHM_Militia_Unr",
			"SEP_B_EHM_MG_MG34",
			"SEP_B_EHM_AMG",
			"SEP_B_EHM_HMGunner",
			"SEP_B_EHM_AHMGunner",
			"SEP_B_EHM_HMG_AmmoBearer",
			"SEP_B_EHM_SL",
			"SEP_B_EHM_ASL",
			"SEP_B_EHM_Medic",
			"SEP_B_EHM_RTO",
        };
        weapons[] = 
		{
			//Weapons//
			//Headgear//
			"SEP_B_EHM_H_Stahlhelm_M16",
			//NVGs//
			//Uniforms//
			"SEP_B_EHM_U_FieldUniform",
			"SEP_B_EHM_U_FieldUniform_Open",
			"SEP_B_EHM_U_FieldUniform_Rolled",
			"SEP_B_EHM_U_Mantel",
			//Vests//
			//Backpacks//
			"_xx_SEP_B_EHM_B_Early_Gascape",
			"_xx_SEP_B_EHM_B_Early_Beltbag",
			"_xx_SEP_B_EHM_B_Early_Ammoalt",
			"_xx_SEP_B_EHM_B_MG_MG34",
			"_xx_SEP_B_EHM_B_Early_Medic"
		};
		addonRootClass = "SEP_B_EHM";
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
			"WW2_SPE_Core_c_Core_c",
			"SEP_B_GER",
			"SEP_B_EHM"
		};
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
	class SEP_B_GER_H_Stahlhelm_M16;
	
	
//===================================
// HPP Files - SEP
//===================================

	#include "cfgEHM.hpp"

};

class CfgVehicles 
{

	//Infantry Inheritances - Vanilla//
	class B_Soldier_F;

	//Equipment Inheritances - Spearhead 1944//
	class B_SPE_GER_MedicBackpack_Empty;
	class B_SPE_GER_Belt_bag_MG;
	class B_SPE_GER_Tonister41_Frame;
	
	class B_SPE_GER_Belt_bag;				//GER Field Equipment (Essgeschirr)
	class B_SPE_GER_erla_bag;				//GER Field Equipment (Gas Cape)
	class B_SPE_GER_ammo_Belt_bag_alt;		//GER Field Equipment (Ammo, Alt)
	class B_SPE_GER_ammo_Belt_bag_medic;	//GER Field Equipment (Medic)
	
	class B_SPE_GER_A_frame_MGCan;				//A-Frame (MG Box)
	
	class B_SPE_CIV_musette;					//Sling Bag
	
	//Infantry Inheritances - Spearhead 1944//	
	class SPE_LW_base;							//Field Uniform
	class SPE_LW_op;							//Field Uniform (Opened)
	class SPE_LW_roll;							//Field Uniform (Rolled)

	//Infantry Inheritances - SEP//
	class SEP_B_GER_U_Mantel_M36_CFV;
	
	class SEP_B_EHM_Man_Base: B_Soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SPE_WEHRMACHT";
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_FrenchMen";
	};
	class SEP_B_EHM_Soldier_Base: SEP_B_EHM_Man_Base
	{
		uniformClass = "SEP_B_EHM_U_FieldUniform";
		class EventHandlers;
	};
	
//===================================
//Custom Classes
//SEP Everon Homeland Militia
//===================================

	#include "cfgEHM_Units.hpp"
							
//===================================
//Textures - Uniforms
//===================================
			
	#include "cfgEHM_Uniforms.hpp"
		
//===================================
//Custom Classes (Backpacks)
//===================================
							
	class _xx_SEP_B_EHM_B_Early_Gascape: B_SPE_GER_erla_bag
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "GER Field Equipment (Gas Cape)";
		descriptionShort= "GER Field Equipment (Gas Cape)";
		class TransportMagazines
		{
			class _xx_SPE_50Rnd_792x57
			{
				count=1;
				magazine="SPE_50Rnd_792x57";
			};
			class _xx_SPE_5Rnd_792x57
			{
				count=8;
				magazine = "SPE_5Rnd_792x57";
			};
		};
	};
	
	class _xx_SEP_B_EHM_B_Early_Beltbag: B_SPE_GER_Belt_bag
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "GER Field Equipment (Essgeschirr)";
		descriptionShort= "GER Field Equipment (Essgeschirr)";
		class TransportMagazines
		{
			class _xx_SPE_50Rnd_792x57
			{
				count=1;
				magazine="SPE_50Rnd_792x57";
			};
			class _xx_SPE_5Rnd_792x57
			{
				count=8;
				magazine = "SPE_5Rnd_792x57";
			};
		};
	};	
	
	class _xx_SEP_B_EHM_B_Early_Ammoalt: B_SPE_GER_ammo_Belt_bag_alt
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "GER Field Equipment (Ammo, Alt)";
		descriptionShort= "GER Field Equipment (Ammo, Alt)";
		class TransportMagazines
		{
			class _xx_SPE_50Rnd_792x57
			{
				count=6;
				magazine="SPE_50Rnd_792x57";
			};
			class _xx_SPE_5Rnd_792x57
			{
				count=8;
				magazine = "SPE_5Rnd_792x57";
			};
		};
	};
	
		
	class _xx_SEP_B_EHM_B_MG_MG34: _xx_SEP_B_EHM_B_Early_Ammoalt
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "GER Field Equipment (Ammo, Alt)";
		descriptionShort= "GER Field Equipment (Ammo, Alt)";
		class TransportMagazines
		{
			class _xx_SPE_100Rnd_792x57
			{
				count=2;
				magazine="SPE_100Rnd_792x57";
			};
			class _xx_SPE_50Rnd_792x57
			{
				count=4;
				magazine="SPE_50Rnd_792x57";
			};
		};
	};
	
	class _xx_SEP_B_EHM_B_Early_Medic: B_SPE_GER_ammo_Belt_bag_alt
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Sling Bag (Sanitäter)";
		descriptionShort= "Sling Bag (Sanitäter)";
		class TransportItems
		{
			class _xx_SPE_GER_FirstAidKit
			{
				count=5;
				name="SPE_GER_FirstAidKit";
			};
			class _xx_SPE_GER_Medkit
			{
				count=1;
				name = "SPE_GER_Medkit";
			};
		};
		hiddenSelectionsTextures[] = 
		{
			"ww2\spe_assets_t\characters\germans_t\ger_wehrmacht\de_gear_frame_co.paa",
			"\ww2\spe_assets_t\characters\germans_t\ger_wehrmacht\de_ammo_mg_medic_co.paa"
		};
	};
};

class CfgGroups 
{
    class West
	{
        class SEP_B_EHM
		{
            name = "[SEP] Everon Homeland Militia";	
			
            class Infantry
			{
                name = "Infantry";

                class SEP_B_EHM_Infantry_Platoon_HQ 
				{
                    name = "Platoon HQ";
                    side = 1;
                    faction = "SEP_B_EHM_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "SEP_B_EHM_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "SEP_B_EHM_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_G98";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "SEP_B_EHM_Medic";
                    };
                };

                class SEP_B_EHM_Infantry_Sqd_MG34 
				{
                    name = "Infantry Squad (MG 34)";
                    side = 1;
                    faction = "SEP_B_EHM_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "SEP_B_EHM_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_G98";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_Lite";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_G98";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_Lite";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_MG_MG34";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Medic";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_AMG";
                    };
                };
												
                class SEP_B_EHM_Infantry_Fire_Team 
				{
                    name = "Fire Team";
                    side = 1;
                    faction = "SEP_B_EHM_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "SEP_B_EHM_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_G98";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_G98";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_G98";
                    };
                };
												
				class SEP_B_EHM_Infantry_Fire_Team_MG34 
				{
                    name = "Fire Team (MG 34)";
                    side = 1;
                    faction = "SEP_B_EHM_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "SEP_B_EHM_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_G98";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_MG_MG34";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_AMG";
                    };			
                };
				
				class SEP_B_EHM_Infantry_2Man_Sentry 
				{
                    name = "2 Man Sentry";
                    side = 1;
                    faction = "SEP_B_EHM_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "SEP_B_EHM_ASL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_Lite";
                    };		
                };	
				class SEP_B_EHM_Infantry_3Man_Sentry 
				{
                    name = "3 Man Sentry ";
                    side = 1;
                    faction = "SEP_B_EHM_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "SEP_B_EHM_ASL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_Lite";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_Militia_Lite";
                    };			
                };				
			};
			
            class Support
			{
                name = "Support Infantry";

                class SEP_B_EHM_HMG_Team 
				{
                    name = "HMG Team";
                    side = 1;
                    faction = "SEP_B_EHM_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_MG.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "SEP_B_EHM_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_HMGunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_AHMGunner";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "SEP_B_EHM_HMG_AmmoBearer";
                    };
                };
			};
		};
    };
};
