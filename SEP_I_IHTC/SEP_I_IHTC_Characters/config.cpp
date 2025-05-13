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
			"SEP_I_IHTC_Engi_Expl",
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
//Custom Classes (Headgear)
//===================================
	
	class SEP_I_IHTC_H_SafariHat : H_Hat_Safari_sand_F
	{
		author = "Joe";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "HI Safari Hat";
		descriptionShort = "No Armor";
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_Hat_Safari_sand_CA.paa";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_H_SafariHat_co.paa"
		};
	};
	
    class SEP_I_IHTC_H_CoconutHelmet : H_HelmetB
	{
		author = "OokamiJamie";
		displayName = "HI Coconut Pith";
		picture = "\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_H_CoconutHelmet_ca.paa";
		scope = 2;
		model = "\SEP_I_IHTC\SEP_I_IHTC_Characters\SEP_IHTC_H_CoconutHelmet.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_H_CoconutHelmet_CO.paa"
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
				"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_H_CoconutHelmet_CO.paa"
			};
			uniformModel = "\SEP_I_IHTC\SEP_I_IHTC_Characters\SEP_IHTC_H_CoconutHelmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 2;
					passThrough = 0.2;
				};
			};
		};
	};

//===================================
//Custom Classes (Uniforms)
//===================================

	class SEP_I_IHTC_U_HBT_Khk : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "HI Wool 1943 HBT";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Khk_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_IHTC_U_HBT_Khk_CFV";
			containerClass = "Supply40";
			mass=20;
		};
	};
		
	class SEP_I_IHTC_U_HBT_Rolled_Khk : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "HI Wool 1943 HBT (Rolled)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Rolled_Khk_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_IHTC_U_HBT_Rolled_Khk_CFV";
			containerClass = "Supply40";
			mass=20;
		};
	};
	
	class SEP_I_IHTC_U_HBT_Medic_Khk : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "HI Wool 1943 HBT (Medic)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Medic_Khk_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_IHTC_U_HBT_Medic_Khk_CFV";
			containerClass = "Supply40";
			mass=20;
		};
	};
		
	class SEP_I_IHTC_U_HBT_Medic_Rolled_Khk : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "HI Wool 1943 HBT (Medic, Rolled)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Medic_Rolled_Khk_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_IHTC_U_HBT_Medic_Rolled_Khk_CFV";
			containerClass = "Supply40";
			mass=20;
		};
	};
	
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
	//class I_Soldier_A_F;
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

	//Equipment Inheritances - Spearhead 1944//
	class B_SPE_US_Backpack;					//US Haversack, M1928
	class B_SPE_US_Backpack_Bandoleer;			//US Haversack, M1928 (Bandoleer)
	class B_SPE_US_Backpack_RocketBag_Empty;	//US Haversack, M1928 (M6)
	
	class B_SPE_CIV_musette;					//Sling Bag
	
	//Infantry Inheritances - Spearhead 1944//
		
	class SPE_FFI_Jacket_zwart_alt;				//Suit Open Black (Plaid Shirt)
	class SPE_FFI_Jacket_grijs_swetr;			//Suit Open Grey (Sweater)

	class SPE_CIV_Swetr_4_vest;					//Sweater Vest
	class SPE_FFI_Worker_1;						//Working Outfit
	
	class SPE_CIV_Worker_Coverall_3;			//Worker Coveralls (Grey)
	class SPE_CIV_Worker_Coverall_3_trop;		//Worker Coveralls (Grey, Rolled)
	
	class SPE_US_CC_HBT_EM;
	class SPE_US_CC_HBT_EM_roll;
	
//===================================
//Custom Classes (INFANTRY - ARMIA KRAJOWA)
//SEP Îles Horizon Troupes Coloniales
//===================================

    class SEP_I_IHTC_Rflmn_M1903 : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_M1903.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";
      
        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_CIV_satchel";
    };
	
    class SEP_I_IHTC_Rflmn_Carb : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Carbine)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_Carb.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";
      
        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "";
    };
		
    class SEP_I_IHTC_Rflmn_Lite : I_Soldier_lite_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman, Light";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_Lite.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";
      
        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_FFI_Gasbag";
    };	
	
    class SEP_I_IHTC_Rflmn_Unr : I_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman, Unarmed";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Rflmn_Unr.jpg";
		icon = "iconMan";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "B_SPE_CIV_satchel";
    };
	
    class SEP_I_IHTC_Gren : I_Soldier_GL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Gren.jpg";
		icon = "iconManGrenadier";
		
        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";
      
        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_CIV_satchel";
    };
			
    class SEP_I_IHTC_AR : I_soldier_AR_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_AR.jpg";
		icon = "iconManMG";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_FM_24_M29","Put","Throw"};
        respawnWeapons[] = {"SPE_FM_24_M29","Put","Throw"};

        magazines[] = {MAG_15(SPE_25Rnd_75x54),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_15(SPE_25Rnd_75x54),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_IHTC_B_AR";
    };
	
    class SEP_I_IHTC_AAR : I_Soldier_AAR_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Automatic Rifleman";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_AAR.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};

		backpack = "_xx_SEP_I_IHTC_B_AAR";	
    };
			
    class SEP_I_IHTC_SL : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_SL.jpg";
		icon = "iconManOfficer";

        identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1A1_Thompson","Put","Throw"};
        respawnWeapons[] = {"SPE_M1A1_Thompson","Put","Throw"};

        magazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
		
		backpack = "";	
    };
	
    class SEP_I_IHTC_ASL : I_Soldier_TL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Squad Leader";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_ASL.jpg";
		icon = "iconManLeader";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "";	
    };
	
    class SEP_I_IHTC_Sniper : I_Sniper_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Sniper.jpg";
		icon = "iconManRecon";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_CIV_satchel";
    };
		
    class SEP_I_IHTC_AT : I_Soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_AT.jpg";
		icon = "iconManAT";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_IHTC_B_AT";
    };
		
    class SEP_I_IHTC_Medic : I_medic_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Medic.jpg";
		icon = "iconManMedic";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Medic_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
        respawnMagazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
		
		backpack = "_xx_SEP_I_IHTC_B_Medic";
    };
		
    class SEP_I_IHTC_Engi : I_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Engi.jpg";
		icon = "iconManEngineer";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_IHTC_B_Engineer";
    };
	
    class SEP_I_IHTC_Engi_Expl : I_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (Explosives)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Engi_Expl.jpg";
		icon = "iconManEngineer";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_IHTC_B_Explosives";
    };
			
    class SEP_I_IHTC_Cpt : I_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Captain";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Cpt.jpg";
		icon = "iconManCommander";

        identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_FR_Adrian","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};

		backpack = "";
    };
	
    class SEP_I_IHTC_Radio : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radioman";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Radio.jpg";
		icon = "iconManRTO";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_Radio";
    };
	
	class SEP_I_IHTC_Mortar_Gunner : I_support_Mort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (81 mm M1)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Mortar_Gunner.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_FR_packboard_mortar_loaded";
    };
	
	class SEP_I_IHTC_Mortar_AGunner : I_support_AMort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (81 mm M1)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Mortar_AGunner.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_FR_packboard_mortar_loaded";
    };
	
	class SEP_I_IHTC_Mortar_AmmoBearer : I_support_AMort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (81 mm M1)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Mortar_AmmoBearer.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_FR_packboard_mortar_loaded";
    };
	
    class SEP_I_IHTC_GunCrew : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="SEP_I_IHTC_Units_GunCrew";
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_GunCrew.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_IHTC_GunCrew_Srgt : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew (Sergeant)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="SEP_I_IHTC_Units_GunCrew";
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_GunCrew_Srgt.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_IHTC_Tank_Crew : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Private)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="SEP_I_IHTC_Units_TankCrew";
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Tank_Crew.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";

        uniformClass = "U_SPE_US_Tank_Coverall_Trop_Legging";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_NG","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_NG","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
        respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

        magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_IHTC_Tank_Sergeant : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Sergeant)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="SEP_I_IHTC_Units_TankCrew";
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Tank_Sergeant.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "U_SPE_US_Tank_Coverall_Trop_Legging";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_Thompson","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
        respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

        magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_IHTC_Tank_Second_Lieutenant : I_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Second Lieutenant)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="SEP_I_IHTC_Units_TankCrew";
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Tank_Second_Lieutenant.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"SPE_LanguageFRE","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "U_SPE_US_Tank_Coverall_Trop_Legging";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1911","Put","Throw"};

        magazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_IHTC_Driver : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Driver.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";
      
        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_CoconutHelmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_IHTC_Driver_Lite : I_Soldier_lite_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver (Light)";
        side = 2;
        faction = "SEP_I_IHTC_Units";
		editorSubcategory="EdSubcat_Personnel";		
		editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Characters\data\editorPreviews\SEP_I_IHTC_Driver_Lite.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"SPE_LanguageFRE","Head_African","NoGlasses"};
		genericNames = "TanoanMen";
      
        uniformClass = "SEP_I_IHTC_U_HBT_Rolled_Khk";

        linkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_IHTC_H_SafariHat","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
    };
					
//===================================
//Textures - Uniforms
//===================================

	class SEP_I_IHTC_U_HBT_Khk_CFV : SPE_US_CC_HBT_EM
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="HI Wool 1943 HBT";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_IHTC_U_HBT_Khk";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Top_Khk_co.paa",
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Pnts_Khk_co.paa",
			""
		};
		modelSides[] = {6};
	};

	class SEP_I_IHTC_U_HBT_Rolled_Khk_CFV : SPE_US_CC_HBT_EM_roll
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="HI Wool 1943 HBT (Rolled)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_IHTC_U_HBT_Rolled_Khk";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Top_Khk_co.paa",
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Pnts_Khk_co.paa",
			""
		};
		modelSides[] = {6};
	};
	
	class SEP_I_IHTC_U_HBT_Medic_Khk_CFV : SPE_US_CC_HBT_EM
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="HI Wool 1943 HBT (Medic)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_IHTC_U_HBT_Medic_Khk";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"badge",
			"armband",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Top_Khk_co.paa",
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Pnts_Khk_co.paa",
			"\a3\data_f\clear_empty.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\Armband_Medic_co.paa",
			"\a3\data_f\clear_empty.paa"
		};
		modelSides[] = {6};
	};

	class SEP_I_IHTC_U_HBT_Medic_Rolled_Khk_CFV : SPE_US_CC_HBT_EM_roll
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="HI Wool 1943 HBT (Medic, Rolled)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_IHTC_U_HBT_Medic_Rolled_Khk";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"badge",
			"armband",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Top_Khk_co.paa",
			"\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_U_HBT_Pnts_Khk_co.paa",
			"\a3\data_f\clear_empty.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\Armband_Medic_co.paa",
			"\a3\data_f\clear_empty.paa"
		};
		modelSides[] = {6};
	};
		
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
