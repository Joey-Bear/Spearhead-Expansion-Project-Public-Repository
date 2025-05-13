#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_AK_Characters
	{
        units[] = {
			//Infantry - Armia Krajowa//
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
        weapons[] = {
			//Weapons//
			//Headgear//
			"SEP_I_AK_H_Stahlhelm_Flg",
			//NVGs//
			//Uniforms//
			"SEP_I_AK_U_Suit_Blk_Pld",
			"SEP_I_AK_U_Suit_Gry",
			"SEP_I_AK_U_Suit_WrkOut",
			"SEP_I_AK_U_Swetr_Plaid",
			"SEP_I_AK_U_Coverall_Gry",
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
//Custom Classes (Headgear)
//===================================

	class SEP_I_AK_H_Stahlhelm_Flg : H_SPE_GER_Helmet
	{
		author = "Joe";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "AK Stahlhelm 1942 (Flag)";
		descriptionShort = "Armor Level I";
		picture = "\SEP_I_AK\SEP_I_AK_Characters\data\ui\icons\SEP_I_AK_H_Stahlhelm_Flg_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_AK\SEP_I_AK_Characters\data\SEP_I_AK_H_Stahlhelm_Flg_co.paa"
		};
	};
		
//===================================
//Custom Classes (Uniforms)
//===================================
	
	class SEP_I_AK_U_Suit_Blk_Pld : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "AK Suit Open Black (Plaid Shirt)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_AK\SEP_I_AK_Characters\data\ui\icons\SEP_I_AK_U_Suit_Blk_Pld_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_AK_U_Suit_Blk_Pld_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_I_AK_U_Suit_Gry : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "AK Suit Open Grey (Sweater)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_AK\SEP_I_AK_Characters\data\ui\icons\SEP_I_AK_U_Suit_Gry_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_AK_U_Suit_Gry_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};

	class SEP_I_AK_U_Suit_WrkOut : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "AK Working Outfit (Grey/Brown)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_AK\SEP_I_AK_Characters\data\ui\icons\SEP_I_AK_U_Suit_WrkOut_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_AK_U_Suit_WrkOut_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};

	class SEP_I_AK_U_Swetr_Plaid : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "AK Sweater Vest (Plaid)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_AK\SEP_I_AK_Characters\data\ui\icons\SEP_I_AK_U_Swetr_Plaid_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_AK_U_Swetr_Plaid_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_I_AK_U_Coverall_Gry : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "AK Worker Coveralls (Grey)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_AK\SEP_I_AK_Characters\data\ui\icons\SEP_I_AK_U_Coverall_Gry_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_AK_U_Coverall_Gry_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_I_AK_U_FieldUniform_Sumpf : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "AK Field Uniform (Sumpf, Gaiters)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_I_AK\SEP_I_AK_Characters\data\ui\icons\SEP_I_AK_U_FieldUniform_Sumpf_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_I_AK_U_FieldUniform_Sumpf_CFV";
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
	class B_SPE_GER_MedicBackpack_Empty;
	class B_SPE_GER_Belt_bag_MG;
	class B_SPE_GER_Tonister41_Frame;
	
	class B_SPE_GER_A_frame_MGCan;				//A-Frame (MG Box)
	
	class B_SPE_CIV_musette;					//Sling Bag
	
	//Infantry Inheritances - Spearhead 1944//
		
	class SPE_FFI_Jacket_zwart_alt;				//Suit Open Black (Plaid Shirt)
	class SPE_FFI_Jacket_grijs_swetr;			//Suit Open Grey (Sweater)

	class SPE_CIV_Swetr_4_vest;					//Sweater Vest
	class SPE_FFI_Worker_1;						//Working Outfit
	
	class SPE_CIV_Worker_Coverall_3;			//Worker Coveralls (Grey)
	class SPE_CIV_Worker_Coverall_3_trop;		//Worker Coveralls (Grey, Rolled)
	
	class SPE_US_CC_HBT_EM_roll;
	
	class SPE_GER_soldier_camo5_gaiter;			//Field Uniform (Sumpf, Gaiters)
	
//===================================
//Custom Classes (INFANTRY - ARMIA KRAJOWA)
//SEP Armia Krajowa
//===================================

    class SEP_I_AK_Rflmn_K98 : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia (K98)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_K98.jpg";
		icon = "iconManRifleman";
		
        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";
      
        uniformClass = "SEP_I_AK_U_Suit_WrkOut";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_CIV_satchel";
    };
	
    class SEP_I_AK_Rflmn_Sten : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia (Sten)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Sten.jpg";
		icon = "iconManRifleman";
		
        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";
      
        uniformClass = "SEP_I_AK_U_Suit_WrkOut";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_Shg24)};
		
		backpack = "";
    };
	
    class SEP_I_AK_Rflmn_MP40 : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia (MP 40)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_MP40.jpg";
		icon = "iconManRifleman";
		
        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";
      
        uniformClass = "SEP_I_AK_U_Coverall_Gry";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MP40","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "";
    };
	
    class SEP_I_AK_Rflmn_Flame : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia (Flammenwerfer 41)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Flame.jpg";
		icon = "iconManRifleman";
		
        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";
      
        uniformClass = "SEP_I_AK_U_Coverall_Gry";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

        magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Flammenwerfer_41";
    };
		
    class SEP_I_AK_Rflmn_Lite : I_Soldier_lite_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia, Light";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Lite.jpg";
		icon = "iconManRifleman";
		
        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";
      
        uniformClass = "SEP_I_AK_U_Suit_Blk_Pld";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_FFI_Gasbag";
    };	
	
    class SEP_I_AK_Rflmn_Unr : I_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia, Unarmed";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Rflmn_Unr.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_WrkOut";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "B_SPE_CIV_satchel";
    };
	
    class SEP_I_AK_Gren : I_Soldier_GL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Gren.jpg";
		icon = "iconManGrenadier";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_Blk_Pld";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98_GW","Put","Throw"};
        respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_CIV_satchel";
    };
		
    class SEP_I_AK_MG_MG34 : I_support_MG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner (MG 34)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_MG_MG34.jpg";
		icon = "iconManMG";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_WrkOut";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MG34","Put","Throw"};
        respawnWeapons[] = {"SPE_MG34","Put","Throw"};

        magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_I_AK_B_MG_MG34";
    };
	
    class SEP_I_AK_AMG : I_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machine Gunner";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_AMG.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Coverall_Gry";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

		backpack = "_xx_SEP_I_AK_B_MG_MG34";	
    };
			
    class SEP_I_AK_SL : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_SL.jpg";
		icon = "iconManOfficer";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_FieldUniform_Sumpf";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_erla_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MP40","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "";	
    };
	
    class SEP_I_AK_ASL: I_Soldier_TL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Squad Leader";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_ASL.jpg";
		icon = "iconManLeader";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_WrkOut";

        linkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_CIV_Fedora_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "";	
    };
	
    class SEP_I_AK_Sniper : I_Sniper_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Sniper.jpg";
		icon = "iconManRecon";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_WrkOut";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_CIV_satchel";
    };
	
    class SEP_I_AK_AT_PZ30 : I_Soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier (Panzerfaust 30)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_AT_PZ30.jpg";   
		icon = "iconManAT";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_WrkOut";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};
        respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_CIV_musette";
    };
	
    class SEP_I_AK_AT_PZ60 : I_Soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier (Panzerfaust 60)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_AT_PZ60.jpg";  
		icon = "iconManAT";		

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_Gry";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};
        respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_CIV_musette";
    };
		
    class SEP_I_AK_Medic : I_medic_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Medic.jpg";
		icon = "iconManMedic";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_Blk_Pld";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_I_AK_B_Medic";
    };
	
    class SEP_I_AK_Sabo : I_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Saboteur";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Sabo.jpg";
		icon = "iconManExplosive";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Coverall_Gry";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_I_AK_B_Explosives";
    };
			
    class SEP_I_AK_Ofcr : I_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cell Leader";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Ofcr.jpg";
		icon = "iconManCommander";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Swetr_Plaid";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_SMG_pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
        weapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","SPE_P08","Put","Throw"};

        magazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_2(SPE_32Rnd_9x19),MAG_2(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};

		backpack = "";
    };
	
	class SEP_I_AK_Mortar_Gunner : I_support_Mort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GrW 278/1)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Mortar_Gunner.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Coverall_Gry";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Barrel","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
    };
	
	class SEP_I_AK_Mortar_AGunner : I_support_AMort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (GrW 278/1)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Mortar_AGunner.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Swetr_Plaid";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","SPE_GrW278_1_Stand","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
    };
	
	class SEP_I_AK_Mortar_AmmoBearer : I_support_AMort_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (GrW 278/1)";
        side = 2;
        faction = "SEP_I_AK_Units";
		editorSubcategory="SEP_I_AK_Units_Infantry";		
		editorPreview="\SEP_I_AK\SEP_I_AK_Characters\data\ui\editorPreviews\SEP_I_AK_Mortar_AmmoBearer.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","SPE_GER_Glasses"};
		genericNames = "EnochMen";

        uniformClass = "SEP_I_AK_U_Suit_Blk_Pld";

        linkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_AK_H_Stahlhelm_Flg","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar";
    };

					
//===================================
//Textures - Uniforms
//===================================
	
	class SEP_I_AK_U_Suit_Blk_Pld_CFV: SPE_FFI_Jacket_zwart_alt
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="AK Suit Open Black (Plaid Shirt)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_AK_U_Suit_Blk_Pld";
		hiddenSelectionsTextures[] = 
		{
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_zwart_d_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_d_co.paa",
			"\SEP_I_AK\SEP_I_AK_Characters\data\AK_Armband_co.paa"
		};
		modelSides[] = {6};
	};
		
	class SEP_I_AK_U_Suit_Gry_CFV: SPE_FFI_Jacket_grijs_swetr
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="AK Suit Open Grey (Sweater)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_AK_U_Suit_Gry";
		hiddenSelectionsTextures[] = 
		{
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_grijs_a_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_d_co.paa",
			"\SEP_I_AK\SEP_I_AK_Characters\data\AK_Armband_co.paa"
		};
		modelSides[] = {6};
	};
	
	class SEP_I_AK_U_Suit_WrkOut_CFV: SPE_FFI_Worker_1
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="AK Working Outfit (Grey/Brown)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_AK_U_Suit_WrkOut";
		hiddenSelectionsTextures[] = 
		{
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_d_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_grijs_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_e_co.paa",
			"",
			"\SEP_I_AK\SEP_I_AK_Characters\data\AK_Armband_co.paa",
			""
		};
		modelSides[] = {6};
	};
	
	class SEP_I_AK_U_Swetr_Plaid_CFV: SPE_CIV_Swetr_4_vest
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="AK Sweater Vest (Plaid)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_AK_U_Swetr_Plaid";
		hiddenSelectionsTextures[] = 
		{
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_f_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_c_co.paa",
			"",
			"\SEP_I_AK\SEP_I_AK_Characters\data\AK_Armband_co.paa",
			""
		};
		modelSides[] = {6};
	};	

	class SEP_I_AK_U_Coverall_Gry_CFV: SPE_CIV_Worker_Coverall_3
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="AK Worker Coveralls (Grey)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_AK_U_Coverall_Gry";
		hiddenSelectionsTextures[] = 
		{
			"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_covral_grijs_co.paa",
			"",
			"\SEP_I_AK\SEP_I_AK_Characters\data\AK_Armband_co.paa"
		};
		modelSides[] = {6};
	};
	
	class SEP_I_AK_U_FieldUniform_Sumpf_CFV: SPE_GER_soldier_camo5_gaiter
	{
		author="Joe";
		scope= 1;
		scopeArsenal=2;
		scopeCurator= 2;
		displayName="AK Field Uniform (Sumpf, Gaiters)";
		side = 2;
		nakedUniform="U_BasicBody";
		uniformClass= "SEP_I_AK_U_FieldUniform_Sumpf";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_AK\SEP_I_AK_Characters\data\SEP_I_AK_U_FieldUniform_Sumpf_co.paa",
			""
		};
		modelSides[] = {6};
	};	
			
//===================================
//Custom Classes (Backpacks)
//===================================
	
	class _xx_SEP_I_AK_B_Medic: B_SPE_CIV_musette
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Sling Bag (Sanitäter)";
		descriptionShort= "Sling Bag (Sanitäter)";
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
            name = "[SEP] Armia Krajowa";	
			
            class Infantry
			{
                name = "Infantry";

                class SEP_I_AK_Infantry_Platoon_HQ {
                    name = "Command Circle";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "SEP_I_AK_Ofcr";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_ASL";
                    };
					class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Medic";
                    };
                };

                class SEP_I_AK_Militia_Group {
                    name = "Militia Group";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                };
				
                class SEP_I_AK_Fighter_Cell {
                    name = "Fighter Cell";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };					
                };
												
                class SEP_I_AK_Infantry_Assault_Team {
                    name = "Assault Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };
                };
				
				class SEP_I_AK_Infantry_Tank_Hunter_Team_30 {
                    name = "Tank Hunter Team (PzF 30)";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ30";
                    };					
                };
				
				class SEP_I_AK_Infantry_Tank_Hunter_Team_60 {
                    name = "Tank Hunter Team (PzF 60)";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AT_PZ60";
                    };						
                };
												
				class SEP_I_AK_Infantry_MG_Team_MG34 {
                    name = "Machine Gun Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_MG_MG34";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AMG";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_MG_MG34";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_AMG";
                    };					
                };
								
				class SEP_I_AK_Infantry_Sabo_Team {
                    name = "Saboteur Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Sabo";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Sabo";
                    };		
                };
				
				class SEP_I_AK_Infantry_Flame_Team {
                    name = "Flammenwerfer 41 Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Flame";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Flame";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_Sten";
                    };			
                };
				
				class SEP_I_AK_Infantry_3Sentry_Team {
                    name = "3 Man Sentry";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };		
                };
				
				class SEP_I_AK_Infantry_2Sentry_Team {
                    name = "2 Man Sentry";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_K98";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Rflmn_MP40";
                    };	
                };				
				
				class SEP_I_AK_Infantry_Sniper_Team {
                    name = "Sniper Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Sniper";
                    };
                    class Unit1 {
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

                class SEP_I_AK_SupportInfantry_Mortar_Team {
                    name = "Mortar Team";
                    side = 2;
                    faction = "SEP_I_AK_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Mortar.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_AK_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_AK_Mortar_Gunner";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_AK_Mortar_AGunner";
                    };
					class Unit3 {
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
