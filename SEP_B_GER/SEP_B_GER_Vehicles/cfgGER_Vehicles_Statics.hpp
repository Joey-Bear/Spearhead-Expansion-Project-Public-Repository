class SPE_leFH18;			
class SEP_B_GER_DAK_leFH18: SPE_leFH18
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_GunCrew";
	displayName = "10.5 cm leFH18 (Artillery)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_leFH18.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[]=
			{
				"SPE_leFH18_L28"
			};
			magazines[]=
			{
				"SPE_20x_Shell_105L28_Gr38_HE",
				"SPE_20x_Shell_105L28_Gr38_HE",
				"SPE_8x_Shell_105L28_Gr39HlC_HEAT_Artillery",
				"SPE_20x_Shell_105L28_Gr38_NB"
			};				
			gunnerType = "SEP_B_GER_DAK_GunCrew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew_Lieutenant";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew";
		};
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew_SquadLead";
		};		
	};
};

class SEP_B_GER_WIN_leFH18: SPE_leFH18
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Gun_Crew";
	displayName = "10.5 cm leFH18 (Artillery)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_leFH18.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[]=
			{
				"SPE_leFH18_L28"
			};
			magazines[]=
			{
				"SPE_20x_Shell_105L28_Gr38_HE",
				"SPE_20x_Shell_105L28_Gr38_HE",
				"SPE_8x_Shell_105L28_Gr39HlC_HEAT_Artillery",
				"SPE_20x_Shell_105L28_Gr38_NB"
			};				
			gunnerType = "SEP_B_GER_WIN_Gun_Crew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_WIN_Gun_Leut";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_WIN_Gun_Crew";
		};
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_B_GER_WIN_Gun_SL";
		};		
	};
};

class SPE_leFH18_AT;
class SEP_B_GER_DAK_leFH18_AT: SPE_leFH18_AT
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_GunCrew";
	displayName = "10.5 cm leFH18 (AT)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_leFH18_AT.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[]=
			{
				"SPE_LeFH18"
			};
			magazines[]=
			{
				"SPE_20x_105mm_LeFH_PzGrRot_AP",
				"SPE_20x_Shell_105L28_Gr38_HE_direct",
				"SPE_8x_Shell_105L28_Gr39HlC_HEAT",
				"SPE_20x_Shell_105L28_Gr38_NB_direct"
			};				
			gunnerType = "SEP_B_GER_DAK_GunCrew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew_Lieutenant";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew";
		};
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew_SquadLead";
		};		
	};
};

class SEP_B_GER_WIN_leFH18_AT: SPE_leFH18_AT
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Gun_Crew";
	displayName = "10.5 cm leFH18 (AT)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_leFH18_AT.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[]=
			{
				"SPE_LeFH18"
			};
			magazines[]=
			{
				"SPE_20x_105mm_LeFH_PzGrRot_AP",
				"SPE_20x_Shell_105L28_Gr38_HE_direct",
				"SPE_8x_Shell_105L28_Gr39HlC_HEAT",
				"SPE_20x_Shell_105L28_Gr38_NB_direct"
			};				
			gunnerType = "SEP_B_GER_WIN_Gun_Crew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_WIN_Gun_Leut";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_WIN_Gun_Crew";
		};
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_B_GER_WIN_Gun_SL";
		};		
	};
};

class SPE_GrW278_1;	
class SEP_B_GER_DAK_GrW278_1 : SPE_GrW278_1
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Mortar_Gunner";
	displayName = "8.14 cm GrW 278/1 (f)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_GrW278_1.jpg";
};

class SEP_B_GER_WIN_GrW278_1 : SPE_GrW278_1
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Mortar_Gunner";
	displayName = "8.14 cm GrW 278/1 (f)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_GrW278_1.jpg";
};

class SPE_FlaK_30;
class SEP_B_GER_DAK_FlaK_30: SPE_FlaK_30
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Flak_Gun_Crew";
	displayName = "FlaK 30";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_FlaK_30.jpg";
	hiddenSelectionsTextures[]=
	{
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_01_01_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_02_01_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_03_01_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_05_01_gelb_co.paa"
	};
};	

class SEP_B_GER_WIN_FlaK_30: SPE_FlaK_30
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Flak_Gun_Crew";
	displayName = "FlaK 30";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_FlaK_30.jpg";
};	

class SPE_FlaK_36;
class SEP_B_GER_DAK_FlaK_36: SPE_FlaK_36
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Flak_Gun_Crew";
	displayName = "FlaK 36";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_FlaK_36.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[] = 
			{
				"SPE_Flak36_L56"
			};
			magazines[] = 
			{
				"SPE_30x_PzGr39_FLAK36_AP",
				"SPE_12x_PzGr40_FLAK36_APCR",
				"SPE_21x_SprGr_FLAK36_HE"
			};			
			gunnerType = "SEP_B_GER_DAK_Flak_Gun_Crew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_DAK_Flak_Gun_SL";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_DAK_Flak_Gun_Crew";
		};	
	};
};

class SEP_B_GER_WIN_FlaK_36: SPE_FlaK_36
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Flak_Gun_Crew";
	displayName = "FlaK 36";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_FlaK_36.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[] = 
			{
				"SPE_Flak36_L56"
			};
			magazines[] = 
			{
				"SPE_30x_PzGr39_FLAK36_AP",
				"SPE_12x_PzGr40_FLAK36_APCR",
				"SPE_21x_SprGr_FLAK36_HE"
			};			
			gunnerType = "SEP_B_GER_WIN_Flak_Gun_Crew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_WIN_Flak_Gun_SL";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_WIN_Flak_Gun_Crew";
		};	
	};
};

class SPE_FlaK_36_AA;
class SEP_B_GER_DAK_FlaK_36_AA: SPE_FlaK_36_AA
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Flak_Gun_Crew";
	displayName = "FlaK 36 (AA)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_FlaK_36_AA.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[] = 
			{
				"SPE_Flak36_L56_AA"
			};
			magazines[] = 
			{
				"SPE_45x_SprGr_FLAK36_AA"
			};			
			gunnerType = "SEP_B_GER_DAK_Flak_Gun_Crew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_DAK_Flak_Gun_SL";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_DAK_Flak_Gun_Crew";
		};	
	};
};	

class SEP_B_GER_WIN_FlaK_36_AA: SPE_FlaK_36_AA
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Flak_Gun_Crew";
	displayName = "FlaK 36 (AA)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_FlaK_36_AA.jpg";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[] = 
			{
				"SPE_Flak36_L56_AA"
			};
			magazines[] = 
			{
				"SPE_45x_SprGr_FLAK36_AA"
			};			
			gunnerType = "SEP_B_GER_WIN_Flak_Gun_Crew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_WIN_Flak_Gun_SL";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_WIN_Flak_Gun_Crew";
		};	
	};
};	

class SPE_FlaK_38;
class SEP_B_GER_DAK_FlaK_38: SPE_FlaK_38
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Flak_Gun_Crew";
	displayName = "FlaK 38";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_FlaK_38.jpg";
	hiddenSelectionsTextures[]=
	{
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_01_01_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_02_01_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_03_01_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Flak_38\flak_38_05_01_gelb_co.paa"
	};
};	

class SEP_B_GER_WIN_FlaK_38: SPE_FlaK_38
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Flak_Gun_Crew";
	displayName = "FlaK 38";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_FlaK_38.jpg";
};	

class SPE_MG34_Lafette_Deployed;
class SEP_B_GER_DAK_MG34_Lafette_Deployed: SPE_MG34_Lafette_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 34";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Lafette_Deployed.jpg";
};

class SEP_B_GER_WIN_MG34_Lafette_Deployed: SPE_MG34_Lafette_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 34";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Lafette_Deployed.jpg";
};

class SPE_MG34_Bipod;
class SEP_B_GER_DAK_MG34_Bipod : SPE_MG34_Bipod
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 34 (Bipod)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Bipod.jpg";
};

class SEP_B_GER_WIN_MG34_Bipod : SPE_MG34_Bipod
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 34 (Bipod)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Bipod.jpg";
};

class SPE_MG34_Lafette_low_Deployed;
class SEP_B_GER_DAK_MG34_Lafette_low_Deployed : SPE_MG34_Lafette_low_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 34 (Low)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Lafette_low_Deployed.jpg";
};

class SEP_B_GER_WIN_MG34_Lafette_low_Deployed : SPE_MG34_Lafette_low_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 34 (Low)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Lafette_low_Deployed.jpg";
};

class SPE_MG34_Lafette_Trench_Deployed;
class SEP_B_GER_DAK_MG34_Lafette_Trench_Deployed : SPE_MG34_Lafette_Trench_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 34 (Trench)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Lafette_Trench_Deployed.jpg";
};

class SEP_B_GER_WIN_MG34_Lafette_Trench_Deployed : SPE_MG34_Lafette_Trench_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 34 (Trench)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG34_Lafette_Trench_Deployed.jpg";
};

class SPE_MG42_Lafette_Deployed;
class SEP_B_GER_DAK_MG42_Lafette_Deployed : SPE_MG42_Lafette_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 42";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Lafette_Deployed.jpg";
};

class SEP_B_GER_WIN_MG42_Lafette_Deployed : SPE_MG42_Lafette_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 42";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Lafette_Deployed.jpg";
};

class SPE_MG42_Bipod;
class SEP_B_GER_DAK_MG42_Bipod : SPE_MG42_Bipod
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 42 (Bipod)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Bipod.jpg";
};

class SEP_B_GER_WIN_MG42_Bipod : SPE_MG42_Bipod
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 42 (Bipod)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Bipod.jpg";
};

class SPE_MG42_Lafette_low_Deployed;
class SEP_B_GER_DAK_MG42_Lafette_low_Deployed : SPE_MG42_Lafette_low_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 42 (Low)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Lafette_low_Deployed.jpg";
};

class SEP_B_GER_WIN_MG42_Lafette_low_Deployed : SPE_MG42_Lafette_low_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 42 (Low)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Lafette_low_Deployed.jpg";
};

class SPE_MG42_Lafette_trench_Deployed;
class SEP_B_GER_DAK_MG42_Lafette_trench_Deployed : SPE_MG42_Lafette_trench_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "MG 42 (Trench)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Lafette_trench_Deployed.jpg";
};

class SEP_B_GER_WIN_MG42_Lafette_trench_Deployed : SPE_MG42_Lafette_trench_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "MG 42 (Trench)";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_MG42_Lafette_trench_Deployed.jpg";
};

class SPE_StaticCannon_base;
class SPE_Pak40_base: SPE_StaticCannon_base
{
	/* Liveries */
	class TextureSources
	{
		class SEP_B_GER_Panzergrau
		{
			displayName = "Panzer Grey";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_Pak40_pzgry_CO.paa"
			};
			factions[] = {};
		};
		class SEP_B_GER_Panzergrau_Winter
		{
			displayName = "Panzer Grey (Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_Pak40_pzgry_winter_CO.paa"
			};
			factions[] = {};
		};
		class SEP_B_GER_Dunkelgelb_Winter
		{
			displayName = "Dunkelgelb (Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_Pak40_dunkel_winter_CO.paa"
			};
			factions[] = {};
		};
		class SEP_B_GER_Camo1_Winter
		{
			displayName = "Dunkelgelb (Camo 01, Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_Pak40_camo_win_CO.paa"
			};
			factions[] = {};
		};
	};
};
class SPE_Pak40;
class SEP_B_GER_DAK_Pak40: SPE_Pak40
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_GunCrew";
	displayName = "PaK 40";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_Pak40.jpg";
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Vehicles\StaticWeapons_t\Pak40\PAK_40_gelb_co.paa"};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[] = 
			{
				"SPE_Pak40"
			};
			magazines[] = 
			{
				"SPE_40x_PzGr39_Pak40_AP",
				"SPE_10x_PzGr40_Pak40_APCR",
				"SPE_50x_SprGr34_Pak40_HE"
			};		
			gunnerType = "SEP_B_GER_DAK_GunCrew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew_Lieutenant";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew";
		};				
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew_SquadLead";
		};
		class CargoTurret_03: CargoTurret_03
		{
			gunnerType = "SEP_B_GER_DAK_GunCrew";
		};
	};
};
class SEP_B_GER_WIN_Pak40: SPE_Pak40
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Gun_Crew";
	displayName = "PaK 40";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_Pak40.jpg";
	textureList[] = {SEP_DunkelgelbWinter,1};
	hiddenSelectionsTextures[] = {"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_Pak40_camo_win_CO.paa"};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			weapons[] = 
			{
				"SPE_Pak40"
			};
			magazines[] = 
			{
				"SPE_40x_PzGr39_Pak40_AP",
				"SPE_10x_PzGr40_Pak40_APCR",
				"SPE_50x_SprGr34_Pak40_HE"
			};		
			gunnerType = "SEP_B_GER_WIN_Gun_Crew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_B_GER_WIN_Gun_Leut";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_B_GER_WIN_Gun_Crew";
		};				
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_B_GER_WIN_Gun_SL";
		};
		class CargoTurret_03: CargoTurret_03
		{
			gunnerType = "SEP_B_GER_WIN_Gun_Crew";
		};
	};
};

class SPE_GER_SearchLight;
class SEP_B_GER_DAK_SearchLight : SPE_GER_SearchLight
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_DAK_Rflmn_K98";
	displayName = "Search Light";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_SearchLight.jpg";
};	

class SEP_B_GER_WIN_SearchLight : SPE_GER_SearchLight
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_B_GER";
	author = "Joe";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_B_GER_WIN_Rflmn_K98";
	displayName = "Search Light";
	editorPreview="\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_SearchLight.jpg";
};	