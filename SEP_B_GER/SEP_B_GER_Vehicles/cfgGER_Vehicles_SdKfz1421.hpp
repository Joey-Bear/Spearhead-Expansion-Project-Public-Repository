class SPE_StuG_III_G_Early;
class SEP_B_GER_WIN_StuG_III_G_Early : SPE_StuG_III_G_Early 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sd.Kfz. 142/1 StuG III G (Early)";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_StuG_III_G_Early.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_SPG_Crew";
	hiddenSelectionsTextures[]=
	{
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
		"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
		"a3\data_f\clear_empty.paa"
	};
	class TextureSources: TextureSources
	{
		class SEP_B_GER_Camo1_Winter
		{
			displayName = "Dunkelgelb (Camo 01, Winter)";
			author = "Hyena";
			textures[]=
			{
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
				"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
				"a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_WIN_SPG_SL"; };
		class Loader_place : Loader_place { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class LoaderMG : LoaderMG { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
		class CargoTurret_06 : CargoTurret_06 {};
		class CargoTurret_07 : CargoTurret_07 {};
		class CargoTurret_08 : CargoTurret_08 {};
	};
};

class SPE_StuG_III_G_Late;
class SEP_B_GER_WIN_StuG_III_G_Late : SPE_StuG_III_G_Late 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sd.Kfz. 142/1 StuG III G (Late)";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_StuG_III_G_Late.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_SPG_Crew";
	hiddenSelectionsTextures[]=
	{
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
		"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
		"a3\data_f\clear_empty.paa"
	};
	class TextureSources: TextureSources
	{
		class SEP_B_GER_Camo1_Winter
		{
			displayName = "Dunkelgelb (Camo 01, Winter)";
			author = "Hyena";
			textures[]=
			{
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
				"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
				"a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_WIN_SPG_SL"; };
		class Loader_place : Loader_place { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
		class CargoTurret_06 : CargoTurret_06 {};
		class CargoTurret_07 : CargoTurret_07 {};
		class CargoTurret_08 : CargoTurret_08 {};
	};
};

class SPE_StuG_III_G_SKB;
class SEP_B_GER_WIN_StuG_III_G_SKB : SPE_StuG_III_G_SKB 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sd.Kfz. 142/1 StuG III G (SKB)";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_StuG_III_G_SKB.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_SPG_Crew";
	hiddenSelectionsTextures[]=
	{
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
		"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
		"a3\data_f\clear_empty.paa"
	};
	class TextureSources: TextureSources
	{
		class SEP_B_GER_Camo1_Winter
		{
			displayName = "Dunkelgelb (Camo 01, Winter)";
			author = "Hyena";
			textures[]=
			{
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
				"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
				"a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_WIN_SPG_SL"; };
		class Loader_place : Loader_place { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
		class CargoTurret_06 : CargoTurret_06 {};
		class CargoTurret_07 : CargoTurret_07 {};
		class CargoTurret_08 : CargoTurret_08 {};
	};
};

class SPE_StuH_42;
class SEP_B_GER_WIN_StuH_42 : SPE_StuH_42 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sd.Kfz. 142/2 StuH 42";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_StuH_42.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_SPG_Crew";
	hiddenSelectionsTextures[]=
	{
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
		"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
		"a3\data_f\clear_empty.paa"
	};
	class TextureSources: TextureSources
	{
		class SEP_B_GER_Camo1_Winter
		{
			displayName = "Dunkelgelb (Camo 01, Winter)";
			author = "Hyena";
			textures[]=
			{
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_01_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_02_camo_win_CO.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz1421_03_camo_win_CO.paa",
				"ww2\spe_assets_t\vehicles\tanks_t\nashorn\nashorn_tracks_co.paa",
				"a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_WIN_SPG_SL"; };
		class Loader_place : Loader_place { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
		class CargoTurret_06 : CargoTurret_06 {};
		class CargoTurret_07 : CargoTurret_07 {};
		class CargoTurret_08 : CargoTurret_08 {};
	};
};