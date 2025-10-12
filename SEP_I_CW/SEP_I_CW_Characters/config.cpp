#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_CW_Characters
	{
        units[] = {
			//Commonwealth > Men - Altian//
			"SEP_I_CW_ALT_Rflmn",
			"SEP_I_CW_ALT_Rflmn_Unr",
			"SEP_I_CW_ALT_Grenadier",
			"SEP_I_CW_ALT_Driver",
			"SEP_I_CW_ALT_AmmoBearer",
			"SEP_I_CW_ALT_Bren_Gunner",
			"SEP_I_CW_ALT_Bren_Asst",
			"SEP_I_CW_ALT_Sergeant",
			"SEP_I_CW_ALT_Section_Lead",
			"SEP_I_CW_ALT_Team_Lead",
			"SEP_I_CW_ALT_PIAT_Gunner",
			"SEP_I_CW_ALT_PIAT_Asst",
			"SEP_I_CW_ALT_Medic",
			"SEP_I_CW_ALT_Engineer",
			"SEP_I_CW_ALT_Cpt",
			"SEP_I_CW_ALT_1LT",
			"SEP_I_CW_ALT_Radioman",
			"SEP_I_CW_ALT_Mortar_Gunner",
			"SEP_I_CW_ALT_Mortar_Asst",
			"SEP_I_CW_ALT_Medic_SB",
			"SEP_I_CW_ALT_Sniper",
			//Commonwealth (Tropical) > Men - Altian//
			"SEP_I_CW_ALT_Trop_Rflmn",
			"SEP_I_CW_ALT_Trop_Rflmn_Unr",
			"SEP_I_CW_ALT_Trop_Grenadier",
			"SEP_I_CW_ALT_Trop_Driver",
			"SEP_I_CW_ALT_Trop_AmmoBearer",
			"SEP_I_CW_ALT_Trop_Bren_Gunner",
			"SEP_I_CW_ALT_Trop_Bren_Asst",
			"SEP_I_CW_ALT_Trop_Sergeant",
			"SEP_I_CW_ALT_Trop_Section_Lead",
			"SEP_I_CW_ALT_Trop_Team_Lead",
			"SEP_I_CW_ALT_Trop_PIAT_Gunner",
			"SEP_I_CW_ALT_Trop_PIAT_Asst",
			"SEP_I_CW_ALT_Trop_Medic",
			"SEP_I_CW_ALT_Trop_Engineer",
			"SEP_I_CW_ALT_Trop_Cpt",
			"SEP_I_CW_ALT_Trop_1LT",
			"SEP_I_CW_ALT_Trop_Radioman",
			"SEP_I_CW_ALT_Trop_Mortar_Gunner",
			"SEP_I_CW_ALT_Trop_Mortar_Asst",
			"SEP_I_CW_ALT_Trop_Medic_SB",
			"SEP_I_CW_ALT_Trop_Sniper"
        };
        weapons[] = {
			//Weapons//
			//Headgear//
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
	
	//Equipment Inheritances - Vanilla//
	
//===================================
//Custom Classes (Weapons)
//===================================		
		
//===================================
//Custom Classes (Headgear)
//===================================
    
//===================================
//Custom Classes (Uniforms)
//===================================
		
//===================================
//Custom Classes (Vests)
//===================================
};

class CfgVehicles {

	//Infantry Inheritances - Vanilla//
	class I_soldier_F;
	//class I_Soldier_lite_F;
	//class I_Soldier_A_F;
	//class I_Soldier_GL_F;
	//class I_soldier_AR_F;
	//class I_Soldier_SL_F;
	//class I_Soldier_TL_F;
	//class I_Soldier_M_F;
	//class I_Soldier_LAT_F;
	//class I_Soldier_AT_F;
	//class I_Soldier_AA_F;
	//class I_medic_F;
	//class I_Soldier_repair_F;
	//class I_Soldier_exp_F;
	//class I_engineer_F;
	//class I_crew_F;
	//class I_officer_F;
	//class I_Survivor_F;
	//class I_Soldier_unarmed_F;
	//class I_Spotter_F;
	//class I_Sniper_F;
	
	//class I_Soldier_AAR_F;
	//class I_Soldier_AAT_F;
	//class I_Soldier_AAA_F;
	//class I_support_MG_F;
	//class I_support_AMG_F;
	//class I_support_Mort_F;
	//class I_support_AMort_F;
	
	class SEP_I_CW_ALT_Man_Base: I_soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SPEX_CW_ARMY";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};
		genericNames = "GreekMen";
	};
	class SEP_I_CW_ALT_Soldier_Base: SEP_I_CW_ALT_Man_Base
	{
		uniformClass = "U_SPEX_CW_BD";
		class EventHandlers;
	};
	
	//Equipment Inheritances - Spearhead 1944//
	
//===================================
//Custom Classes (Men - Altian)
//SEP Commonwealth
//===================================

    #include "cfgALT_Units.hpp"
			
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
        class SPEX_CW_Army
		{
            name = "[SPEX] Commonwealth";
            class Infantry_Alt
			{
                name = "Men (Altian)";

                class SEP_I_CW_ALT_Command_Section {
                    name = "Command Section";
                    side = 2;
                    faction = "SPEX_CW_ARMY";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_1LT";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Sergeant";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Medic_SB";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Radioman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                };

                class SEP_I_CW_ALT_Infantry_Section {
                    name = "Infantry Section";
                    side = 2;
                    faction = "SPEX_CW_ARMY";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Section_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Team_Lead";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Bren_Gunner";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Bren_Asst";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_AmmoBearer";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };					
                };

                class SEP_I_CW_ALT_Rifle_Group {
                    name = "Rifle Group";
                    side = 2;
                    faction = "SPEX_CW_ARMY";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Section_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_AmmoBearer";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Rflmn";
                    };
                };
												
				class SEP_I_CW_ALT_Bren_Group {
                    name = "BREN Group";
                    side = 2;
                    faction = "SPEX_CW_ARMY";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Team_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Bren_Gunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Bren_Asst";
                    };		
                };

				class SEP_I_CW_ALT_PIAT_Group {
                    name = "AT Group";
                    side = 2;
                    faction = "SPEX_CW_ARMY";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_PIAT_Gunner";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_PIAT_Asst";
                    };			
                };
				
				class SEP_I_CW_ALT_Mortar_Group {
                    name = "Mortar Team";
                    side = 2;
                    faction = "SPEX_CW_ARMY";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Mortar_Gunner";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Mortar_Asst";
                    };	
                };
				
				class SEP_I_CW_ALT_Scout_Section {
                    name = "Scout Section";
                    side = 2;
                    faction = "SPEX_CW_ARMY";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Team_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Sniper";
                    };	
                };
			};
        };
		
        class SPEX_CW_ARMY_TROP
		{
            name = "[SPEX] Commonwealth (Tropic)";
            class Infantry_Alt
			{
                name = "Men (Altian)";

                class SEP_I_CW_ALT_Trop_Command_Section {
                    name = "Command Section";
                    side = 2;
                    faction = "SPEX_CW_ARMY_TROP";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_1LT";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Sergeant";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Medic_SB";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Radioman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                };

                class SEP_I_CW_ALT_Trop_Infantry_Section {
                    name = "Infantry Section";
                    side = 2;
                    faction = "SPEX_CW_ARMY_TROP";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Section_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Team_Lead";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Bren_Gunner";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Bren_Asst";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_AmmoBearer";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };					
                };

                class SEP_I_CW_ALT_Trop_Rifle_Group {
                    name = "Rifle Group";
                    side = 2;
                    faction = "SPEX_CW_ARMY_TROP";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Section_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_AmmoBearer";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Rflmn";
                    };
                };
												
				class SEP_I_CW_ALT_Trop_Bren_Group {
                    name = "BREN Group";
                    side = 2;
                    faction = "SPEX_CW_ARMY_TROP";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Team_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Bren_Gunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Bren_Asst";
                    };		
                };

				class SEP_I_CW_ALT_Trop_PIAT_Group {
                    name = "AT Group";
                    side = 2;
                    faction = "SPEX_CW_ARMY_TROP";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_PIAT_Gunner";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_PIAT_Asst";
                    };			
                };
				
				class SEP_I_CW_ALT_Trop_Mortar_Group {
                    name = "Mortar Team";
                    side = 2;
                    faction = "SPEX_CW_ARMY_TROP";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Mortar_Gunner";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Mortar_Asst";
                    };	
                };
				
				class SEP_I_CW_ALT_Trop_Scout_Section {
                    name = "Scout Section";
                    side = 2;
                    faction = "SPEX_CW_ARMY_TROP";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Team_Lead";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_CW_ALT_Trop_Sniper";
                    };	
                };
			};
        };
    };
};
