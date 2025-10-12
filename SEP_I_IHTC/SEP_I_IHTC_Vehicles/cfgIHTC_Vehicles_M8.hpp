//M20 AUC
class SPE_M20_AUC;
class SEP_I_IHTC_M20_AUC : SPE_M20_AUC
{
	author = "Joe";
	editorSubcategory = "EdSubcat_Cars";
	scope = 2;
	scopeCurator = 2;
	displayName = "M20 Armored Utility Car";
	side = 2;
	editorPreview = "\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\editorPreviews\SEP_I_IHTC_M20_AUC.jpg";
	faction = "SEP_I_IHTC_Units";
	crew = "SEP_I_IHTC_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_interior_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_wheel_co.paa",
		"\a3\data_f\clear_empty.paa",//Decals
		"\a3\data_f\clear_empty.paa"
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
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_interior_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_wheel_co.paa",
				"\a3\data_f\clear_empty.paa",//Decals
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			gunnerType = "SEP_I_IHTC_Tank_Sergeant";
		};
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_I_IHTC_Tank_Crew"; };
		class CargoTurret_01 : CargoTurret_01 {};
		class CargoTurret_02 : CargoTurret_02 {};
		class CargoTurret_03 : CargoTurret_03 {};
		class CargoTurret_04 : CargoTurret_04 {};
	};
};

class SPE_M8_LAC;
class SEP_I_IHTC_M8_LAC : SPE_M8_LAC
{
	author = "Joe";
	editorSubcategory = "EdSubcat_Cars";
	scope = 2;
	scopeCurator = 2;
	displayName = "M8 Armored Car";
	side = 2;
	editorPreview = "\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\editorPreviews\SEP_I_IHTC_M8_LAC.jpg";
	faction = "SEP_I_IHTC_Units";
	crew = "SEP_I_IHTC_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_interior_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_wheel_co.paa",
		"\a3\data_f\clear_empty.paa",//Decals
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_interior_co.paa",
		"\a3\data_f\clear_empty.paa"
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
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_interior_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_wheel_co.paa",
				"\a3\data_f\clear_empty.paa",//Decals
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_interior_co.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics 
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
	};
};

class SPE_M8_LAC_ringMount;
class SEP_I_IHTC_M8_LAC_ringMount : SPE_M8_LAC_ringMount
{
	author = "Joe";
	editorSubcategory = "EdSubcat_Cars";
	scope = 2;
	scopeCurator = 2;
	displayName = "M8 Armored Car (M2)";
	side = 2;
	editorPreview = "\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\editorPreviews\SEP_I_IHTC_M8_LAC.jpg";
	faction = "SEP_I_IHTC_Units";
	crew = "SEP_I_IHTC_Tank_Crew";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_hull_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_turret_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_interior_co.paa",
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_wheel_co.paa",
		"\a3\data_f\clear_empty.paa",//Decals
		"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_interior_co.paa",
		"\a3\data_f\clear_empty.paa"
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
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_hull_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_turret_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_interior_co.paa",
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M8_LAC\m8_wheel_co.paa",
				"\a3\data_f\clear_empty.paa",//Decals
				"\WW2\SPE_Assets_t\Vehicles\ArmoredCar_U1_t\M20_AUC\m20_interior_co.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret
		{
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics 
				{
					gunnerType = "SEP_I_IHTC_Tank_Sergeant"; 
				};
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
	};
};