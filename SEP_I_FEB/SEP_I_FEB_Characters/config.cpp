#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_FEB_Characters
	{
        units[] = 
		{
			//Men//
			"SEP_I_FEB_Rflmn_M1903",
			"SEP_I_FEB_Rflmn_Carb",
			"SEP_I_FEB_Rflmn_Unr",
			"SEP_I_FEB_AmmoBearer",
			"SEP_I_FEB_Gren",
			"SEP_I_FEB_AR",
			"SEP_I_FEB_AAR",
			"SEP_I_FEB_SL",
			"SEP_I_FEB_ASL",
			"SEP_I_FEB_Sniper",
			"SEP_I_FEB_AT",
			"SEP_I_FEB_Medic",
			"SEP_I_FEB_Engi",
			"SEP_I_FEB_Engi_Expl",
			"SEP_I_FEB_Cpt",
			"SEP_I_FEB_Radio",
			"SEP_I_FEB_Mortar_Gunner",
			"SEP_I_FEB_Mortar_AGunner",
			"SEP_I_FEB_Mortar_AmmoBearer",
			"SEP_I_FEB_Flamethrower_Operator",
			"SEP_I_FEB_HMGunner",
			"SEP_I_FEB_HMGunner_M2",
			"SEP_I_FEB_HMG_AmmoBearer",
			"SEP_I_FEB_HMG_AmmoBearer_M2",
			"SEP_I_FEB_AHMGunner",
			"SEP_I_FEB_AHMGunner_M2",
			"SEP_I_FEB_Sentry_Carbine",
			"SEP_I_FEB_Sentry",
			//Men (Artillery)//
			"SEP_I_FEB_GunCrew",
			"SEP_I_FEB_GunCrew_Srgt",
			//Men (Pilots)//
			"SEP_I_FEB_Pilot",
			//Men (Tank crew)//
			"SEP_I_FEB_Tank_Crew",
			"SEP_I_FEB_Tank_Second_Lieutenant",
			"SEP_I_FEB_Tank_Sergeant",
			//Men (Drivers)//
			"SEP_I_FEB_Driver",
			"SEP_I_FEB_Driver_Lite",
        };
        weapons[] = 
		{
			//Weapons//
			//Headgear//
			//NVGs//
			//Uniforms//
			"SEP_I_FEB_U_FU_Khk",
			"SEP_I_FEB_U_FU_Medic_Khk",
			"SEP_I_FEB_U_WU_1937",
			"SEP_I_FEB_U_WU_1937_Rolled",
			//Vests//
			//Backpacks//
			"_xx_SEP_I_FEB_B_Medic",
			"_xx_SEP_I_FEB_B_AR",
			"_xx_SEP_I_FEB_B_AAR",
			"_xx_SEP_I_FEB_B_Ammo",
			"_xx_SEP_I_FEB_B_AT",
			"_xx_SEP_I_FEB_B_Explosives",
			"_xx_SEP_I_FEB_B_Engineer"
		};
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
	class H_HelmetB;
	
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};

//===================================
//Custom Classes (Uniforms)
//===================================

#include "cfgFEB.hpp"

};

class CfgVehicles 
{

	//Infantry Inheritances - Vanilla//
	class I_soldier_F;
	
	//Equipment Inheritances - Spearhead 1944//
	class B_SPE_US_Backpack;					//US Haversack, M1928
	class B_SPE_US_Backpack_Bandoleer;			//US Haversack, M1928 (Bandoleer)
	class B_SPE_US_Backpack_RocketBag_Empty;	//US Haversack, M1928 (M6)
	class B_SPE_US_Backpack_M43_GP;				//US Haversack, M1928 (M1943/GP Bag)
	class B_SPE_US_Backpack_roll_gp;
		
	//Infantry Inheritances - Spearhead 1944//		
	class SPE_US_Private_1st;
	class SPE_US_Med;
	class SPE_US_SC_EM;
	class SPE_US_SC_EM_roll;
	
	class SEP_I_FEB_Man_Base: I_soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SEP_I_FEB_Units";
		identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
	};
	class SEP_I_FEB_Soldier_Base: SEP_I_FEB_Man_Base
	{
		uniformClass = "SEP_I_FEB_U_FU_Khk";
		class EventHandlers;
	};
	
//===================================
//Custom Classes (Men)
//SEP Força Expedicionária Brasileira
//===================================

    #include "cfgFEB_Units.hpp"

//===================================
//Textures - Uniforms
//===================================

	#include "cfgFEB_Uniforms.hpp"

//===================================
//Custom Classes (Backpacks)
//===================================
	
	class _xx_SEP_I_FEB_B_Medic: B_SPE_US_Backpack
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (Medic)";
		descriptionShort= "US Haversack, M1928 (Medic)";
		class TransportItems
		{
			class SPE_US_FirstAidKit
			{
				count=10;
				name="SPE_US_FirstAidKit";
			};
			class Medikit
			{
				count=2;
				name="Medikit";
			};
		};
	};
		
	class _xx_SEP_I_FEB_B_AR: B_SPE_US_Backpack_M43_GP
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (M1918A2 BAR)";
		descriptionShort= "US Haversack, M1928 (M1918A2 BAR)";
		class TransportMagazines
		{
			class _xx_SPE_20Rnd_762x63
			{
				count=4;
				magazine="SPE_20Rnd_762x63";
			};
		};
	};
	
	class _xx_SEP_I_FEB_B_AAR: B_SPE_US_Backpack_Bandoleer
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (Bandoleer)";
		descriptionShort= "US Haversack, M1928 (Bandoleer)";
		class TransportMagazines
		{
			class _xx_SPE_20Rnd_762x63
			{
				count=4;
				magazine="SPE_20Rnd_762x63";
			};
		};
	};
	
	class _xx_SEP_I_FEB_B_Ammo: B_SPE_US_Backpack_roll_gp
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "US Haversack, M1928 (Ammo)";
		descriptionShort= "US Haversack, M1928 (Ammo)";
		class TransportMagazines
		{
			class _xx_SPE_20Rnd_762x63
			{
				count=4;
				magazine="SPE_20Rnd_762x63";
			};
			class _xx_SPE_1Rnd_G_M2_ANM8
			{
				count=1;
				magazine = "SPE_1Rnd_G_M2_ANM8";
			};
			class _xx_SPE_1Rnd_G_M9A1
			{
				count=1;
				magazine = "SPE_1Rnd_G_M9A1";
			};
			class _xx_SPE_1Rnd_G_Mk2
			{
				count=1;
				magazine = "SPE_1Rnd_G_Mk2";
			};		
			class _xx_SPE_30Rnd_Thompson_45ACP
			{
				count=3;
				magazine = "SPE_30Rnd_Thompson_45ACP";
			};
			class _xx_SPE_5Rnd_762x63
			{
				count = 10;
				magazine = "SPE_5Rnd_762x63";
			};
			class _xx_SPE_US_M18
			{
				count = 1;
				magazine = "SPE_US_M18";
			};	
			class _xx_SPE_US_Mk_2
			{
				count = 1;
				magazine = "SPE_US_Mk_2";
			};				
		};
	};
	
	class _xx_SEP_I_FEB_B_AT: B_SPE_US_Backpack_RocketBag_Empty
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
	
	class _xx_SEP_I_FEB_B_Explosives : B_SPE_US_Backpack
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
	
	class _xx_SEP_I_FEB_B_Engineer : B_SPE_US_Backpack
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
        class SEP_I_FEB
		{
            name = "[SEP] Força Expedicionária Brasileira";	
			
            class Infantry
			{
                name = "Infantry";

                class SEP_I_FEB_Infantry_Platoon_HQ {
                    name = "Platoon HQ";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_Cpt";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_Radio";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_Medic";
                    };
                };
				
                class SEP_I_FEB_Infantry_Sqd 
				{
                    name = "Infantry Squad";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AmmoBearer";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Medic";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                };

                class SEP_I_FEB_Infantry_Sqd_AR {
                    name = "Infantry Squad (AR)";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AR";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Medic";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AAR";
                    };
                };
				
                class SEP_I_FEB_Infantry_Sqd_M1919A4 {
                    name = "Infantry Squad (M1919A4)";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Medic";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_HMGunner";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_HMG_AmmoBearer";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AHMGunner";
                    };
                };
												
                class SEP_I_FEB_Infantry_Fire_Team {
                    name = "Fire Team";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                };
				
				class SEP_I_FEB_Infantry_Fire_Team_AT {
                    name = "AT Fire Team";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AT";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AT";
                    };			
                };
												
				class SEP_I_FEB_Infantry_Fire_Team_AR {
                    name = "Fire Team (AR)";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AR";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AAR";
                    };			
                };
				
				class SEP_I_FEB_Infantry_3Sentry_Team {
                    name = "3 Man Sentry";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                };
				
				class SEP_I_FEB_Infantry_2Sentry_Team {
                    name = "2 Man Sentry";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                };
								
				class SEP_I_FEB_Infantry_Sniper_Team {
                    name = "Sniper Team";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };		
                };
			};

            class SupportInfantry
			{
                name = "Support Infantry";

                class SEP_I_FEB_SupportInfantry_Mortar_Team {
                    name = "Mortar Team";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_Mortar_Gunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Mortar_AGunner";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Mortar_AmmoBearer";
                    };
                };
				
                class SEP_I_FEB_SupportInfantry_M1919A4_Team {
                    name = "HMG Team";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_MG.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_HMGunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AHMGunner";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_HMG_AmmoBearer";
                    };
                };
				
                class SEP_I_FEB_SupportInfantry_M2_Team {
                    name = "HMG Team (M2)";
                    side = 2;
                    faction = "SEP_I_FEB_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_MG.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_FEB_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_HMGunner_M2";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_AHMGunner_M2";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_HMG_AmmoBearer_M2";
                    };
					class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_HMG_AmmoBearer_M2";
                    };
                };
			};
        };
    };
};
