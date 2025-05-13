//M4//
class SPE_M4A0_composite;
class SEP_I_US_WIN_M4A0 : SPE_M4A0_composite 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4 Sherman (Composite)";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A0.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_c_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_c_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A0_75;
class SEP_I_US_WIN_M4A0_75 : SPE_M4A0_75 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4 Sherman (Late)";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A0_75.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A0\M4A0_E_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_c_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A0_75_Early;
class SEP_I_US_WIN_M4A0_75_Early : SPE_M4A0_75_Early 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A0 75 Early (Loadable)";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A0_75_Early.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A0\M4A0_E_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A0\M4A0_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

//M4(105)//
class SPE_M4A0_105;
class SEP_I_US_WIN_M4A0_105 : SPE_M4A0_105 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4(105) Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A0_105.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_alt_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_alt_ca.paa",
				"",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

//M4A1//
class SPE_M4A1_75_erla;
class SEP_I_US_WIN_M4A1_75_erla : SPE_M4A1_75_erla 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A1 Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A1_75_erla.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_ca.paa",
				"",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A1_75;
class SEP_I_US_WIN_M4A1_75 : SPE_M4A1_75 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A1 Sherman (Late)";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A1_75.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_ca.paa",
		"",
		"\a3\data_f\clear_empty.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_ca.paa",
				"",
				"\a3\data_f\clear_empty.paa"
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A1_76;
class SEP_I_US_WIN_M4A1_76 : SPE_M4A1_76 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A1(76)W Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A1_76.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_L_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_76Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_alt_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_ca.paa",
				"",
				"\a3\data_f\clear_empty.paa"
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A1_T34_Calliope;
class SEP_I_US_WIN_M4A1_T34_Calliope : SPE_M4A1_T34_Calliope 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A1-T34 Calliope Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A1_T34_Calliope.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_e_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_e_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
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
				class CommanderMG : CommanderMG {};
			};
		};
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A1_T34_Calliope_Direct;
class SEP_I_US_WIN_M4A1_T34_Calliope_Direct : SPE_M4A1_T34_Calliope_Direct 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A1-T34 Calliope Sherman (Artillery)";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A1_T34_Calliope_Direct.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_e_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_e_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
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
				class CommanderMG : CommanderMG {};
			};
		};
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

//M4A3//
class SPE_M4A3_105;
class SEP_I_US_WIN_M4A3_105 : SPE_M4A3_105 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A3(105) Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A3_105.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A3_75;
class SEP_I_US_WIN_M4A3_75 : SPE_M4A3_75 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A3(75)W Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A3_75.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_alt_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_alt_ca.paa",
				"",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A3_76;
class SEP_I_US_WIN_M4A3_76 : SPE_M4A3_76 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A3(76)W Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A3_76.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_76Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_ca.paa",
		"",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_2ad_ca.paa",
				"",
				"\a3\data_f\clear_empty.paa"
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A3_T34_Calliope;
class SEP_I_US_WIN_M4A3_T34_Calliope : SPE_M4A3_T34_Calliope 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A3-T34 Calliope Sherman (Artillery)";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A3_T34_Calliope.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};

class SPE_M4A3_T34_Calliope_Direct;
class SEP_I_US_WIN_M4A3_T34_Calliope_Direct : SPE_M4A3_T34_Calliope_Direct 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A3-T34 Calliope Sherman";
	editorPreview = "\SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_M4A3_T34_Calliope_Direct.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\Usa_ca.paa"
	};
	animationList[] = 
	{
		"armour_hide_source",0,
		"star_hide_source",1,
		"stowage_hide_source",0,
		"rhino_hide_source",1,
		"logs_hide_source",1,
		"skirts_hide_source",1
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
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_L_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A3\M4A3_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4_Decals\decal_generic_ca.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\Calliope\Calliope_co.paa",
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
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_US_WIN_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};