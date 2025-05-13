#include "cfgPatches.hpp"
#include "cfgMagazines.hpp"
#include "cfgMagazineWells.hpp"
/// All firemodes, to be sure

class WeaponSlotsInfo;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Eventhandlers;

class CfgWeapons 
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CannonCore;
	class BaseSoundModeType;
	class Default;
	class MGun;
	class player;
	class RocketPods;
	class TruckHorn;
	class SmokeLauncher;
	class SPE_CannonCore;
	class SPE_TankCannon_base;
	class SPE_StaticGunCannon_base;
	class SEP_WP_StaticGunCannon_base;
	// Raketenwerfer 43
	class SEP_TankCannon_base: CannonCore
	{
		class Eventhandlers
		{
			class SPE_ReloadIndicator
			{
				fired = "_this call SPE_fnc_system_reloadIndicator_fired_eh";
				reloaded = "_this call SPE_fnc_system_reloadIndicator_reload_eh";
			};
			class SPE_sideChainEH
			{
				fired = "_this params ['_unit']; [_unit, SPE_sideChainDist_cannon, SPE_sideChainBottom_cannon, SPE_sideChainHold_cannon, SPE_sideChainEnd_cannon] call SPE_soundFunction_vehicleSidechainFired";
			};
		};
	};
	class SEP_StaticGunCannon_base: SEP_TankCannon_base
	{
		modes[] = {"player","close","short","medium","far"};
		SPE_CustomReloadSound_Enabled = 1;
	};
	class SEP_WP_RKWerfer43_base: SEP_StaticGunCannon_base
	{
		scope=1;
		displayName = "8.8 cm Raketenwerfer 43";
		magazineReloadTime = 5;
		magazines[]=
		{
			"SEP_30rnd_RpzBGr431"
		};
		magazineWell[] = {"SEP_RKWerfer43_RPzB"};
		modes[] = {"player","close","short","medium"};
	};
	class SEP_WP_RKWerfer43: SEP_WP_RKWerfer43_base
	{
		scope=1;
		displayName = "8.8 cm Raketenwerfer 43";
		magazineReloadTime = 5;
		magazines[]=
		{
			"SEP_30rnd_RpzBGr431"
		};
		magazineWell[] = {"SEP_RKWerfer43_RPzB"};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			reloadTime = 5;
			class StandardSound: baseSoundModeType
			{
				soundSetShot[] = {"SPE_rpzb_Shot_SoundSet","SPE_rifle_med_Tail_SoundSet"};
			};
		};
		class close: player
		{
			maxRange = 500;
			maxRangeProbab = 0.04;
			midRange = 250;
			midRangeProbab = 0.78;
			minRange = 10;
			minRangeProbab = 0.35;
		};
		class short: close
		{
			maxRange = 750;
			maxRangeProbab = 0.04;
			midRange = 500;
			midRangeProbab = 0.58;
			minRange = 250;
			minRangeProbab = 0.05;
		};
		class medium: short
		{
			maxRange = 1000;
			maxRangeProbab = 0.04;
			midRange = 750;
			midRangeProbab = 0.58;
			minRange = 500;
			minRangeProbab = 0.05;
		};
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class ViewOptics;
		class NewTurret
		{
			class ViewGunner;
		};
		class CargoTurret;
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class ViewPilot;
		class CommanderOptics;
	};
	class StaticWeapon: LandVehicle
	{
		class EventHandlers;
		class Turrets
		{
			class CommanderOptics: CommanderOptics
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
		class UserActions;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class EventHandlers: EventHandlers
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class UserActions: UserActions
		{
		};
	};
	class SPE_StaticMGWeapon_base: StaticMGWeapon
	{
		class EventHandlers: EventHandlers
		{
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class UserActions: UserActions
		{
		};
	};
	class StaticCannon: StaticWeapon
	{
		class EventHandlers;
		class Turrets
		{
			class CommanderOptics: CommanderOptics
			{
			};
			class MainTurret: NewTurret
			{
			};
		};
		class UserActions;
	};
	class SPE_StaticCannon_base: StaticCannon
	{
		class EventHandlers: EventHandlers
		{
		};
		class Turrets: Turrets
		{
			class CommanderOptics: CommanderOptics
			{
			};
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class UserActions: UserActions
		{
		};
	};
	class SPE_Pak40_base: SPE_StaticCannon_base
	{
		class EventHandlers: EventHandlers
		{
		};
		class Turrets: Turrets
		{
			class CommanderOptics: CommanderOptics
			{
			};
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class UserActions: UserActions
		{
		};
	};
	class SEP_WP_Static_RKWerfer43_base: SPE_Pak40_base
	{
		SPE_Mass = 50;
		model="\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\SEP_WP_Static_RKWerfer43.p3d";
		hiddenSelections[] = {"camo","camo1"};
		SPE_isTowable = 1;
		SPE_Towing_AttachDetection[] = {0,-3,-0.7};
		driveOnComponent[] = {"wheel_1_1","wheel_2_1","stand"};
		author="OokamiJamie";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SEP_WP_RKWerfer43"};
				magazines[] = {"SEP_30rnd_RpzBGr431"};
				gunnerAction="SPE_Pak40_Gunner";
				gunnerInAction="SPE_Pak40_Gunner";
				minElev = -20;
				maxElev = 20;
				minTurn = -10;
				maxTurn = 10;
				selectionFireAnim="zasleh";
				turretInfoType = "SPE_Pak40_Gunner_Optic";
				gunnergetInAction="";
				gunnergetOutAction = "SPE_GetOut_LowStatic";
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerAction = "SPE_Pak40_Commander";
				gunnerInAction = "SPE_Pak40_Commander";
				gunnergetOutAction = "SPE_GetOut_LowStatic";
			};
		};
		class TextureSources
		{
			class SEP_B_GER_Panzergrau
			{
				displayName = "Panzer Grey";
				author = "Jamie";
				textures[] =
				{
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_pzgry_CO.paa",
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_pzgry_CO.paa"
				};
				factions[] = {};
			};
			class SEP_B_GER_Panzergrau_Winter
			{
				displayName = "Panzer Grey (Winter)";
				author = "Jamie";
				textures[] =
				{
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_pzgry_win_CO.paa",
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_pzgry_win_CO.paa"
				};
				factions[] = {};
			};
			class SEP_B_GER_Dunkelgelb
			{
				displayName = "Dunkelgelb";
				author = "Jamie";
				textures[] =
				{
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_dunkel_CO.paa",
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_dunkel_CO.paa"
				};
				factions[] = {};
			};
			class SEP_B_GER_Camo1
			{
				displayName = "Dunkelgelb (Camo 01)";
				author = "Jamie";
				textures[] =
				{
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_camo_01_CO.paa",
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_dunkel_CO.paa"
				};
				factions[] = {};	
			};
			class SEP_B_GER_Camo1_Winter
			{
				displayName = "Dunkelgelb (Camo 01, Winter)";
				author = "Jamie";
				textures[] =
				{
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_camo_01_win_CO.paa",
					"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_dunkel_win_CO.paa"
				};
				factions[] = {};	
			};
		};
	};
	class SEP_B_GER_RKWerfer43: SEP_WP_Static_RKWerfer43_base
	{
		author="OokamiJamie";
		scope=2;
		side=1;
		editorPreview = "\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\editorPreviews\SEP_B_GER_RKWerfer43.jpg";
		faction = "SPE_WEHRMACHT";
		crew = "SPE_GER_rifleman";
		typicalCargo[]=
		{
			"SPE_GER_rifleman"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_camo_01_CO.paa",
			"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_dunkel_CO.paa"
		};
		displayName="8.8 cm Raketenwerfer 43";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerType = "SPE_GER_rifleman";
			};
		};
		class AnimationSources
		{
			class tow_rotation_y
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_x
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_z
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class wheel_1_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 60;
			};
			class wheel_2_1: wheel_1_1{};

			class noCrew
			{
				source="user";//user
				animperiod=1;
			};
			class ammo
			{
				source="ammo";
				weapon="SEP_WP_RKWerfer43";
			};
			class ammoRandom
			{
				source="ammoRandom";
				weapon="SEP_WP_RKWerfer43";
			};
		};
	};
	// Winter
	class SEP_B_GER_WIN_RKWerfer43: SEP_WP_Static_RKWerfer43_base
	{
		author="OokamiJamie";
		scope=2;
		side=1;
		editorPreview = "\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\editorPreviews\SEP_B_GER_WIN_RKWerfer43.jpg";
		faction = "SEP_B_GER_Winter_Units";
		crew = "SEP_B_GER_WIN_Rflmn_K98";
		typicalCargo[]=
		{
			"SEP_B_GER_WIN_Rflmn_K98"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_camo_01_win_CO.paa",
			"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_dunkel_win_CO.paa"
		};
		displayName="8.8 cm Raketenwerfer 43";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerType = "SEP_B_GER_WIN_Rflmn_K98";
			};
		};
		class AnimationSources
		{
			class tow_rotation_y
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_x
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_z
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class wheel_1_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 60;
			};
			class wheel_2_1: wheel_1_1{};

			class noCrew
			{
				source="user";//user
				animperiod=1;
			};
			class ammo
			{
				source="ammo";
				weapon="SEP_WP_RKWerfer43";
			};
			class ammoRandom
			{
				source="ammoRandom";
				weapon="SEP_WP_RKWerfer43";
			};
		};
	};
	// DAK
	class SEP_B_GER_DAK_RKWerfer43: SEP_WP_Static_RKWerfer43_base
	{
		author="OokamiJamie";
		scope=2;
		side=1;
		editorPreview = "\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\editorPreviews\SEP_B_GER_DAK_RKWerfer43.jpg";
		faction = "SEP_B_GER_DAK_Units";
		crew = "SEP_B_GER_DAK_Rflmn_K98";
		typicalCargo[]=
		{
			"SEP_B_GER_DAK_Rflmn_K98"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_01_dunkel_CO.paa",
			"\SEP_WP_APLND\SEP_WP_APLND_Static\SEP_WP_RKWerfer43\Data\SEP_WP_Static_RKWerfer43_02_dunkel_CO.paa"
		};
		displayName="8.8 cm Raketenwerfer 43";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerType = "SEP_B_GER_DAK_Rflmn_K98";
			};
		};
		class AnimationSources
		{
			class tow_rotation_y
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_x
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_z
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class wheel_1_1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 60;
			};
			class wheel_2_1: wheel_1_1{};

			class noCrew
			{
				source="user";//user
				animperiod=1;
			};
			class ammo
			{
				source="ammo";
				weapon="SEP_WP_RKWerfer43";
			};
			class ammoRandom
			{
				source="ammoRandom";
				weapon="SEP_WP_RKWerfer43";
			};
		};
	};
};