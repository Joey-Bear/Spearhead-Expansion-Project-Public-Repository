#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_IHTC_Characters
	{
        units[] = {
			//Men//
			"SEP_I_IHTC_Rflmn_M1903",
			"SEP_I_IHTC_Rflmn_Carb",
			"SEP_I_IHTC_Rflmn_Lite",
			"SEP_I_IHTC_Rflmn_Unr",
			"SEP_I_IHTC_Gren",
			"SEP_I_IHTC_AR",
			"SEP_I_IHTC_AAR",
			"SEP_I_IHTC_SL",
			"SEP_I_IHTC_ASL",
			"SEP_I_IHTC_Sniper",
			"SEP_I_IHTC_AT",
			"SEP_I_IHTC_Medic",
			"SEP_I_IHTC_Engi",
			"SEP_I_IHTC_Cpt",
			"SEP_I_IHTC_Radio",
			"SEP_I_IHTC_Mortar_Gunner",
			"SEP_I_IHTC_Mortar_AGunner",
			"SEP_I_IHTC_Mortar_AmmoBearer",
			//Men (Artillery)//
			"SEP_I_IHTC_GunCrew",
			"SEP_I_IHTC_GunCrew_Srgt",
			//Men (Tank crew)//
			"SEP_I_IHTC_Tank_Crew",
			"SEP_I_IHTC_Tank_Second_Lieutenant",
			"SEP_I_IHTC_Tank_Sergeant",
			//Men (Drivers)//
			"SEP_I_IHTC_Driver",
			"SEP_I_IHTC_Driver_Lite",
        };
        weapons[] = {
			//Weapons//
			//Headgear//		
			"SEP_I_IHTC_H_SafariHat",
            "SEP_I_IHTC_H_CoconutHelmet",
			//NVGs//
			//Uniforms//
			"SEP_I_IHTC_U_HBT_Khk",
			"SEP_I_IHTC_U_HBT_Rolled_Khk",
			"SEP_I_IHTC_U_HBT_Medic_Khk",
			"SEP_I_IHTC_U_HBT_Medic_Rolled_Khk",
			//Vests//
			//Backpacks//
			"_xx_SEP_I_IHTC_B_Medic",
			"_xx_SEP_I_IHTC_B_AR",
			"_xx_SEP_I_IHTC_B_AAR",
			"_xx_SEP_I_IHTC_B_AT",
			"_xx_SEP_I_IHTC_B_Explosives",
			"_xx_SEP_I_IHTC_B_Engineer"
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
	
	//Equipment Inheritances - Vanilla//
	
	class H_Hat_Safari_sand_F;
			
//===================================
//Custom Classes (CfgWeapons)
//===================================

#include "cfgIHTC.hpp"

};

class CfgVehicles 
{

	//Infantry Inheritances - Vanilla//
	class I_soldier_F;

	//Equipment Inheritances - Spearhead 1944//
	class B_SPE_US_Backpack;					//US Haversack, M1928
	class B_SPE_US_Backpack_Bandoleer;			//US Haversack, M1928 (Bandoleer)
	class B_SPE_US_Backpack_RocketBag_Empty;	//US Haversack, M1928 (M6)
		
	//Infantry Inheritances - Spearhead 1944//	
	class SPE_US_CC_HBT_EM;
	class SPE_US_CC_HBT_EM_roll;
	
	class SEP_I_IHTC_Man_Base: I_soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SEP_I_IHTC_Units";
		identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";
	};
	class SEP_I_IHTC_Soldier_Base: SEP_I_IHTC_Man_Base
	{
		uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";
		class EventHandlers;
	};
	
//===================================
//Custom Classes (Men)
//SEP Îles Horizon Troupes Coloniales
//===================================

    #include "cfgIHTC_Units.hpp"

//===================================
//Textures - Uniforms
//===================================

	#include "cfgIHTC_Uniforms.hpp"
							
//===================================
//Custom Classes (Backpacks)
//===================================
	
	class _xx_SEP_I_IHTC_B_Medic: B_SPE_US_Backpack
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (Medic)";
		descriptionShort= "US Haversack, M1928 (Medic)";
		class TransportItems
		{
			class FirstAidKit
			{
				count=10;
				name="FirstAidKit";
			};
			class Medikit
			{
				count=2;
				name="Medikit";
			};
		};
	};
		
	class _xx_SEP_I_IHTC_B_AR: B_SPE_US_Backpack
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (FM 24/29)";
		descriptionShort= "US Haversack, M1928 (FM 24/29)";
		class TransportMagazines
		{
			class _xx_SPE_25Rnd_75x54_35P_AP
			{
				count=2;
				magazine="SPE_25Rnd_75x54_35P_AP";
			};
			class _xx_SPE_25Rnd_75x54
			{
				count=4;
				magazine="SPE_25Rnd_75x54";
			};
		};
	};
	
	class _xx_SEP_I_IHTC_B_AAR: B_SPE_US_Backpack_Bandoleer
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (Bandoleer)";
		descriptionShort= "US Haversack, M1928 (Bandoleer)";
		class TransportMagazines
		{
			class _xx_SPE_25Rnd_75x54_35P_AP
			{
				count=2;
				magazine="SPE_25Rnd_75x54_35P_AP";
			};
			class _xx_SPE_25Rnd_75x54
			{
				count=4;
				magazine="SPE_25Rnd_75x54";
			};
		};
	};
	
	class _xx_SEP_I_IHTC_B_AT: B_SPE_US_Backpack_RocketBag_Empty
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (M6)";
		descriptionShort= "US Haversack, M1928 (M6)";
		class TransportMagazines
		{
			class _xx_SPE_1Rnd_60mm_M6
			{
				count=3;
				magazine="SPE_1Rnd_60mm_M6";
			};
		};
	};
	
	class _xx_SEP_I_IHTC_B_Explosives : B_SPE_US_Backpack
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
	
	class _xx_SEP_I_IHTC_B_Engineer : B_SPE_US_Backpack
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
        class SEP_I_IHTC
		{
            name = "[SEP] Îles Horizon Troupes Coloniales";	
			
            class Infantry
			{
                name = "Infantry";

                class SEP_I_IHTC_Infantry_Platoon_HQ {
                    name = "Platoon HQ";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Cpt";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_IHTC_SL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Radio";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Medic";
                    };
                };
				
                class SEP_I_IHTC_Infantry_Sqd {
                    name = "Infantry Squad";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_IHTC_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Medic";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                };

                class SEP_I_IHTC_Infantry_Sqd_AR {
                    name = "Infantry Squad (AR)";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_IHTC_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_AR";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Medic";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_AAR";
                    };
                };
												
                class SEP_I_IHTC_Infantry_Fire_Team {
                    name = "Fire Team";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                };
				
				class SEP_I_IHTC_Infantry_Fire_Team_AT {
                    name = "AT Fire Team";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_AT";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_AT";
                    };			
                };
												
				class SEP_I_IHTC_Infantry_Fire_Team_AR {
                    name = "Fire Team (AR)";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_AR";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_AAR";
                    };			
                };
				
				class SEP_I_IHTC_Infantry_3Sentry_Team {
                    name = "3 Man Sentry";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_Carb";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };		
                };
				
				class SEP_I_IHTC_Infantry_2Sentry_Team {
                    name = "2 Man Sentry";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_M1903";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Rflmn_Carb";
                    };	
                };
								
				class SEP_I_IHTC_Infantry_Sniper_Team {
                    name = "Sniper Team";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Sniper";
                    };		
                };
			};

            class SupportInfantry
			{
                name = "Support Infantry";

                class SEP_I_IHTC_SupportInfantry_Mortar_Team {
                    name = "Mortar Team";
                    side = 2;
                    faction = "SEP_I_IHTC_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_IHTC_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Mortar_Gunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Mortar_AGunner";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_IHTC_Mortar_AmmoBearer";
                    };
                };
			};
        };
    };
};
