#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_B_EHM_Characters
	{
        units[] = {
			//Infantry//
			"SEP_B_EHM_Militia_G98",
			"SEP_B_EHM_Militia_Lite",
			"SEP_B_EHM_Militia_Unr",
			"SEP_B_EHM_MG_MG34",
			"SEP_B_EHM_AMG",
			"SEP_B_EHM_SL",
			"SEP_B_EHM_ASL",
			"SEP_B_EHM_Medic"
        };
        weapons[] = {
			//Weapons//
			//Headgear//
			"SEP_B_EHM_H_Stahlhelm_M16",
			//NVGs//
			//Uniforms//
			"SEP_B_EHM_U_FieldUniform",
			"SEP_B_EHM_U_FieldUniform_Rolled",
			//Vests//
			//Backpacks//
			"_xx_SEP_B_EHM_B_Early_Gascape",
			"_xx_SEP_B_EHM_B_Early_Beltbag",
			"_xx_SEP_B_EHM_B_Early_Ammoalt",
			"_xx_SEP_B_EHM_B_MG_MG34",
			"_xx_SEP_B_EHM_B_Early_Medic"
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
	class SEP_B_GER_H_Stahlhelm_M16;
	
//===================================
//Custom Classes (Headgear)
//===================================

	class SEP_B_EHM_H_Stahlhelm_M16 : SEP_B_GER_H_Stahlhelm_M16
	{
		author = "Joe";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "EHM Stahlhelm 1916";
		descriptionShort = "Armor Level I";
		picture = "\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_H_Stahlhelm_M16_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_B_EHM\SEP_B_EHM_Characters\data\SEP_B_EHM_H_Stahlhelm_M16_co.paa"
		};
	};
	
//===================================
//Custom Classes (Uniforms)
//===================================

	class SEP_B_EHM_U_FieldUniform : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "EHM Field Uniform";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_U_FieldUniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_EHM_U_FieldUniform_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};

	class SEP_B_EHM_U_FieldUniform_Rolled : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "EHM Field Uniform (Rolled)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_U_FieldUniform_Rolled_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_EHM_U_FieldUniform_Rolled_CFV";
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
	class B_Soldier_F;
	class B_Soldier_lite_F;
	//class B_Soldier_A_F;
	class B_Soldier_GL_F;
	class B_soldier_AR_F;
	class B_Soldier_SL_F;
	class B_Soldier_TL_F;
	class B_soldier_M_F;
	class B_soldier_LAT_F;
	class B_soldier_AT_F;
	class B_soldier_AA_F;
	class B_medic_F;
	class B_engineer_F;
	class B_crew_F;
	class B_officer_F;
	class B_Pilot_F;
	class B_Helipilot_F;
	//class B_helicrew_F;
	//class B_soldier_repair_F;
	class B_soldier_exp_F;
	//class B_Survivor_F;
	class B_Soldier_unarmed_F;
	class B_spotter_F;
	class B_sniper_F;
	class B_soldier_AAR_F;
	class B_soldier_AAT_F;
	class B_soldier_AAA_F;
	class B_support_MG_F;
	//class B_support_GMG_F;
	class B_support_AMG_F;
	//class B_Sharpshooter_F;
	//class B_HeavyGunner_F;
	
	//class B_recon_F;
	//class B_recon_M_F;
	//class B_recon_LAT_F;
	//class B_recon_medic_F;
	//class B_recon_exp_F;
	//class B_recon_TL_F;
	//class B_Recon_Sharpshooter_F;

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
	class SPE_LW_roll;							//Field Uniform (Rolled)
	
//===================================
//Custom Classes (INFANTRY)
//SEP Everon Homeland Militia
//===================================

    class SEP_B_EHM_Militia_G98 : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Militia_G98.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_EHM_U_FieldUniform";

        linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_EHM_B_Early_Gascape";
    };
	
    class SEP_B_EHM_Militia_Lite : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia, Light";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Militia_Lite.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_EHM_U_FieldUniform_Rolled";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_EHM_B_Early_Beltbag";
    };
	
    class SEP_B_EHM_Militia_Unr : B_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia, Unarmed";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Militia_Unr.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_EHM_U_FieldUniform";

        linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "_xx_SEP_B_EHM_B_Early_Gascape";
    };
		
    class SEP_B_EHM_MG_MG34 : B_support_MG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner (MG 34)";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_MG_MG34.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_EHM_U_FieldUniform";

        linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_erla_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

        magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_EHM_B_MG_MG34";
    };
	
    class SEP_B_EHM_AMG : B_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machine Gunner";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_AMG.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_EHM_U_FieldUniform";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SEP_WP_Gewehr98","SPE_Lafette_Tripod","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","SPE_Lafette_Tripod","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

		backpack = "_xx_SEP_B_EHM_B_MG_MG34";	
    };
			
    class SEP_B_EHM_SL : B_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_SL.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_EHM_U_FieldUniform";

        linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle_sidearm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle_sidearm","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_Gewehr98","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","SPE_P08","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_EHM_B_Early_Beltbag";	
    };
	
    class SEP_B_EHM_ASL : B_Soldier_TL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Squad Leader";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_ASL.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_EHM_U_FieldUniform_Rolled";

        linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_EHM_B_Early_Gascape";	
    };
		
    class SEP_B_EHM_Medic : B_medic_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_Medic.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_EHM_U_FieldUniform";

        linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","G_SPE_Dienst_Brille","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","G_SPE_Dienst_Brille","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
		
		backpack = "_xx_SEP_B_EHM_B_Early_Medic";
    };
	
    class SEP_B_EHM_RTO : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radioman";
        side = 1;
        faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Characters\data\editorPreviews\SEP_B_EHM_RTO.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_EHM_U_FieldUniform";

        linkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_EHM_H_Stahlhelm_M16","V_SPE_milice_Vest_zwart_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_Milice_Radio";
    };
							
//===================================
//Textures - Uniforms
//===================================

    class SEP_B_EHM_U_FieldUniform_CFV : SPE_LW_base
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="EHM Field Uniform";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass="SEP_B_EHM_U_FieldUniform";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"badge"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_B_EHM\SEP_B_EHM_Characters\data\SEP_B_EHM_U_Feldbluse_co.paa",
			"\SEP_B_EHM\SEP_B_EHM_Characters\data\SEP_B_EHM_U_Feldbluse_Pnts_co.paa",
			"\a3\data_f\clear_empty.paa",
			""
		};
	};

    class SEP_B_EHM_U_FieldUniform_Rolled_CFV : SPE_LW_roll
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="EHM Field Uniform (Rolled)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass="SEP_B_EHM_U_FieldUniform_Rolled";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"badge"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_B_EHM\SEP_B_EHM_Characters\data\SEP_B_EHM_U_Feldbluse_co.paa",
			"\SEP_B_EHM\SEP_B_EHM_Characters\data\SEP_B_EHM_U_Feldbluse_Pnts_co.paa",
			"\a3\data_f\clear_empty.paa",
			""
		};
	};
		
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
			class _xx_FirstAidKit
			{
				count=5;
				name="FirstAidKit";
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
            name = "[SPE] Everon Homeland Militia";	
			
            class InfantryVolk
			{
                name = "Infantry";

                class SEP_B_EHM_Infantry_Platoon_HQ {
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

                class SEP_B_EHM_Infantry_Sqd_MG34 {
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
												
                class SEP_B_EHM_Infantry_Fire_Team {
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
												
				class SEP_B_EHM_Infantry_Fire_Team_MG34 {
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
				
				class SEP_B_EHM_Infantry_2Man_Sentry {
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
				class SEP_B_EHM_Infantry_3Man_Sentry {
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
		};
    };
};
