#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_US_Characters
	{
        units[] = {
			 //Infantry (Winter) - US Army Winter//
			 "SEP_I_US_WIN_Rflmn",
			 "SEP_I_US_WIN_Rflmn_Unr",
			 "SEP_I_US_WIN_AmmoBearer",
			 "SEP_I_US_WIN_Driver",
			 "SEP_I_US_WIN_Driver_Lite",
			 "SEP_I_US_WIN_Gren",
			 "SEP_I_US_WIN_AR",
			 "SEP_I_US_WIN_AAR",
			 "SEP_I_US_WIN_SL",
			 "SEP_I_US_WIN_ASL",
			 "SEP_I_US_WIN_Sniper",
			 "SEP_I_US_WIN_AT",
			 "SEP_I_US_WIN_Medic",
			 "SEP_I_US_WIN_Engi",
			 "SEP_I_US_WIN_Engi_Expl",
			 "SEP_I_US_WIN_Cpt",
			 "SEP_I_US_WIN_Radioman",
			 "SEP_I_US_WIN_Mortar_Gunner",
			 "SEP_I_US_WIN_Mortar_AGunner",
			 "SEP_I_US_WIN_Mortar_AmmoBearer",
			 "SEP_I_US_WIN_Flamethrower_Operator",
 			 "SEP_I_US_WIN_HMGunner",
  			 "SEP_I_US_WIN_HMGunner_M2",
			 "SEP_I_US_WIN_HMG_AmmoBearer",
			 "SEP_I_US_WIN_HMG_AmmoBearer_M2",
			 "SEP_I_US_WIN_AHMGunner",
			 "SEP_I_US_WIN_AHMGunner_M2",
			 "SEP_I_US_WIN_Sentry_Carb",
			 "SEP_I_US_WIN_Sentry_Shotgun",
			 //Men (Artillery)//
			 "SEP_I_US_WIN_GunCrew",
			 "SEP_I_US_WIN_GunCrew_Srgt",
			 //Men (Pilots)//
			 "SEP_I_US_WIN_Pilot",
			 //Men (Tank crew)//
			 "SEP_I_US_WIN_Tank_Crew",
			 "SEP_I_US_WIN_Tank_Second_Lieutenant",
			 "SEP_I_US_WIN_Tank_Sergeant",
        };
        weapons[] = {
            //Headgear
            "SEP_I_US_H_M1Helmet_WIN",
            "SEP_I_US_H_M1Helmet_WIN_ns",
            "SEP_I_US_H_M1Helmet_WIN_os",
            "SEP_I_US_H_M1Helmet_Cover_WIN",
            "SEP_I_US_H_M1Helmet_Cover_WIN_ns",
            "SEP_I_US_H_M1Helmet_Cover_WIN_os",
            //Uniforms
            "SEP_I_US_U_Coat_brn",
            "SEP_I_US_U_Coat_snow",
            "SEP_I_US_U_M43_snow",
            "SEP_I_US_U_M43_trop_snow",
			//Backpacks//
			"_xx_SEP_I_US_WIN_B_Explosives",
			"_xx_SEP_I_US_WIN_B_Engineer"
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
	
	class H_SPE_US_Helmet;
	class H_SPE_US_Helmet_ns;
	class H_SPE_US_Helmet_os;
    class H_SPE_US_Helmet_cover;
    class H_SPE_US_Helmet_cover_ns;
    class H_SPE_US_Helmet_cover_os;

//===================================
// HPP Files - SEP
//===================================

	#include "cfgUSArmy.hpp"

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
	class I_Soldier_lite_F;
	class I_Soldier_A_F;
	class I_Soldier_GL_F;
	class I_soldier_AR_F;
	class I_Soldier_SL_F;
	class I_Soldier_TL_F;
	class I_Soldier_M_F;
	//class I_Soldier_LAT_F;
	class I_Soldier_AT_F;
	class I_Soldier_AA_F;
	class I_medic_F;
	class I_Soldier_repair_F;
	class I_Soldier_exp_F;
	class I_engineer_F;
	class I_crew_F;
	class I_officer_F;
	//class I_Survivor_F;
	class I_Soldier_unarmed_F;
	class I_Spotter_F;
	class I_Sniper_F;
	
	class I_Soldier_AAR_F;
	class I_Soldier_AAT_F;
	class I_Soldier_AAA_F;
	class I_support_MG_F;
	class I_support_AMG_F;
	class I_support_Mort_F;
	class I_support_AMort_F;
	
	class I_pilot_F;

	//Equipment Inheritances - Spearhead 1944//
	
	//Infantry Inheritances - Spearhead 1944//
	class SPE_US_M43;
	class SPE_US_M43_trop;
	
	class B_SPE_US_Backpack;

//===================================
//Custom Classes (INFANTRY (US - WINTER)
//SEP US
//===================================

    #include "cfgUSArmy_WIN_Units.hpp"

//===================================
//Textures - Uniforms
//===================================
			
	#include "cfgUSArmy_Uniforms.hpp"
		
//===================================
//Custom Classes (Backpacks)
//===================================

	class _xx_SEP_I_US_WIN_B_Explosives : B_SPE_US_Backpack
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (Explosives)";
		descriptionShort= "US Haversack, M1928 (Explosives)";
		class TransportItems
		{
			class _xx_SPE_ToolKit
			{
				count=1;
				name="SPE_ToolKit";
			};
		};
		class TransportMagazines
		{
			class _xx_SPE_US_TNT_half_pound_mag
			{
				count=4;
				magazine = "SPE_US_TNT_half_pound_mag";
			};
			class _xx_SPE_US_TNT_4pound_mag
			{
				count=1;
				magazine = "SPE_US_TNT_4pound_mag";
			};
		};	
	};
	
	class _xx_SEP_I_US_WIN_B_Engineer : B_SPE_US_Backpack
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (Engineer)";
		descriptionShort= "US Haversack, M1928 (Engineer)";
		class TransportItems
		{
			class _xx_SPE_ToolKit
			{
				count=1;
				name="SPE_ToolKit";
			};
		};
	};	
};

class CfgGroups 
{
    class Indep
	{
        class SEP_I_US_Winter_Units
		{
            name = "[SEP] US Army (Winter)";	
			
            class Infantry
			{
                name = "Infantry";

                class SEP_I_US_Winter_Infantry_Command_Section {
                    name = "Command Section";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Cpt";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Radioman";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Medic";
                    };
                };
				
                class SEP_I_US_Winter_Infantry_Command_Squad {
                    name = "Command Squad";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Cpt";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Radioman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Medic";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                };
				
                class SEP_I_US_Winter_Infantry_Sqd {
                    name = "Infantry Squad";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AR";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_ASL";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AR";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AmmoBearer";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AAR";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AAR";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                };
				
                class SEP_I_US_Winter_AT_Squad {
                    name = "AT Squad";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AT";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AR";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AAR";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AmmoBearer";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                };
				
                class SEP_I_US_WIN_Infantry_BAR_Team {
                    name = "BAR Team";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AR";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AAR";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Medic";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AmmoBearer";
                    };
                };
												
                class SEP_I_US_WIN_Infantry_Rifle_Team {
                    name = "Rifle Team";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_ASL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                };
				
				class SEP_I_US_Winter_Infantry_3Sentry_Team {
                    name = "3 Man Sentry";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_ASL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Sentry_Carb";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Sentry_Shotgun";
                    };		
                };
				
				class SEP_I_US_Winter_Infantry_2Sentry_Team {
                    name = "2 Man Sentry";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_ASL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Sentry_Carb";
                    };	
                };
				
				class SEP_I_US_Winter_Infantry_Flamethrower_Team {
                    name = "Flamethrower Team";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Flamethrower_Operator";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };	
                };
								
                class SEP_I_US_Winter_Scout_Squad {
                    name = "Scout Squad";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Sniper";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Medic";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AR";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AmmoBearer";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Gren";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AAR";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Rflmn";
                    };
                };
			
				class SEP_I_US_WIN_Infantry_Sniper_Team {
                    name = "Sniper Team";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Sniper";
                    };		
                };
			};

            class SupportInfantry
			{
                name = "Support Infantry";

                class SEP_I_US_Winter_SupportInfantry_Mortar_Team {
                    name = "Mortar Team";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Mortar_Gunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Mortar_AGunner";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_Mortar_AmmoBearer";
                    };
                };
				
                class SEP_I_US_WIN_SupportInfantry_M1919A4_Team {
                    name = "HMG Team";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_MG.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_HMGunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AHMGunner";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_HMG_AmmoBearer";
                    };
                };
				
                class SEP_I_US_WIN_SupportInfantry_M2_Team {
                    name = "HMG Team (M2)";
                    side = 2;
                    faction = "SEP_I_US_Winter_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_MG.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_HMGunner_M2";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_AHMGunner_M2";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_HMG_AmmoBearer_M2";
                    };
					class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_US_WIN_HMG_AmmoBearer_M2";
                    };
                };
			};
        };
    };
};