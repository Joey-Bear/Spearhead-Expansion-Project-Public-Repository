    class SEP_B_GER_Lehr_WIN_Rflmn_K98 : B_Soldier_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (K98k)";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_Rflmn_K98.jpg";
		icon = "iconManRifleman";
		
        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
      
        uniformClass = "SEP_B_GER_U_Parka_wht";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98_Late","Put","Throw"};
        respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
		
    class SEP_B_GER_Lehr_WIN_Rflmn_Unr : B_Soldier_unarmed_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_Rflmn_Unr.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Parka_wht";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };
	
    class SEP_B_GER_Lehr_WIN_Gren : B_Soldier_GL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_Gren.jpg";
		icon = "iconManGrenadier";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Parka_grau";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98_GW","Put","Throw"};
        respawnWeapons[] = {"SPE_K98_GW","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_Grenadier";
    };
	
    class SEP_B_GER_Lehr_WIN_MG_MG34 : B_support_MG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine-Gunner (MG 34)";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_MG_MG34.jpg";
		icon = "iconManMG";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Parka_grau_mix";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

        magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_MG";
    };
	
    class SEP_B_GER_Lehr_WIN_AMG : B_support_AMG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machine-Gunner";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_AMG.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Parka_wht";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		
        weapons[] = {"SPE_K98_Late","Put","Throw"};
        respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};

		backpack = "B_SPE_GER_Backpack_MGAmmo";
    };
	
    class SEP_B_GER_Lehr_WIN_MG_MG42 : B_support_MG_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine-Gunner (MG 42)";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_MG_MG42.jpg";
		icon = "iconManMG";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Parka_grau";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
        respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

        magazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_2(SPE_100Rnd_792x57),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_MG";
    };
		
    class SEP_B_GER_Lehr_WIN_SL : B_Soldier_SL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_SL.jpg";
		icon = "iconManOfficer";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Mantel_M40_Lehr";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MP40","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_Gef";
    };
	
    class SEP_B_GER_Lehr_WIN_ASL : B_Soldier_TL_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Squad Leader";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_ASL.jpg";
		icon = "iconManLeader";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_LwFD_Parka_wht";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_G43","Put","Throw"};
        respawnWeapons[] = {"SPE_G43","Put","Throw"};

        magazines[] = {MAG_20(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_10Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_Gef";
    };

    class SEP_B_GER_Lehr_WIN_AT_PZ60 : B_soldier_AT_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier (Panzerfaust 60)";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_AT_PZ60.jpg";   
		icon = "iconManAT";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Parka_grau_mix";

        linkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_GER_HelmetCamo","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_K98_Late","SPE_PzFaust_60m","Put","Throw"};
        respawnWeapons[] = {"SPE_K98_Late","SPE_PzFaust_60m","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_K98k_MG";
    };

    class SEP_B_GER_Lehr_WIN_Lieutenant : B_officer_F
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Second Lieutenant";
        side = 1;
        faction = "SEP_B_GER_Winter_Units";
		editorSubcategory="SEP_B_GER_Units_Infantry_Lehr_Winter";		
		editorPreview="\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Lehr_WIN_Lieutenant.jpg";
		icon = "iconManCommander";

        identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";

        uniformClass = "SEP_B_GER_U_Mantel_M40_Lehr";

        linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
        respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};

        weapons[] = {"SPE_MP40","Put","Throw"};
        respawnWeapons[] = {"SPE_MP40","Put","Throw"};

        magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
        respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Belt_bag_MG";
    };