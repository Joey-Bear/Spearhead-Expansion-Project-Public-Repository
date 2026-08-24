//===================================
//Custom Classes (Men)
//SEP Sturmtroopers (Winter)
//===================================

	class SEP_B_GER_Sturm_WIN_Rflmn_K98 : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Rflmn_K98.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_K98k_MG";
	};
	
	class SEP_B_GER_Sturm_WIN_Rflmn_Lite : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Light)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Rflmn_Lite.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_GER_Fieldcap2","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_Fieldcap2","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Rflmn_Pvt : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Private 1 cl.)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Rflmn_Pvt.jpg";
		icon = "iconManSemiauto";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestG43","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_G43","Put","Throw"};
		respawnWeapons[] = {"SPE_G43","Put","Throw"};

		magazines[] = {MAG_15(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_15(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_G43_MG";
	};

	class SEP_B_GER_Sturm_WIN_Rflmn_STG : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (StG 44)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Rflmn_STG.jpg";
		icon = "iconManSMG";
		role = "Assault";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_STG44","Put","Throw"};
		respawnWeapons[] = {"SPE_STG44","Put","Throw"};

		magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_STG44_MG";
	};
	
	class SEP_B_GER_Sturm_WIN_AmmoBearer : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer (GrW 278/1)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AmmoBearer.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar_ST";
	};
	
	class SEP_B_GER_Sturm_WIN_AmmoBearer_HMG : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer (HMG)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AmmoBearer_HMG.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Backpack_ST_HMGAmmo";
	};
	
	class SEP_B_GER_Sturm_WIN_AmmoBearer_Panzerschreck : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer (Panzerschreck)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AmmoBearer_Panzerschreck.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_RPzB_Belt_bag_Loaded";
	};
	
	class SEP_B_GER_Sturm_WIN_ASL : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assist. Squad Leader";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_ASL.jpg";
		icon = "iconManLeader";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP35","Put","Throw"};
		respawnWeapons[] = {"SPE_MP35","Put","Throw"};

		magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_Gef";
	};
	
	class SEP_B_GER_Sturm_WIN_Mortar_AGunner : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Gunner (GrW 278/1)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Mortar_AGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_GrW278_1_Stand"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_GrW278_1_Stand"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar_ST";
	};
	
	class SEP_B_GER_Sturm_WIN_AHMGunner : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Gunner (HMG)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AHMGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_Lafette_Tripod"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_Lafette_Tripod"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Backpack_ST_HMGAmmo";
	};
	
	class SEP_B_GER_Sturm_WIN_AT_Grenadier : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (AT Grenade)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AT_Grenadier.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24x7)};
		
		backpack = "B_SPE_GER_A_frame_ST_AT";
	};
	
	class SEP_B_GER_Sturm_WIN_LAT_Klein_Rifleman : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (Faustpatrone)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_LAT_Klein_Rifleman.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_Faustpatrone"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_Faustpatrone"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_Faustpatrone),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_ST_Pzf_Belt_bag_zelt_KleinLoaded";
	};

	class SEP_B_GER_Sturm_WIN_LAT_30m_Rifleman : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (Panzerfaust 30)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_LAT_30m_Rifleman.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Mantel_M40_Gaiters";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_30m"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_30m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_ST_Pzf_Belt_bag_zelt_Pzf30Loaded";
	};
	
	class SEP_B_GER_Sturm_WIN_LAT_Rifleman : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (Panzerfaust 60)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_LAT_Rifleman.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_PzFaust_60m"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_PzFaust_60m),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_ST_Pzf_Belt_bag_zelt_Loaded";
	};
	
	class SEP_B_GER_Sturm_WIN_AT_Soldier : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "AT Soldier (Panzerschreck)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AT_Soldier.jpg";
		icon = "iconManAT";
		role = "MissileSpecialist";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_43"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_RPzB_43"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_1(SPE_1Rnd_RPzBGr_4322),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_ST_RPzB_Belt_bag_zelt_Loaded";
	};
	
	class SEP_B_GER_Sturm_WIN_Hauptsturmfuhrer : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Captain";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Hauptsturmfuhrer.jpg";
		icon = "iconManCommander";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Mantel_M40";

		linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Standartenfuhrer : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Colonel";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Standartenfuhrer.jpg";
		icon = "iconManCommander";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_CoatOfficer";

		linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Driver : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Driver";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Driver.jpg";
		icon = "iconManRifleman";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Driver_Lite : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Driver (Light)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Driver_Lite.jpg";
		icon = "iconManRifleman";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_SniperBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Obersturmfuhrer : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "First Lieutenant";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Obersturmfuhrer.jpg";
		icon = "iconManCommander";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Mantel_M40";

		linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Flamethrower_Operator : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flame Rifleman";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Flamethrower_Operator.jpg";
		icon = "iconMan";
		role = "Flamethrower";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","G_SPE_Dust_Goggles_2","V_SPE_GER_FWOVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_Flammenwerfer41","SPE_P08","Put","Throw"};

		magazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_4(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Flammenwerfer_41";
	};
	
	class SEP_B_GER_Sturm_WIN_Ober_Grenadier : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Ober_Grenadier.jpg";
		icon = "iconManGrenadier";
		role = "Grenadier";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestGrenadier","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late_GW","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late_GW","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_1Rnd_G_SPRGR_30),MAG_2(SPE_1Rnd_G_PZGR_30),MAG_2(SPE_1Rnd_G_PZGR_40),MAG_1(SPE_1Rnd_G_FLGR),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_Grenadier";
	};
	
	class SEP_B_GER_Sturm_WIN_Mortar_Gunner : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (GrW 278/1)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Mortar_Gunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw","SPE_GrW278_1_Barrel"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw","SPE_GrW278_1_Barrel"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Tonister41_Frame_Full_Mortar_ST";
	};
	
	class SEP_B_GER_Sturm_WIN_HMGunner2 : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (HMG / MG 34)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_HMGunner2.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_HMG";
	};
	
	class SEP_B_GER_Sturm_WIN_HMGunner : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner (HMG / MG 42)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_HMGunner.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_HMG";
	};
	
	class SEP_B_GER_Sturm_WIN_Halftrack_Driver : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Half-Track Driver";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Halftrack_Driver.jpg";
		icon = "iconManSMG";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_Helmet","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP35","Put","Throw"};
		respawnWeapons[] = {"SPE_MP35","Put","Throw"};

		magazines[] = {MAG_10(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_AMGunner : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine-Gunner (Assist.)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AMGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Backpack_ST_MGAmmo";
	};
	
	class SEP_B_GER_Sturm_WIN_MGunner : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine-Gunner (MG 34)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_MGunner.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG34","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_MG";
	};
	
	class SEP_B_GER_Sturm_WIN_MGunner2 : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machine-Gunner (MG 42)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_MGunner2.jpg";
		icon = "iconManMG";
		role = "MachineGunner";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestMG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};
		respawnWeapons[] = {"SPE_MG42","SPE_P08","Put","Throw"};

		magazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_2(SPE_50Rnd_792x57_sS),MAG_3(SPE_8Rnd_9x19_P08),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_MG";
	};
	
	class SEP_B_GER_Sturm_WIN_Medic : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Medic.jpg";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_Helmet_Medic","V_SPE_GER_SaniVest2","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_MedicBackpack";
	};
	
	class SEP_B_GER_Sturm_WIN_Radioman : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radioman";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Radioman.jpg";
		icon = "iconManRTO";
		role = "RadioOperator";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2_OS","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_Radio";
	};
	
	class SEP_B_GER_Sturm_WIN_Sapper : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sapper";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Sapper.jpg";
		icon = "iconManExplosive";
		role = "Sapper";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_SapperBackpack2";
	};

	class SEP_B_GER_Sturm_WIN_Sapper_Gefr : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sapper (Corporal)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Sapper_Gefr.jpg";
		icon = "iconManExplosive";
		role = "Sapper";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix_uscharf";

		linkedItems[] = {"H_SPE_GER_Fieldcap2","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_Fieldcap2","V_SPE_GER_PioneerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "B_SPE_GER_SapperBackpack2";
	};
	
	class SEP_B_GER_Sturm_WIN_Untersturmfuhrer : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Second Lieutenant";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Untersturmfuhrer.jpg";
		icon = "iconManCommander";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Mantel_M40";

		linkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_OfficerCap","V_SPE_GER_FieldOfficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP35","Put","Throw","SPE_P08"};

		magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Sentry_K98k : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sentry (K98k)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Sentry_K98k.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98_Late","Put","Throw"};
		respawnWeapons[] = {"SPE_K98_Late","Put","Throw"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_sturm";
	};
	
	class SEP_B_GER_Sturm_WIN_Sentry_MP35 : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sentry (MP 35)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Sentry_MP35.jpg";
		icon = "iconManSMG";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus";

		linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP35","Put","Throw"};
		respawnWeapons[] = {"SPE_MP35","Put","Throw"};

		magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_sturm";
	};
	
	class SEP_B_GER_Sturm_WIN_Sentry_MP40 : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sentry (MP 40)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Sentry_MP40.jpg";
		icon = "iconManSMG";
		role = "Rifleman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_maus_mix";

		linkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap","V_SPE_GER_VestMP40","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw"};

		magazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_9x19),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_sturm";
	};
	
	class SEP_B_GER_Sturm_WIN_Sniper : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sniper";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Sniper.jpg";
		icon = "iconManRecon";
		role = "Marksman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm_mix";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestKar98","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_K98ZF39","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_K98ZF39","Put","Throw","SPE_P08"};

		magazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_20(SPE_5Rnd_792x57),MAG_2(SPE_Shg24),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_SL : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_SL.jpg";
		icon = "iconManOfficer";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Mantel_M40_Gaiters";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestSTG","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_STG44","Put","Throw"};
		respawnWeapons[] = {"SPE_STG44","Put","Throw"};

		magazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		respawnMagazines[] = {MAG_10(SPE_30Rnd_792x33),MAG_2(SPE_Shg24)};
		
		backpack = "B_SPE_GER_A_frame_ST_Gef";
	};
	
	class SEP_B_GER_Sturm_WIN_AT_Soldier_SL : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader (Panzerfaust 60)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_AT_Soldier_SL.jpg";
		icon = "iconManOfficer";
		role = "SquadLeader";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Mantel_M40_Gaiters";

		linkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		respawnlinkedItems[] = {"H_SPE_ST_Helmet2","V_SPE_GER_VestUnterofficer","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch"};
		
		Items[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_K98_Bayo","SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP35","Put","Throw","SPE_PzFaust_60m"};
		respawnWeapons[] = {"SPE_MP35","Put","Throw","SPE_PzFaust_60m"};

		magazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
		respawnMagazines[] = {MAG_10(SPE_32Rnd_MP35_9x19),MAG_2(SPE_Shg24),MAG_1(SPE_1Rnd_PzFaust_60m)};
		
		backpack = "B_SPE_GER_A_frame_ST_Gef";
	};
	
//===================================
//Custom Classes (Men - Tank crew)
//SEP Sturmtroopers (Winter)
//===================================

	class SEP_B_GER_Sturm_WIN_SPG_Crew : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "SPG Crew";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_SPG_Crew.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm";

		linkedItems[] = {"H_SPE_GER_ST_M40_cap_2","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap_2","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};

	class SEP_B_GER_Sturm_WIN_SPG_Unterofficer : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "SPG Crew (Sergeant)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_SPG_Unterofficer.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm";

		linkedItems[] = {"H_SPE_GER_ST_M40_cap_hp","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap_hp","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};

	class SEP_B_GER_Sturm_WIN_SPG_Lieutenant : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "SPG Officer (2nd Lieutenant)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_SPG_Lieutenant.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm";

		linkedItems[] = {"H_SPE_GER_ST_M40_cap_Offz_hp","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_cap_Offz_hp","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"Put","Throw","SPE_P08"};
		respawnWeapons[] = {"Put","Throw","SPE_P08"};

		magazines[] = {MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};
	
	class SEP_B_GER_Sturm_WIN_Tank_Crew : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Tank Crew";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Tank_Crew.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm";

		linkedItems[] = {"H_SPE_GER_ST_M40_Pz_cap_2","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_Pz_cap_2","V_SPE_GER_TankPrivateBelt","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};

	class SEP_B_GER_Sturm_WIN_Tank_Unterofficer : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Tank Crew (Sergeant)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Tank_Unterofficer.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm";

		linkedItems[] = {"H_SPE_GER_ST_M40_Pz_cap_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_Pz_cap_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};
		respawnWeapons[] = {"SPE_MP40","Put","Throw","SPE_P08"};

		magazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_4(SPE_5Rnd_792x57),MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};

	class SEP_B_GER_Sturm_WIN_Tank_Lieutenant : SEP_B_GER_WIN_Sturm_Soldier_Base
	{
		author = "Joe";
		scope = 2;
		scopeCurator = 2;
		displayName = "Tank Crew Officer (Lieutenant)";
		side = 1;
		faction = "SEP_B_GER_Sturm_Winter_Units";
		editorSubcategory = "SPE_EdSubcat_GER_TankCrew";
		editorPreview="SEP\SEP_B_GER\SEP_B_GER_Characters\data\editorPreviews\SEP_B_GER_Sturm_WIN_Tank_Lieutenant.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";
		
		identityTypes[] = {"SPE_LanguageGER","Head_EURO","SPE_GER_Glasses"};
		genericNames = "SPE_GermanMen";
	  
		uniformClass = "SEP_B_GER_ST_U_Parka_autm";

		linkedItems[] = {"H_SPE_GER_ST_M40_Pz_cap_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		respawnlinkedItems[] = {"H_SPE_GER_ST_M40_Pz_cap_Offz_headset","V_SPE_GER_OfficerVest","ItemMap","SPE_GER_ItemCompass_deg","SPE_GER_ItemWatch","SPE_Binocular_GER"};
		
		Items[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};
		RespawnItems[] = {"SPE_GER_FirstAidKit","SPE_GER_FirstAidKit"};

		weapons[] = {"Put","Throw","SPE_P08"};
		respawnWeapons[] = {"Put","Throw","SPE_P08"};

		magazines[] = {MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		respawnMagazines[] = {MAG_2(SPE_NB39),MAG_3(SPE_8Rnd_9x19_P08)};
		
		backpack = "";
	};