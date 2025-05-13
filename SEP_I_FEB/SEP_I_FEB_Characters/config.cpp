#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_FEB_Characters
	{
        units[] = {
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
			"SEP_I_FEB_Spotter",
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
        weapons[] = {
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
				
//===================================
//Custom Classes (Headgear)
//===================================
			
//===================================
//Custom Classes (Uniforms)
//===================================
	
	class SEP_I_FEB_U_FU_Khk : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "FEB Field Uniform";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\icons\SEP_I_FEB_U_FU_Khk_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_FEB_U_FU_Khk_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_I_FEB_U_FU_Medic_Khk : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "FEB Field Uniform (Medic)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\icons\SEP_I_FEB_U_FU_Khk_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_FEB_U_FU_Medic_Khk_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_I_FEB_U_WU_1937 : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "FEB Wool 1937 Uniform";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_US_SC_EM_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_FEB_U_WU_1937_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_I_FEB_U_WU_1937_Rolled : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "FEB Wool 1937 Uniform (Rolled)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_US_SC_EM_roll_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_FEB_U_WU_1937_Rolled_CFV";
			containerClass= "Supply50";
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
	
//===================================
//Custom Classes (INFANTRY)
//SEP Força Expedicionária Brasileira
//===================================

    class SEP_I_FEB_Rflmn_M1903 : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Rflmn_M1903.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_Rflmn_Carb : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Carbine)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Rflmn_Carb.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_Rflmn_Unr : I_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman, Unarmed";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Rflmn_Unr.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_AmmoBearer : I_Soldier_A_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AmmoBearer.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_Ammo";
    };
	
    class SEP_I_FEB_Gren : I_Soldier_GL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Gren.jpg";
		icon = "iconManGrenadier";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
			
    class SEP_I_FEB_AR : I_soldier_AR_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AR.jpg";
		icon = "iconManMG";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1918A2_BAR","Put","Throw"};
        respawnWeapons[] = {"SPE_M1918A2_BAR","Put","Throw"};

        magazines[] = {MAG_15(SPE_20Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_15(SPE_20Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_AR";
    };
	
    class SEP_I_FEB_AAR : I_Soldier_AAR_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Automatic Rifleman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AAR.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};

		backpack = "_xx_SEP_I_FEB_B_AAR";	
    };
			
    class SEP_I_FEB_SL : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_SL.jpg";
		icon = "iconManOfficer";

        identityTypes[] = {"LanguageGRE_F","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1A1_Thompson","Put","Throw"};
        respawnWeapons[] = {"SPE_M1A1_Thompson","Put","Throw"};

        magazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_ASL : I_Soldier_TL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Squad Leader";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_ASL.jpg";
		icon = "iconManLeader";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
					
    class SEP_I_FEB_Spotter : I_Spotter_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Spotter.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_Sniper : I_Sniper_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Sniper.jpg";
		icon = "iconManRecon";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
		
    class SEP_I_FEB_AT : I_Soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AT.jpg";  
		icon = "iconManAT";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_AT";
    };
		
    class SEP_I_FEB_Medic : I_medic_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Medic.jpg";
		icon = "iconManMedic";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Medic_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_Med","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Med","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
        respawnMagazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
		
		backpack = "_xx_SEP_I_FEB_B_Medic";
    };
		
    class SEP_I_FEB_Engi : I_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Engi.jpg";
		icon = "iconManEngineer";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_WU_1937_Rolled";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_Engineer";
    };
	
    class SEP_I_FEB_Engi_Expl : I_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (Explosives)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Engi_Expl.jpg";
		icon = "iconManEngineer";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_WU_1937_Rolled";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_Explosives";
    };
			
    class SEP_I_FEB_Cpt : I_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Captain";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Cpt.jpg";
		icon = "iconManCommander";

        identityTypes[] = {"LanguageGRE_F","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_Cap","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Cap","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_Radio : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radioman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Radio.jpg";
		icon = "iconManRTO";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};

		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_Radio";
    };
	
	class SEP_I_FEB_Mortar_Gunner : I_support_Mort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (81 mm M1)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Mortar_Gunner.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};

		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_FR_packboard_mortar_loaded";
    };
	
	class SEP_I_FEB_Mortar_AGunner : I_support_AMort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (81 mm M1)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Mortar_AGunner.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};

		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_mortar_loaded";
    };
	
	class SEP_I_FEB_Mortar_AmmoBearer : I_support_AMort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (81 mm M1)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Mortar_AmmoBearer.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_mortar_loaded";
    };
	
	class SEP_I_FEB_Flamethrower_Operator : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flamethrower Operator";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Flamethrower_Operator.jpg";
		icon = "iconMan";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_ns","G_SPE_Polar_Goggles","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","G_SPE_Polar_Goggles","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M2_Flamethrower","SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M2_Flamethrower","SPE_M1911","Put","Throw"};

        magazines[] = {MAG_4(SPE_7Rnd_45ACP_1911)};
        respawnMagazines[] = {MAG_4(SPE_7Rnd_45ACP_1911)};

		backpack = "B_SPE_US_M2Flamethrower";
    };
	
    class SEP_I_FEB_HMGunner : I_support_MG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine-Gunner";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMGunner.jpg";
		icon = "iconManMG";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1919A4","SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1919A4","SPE_M1911","Put","Throw"};

        magazines[] = {MAG_4(SPE_50Rnd_762x63),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_4(SPE_50Rnd_762x63),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_HMGbag";
    };
	
    class SEP_I_FEB_HMGunner_M2 : I_support_MG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine-Gunner (M2)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMGunner_M2.jpg";
		icon = "iconManMG";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","SPE_M2_50","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M2_50","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_GP_bag_M2";
    };
	
	class SEP_I_FEB_HMG_AmmoBearer : I_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (HMG)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMG_AmmoBearer.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_ammo_HMG";
    };
	
	class SEP_I_FEB_HMG_AmmoBearer_M2 : I_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (M2 HMG)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMG_AmmoBearer_M2.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_ammo_HMG_M2";
    };
	
	class SEP_I_FEB_AHMGunner : I_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assist. Machine-Gunner";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AHMGunner.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_M2_Tripod","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M2_Tripod","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_50Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_50Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_HMGAssistantBag";
    };
	
	class SEP_I_FEB_AHMGunner_M2 : I_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assist. Machine-Gunner (M2)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AHMGunner_M2.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_M3_Tripod","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M3_Tripod","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_ammo_HMG_M2";
    };
	
    class SEP_I_FEB_GunCrew : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_GunCrew";
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_GunCrew.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_WU_1937_Rolled";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_GunCrew_Srgt : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew (Sergeant)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_GunCrew";
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_GunCrew_Srgt.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "SEP_I_FEB_U_WU_1937_Rolled";

        linkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_Pilot : I_pilot_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flying Officer";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Pilot.jpg";
		icon = "iconManPilot";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_S31_erla_boot";

        linkedItems[] = {"H_SPE_US_Helmet_Pilot","V_SPE_US_LifeVest","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Pilot","V_SPE_US_LifeVest","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1911","Put","Throw"};

        magazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
        respawnMagazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
		
		backpack = "B_SPE_US_TypeA3";
    };
	
	class SEP_I_FEB_Tank_Crew : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Private)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_TankCrew";
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Tank_Crew.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Tank_Crew";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_NG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_NG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
        respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

        magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_FEB_Tank_Sergeant : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Sergeant)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_TankCrew";
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Tank_Sergeant.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Tank_Crew";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
        respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

        magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_FEB_Tank_Second_Lieutenant : I_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Second Lieutenant)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_TankCrew";
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Tank_Second_Lieutenant.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Tank_Crew";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45_off","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45_off","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1911","Put","Throw"};

        magazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_FEB_Driver : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Driver.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "SEP_I_FEB_U_FU_Khk";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_FEB_Driver_Lite : I_Soldier_lite_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver (Light)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Driver_Lite.jpg";
		icon = "iconManSemiauto";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "SEP_I_FEB_U_WU_1937_Rolled";

        linkedItems[] = {"H_SPE_US_jeep_cap","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_jeep_cap","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
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

	class SEP_I_FEB_U_FU_Khk_CFV : SPE_US_Private_1st
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="FEB Field Uniform";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_FEB_U_FU_Khk";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_FEB\SEP_I_FEB_Characters\data\SEP_I_FEB_U_FU_Top_Khk_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Woolie_co.paa",
			""
		};
		modelSides[] = {6};
	};
	
	class SEP_I_FEB_U_FU_Medic_Khk_CFV : SPE_US_Med
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="FEB Field Uniform (Medic)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_FEB_U_FU_Medic_Khk";
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
			"\SEP_I_FEB\SEP_I_FEB_Characters\data\SEP_I_FEB_U_FU_Top_Khk_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Woolie_co.paa",
			"\a3\data_f\clear_empty.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\Armband_Medic_co.paa",
			"\a3\data_f\clear_empty.paa"
		};
		modelSides[] = {6};
	};
	
	class SEP_I_FEB_U_WU_1937_CFV : SPE_US_SC_EM
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="FEB Wool 1937 Uniform";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_FEB_U_WU_1937";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_FEB\SEP_I_FEB_Characters\data\SEP_I_FEB_U_WU_Top_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Woolie_co.paa",
			""
		};
		modelSides[] = {6};
	};
	
	class SEP_I_FEB_U_WU_1937_Rolled_CFV : SPE_US_SC_EM_roll
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="FEB Wool 1937 Uniform (Rolled)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_FEB_U_WU_1937_Rolled";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_FEB\SEP_I_FEB_Characters\data\SEP_I_FEB_U_WU_Top_co.paa",
			"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Woolie_co.paa",
			""
		};
		modelSides[] = {6};
	};
		
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
				
                class SEP_I_FEB_Infantry_Sqd {
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

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_Carb";
                    };
                    class Unit2 {
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

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_M1903";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_FEB_Rflmn_Carb";
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
                        vehicle = "SEP_I_FEB_Spotter";
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
