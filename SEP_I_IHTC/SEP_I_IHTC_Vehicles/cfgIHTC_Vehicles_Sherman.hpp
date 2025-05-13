class SPE_M4A1_75;
class SEP_I_IHTC_M4A1_75 : SPE_M4A1_75 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "M4A1 Sherman";
	editorPreview = "\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\editorPreviews\SEP_I_IHTC_M4A1_75.jpg";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	crew = "SEP_I_IHTC_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
		"\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\SEP_I_IHTC_M4A1_75_d_ca.paa",
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
		class IHTC
		{
			factions[]=
			{
			};
			displayname="Îles Horizon Troupes Coloniales";
			textures[]=
			{
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_E_Hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_U1_t\M4A0\M4A0_E_Turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\Tanks_2_t\M4A1\M4A1_Wheels_co.paa",
				"\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\SEP_I_IHTC_M4A1_75_d_ca.paa",
				"",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "SEP_I_IHTC_Tank_Crew";
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics { gunnerType = "SEP_I_IHTC_Tank_Sergeant"; };
				class Loader_place : Loader_place { gunnerType = "SEP_I_IHTC_Tank_Crew"; };
				class CommanderMG : CommanderMG 
				{ 
					gunnerType = "SEP_I_IHTC_Tank_Sergeant"; 
				};
			};
		};
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_IHTC_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
		class CargoTurret_05 : CargoTurret_05 {};
	};
};