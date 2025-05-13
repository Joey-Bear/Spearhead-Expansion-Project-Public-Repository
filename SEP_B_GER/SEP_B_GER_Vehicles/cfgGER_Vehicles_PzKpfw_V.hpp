class SPE_PzKpfwV_base: SPE_Tank_base
{
	/* Liveries */
	class TextureSources
	{
		class SEP_B_GER_Dunkelgelb_Winter
		{
			displayName = "Dunkelgelb (Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_01_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_02_dunkel_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\Panther\Panther_G_wheels_co.paa"
			};
			factions[] = {};
		};
		class SEP_B_GER_AmbushDot_Winter
		{
			displayName = "Ambush Dot (Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_01_ambush_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_02_ambush_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\Panther\Panther_G_wheels_co.paa"
			};
			factions[] = {};
		};
		class SEP_B_GER_Camo1_Winter
		{
			displayName = "Dunkelgelb (Camo 01, Winter)";
			author = "Jamie";
			textures[] =
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_01_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_02_camo_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\Panther\Panther_G_wheels_co.paa"
			};
			factions[] = {};
		};
	};
};
class SPE_PzKpfwV_G;
class SEP_B_GER_WIN_PzKpfw_V_G : SPE_PzKpfwV_G 
{
	author = "Jamie";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw V Ausf.G Panther";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_PzKpfw_V_G.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_01_ambush_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw5_02_ambush_win_CO.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\Panther\Panther_G_wheels_co.paa"
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
				class CommanderMG : CommanderMG 
				{ 
					gunnerType = "SEP_B_GER_WIN_Tank_SL"; 
				};
			};
		};
		class kurs_MG_turret : kurs_MG_turret {};
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
	};
};