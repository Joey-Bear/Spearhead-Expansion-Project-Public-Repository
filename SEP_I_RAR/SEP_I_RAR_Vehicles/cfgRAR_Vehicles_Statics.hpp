class SPE_StaticCannon_base;
class SPE_57mm_M1_base:SPE_StaticCannon_base
{
	class Turrets;
};
class SEP_I_RAR_QF6Pndr_Base:SPE_57mm_M1_base
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
	
class SEP_I_RAR_QF6Pndr: SEP_I_RAR_QF6Pndr_Base
{
	scope=2;
	scopeCurator=2;
	dlc="SEP_I_RAR";
	author = "Joe";
	side = 2;
	faction = "SEP_I_RAR_Units";
	editorSubcategory="EdSubcat_Turrets";
	crew="SEP_I_RAR_GunCrew";
	typicalCargo[] = {"SEP_I_RAR_GunCrew","SEP_I_RAR_GunCrew","SEP_I_RAR_GunCrew"};
	displayName = "Ordnance QF 6-pounder";
	editorPreview="\SEP_I_RAR\SEP_I_RAR_Vehicles\data\editorPreviews\SEP_I_RAR_QF6Pndr.jpg";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerType = "SEP_I_RAR_GunCrew";
		};
		class CommanderOptics: CommanderOptics
		{
			gunnerType = "SEP_I_RAR_GunCrew_Srgt";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType = "SEP_I_RAR_GunCrew";
		};
		class CargoTurret_02: CargoTurret_02
		{
			gunnerType = "SEP_I_RAR_GunCrew";
		};
		class CargoTurret_03: CargoTurret_03
		{
			gunnerType = "SEP_I_RAR_GunCrew";
		};			
	};
};