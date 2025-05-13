class SPE_PzKpfwIV_G_base: SPE_Tank_base
{
	/* Liveries */
	class TextureSources
	{
		class SEP_B_GER_Dunkelgelb_Winter
		{
			factions[]=
			{
			};
			displayname="Dunkelgelb (Winter)";
			textures[]=
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_01_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_02_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_03_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa"
			};
		};
		class SEP_B_GER_Panzergrau_Winter
		{
			factions[]=
			{
			};
			displayname="Panzer Grey (Winter)";
			textures[]=
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_01_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_02_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_03_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_pzgry_win_CO.paa"
			};
		};
		class SEP_B_GER_Panzergrau
		{
			factions[]=
			{
			};
			displayname="Panzer Grey";
			textures[]=
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_01_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_02_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_03_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_pzgry_CO.paa"
			};
		};
		class SEP_B_GER_AmbushDot
		{
			factions[]=
			{
			};
			displayname="Ambush Dot";
			textures[]=
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_01_ambush_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_02_ambush_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_03_ambush_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_ambush_CO.paa"
			};
		};
		class SEP_B_GER_AmbushDot_Winter
		{
			factions[]=
			{
			};
			displayname="Ambush Dot (Winter)";
			textures[]=
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_01_ambush_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_02_ambush_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_03_ambush_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_ambush_win_CO.paa"
			};
		};
		class SEP_B_GER_Camo1_Winter
		{
			factions[]=
			{
			};
			displayname="Dunkelgelb (Camo 01, Winter)";
			textures[]=
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_01_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_02_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_03_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa"
			};
		};
	};
};

class SPE_PzKpfwIV_G;
class SEP_B_GER_DAK_PzKpfw_IV_G : SPE_PzKpfwIV_G 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw IV Ausf.G";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_PzKpfw_IV_G.jpg";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	crew = "SEP_B_GER_DAK_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIV\pz4_hull_muster_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIV\pz4_turret_muster_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIV\pz4_wheels_muster_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_gelb_co.paa"
	};
	animationList[] = 
	{
		"hide_mud_flaps_source",0,
		"Hide_Shields_Hull",1,
		"Hide_Shields_Turret",1,
		"hide_turret_box_source",0
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIV\pz4_hull_muster_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIV\pz4_turret_muster_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIV\pz4_wheels_muster_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_gelb_co.paa"
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
				class CommanderMG : CommanderMG 
				{ 
					gunnerType = "SEP_B_GER_DAK_Tank_SL"; 
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

class SEP_B_GER_WIN_PzKpfw_IV_G : SPE_PzKpfwIV_G 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw IV Ausf.G";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_PzKpfw_IV_G.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_01_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_02_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw4_03_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa"
	};
	animationList[] = 
	{
		"hide_mud_flaps_source",0,
		"Hide_Shields_Hull",0,
		"Hide_Shields_Turret",0,
		"hide_turret_box_source",0
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