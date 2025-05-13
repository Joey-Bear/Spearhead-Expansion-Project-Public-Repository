#include"\SEP_Misc\SEP_defines.hpp"
class CfgPatches
{
	class SEP_I_RAR_Characters
	{
        units[] = {
			//Infantry - Army//
			"SEP_I_RAR_Rflmn",
			"SEP_I_RAR_Rflmn_Unr",
			"SEP_I_RAR_AR",
			"SEP_I_RAR_AAR",
			"SEP_I_RAR_SL",
			"SEP_I_RAR_ASL",
			"SEP_I_RAR_AT",
			"SEP_I_RAR_Medic",
			"SEP_I_RAR_Engi",
			"SEP_I_RAR_Engi_Expl",
			"SEP_I_RAR_Cpt",
			"SEP_I_RAR_Radio",
			//Men (Artillery)//
			"SEP_I_RAR_GunCrew",
			"SEP_I_RAR_GunCrew_Srgt",
			//Men (Tank crew)//
			"SEP_I_RAR_Tank_Crew",
			"SEP_I_RAR_Tank_Second_Lieutenant",
			"SEP_I_RAR_Tank_Sergeant",
			//Men (Drivers)//
			"SEP_I_RAR_Driver",
        };
        weapons[] = {
			//Weapons//
			//Headgear//
            "SEP_I_RAR_H_Mk2Helmet",
            "SEP_I_RAR_H_Mk2Helmet_ns",
			//Uniforms//
			//Vests//
			//Backpacks//
			"_xx_SEP_I_RAR_B_Medic",
			"_xx_SEP_I_RAR_B_AR_Bren",
			"_xx_SEP_I_RAR_B_Lnch_AT",
			"_xx_SEP_I_RAR_B_Explosives",
			"_xx_SEP_I_RAR_B_Engineer"
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
    
    class SEP_I_RAR_H_Mk2Helmet: H_HelmetB
	{
		author = "OokamiJamie";
		displayName = "RAR Mk.2 Helmet";
		picture = "\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\icons\SEP_I_RAR_H_Mk2Helmet_ca.paa";
		scope = 2;
		model = "\SEP_I_RAR\SEP_I_RAR_Characters\SEP_I_RAR_H_Mk2Helmet.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_RAR\SEP_I_RAR_Characters\Data\SEP_I_RAR_H_Mk2Helmet_CO.paa"
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
				"\SEP_I_RAR\SEP_I_RAR_Characters\Data\SEP_I_RAR_H_Mk2Helmet_CO.paa"
			};
			uniformModel = "\SEP_I_RAR\SEP_I_RAR_Characters\SEP_I_RAR_H_Mk2Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 4;
					passThrough = 0.4;
				};
			};
		};
	};

    class SEP_I_RAR_H_Mk2Helmet_ns: H_HelmetB
	{
		author = "OokamiJamie";
		displayName = "RAR Mk.2 Helmet (Folded)";
		picture = "\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\icons\SEP_I_RAR_H_Mk2Helmet_ns_ca.paa";
		scope = 2;
		model = "\SEP_I_RAR\SEP_I_RAR_Characters\SEP_I_RAR_H_Mk2Helmet_ns.p3d";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_I_RAR\SEP_I_RAR_Characters\Data\SEP_I_RAR_H_Mk2Helmet_CO.paa"
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
				"\SEP_I_RAR\SEP_I_RAR_Characters\Data\SEP_I_RAR_H_Mk2Helmet_CO.paa"
			};
			uniformModel = "\SEP_I_RAR\SEP_I_RAR_Characters\SEP_I_RAR_H_Mk2Helmet_ns.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = HitHead;
					armor = 4;
					passThrough = 0.4;
				};
			};
		};
	};

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
	class B_SPE_US_RocketBag_Empty;
	class B_SPE_US_Backpack;
	
//===================================
//Custom Classes (INFANTRY)
//Royal Altian Regiment
//===================================

    class SEP_I_RAR_Rflmn : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Rflmn.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_RAR_Rflmn_Unr : I_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman, Unarmed";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Rflmn_Unr.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
    };
	
    class SEP_I_RAR_AR : I_soldier_AR_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_AR.jpg";
		icon = "iconManMG";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_LMG_303_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_LMG_303_Mk2","Put","Throw"};

        magazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_30Rnd_770x56),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_RAR_B_AR_Bren";
    };
	
    class SEP_I_RAR_AAR : I_Soldier_AAR_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Automatic Rifleman";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_AAR.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_3(SPE_30Rnd_770x56),MAG_2(SPE_US_Mk_2)};

		backpack = "_xx_SEP_I_RAR_B_AR_Bren";	
    };
	
    class SEP_I_RAR_SL : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_SL.jpg";
		icon = "iconManOfficer";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_RAR_ASL : I_Soldier_TL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Squad Leader";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_ASL.jpg";
		icon = "iconManLeader";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
		
    };
		
    class SEP_I_RAR_AT : I_Soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_AT.jpg";
		icon = "iconManAT";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw","SPE_M1A1_Bazooka"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw","SPE_M1A1_Bazooka"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_RAR_B_Lnch_AT";
    };
			
    class SEP_I_RAR_Medic : I_medic_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Medic.jpg";
		icon = "iconManMedic";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_RAR_B_Medic";
    };
	
    class SEP_I_RAR_Engi : I_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Engi.jpg";
		icon = "iconManEngineer";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_RAR_B_Engineer";
    };
	
    class SEP_I_RAR_Engi_Expl : I_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (Explosives)";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Engi_Expl.jpg";
		icon = "iconManEngineer";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_RAR_B_Explosives";
    };
	
    class SEP_I_RAR_Cpt : I_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Captain";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Cpt.jpg";
		icon = "iconManCommander";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew";

        linkedItems[] = {"H_Beret_blk","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_Beret_blk","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1911","Put","Throw"};

        magazines[] = {MAG_2(SPE_7Rnd_45ACP_1911)};
        respawnMagazines[] = {MAG_2(SPE_7Rnd_45ACP_1911)};
		
    };
	
    class SEP_I_RAR_Radio : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radioman";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Radio.jpg";
		icon = "iconManRTO";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Radio";
    };
	
    class SEP_I_RAR_GunCrew : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "SEP_I_RAR_Units_GunCrew";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_GunCrew.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet_ns","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet_ns","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_RAR_GunCrew_Srgt : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew (Sergeant)";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "SEP_I_RAR_Units_GunCrew";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_GunCrew_Srgt.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet_ns","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet_ns","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_RAR_Tank_Crew : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Private)";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory="SEP_I_RAR_Units_TankCrew";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Tank_Crew.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_NG","V_SPE_FFI_Vest_Pouch","SPE_US_ItemCompass","ItemMap"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_NG","V_SPE_FFI_Vest_Pouch","SPE_US_ItemCompass","ItemMap"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

        magazines[] = {MAG_8(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_RAR_Tank_Sergeant : I_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Sergeant)";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory="SEP_I_RAR_Units_TankCrew";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Tank_Sergeant.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_FFI_Vest_Pouch","SPE_US_ItemCompass","ItemMap","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_FFI_Vest_Pouch","SPE_US_ItemCompass","ItemMap","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_Sten_Mk2","Put","Throw"};
        respawnWeapons[] = {"SPE_Sten_Mk2","Put","Throw"};

        magazines[] = {MAG_8(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_32Rnd_9x19_Sten),MAG_2(SPE_US_Mk_2)};
		
    };
	
	class SEP_I_RAR_Tank_Second_Lieutenant : I_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Second Lieutenant)";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory="SEP_I_RAR_Units_TankCrew";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Tank_Second_Lieutenant.jpg";
		icon = "iconManTankcrew";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_FFI_Vest_Pouch","SPE_US_ItemCompass","ItemMap","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_FFI_Vest_Pouch","SPE_US_ItemCompass","ItemMap","SPE_Binocular_US"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1911","Put","Throw"};

        magazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
		
    };
	
    class SEP_I_RAR_Driver : I_soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver";
        side = 2;
        faction = "SEP_I_RAR_Units";
		editorSubcategory = "EdSubcat_Personnel";
		editorPreview="\SEP_I_RAR\SEP_I_RAR_Characters\data\ui\editorPreviews\SEP_I_RAR_Driver.jpg";
		icon = "iconManSemiauto";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};

        uniformClass = "U_SPE_FR_Tank_Crew3";

        linkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"SEP_I_RAR_H_Mk2Helmet","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};
        respawnWeapons[] = {"SPE_No3_Mk1_Enfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_770x56),MAG_2(SPE_US_Mk_2)};
		
    };
			
//===================================
//Textures - Uniforms
//===================================
	
//===================================
//Custom Classes (Backpacks)
//===================================
	
	class _xx_SEP_I_RAR_B_Medic: B_SPE_US_Backpack
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Infantry Backpack, Medic";
		descriptionShort= "Infantry Backpack, Medic";
		class TransportItems
		{
			class SPE_US_FirstAidKit
			{
				count=10;
				name="SPE_US_FirstAidKit";
			};
			class SPE_US_Medkit
			{
				count=1;
				name="SPE_US_Medkit";
			};
		};
	};
	
	class _xx_SEP_I_RAR_B_AR_Bren: B_SPE_US_Backpack
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Infantry Backpack, Bren";
		descriptionShort= "Infantry Backpack, Bren";
		class TransportMagazines
		{
			class _xx_SPE_30Rnd_770x56
			{
				count=8;
				magazine="SPE_30Rnd_770x56";
			};
		};
	};
		
	class _xx_SEP_I_RAR_B_Lnch_AT: B_SPE_US_RocketBag_Empty
	{
		author = "Joe";
		scope=1;
		scopeArsenal=0;
		displayName = "Infantry Backpack, AT";
		descriptionShort= "Infantry Backpack, AT";
		class TransportMagazines
		{
			class _xx_SPE_1Rnd_60mm_M6
			{
				count=4;
				magazine="SPE_1Rnd_60mm_M6";
			};
		};
	};
	
	
	class _xx_SEP_I_RAR_B_Explosives : B_SPE_US_Backpack
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
	
	class _xx_SEP_I_RAR_B_Engineer : B_SPE_US_Backpack
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
        class SEP_I_RAR
		{
            name = "[SEP] Royal Altian Regiment";
            class Infantry 
			{
                name = "Infantry";

                class SEP_I_RAR_Infantry_Platoon_HQ {
                    name = "Platoon Headquarters";
                    side = 2;
                    faction = "SEP_I_RAR_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 2;
                        vehicle = "SEP_I_RAR_Cpt";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_RAR_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_RAR_Radio";
                    };
                };

                class SEP_I_RAR_Infantry_Sqd {
                    name = "Infantry Section";
                    side = 2;
                    faction = "SEP_I_RAR_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "SEP_I_RAR_SL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_RAR_ASL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_AR";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Medic";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_AAR";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };					
                };

                class SEP_I_RAR_Infantry_Rifle_Group {
                    name = "Rifle Group";
                    side = 2;
                    faction = "SEP_I_RAR_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_RAR_ASL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                };
												
				class SEP_I_RAR_Infantry_Gun_Group {
                    name = "Gun Group";
                    side = 2;
                    faction = "SEP_I_RAR_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_RAR_ASL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_AR";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_AAR";
                    };		
                };

				class SEP_I_RAR_Infantry_Bazooka_Team {
                    name = "Bazooka Team";
                    side = 2;
                    faction = "SEP_I_RAR_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_AT.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_RAR_AT";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_AT";
                    };			
                };
				
				class SEP_I_RAR_Infantry_3Sentry_Team {
                    name = "3 Man Sentry";
                    side = 2;
                    faction = "SEP_I_RAR_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };		
                };
				
				class SEP_I_RAR_Infantry_2Sentry_Team {
                    name = "2 Man Sentry";
                    side = 2;
                    faction = "SEP_I_RAR_Units";
                    icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Infantry.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "SEP_I_RAR_Rflmn";
                    };	
                };
			};
        };
    };
};
