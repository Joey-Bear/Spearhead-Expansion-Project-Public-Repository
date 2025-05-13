class SPE_StaticCannon_base;
class SPE_57mm_M1_base:SPE_StaticCannon_base
{
	class Turrets;
};
class SEP_I_FEB_57mm_M1_Base:SPE_57mm_M1_base
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
	
class SEP_I_FEB_57mm_M1: SEP_I_FEB_57mm_M1_Base
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_FEB";
	author = "Joe";
	side = 2;
	faction = "SEP_I_FEB_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_FEB_GunCrew";
	typicalCargo[] = {"SEP_I_FEB_Rflmn_M1903","SEP_I_FEB_Rflmn_M1903","SEP_I_FEB_Rflmn_M1903"};
	displayName = "57 mm Gun M1";
	editorPreview="\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_57mm_M1.jpg";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerType = "SEP_I_FEB_GunCrew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_I_FEB_GunCrew_Srgt";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_I_FEB_GunCrew";
		};
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_I_FEB_GunCrew";
		};
		class CargoTurret_03: CargoTurret_03
		{
			gunnerType = "SEP_I_FEB_GunCrew";
		};			
	};
};

class SPE_M1_81;	
class SEP_I_FEB_M1_81: SPE_M1_81
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_FEB";
	author = "Joe";
	side = 2;
	faction = "SEP_I_FEB_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_FEB_Mortar_Gunner";
	displayName = "M1 81 mm";
	editorPreview="\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M1_81.jpg";
};

class SPE_M1919_M2;
class SEP_I_FEB_M1919_M2: SPE_M1919_M2
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_FEB";
	author = "Joe";
	side = 2;
	faction = "SEP_I_FEB_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_FEB_GunCrew";
	displayName = "M1919A4";
	editorPreview="\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M1919_M2.jpg";
};

class SPE_M1919_M2_Trench_Deployed;
class SEP_I_FEB_M1919_M2_Trench_Deployed: SPE_M1919_M2_Trench_Deployed
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_FEB";
	author = "Joe";
	side = 2;
	faction = "SEP_I_FEB_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_FEB_GunCrew";
	displayName = "M1919A4 (Trench)";
	editorPreview="\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M1919_M2_Trench_Deployed.jpg";
};

class SPE_M1919A6_Bipod;
class SEP_I_FEB_M1919A6_Bipod: SPE_M1919A6_Bipod
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_FEB";
	author = "Joe";
	side = 2;
	faction = "SEP_I_FEB_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_FEB_GunCrew";
	displayName = "M1919A6 (Bipod)";
	editorPreview="\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M1919A6_Bipod.jpg";
};

class SPE_M2_M3_Trench;
class SEP_I_FEB_M2_M3_Trench: SPE_M2_M3_Trench
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_FEB";
	author = "Joe";
	side = 2;
	faction = "SEP_I_FEB_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_FEB_GunCrew";
	displayName = "M2 .50 (Trench)";
	editorPreview="\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M2_M3_Trench.jpg";
};

class SPE_M2_M3;
class SEP_I_FEB_M2_M3: SPE_M2_M3
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_FEB";
	author = "Joe";
	side = 2;
	faction = "SEP_I_FEB_Units";
	editorSubcategory = "EdSubcat_Turrets";
	crew="SEP_I_FEB_GunCrew";
	displayName = "M2 .50 (Tripod)";
	editorPreview="\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M2_M3.jpg";
};