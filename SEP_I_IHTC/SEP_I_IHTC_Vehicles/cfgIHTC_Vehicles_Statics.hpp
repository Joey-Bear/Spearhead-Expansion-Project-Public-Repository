class SPE_StaticCannon_base;
class SPE_57mm_M1_base:SPE_StaticCannon_base
{
	class Turrets;
};
class SEP_I_IHTC_57mm_M1_Base:SPE_57mm_M1_base
{
	class EventHandlers;
	class TextureSources;
	class Turrets:Turrets
	{
		class MainTurret;
		class CommanderOptics;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
	};
};
	
class SEP_I_IHTC_57mm_M1: SEP_I_IHTC_57mm_M1_Base
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_IHTC";
	author = "Joe";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_IHTC_GunCrew";
	typicalCargo[] = {"SEP_I_IHTC_GunCrew","SEP_I_IHTC_GunCrew","SEP_I_IHTC_GunCrew"};
	displayName = "57 mm Gun M1";
	editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\editorPreviews\SEP_I_IHTC_57mm_M1.jpg";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerType = "SEP_I_IHTC_GunCrew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_I_IHTC_GunCrew_Srgt";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_I_IHTC_GunCrew";
		};
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_I_IHTC_GunCrew";
		};
		class CargoTurret_03: CargoTurret_03
		{
			gunnerType = "SEP_I_IHTC_GunCrew";
		};			
	};
};

class SPE_MLE_27_31;

class SEP_I_IHTC_MLE_27_31: SPE_MLE_27_31
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_IHTC";
	author = "Joe";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_IHTC_Mortar_Gunner";
	displayName = "Mortier de 81 mm Mle. 27/31";
	editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\editorPreviews\SEP_I_IHTC_MLE_27_31.jpg";
};

class SPE_FM24_M24_Bipod;

class SEP_I_IHTC_FM24_M24_Bipod: SPE_FM24_M24_Bipod
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_IHTC";
	author = "Joe";
	side = 2;
	faction = "SEP_I_IHTC_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_IHTC_Rflmn_Carb";
	displayName = "FM 24 M29 (Bipod)";
	editorPreview="\SEP_I_IHTC\SEP_I_IHTC_Vehicles\data\editorPreviews\SEP_I_IHTC_FM24_M24_Bipod.jpg";
};