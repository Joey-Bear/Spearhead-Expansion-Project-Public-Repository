class SPE_PzKpfwVI_H1_base: SPE_Tank_base
{
	/* Liveries */
	class TextureSources
	{
		class SEP_B_GER_AmbushDot_Winter
		{
			displayName = "Ambush Dot (Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_01_ambush_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_02_ambush_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_wheels_co.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_04_ambush_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_Tracks_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_interiors_co.paa"
			};
			factions[] = {};
		};
		class SEP_B_GER_Camo1_Winter
		{
			displayName = "Dunkelgelb (Camo 01, Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_01_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_02_camo_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_wheels_co.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_04_camo_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_Tracks_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_interiors_co.paa"
			};
			factions[] = {};
		};
	};
};
class SPE_PzKpfwVI_H1;
class SEP_B_GER_DAK_PzKpfw_VI_H1 : SPE_PzKpfwVI_H1 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw VI Ausf.H1 Tiger";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_PzKpfw_VI_H1.jpg";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	crew = "SEP_B_GER_DAK_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_hull_muster_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_turret_muster_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_wheels_muster_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_misc_muster_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_Tracks_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_interiors_co.paa"
	};
	class TextureSources
	{
		class SEP_B_GER_DAK
		{
			factions[]=
			{
			};
			displayname="DAK";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_hull_muster_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_turret_muster_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_wheels_muster_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_misc_muster_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_Tracks_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_interiors_co.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "SEP_B_GER_DAK_Tank_Crew";
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_DAK_Tank_SL"; };
				class Loader_place : Loader_place { gunnerType = "SEP_B_GER_DAK_Tank_Crew"; };
			};
		};
		class kurs_MG_turret : kurs_MG_turret {};
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
	};
};
class SEP_B_GER_WIN_PzKpfw_VI_H1 : SPE_PzKpfwVI_H1 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw VI Ausf.H1 Tiger";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_PzKpfw_VI_H1.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_01_ambush_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_02_ambush_win_CO.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_wheels_co.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw6_04_ambush_win_CO.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_Tracks_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_3_t\PzKpfwVI\pz6_interiors_co.paa"
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "SEP_B_GER_WIN_Tank_Crew";
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_WIN_Tank_SL"; };
				class Loader_place : Loader_place { gunnerType = "SEP_B_GER_WIN_Tank_Crew"; };
			};
		};
		class kurs_MG_turret : kurs_MG_turret {};
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
	};
};