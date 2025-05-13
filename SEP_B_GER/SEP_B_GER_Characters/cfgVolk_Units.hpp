    class SEP_B_GER_Volk_Rflmn : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (K98k)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
	
	class SEP_B_GER_Volk_Rflmn_MP507 : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (MP 507)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn_MP507.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_GER_U_FieldUniform_Volk";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_MP507","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_MP507","Put","Throw"};

        magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
	
    class SEP_B_GER_Volk_Rflmn_Unr : B_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman, Unarmed";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn_Unr.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
		
    class SEP_B_GER_Volk_Militia_K98 : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia (K98)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_K98.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_GER_U_Suit_Swetr_Brn";

        linkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_FFI_Gasbag";
    };
	
    class SEP_B_GER_Volk_Militia_G98 : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia (Gewehr 98)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_G98.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_GER_U_Coverall_Blu";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_1","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_Gewehr98","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_Gewehr98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_FFI_Gasbag";
    };
	
    class SEP_B_GER_Volk_Militia_MP507 : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia (MP 507)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_MP507.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_GER_U_Casual_1";

        linkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_CIV_Worker_Cap_2","V_SPE_FFI_Vest_Pouch","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SEP_WP_MP507","Put","Throw"};
        respawnWeapons[] = {"SEP_WP_MP507","Put","Throw"};

        magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		
    };
	
    class SEP_B_GER_Volk_Militia_Unr : B_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia, Unarmed";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Militia_Unr.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Suit_Swetr_Brn";

        linkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
		
    class SEP_B_GER_Volk_Gren : B_Soldier_GL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Gren.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk";

        linkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98_GW","Put","Throw"};
        respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
		
    class SEP_B_GER_Volk_MG_MG34 : B_support_MG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner (MG 34)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_MG_MG34.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MG34","Put","Throw"};
        respawnWeapons[] = {"SPE_MG34","Put","Throw"};

        magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_GER_B_MG_Volk_MG34";
    };
	
    class SEP_B_GER_Volk_AMG : B_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machine Gunner";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AMG.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Coverall_Blu";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","SPE_Lafette_Tripod","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

		backpack = "_xx_SEP_B_GER_B_MG_Volk_MG34";	
    };
			
    class SEP_B_GER_Volk_SL : B_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_SL.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MP40","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";	
    };
	
    class SEP_B_GER_Volk_ASL : B_Soldier_TL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Squad Leader";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_SL.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MP40","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";	
    };
	
    class SEP_B_GER_Volk_Sniper : B_sniper_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sniper.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

        linkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Gry","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
        weapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SPE_k98zf39","SPE_P08","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
	
    class SEP_B_GER_Volk_AT_Grenadier : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT soldier (AT Grenade)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Rflmn.jpg";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
		
		backpack = "B_SPE_GER_A_frame_AT";
    };
	
    class SEP_B_GER_Volk_AT_PZ30 : B_soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier (Panzerfaust 30)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AT_PZ30.jpg";   

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Suit_Blk";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};
        respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_30m"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_CIV_musette";
    };
	
    class SEP_B_GER_Volk_AT_PZ60 : B_soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier (Panzerfaust 60)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_AT_PZ60.jpg";   

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Suit_Gry";

        linkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"SEP_B_GER_H_FieldCap_Brn","V_SPE_FFI_Vest_rifle_frag","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};
        respawnWeapons[] = {"SPE_K98","Put","Throw","SPE_PzFaust_60m"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_CIV_musette";
    };
		
    class SEP_B_GER_Volk_Medic : B_medic_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Medic.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Suit_Swetr_Brn";

        linkedItems[] = {"H_SPE_GER_Helmet_Medic","G_SPE_Dienst_Brille","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet_Medic","G_SPE_Dienst_Brille","V_SPE_FFI_Vest_rifle","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_US_M18_Violet)};
		
		backpack = "_xx_SEP_B_GER_B_Volk_Medic";
    };

    class SEP_B_GER_Volk_Sapper_Gefr : B_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sapper (Corporal)";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sapper_Gefr.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_GER_B_Explosives";
    };
	
    class SEP_B_GER_Volk_Sapper : B_engineer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sapper";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Sapper.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_FieldUniform_Volk_Unblsd";

        linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98","Put","Throw"};
        respawnWeapons[] = {"SPE_K98","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "_xx_SEP_B_GER_B_Explosives";
    };
			
    class SEP_B_GER_Volk_Ofcr : B_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Captain";
        side = 1;
        faction = "SPE_WEHRMACHT";
		editorSubcategory="SEP_B_GER_Units_Infantry_Volk";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Volk_Ofcr.jpg";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "U_SPE_GER_Hauptmann";

        linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
        weapons[] = {"SPE_MP40","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};

    };