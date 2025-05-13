class SPE_PzKpfwIII_J;
class SEP_B_GER_DAK_PzKpfw_III_J : SPE_PzKpfwIII_J 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.J";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_PzKpfw_III_J.jpg";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	crew = "SEP_B_GER_DAK_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_DAK_co.paa"
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
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_DAK_co.paa"
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

class SEP_B_GER_WIN_PzKpfw_III_J : SPE_PzKpfwIII_J 
{
	author = "Jamie";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.J";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_PzKpfw_III_J.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
	};
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
			};
		};
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


class SPE_PzKpfwIII_L;
class SEP_B_GER_DAK_PzKpfw_III_L : SPE_PzKpfwIII_L 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.L";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_PzKpfw_III_L.jpg";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	crew = "SEP_B_GER_DAK_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_L_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_DAK_co.paa"
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
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_L_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_DAK_co.paa"
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
class SEP_B_GER_WIN_PzKpfw_III_L : SPE_PzKpfwIII_L 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.L";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_PzKpfw_III_L.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
	};
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
			};
		};
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

class SPE_PzKpfwIII_M;
class SEP_B_GER_DAK_PzKpfw_III_M : SPE_PzKpfwIII_M 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.M";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_PzKpfw_III_M.jpg";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	crew = "SEP_B_GER_DAK_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_L_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_N_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_dak_co.paa"
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
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_L_dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_N_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_dak_co.paa"
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

class SEP_B_GER_WIN_PzKpfw_III_M : SPE_PzKpfwIII_M 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.M";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_PzKpfw_III_M.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
	};
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
			};
		};
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

class SPE_PzKpfwIII_N;
class SEP_B_GER_DAK_PzKpfw_III_N : SPE_PzKpfwIII_N 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.N";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_PzKpfw_III_N.jpg";
	side = 1;
	faction = "SEP_B_GER_DAK_Units";
	crew = "SEP_B_GER_DAK_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_L_dak_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_N_DAK_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_dak_co.paa"
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
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Hull_Details_dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Turret_L_dak_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Wheels_N_DAK_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\PzKpfwIII\Pz3_Cupola_dak_co.paa"
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

class SEP_B_GER_WIN_PzKpfw_III_N : SPE_PzKpfwIII_N 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "PzKpfw III Ausf.N";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_PzKpfw_III_N.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_camo_win_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
	};
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_dunkel_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_pzgry_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_win_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_pzgry_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_pzgry_CO.paa"
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
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_01_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_02_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_03_L_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_04_N_camo_win_CO.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_PzKpfw3_05_dunkel_win_CO.paa"
			};
		};
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