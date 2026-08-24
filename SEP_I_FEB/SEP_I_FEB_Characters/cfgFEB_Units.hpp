//===================================
//Custom Classes (Men)
//SEP Força Expedicionária Brasileira
//===================================

    class SEP_I_FEB_Rflmn_M1903 : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Rflmn_M1903.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_Rflmn_Carb : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Carbine)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Rflmn_Carb.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_Rflmn_Unr : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Rflmn_Unr.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Private";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_AmmoBearer : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AmmoBearer.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private_1st";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_Ammo";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_Gren : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Gren.jpg";
		icon = "iconManGrenadier";
		role = "Grenadier";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private_1st";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield_M1_GL","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_1Rnd_G_Mk2),MAG_2(SPE_1Rnd_G_M9A1),MAG_2(SPE_1Rnd_G_M2_ANM8),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
			
    class SEP_I_FEB_AR : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AR.jpg";
		icon = "iconManMG";
		role = "MachineGunner";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Private_1st";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1918A2_BAR","Put","Throw"};
        respawnWeapons[] = {"SPE_M1918A2_BAR","Put","Throw"};

        magazines[] = {MAG_15(SPE_20Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_15(SPE_20Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_AR";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_AAR : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assist. Automatic Rifleman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AAR.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Bar_assist","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};

		backpack = "_xx_SEP_I_FEB_B_AAR";	
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
			
    class SEP_I_FEB_SL : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_SL.jpg";
		icon = "iconManOfficer";
		role = "SquadLeader";

        identityTypes[] = {"LanguageGRE_F","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "U_SPE_US_Sergeant";

        linkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Thompson_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1A1_Thompson","Put","Throw"};
        respawnWeapons[] = {"SPE_M1A1_Thompson","Put","Throw"};

        magazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_30Rnd_Thompson_45ACP),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_ASL : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assist. Squad Leader";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_ASL.jpg";
		icon = "iconManLeader";
		role = "SquadLeader";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Corp";

        linkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };

	/* Hidden */					
    class SEP_I_FEB_Spotter : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 1;
        scopeCurator = 1;
        displayName = "Spotter";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Spotter.jpg";
		icon = "iconManRifleman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
    };
	
    class SEP_I_FEB_Sniper : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Sniper.jpg";
		icon = "iconManRecon";
		role = "Marksman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A4_Springfield","Put","Throw"};

        magazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_25(SPE_5Rnd_762x63),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
		
    class SEP_I_FEB_AT : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AT.jpg";  
		icon = "iconManAT";
		role = "MissileSpecialist";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Private_1st";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw","SPE_M1A1_Bazooka"};

        magazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_20(SPE_5Rnd_762x63),MAG_1(SPE_1Rnd_60mm_M6),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_AT";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
		
    class SEP_I_FEB_Medic : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Medic.jpg";
		icon = "iconManMedic";
		role = "CombatLifeSaver";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Med";

        linkedItems[] = {"H_SPE_US_Helmet_Med","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Med","V_SPE_US_Vest_Medic3","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1905_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};
        respawnWeapons[] = {"SPE_M1903A3_Springfield","Put","Throw"};

        magazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
        respawnMagazines[] = {MAG_15(SPE_5Rnd_762x63),MAG_2(SPE_US_M18_Violet)};
		
		backpack = "_xx_SEP_I_FEB_B_Medic";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
		
    class SEP_I_FEB_Engi : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Engi.jpg";
		icon = "iconManEngineer";
		role = "Sapper";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Technician";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Backpack_eng";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	/* Hidden */
    class SEP_I_FEB_Engi_Expl : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 1;
        scopeCurator = 1;
        displayName = "Engineer (Explosives)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Engi_Expl.jpg";
		icon = "iconManEngineer";
		role = "Sapper";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Technician";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand_eng","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "_xx_SEP_I_FEB_B_Explosives";
    };
			
    class SEP_I_FEB_Cpt : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Captain";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Cpt.jpg";
		icon = "iconManCommander";
		role = "SquadLeader";

        identityTypes[] = {"LanguageGRE_F","Head_EURO","SPE_US_Glasses"};
		genericNames = "SPE_FrenchMen";

        uniformClass = "U_SPE_US_CPT";

        linkedItems[] = {"H_SPE_US_Helmet_Cap","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Cap","V_SPE_US_Vest_Carbine_nco","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M1911","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_Radio : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radioman";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Radio.jpg";
		icon = "iconManRTO";
		role = "RadioOperator";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};

		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_Radio";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_Mortar_Gunner : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (81 mm M1)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Mortar_Gunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Private_1st";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};

		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Barrel","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_FR_packboard_mortar_loaded";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_Mortar_AGunner : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (81 mm M1)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Mortar_AGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};

		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_MLE_27_31_Stand","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_mortar_loaded";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_Mortar_AmmoBearer : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (81 mm M1)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Mortar_AmmoBearer.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_mortar_loaded";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_Flamethrower_Operator : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flamethrower Operator";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Flamethrower_Operator.jpg";
		icon = "iconMan";
		role = "Flamethrower";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet_ns","G_SPE_Polar_Goggles","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","G_SPE_Polar_Goggles","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M2_Flamethrower","SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M2_Flamethrower","SPE_M1911","Put","Throw"};

        magazines[] = {MAG_4(SPE_7Rnd_45ACP_1911)};
        respawnMagazines[] = {MAG_4(SPE_7Rnd_45ACP_1911)};

		backpack = "B_SPE_US_M2Flamethrower";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_HMGunner : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine-Gunner";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMGunner.jpg";
		icon = "iconManMG";
		role = "MachineGunner";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Private_1st";

        linkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1919A4","SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1919A4","SPE_M1911","Put","Throw"};

        magazines[] = {MAG_4(SPE_50Rnd_762x63),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_4(SPE_50Rnd_762x63),MAG_3(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_HMGbag";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_HMGunner_M2 : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine-Gunner (M2)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMGunner_M2.jpg";
		icon = "iconManMG";
		role = "MachineGunner";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Private_1st";

        linkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_os","V_SPE_US_Vest_M1919","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","SPE_M2_50","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M2_50","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_GP_bag_M2";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_HMG_AmmoBearer : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (HMG)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMG_AmmoBearer.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_ammo_HMG";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_HMG_AmmoBearer_M2 : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer (M2 HMG)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_HMG_AmmoBearer_M2.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_1(SPE_100Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_ammo_HMG_M2";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_AHMGunner : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assist. Machine-Gunner";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AHMGunner.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_M2_Tripod","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M2_Tripod","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_50Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_50Rnd_762x63),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_HMGAssistantBag";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_AHMGunner_M2 : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assist. Machine-Gunner (M2)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_AHMGunner_M2.jpg";
		icon = "iconManRifleman";
		role = "Assistant";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM_roll";

        linkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_ns","V_SPE_US_Vest_Asst_MG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		
        weapons[] = {"SPE_M1_Carbine","SPE_M3_Tripod","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","SPE_M3_Tripod","Put","Throw"};

        magazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_11(SPE_15Rnd_762x33),MAG_2(SPE_US_M18),MAG_2(SPE_US_Mk_2)};

		backpack = "B_SPE_US_packboard_ammo_HMG_M2";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_GunCrew : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_GunCrew";
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_GunCrew.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_SC_EM";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_GunCrew_Srgt : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gun Crew (Sergeant)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_GunCrew";
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_GunCrew_Srgt.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Sergeant";

        linkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_NCO","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_Pilot : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flying Officer";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Pilot.jpg";
		icon = "iconManPilot";
		role = "Crewman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_S31_erla_boot";

        linkedItems[] = {"H_SPE_US_Helmet_Pilot","V_SPE_US_LifeVest","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Pilot","V_SPE_US_LifeVest","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1911","Put","Throw"};

        magazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
        respawnMagazines[] = {MAG_3(SPE_7Rnd_45ACP_1911)};
		
		backpack = "B_SPE_US_TypeA3";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
	class SEP_I_FEB_Tank_Crew : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Private)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_TankCrew";
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Tank_Crew.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Tank_Crew";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_NG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_NG","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
        respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

        magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};		
    };
	
	class SEP_I_FEB_Tank_Sergeant : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Sergeant)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_TankCrew";
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Tank_Sergeant.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Tank_Crew";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_polar","V_SPE_US_Vest_45","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M3_GreaseGun","Put","Throw"};
        respawnWeapons[] = {"SPE_M3_GreaseGun","Put","Throw"};

        magazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_30Rnd_M3_GreaseGun_45ACP),MAG_2(SPE_US_Mk_2)};
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};		
    };
	
	class SEP_I_FEB_Tank_Second_Lieutenant : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tanker (Second Lieutenant)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "SPE_EdSubcat_US_TankCrew";
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Tank_Second_Lieutenant.jpg";
		icon = "iconManTankcrew";
		role = "Crewman";

        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";

        uniformClass = "U_SPE_US_Tank_Crew";

        linkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45_off","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","V_SPE_US_Vest_45_off","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch","SPE_Binocular_US"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1911","Put","Throw"};
        respawnWeapons[] = {"SPE_M1911","Put","Throw"};

        magazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_7Rnd_45ACP_1911),MAG_2(SPE_US_Mk_2)};
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};		
    };
	
    class SEP_I_FEB_Driver : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Driver.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};		
    };
	
    class SEP_I_FEB_Driver_Lite : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Driver (Light)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview="\SEP\SEP_I_FEB\SEP_I_FEB_Characters\data\ui\editorPreviews\SEP_I_FEB_Driver_Lite.jpg";
		icon = "iconManRifleman";
		role = "Rifleman";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private";

        linkedItems[] = {"H_SPE_US_jeep_cap","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_jeep_cap","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_8(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};		
    };
	
    class SEP_I_FEB_Sentry_Carbine : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sentry (Carbine)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview = "\WW2\SPE_Core_t\EditorPreviews_t\SPE_US_Sentry_Carbine.jpg";
		icon = "iconManSemiauto";
		role = "Rifleman";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Carbine","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_M1_Carbine","Put","Throw"};
        respawnWeapons[] = {"SPE_M1_Carbine","Put","Throw"};

        magazines[] = {MAG_10(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_15Rnd_762x33),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };
	
    class SEP_I_FEB_Sentry : SEP_I_FEB_Soldier_Base
	{
        author = "Joe";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sentry (Shotgun)";
        side = 2;
        faction = "SEP_I_FEB_Units";
		editorSubcategory = "EdSubcat_Personnel";	
		editorPreview = "\WW2\SPE_Core_t\EditorPreviews_t\SPE_US_Sentry.jpg";
		icon = "iconManSemiauto";
		role = "Rifleman";
		
        identityTypes[] = {"LanguageGRE_F","Head_Hispanic","NoGlasses"};
		genericNames = "BrazilianMen";
      
        uniformClass = "U_SPE_US_Private";

        linkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnlinkedItems[] = {"H_SPE_US_Helmet","V_SPE_US_Vest_Garand","ItemMap","SPE_US_ItemCompass","SPE_US_ItemWatch"};
		
		Items[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};
		RespawnItems[] = {"SPE_ACC_M1917_Bayo","SPE_US_FirstAidKit","SPE_US_FirstAidKit"};

        weapons[] = {"SPE_Model_37_Trenchgun","Put","Throw"};
        respawnWeapons[] = {"SPE_Model_37_Trenchgun","Put","Throw"};

        magazines[] = {MAG_10(SPE_5Rnd_12x70_Pellets),MAG_2(SPE_US_Mk_2)};
        respawnMagazines[] = {MAG_10(SPE_5Rnd_12x70_Pellets),MAG_2(SPE_US_Mk_2)};
		
		backpack = "B_SPE_US_Suspender_band_right";
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0,'SEP_I_FEB_Badge'] call bis_fnc_setUnitInsignia;";
		};
		class AttributeValues
		{
			unitInsignia = "SEP_I_FEB_Badge";
		};
    };