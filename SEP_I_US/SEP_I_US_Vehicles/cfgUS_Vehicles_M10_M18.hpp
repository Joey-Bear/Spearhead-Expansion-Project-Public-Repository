//M10//
class SPE_M10;
class SEP_I_US_WIN_M10 : SPE_M10 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M10 Tank Destroyer";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M10.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Interior_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Interior_2_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10_decals\A13_mc.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"fenders_hide_source",0,
		"rhino_hide_source",1,
		"snorkel_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",1
	};	
	class TextureSources
	{
		class SEP_I_US_WIN
		{
			factions[]=
			{
			};
			displayname="Winter Camouflage";
			textures[]=
			{
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Interior_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10\M10_Interior_2_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M10_decals\A13_mc.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "SEP_I_US_WIN_Tank_Crew";
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics { gunnerType = "SEP_I_US_WIN_Tank_Sergeant"; };
				class Loader_place : Loader_place { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
			};
		};
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
		class CargoTurret_06 : CargoTurret_06 {};
	};
};

//M18//
class SPE_M18_Hellcat;
class SEP_I_US_WIN_M18_Hellcat : SPE_M18_Hellcat 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M18 Hellcat";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M18_Hellcat.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_suspension_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_interior_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_stowage_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18_decals\4D_704_TD_C3_ca.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"fenders_hide_source",0,
		"rhino_hide_source",1,
		"snorkel_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",1
	};	
	class TextureSources
	{
		class SEP_I_US_WIN
		{
			factions[]=
			{
			};
			displayname="Winter Camouflage";
			textures[]=
			{
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_suspension_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_interior_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18\m18_stowage_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\m18_decals\4D_704_TD_C3_ca.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "SEP_I_US_WIN_Tank_Crew";
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics { gunnerType = "SEP_I_US_WIN_Tank_Sergeant"; };
				class Loader_place : Loader_place { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
				class CommanderMG : CommanderMG 
				{ 
					gunnerType = "SEP_I_US_WIN_Tank_Sergeant"; 
				};
			};
		};
		class Assist_Driver : Assist_Driver { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
	};
};