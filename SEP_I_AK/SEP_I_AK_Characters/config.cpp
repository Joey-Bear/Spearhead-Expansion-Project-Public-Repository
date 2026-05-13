#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_AK_Characters
	{
        units[] = 
		{
			//Infantry - Polish Resistance//
			"SEP_I_AK_Rflmn_K98",
			"SEP_I_AK_Rflmn_Sten",
			"SEP_I_AK_Rflmn_MP40",
			"SEP_I_AK_Rflmn_Flame",
			"SEP_I_AK_Rflmn_Lite",
			"SEP_I_AK_Rflmn_Unr",
			"SEP_I_AK_Gren",
			"SEP_I_AK_MG_MG34",
			"SEP_I_AK_AMG",
			"SEP_I_AK_SL",
			"SEP_I_AK_ASL",
			"SEP_I_AK_Sniper",
			"SEP_I_AK_AT_PZ30",
			"SEP_I_AK_AT_PZ60",
			"SEP_I_AK_Medic",
			"SEP_I_AK_Sabo",
			"SEP_I_AK_Ofcr",
			"SEP_I_AK_Mortar_Gunner",
			"SEP_I_AK_Mortar_AGunner",
			"SEP_I_AK_Mortar_AmmoBearer",
        };
        weapons[] = 
		{
			//Weapons//
			//Headgear//
			"SEP_I_AK_H_Stahlhelm_Flg",
			//NVGs//
			//Uniforms - Civilian//
			"SEP_I_AK_U_Casual_1",
			"SEP_I_AK_U_Casual_Rolled_1",
			"SEP_I_AK_U_Casual_2",
			"SEP_I_AK_U_Casual_Rolled_2",
			"SEP_I_AK_U_Casual_3",
			"SEP_I_AK_U_Casual_Rolled_3",
			"SEP_I_AK_U_Casual_4",
			"SEP_I_AK_U_Casual_Rolled_4",
			"SEP_I_AK_U_Casual_5",
			"SEP_I_AK_U_Casual_Rolled_5",
			"SEP_I_AK_U_Casual_6",
			"SEP_I_AK_U_Casual_Rolled_6",
			"SEP_I_AK_U_Casual_7",
			"SEP_I_AK_U_Casual_Rolled_7",
			"SEP_I_AK_U_Jacket_zwart",
			"SEP_I_AK_U_Jacket_zwart_alt",
			"SEP_I_AK_U_Jacket_zwart_swetr",
			"SEP_I_AK_U_Jacket_bruin",
			"SEP_I_AK_U_Jacket_bruin_swetr",
			"SEP_I_AK_U_Jacket_grijs",
			"SEP_I_AK_U_Jacket_grijs_swetr",
			"SEP_I_AK_U_Worker_1",
			"SEP_I_AK_U_Worker_Rolled_1",
			"SEP_I_AK_U_Worker_2",
			"SEP_I_AK_U_Worker_Rolled_2",			
			"SEP_I_AK_U_Worker_3",
			"SEP_I_AK_U_Worker_Rolled_3",			
			"SEP_I_AK_U_Worker_4",
			"SEP_I_AK_U_Worker_Rolled_4",		
			"SEP_I_AK_U_Worker_Coverall_1",
			"SEP_I_AK_U_Worker_Coverall_Rolled_1",
			"SEP_I_AK_U_Worker_Coverall_2",
			"SEP_I_AK_U_Worker_Coverall_Rolled_2",
			"SEP_I_AK_U_Swetr_vest_1",
			"SEP_I_AK_U_Swetr_vest_2",
			"SEP_I_AK_U_Swetr_vest_3",
			"SEP_I_AK_U_Swetr_vest_4",
			"SEP_I_AK_U_Swetr_vest_5",
			//Uniforms - Captured//
			"SEP_I_AK_U_FieldUniform_Sumpf",
			//Vests//
			//Backpacks//
			"_xx_SEP_I_AK_B_Medic",
			"_xx_SEP_I_AK_B_MG_MG34",
			"_xx_SEP_I_AK_B_Explosives"
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
	class H_HelmetB;
	
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	
	//Equipment Inheritances - Spearhead 1944//
	class H_SPE_GER_Helmet;
			
//===================================
//Custom Classes (CfgWeapons)
//===================================

#include "cfgAK.hpp"

};

class CfgVehicles 
{

	//Infantry Inheritances - Vanilla//
	class I_soldier_F;

	//Equipment Inheritances - Spearhead 1944//
	class B_SPE_GER_MedicBackpack_Empty;
	class B_SPE_GER_Belt_bag_MG;
	class B_SPE_GER_Tonister41_Frame;	
	class B_SPE_GER_A_frame_MGCan;				//A-Frame (MG Box)	
	class B_SPE_CIV_musette;					//Sling Bag
	
	//Infantry Inheritances - Spearhead 1944//
	//Civilian
	class SPE_FFI_Casual_1;
	class SPE_FFI_Casual_1_trop;
	class SPE_FFI_Casual_2;
	class SPE_FFI_Casual_2_trop;
	class SPE_FFI_Casual_3;
	class SPE_FFI_Casual_3_trop;	
	class SPE_FFI_Casual_4;
	class SPE_FFI_Casual_4_trop;		
	class SPE_FFI_Casual_5;
	class SPE_FFI_Casual_5_trop;	
	class SPE_FFI_Casual_6;
	class SPE_FFI_Casual_6_trop;
	class SPE_FFI_Casual_7;
	class SPE_FFI_Casual_7_trop;
	class SPE_FFI_Jacket_zwart;
	class SPE_FFI_Jacket_zwart_Alt;
	class SPE_FFI_Jacket_zwart_swetr;
	class SPE_FFI_Jacket_bruin;
	class SPE_FFI_Jacket_bruin_swetr;
	class SPE_FFI_Jacket_grijs;
	class SPE_FFI_Jacket_grijs_swetr;
	class SPE_FFI_Worker_1;
	class SPE_FFI_Worker_1_trop;
	class SPE_FFI_Worker_2;
	class SPE_FFI_Worker_2_trop;
	class SPE_FFI_Worker_3;
	class SPE_FFI_Worker_3_trop;
	class SPE_FFI_Worker_4;
	class SPE_FFI_Worker_4_trop;
	class SPE_CIV_Worker_Coverall_2;
	class SPE_CIV_Worker_Coverall_2_trop;
	class SPE_CIV_Worker_Coverall_3;
	class SPE_CIV_Worker_Coverall_3_trop;
	
	class SPE_CIV_Swetr_1_vest;
	class SPE_CIV_Swetr_2_vest;	
	class SPE_CIV_Swetr_3_vest;	
	class SPE_CIV_Swetr_4_vest;	
	class SPE_CIV_Swetr_5_vest;	
	
	//Captured
	class SPE_GER_soldier_camo5_gaiter;			//Field Uniform (Sumpf, Gaiters)

	class SEP_I_AK_Man_Base: I_soldier_F
	{
		scope = 0;
		scopeCurator = 0;
		faction = "SEP_I_AK_Units";
		identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";
	};
	class SEP_I_AK_Soldier_Base: SEP_I_AK_Man_Base
	{
		uniformClass = "SEP_I_AK_U_Worker_1";
		class EventHandlers;
	};
	
//===================================
//Custom Classes (Men)
//SEP Polish Resistance
//===================================

    #include "cfgAK_Units.hpp"

//===================================
//Textures - Uniforms
//===================================

	#include "cfgAK_Uniforms.hpp"
			
//===================================
//Custom Classes (Backpacks)
//===================================
	
	class _xx_SEP_I_AK_B_Medic: B_SPE_CIV_musette
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Sling Bag (Medic)";
		descriptionShort= "Sling Bag (Medic)";
		class TransportItems
		{
			class SPE_GER_Medkit
			{
				count=10;
				name="SPE_GER_Medkit";
			};
			class Medikit
			{
				count=2;
				name="Medikit";
			};
		};
	};
		
	class _xx_SEP_I_AK_B_MG_MG34: B_SPE_CIV_musette
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Sling Bag, MG 34";
		descriptionShort= "Sling Bag, MG 34";
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
	
	class _xx_SEP_I_AK_B_Explosives : B_SPE_CIV_musette
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Sling Bag, Explosives";
		descriptionShort= "Sling Bag, Explosives";
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
			class _xx_SPE_Ladung_Small_MINE_mag
			{
				count=4;
				magazine="SPE_Ladung_Small_MINE_mag";
			};
			class _xx_SPE_Ladung_Big_MINE_mag
			{
				count=2;
				magazine="SPE_Ladung_Big_MINE_mag";
			};
		};	
	};
};

class CfgGroups 
{
    class Indep
	{
        class SEP_I_AK
		{
            name = "[SEP] Polish Resistance";	
			
            class Infantry
			{
                name = "Infantry";

                class SEP_I_AK_Infantry_Platoon_HQ 
				{
                    name = "Command Circle";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "SEP_I_AK_Ofcr";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_ASL";
                    };
					class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Medic";
                    };
                };

                class SEP_I_AK_Militia_Group 
				{
                    name = "Militia Group";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_ASL";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit4 
					{
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit5 
					{
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                };
				
                class SEP_I_AK_Fighter_Cell 
				{
                    name = "Fighter Cell";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_ASL";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit4 
					{
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit5 
					{
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit6 
					{
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit7 
					{
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit8 
					{
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit9 
					{
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit10 
					{
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit11 
					{
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };					
                };
												
                class SEP_I_AK_Infantry_Assault_Team 
				{
                    name = "Assault Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };
                    class Unit4 
					{
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };
                };
				
				class SEP_I_AK_Infantry_Tank_Hunter_Team_30 
				{
                    name = "Tank Hunter Team (PzF 30)";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };
                    class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };
                    class Unit4 
					{
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };					
                };
				
				class SEP_I_AK_Infantry_Tank_Hunter_Team_60 
				{
                    name = "Tank Hunter Team (PzF 60)";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };
                    class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };
                    class Unit4 
					{
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };						
                };
												
				class SEP_I_AK_Infantry_MG_Team_MG34 
				{
                    name = "Machine Gun Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_MG_MG34";
                    };
                    class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AMG";
                    };
                    class Unit4
					{
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_MG_MG34";
                    };
                    class Unit5 
					{
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AMG";
                    };					
                };
								
				class SEP_I_AK_Infantry_Sabo_Team 
				{
                    name = "Saboteur Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Sabo";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Sabo";
                    };		
                };
				
				class SEP_I_AK_Infantry_Flame_Team 
				{
                    name = "Flammenwerfer 41 Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Flame";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Flame";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };			
                };
				
				class SEP_I_AK_Infantry_3Sentry_Team 
				{
                    name = "3 Man Sentry";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };		
                };
				
				class SEP_I_AK_Infantry_2Sentry_Team 
				{
                    name = "2 Man Sentry";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };	
                };				
				
				class SEP_I_AK_Infantry_Sniper_Team 
				{
                    name = "Sniper Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Sniper";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Sniper";
                    };		
                };
			};

            class SupportInfantry
			{
                name = "Support Infantry";

                class SEP_I_AK_SupportInfantry_Mortar_Team 
				{
                    name = "Mortar Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 
					{
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 
					{
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Mortar_Gunner";
                    };
                    class Unit2 
					{
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Mortar_AGunner";
                    };
					class Unit3 
					{
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Mortar_AmmoBearer";
                    };
                };
			};			
        };
    };
};
