class CfgPatches 
{

	class SEP_WP_APLND_Gewehr98 
	{

		units[] = {};

		weapons[] = 
		{
			"SEP_WP_Gewehr98",
			"SEP_WP_Gewehr98_Sniper"
		};

		requiredAddons[] = 
		{
			"A3_Weapons_F",
			"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_SPE_Assets_s_Weapons_Sounds_s"
		};
	};
};

/// All firemodes, to be sure
class Eventhandlers;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_OpticRail;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_556;
class asdg_OpticRail1913_short;

class CfgWeapons 
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	//* Bases *//
	
    /* Arsenal */
	class SEP_WP_Gewehr98: Rifle_Base_F
    {
		author="OokamiJamie";
		scope=2;
		displayName="Gew 98";
		picture = "\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\data\icons\SEP_WP_Gewehr98_ca.paa";
		UiPicture = "\WW2\SPE_Assets_t\Weapons\UiPicture_t\Icon_Regular_ca.paa";
		hiddenSelections[] = {"camo","camo1","camo3"};
		model="\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\SEP_WP_Gewehr98.p3d";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\gewehr_98_01_CO.paa",
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\gewehr_98_02_CO.paa",
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\gewehr_98_03_CO.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\anim\Gewehr98.rtm"
		};
		reloadAction = "SPE_GestureReload_Common_1clip";
		magazines[] = {"SPE_5Rnd_792x57"};
		magazineWell[] = {"SPE_792x57_K98","CBA_792x57_K98"};
		magazineReloadSwitchPhase=0.313;
		htMin = 1;
		htMax = 600;
		inertia = 0.55;
		aimTransitionSpeed = 0.9;
		dexterity = 1.7;
		initSpeed = 0;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 0;
		reloadMagazineSound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\shared\silence",0,1,0};
		drySound[] = {"\a3\sounds_f\weapons\other\dry5-rifle.wss",1,1,10};
		recoil = "recoil_rifle_1";
		maxZeroing = 800;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		SPE_boltActionAnim = "SPE_GestureReload_Common_bolt_action";
        SPE_boltActionSound = "SPE_k98_bolting";
		SPE_reloadMagazineSound = "SPE_k98_reload_1clip";
		SPE_boltActionCasePos[] = {-5,-18,5};
        SPE_boltActionCaseDir[] = {3,-10,20};
        SPE_boltActionCaseDelay = 0.55;
        SPE_boltActionCaseSelection = "LeftHand";
		class Eventhandlers: Eventhandlers
        {
            class SPE_BoltAction
            {
                fired = "[_this select 0,_this select 1,_this select 2,_this select 4] call SPE_fnc_handleBoltAction;";
            };
			class SPE_Alt_Reloads
            {
                reload = "_this call SPE_AltReloads_fnc_onReload";
            };
        };
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
    	{
			mass = 90;
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			}; 
			class PointerSlot
			{
			};
        };
	    modes[] = {"Single","Far","Medium","Short","Close","SPE_AltReload1"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 1.6;
			dispersion = 0.0008;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.05;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: baseSoundModeType
			{
				soundSetShot[] = {"SPE_K98_Shot_SoundSet","SPE_rifle2_Tail_SoundSet","SPE_K98_stereoLayer_SoundSet"};
			};
		};
		class Close: Single
		{
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.5;
			maxRange = 200;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Short: Single
		{
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Medium: Single
		{
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Far: Single
		{
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class SPE_AltReload1: Single
		{
		modes[] = {"Single"};
		magazines[] = {"SPE_5rnd_MUZZLE_FAKEMAG"};
		reloadAction = "SPE_GestureReload_Common_sniper"; //not used, probably best to keep defined
		textureType = "semi";
		discreteDistance[] = {100,200,300,400,500};
		discreteDistanceInitIndex = 0;
		SPE_reloadMagazineSound = "SPE_k98_reload_altReload"; //not used, probably best to keep defined
		SPE_Incremental_Reload = 1; //Tells the altReload system that this is a incremental reload
		SPE_Incremental_Reload_Animation[] = {"SPE_GestureReload_Common_Sniper_OpeningBolt","SPE_GestureReload_Common_Sniper_SingleBulletLoop","SPE_GestureReload_Common_Sniper_ClosingBolt"}; //Start,Loop(Load),End gestures
		SPE_GestureReload_Common_Sniper_OpeningBolt[] = {"SPE_k98_bolt_open"}; //What sound to play for each gesture
		SPE_GestureReload_Common_Sniper_SingleBulletLoop[] = {"SPE_genericBoltAction_altReload_loop"};
		SPE_GestureReload_Common_Sniper_ClosingBolt[] = {"SPE_k98_bolt_close"};
		SPE_Incremental_Reload_Delay[] = {2.3,0.4,1.16}; //The delays between animations, so 2.3 seconds to open the bolt, 0.4 for each bullet loaded, 1.16 to close
		};
		class SPE_Alt_Reloads
		{
			class SEP_WP_Gewehr98 //main weapon classname, can also just be 'this' now
			{
			condition = "(%1 <= 1 || %1 == %2 || %3 != %4)"; //If magazine is less than or equal to one, magazine is full or magazine types do not match perform full reload
			};
			class SPE_AltReload1
			{
			condition = "(%1 > 1 && %1 < %2)"; //if magazine count is greater than 1 or new magazine capacity is less than current magazine capacity, perform incremental reload
			};
		};
	};
	class SEP_WP_Gewehr98_Sniper: SEP_WP_Gewehr98
    {
		baseWeapon = "SEP_WP_Gewehr98_Sniper";
		author="OokamiJamie";
		scope=2;
		displayName="Gew 98 (Luxor 3x)";
		picture = "\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\data\icons\SEP_WP_Gewehr98_Sniper_ca.paa";
		UiPicture = "\WW2\SPE_Assets_t\Weapons\UiPicture_t\Icon_Sniper_ca.paa";
		hiddenSelections[] = {"camo","camo1","camo3"};
		model="\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\SEP_WP_Gewehr98_Sniper.p3d";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\gewehr_98_01_CO.paa",
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\gewehr_98_02_CO.paa",
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\gewehr_98_04_CO.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SEP_WP_APLND\SEP_WP_APLND_Gewehr98\Data\anim\Gewehr98.rtm"
		};
		modelOptics = "\WW2\SPE_Assets_m\Weapons\Optics_m\SPE_Optika_Zf39.p3d";
		reloadAction = "SPE_GestureReload_Common_sniper";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 0;
		reloadMagazineSound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\shared\silence",0,1,0};
		drySound[] = {"\a3\sounds_f\weapons\other\dry5-rifle.wss",1,1,10};
		recoil = "recoil_rifle_1";
		maxZeroing = 1000;
		useModelOptics = 1;
		SPE_boltActionAnim = "SPE_GestureReload_Common_bolt_action";
        SPE_boltActionSound = "SPE_k98_bolting";
		SPE_reloadMagazineSound = "SPE_genericBoltAction_altReload";
		SPE_boltActionCasePos[] = {-5,-18,5};
        SPE_boltActionCaseDir[] = {3,-10,20};
        SPE_boltActionCaseDelay = 0.55;
        SPE_boltActionCaseSelection = "LeftHand";
		class OpticsModes
		{
			class Sight
			{
				CameraDir = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 0;
				DistanceZoomMax = 400;
				DistanceZoomMin = 400;
				MemoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				OpticsFlare = 1;
				OpticsID = 1;
				opticsPPEffects[] = {"SPE_Sniper_OpticsCHAbera","SPE_Sniper_OpticsBlur"};
				opticsZoomInit = 0.0625;
				opticsZoomMax = 0.0625;
				opticsZoomMin = 0.0625;
				UseModelOptics = 1;
				VisionMode[] = {"Normal"};
			};
			class Ironsights
			{
				CameraDir = "";
				DistanceZoomMax = 300;
				DistanceZoomMin = 300;
				MemoryPointCamera = "Eye";
				OpticsDisablePeripherialVision = 0;
				OpticsFlare = 0;
				OpticsID = 2;
				OpticsPPEffects[] = {};
				OpticsZoomInit = 0.75;
				OpticsZoomMax = 1.25;
				OpticsZoomMin = 0.25;
				UseModelOptics = 0;
				VisionMode[] = {};
			};
		};
		class Eventhandlers: Eventhandlers
        {
            class SPE_BoltAction
            {
                fired = "[_this select 0,_this select 1,_this select 2,_this select 4] call SPE_fnc_handleBoltAction;";
            };
			class SPE_Alt_Reloads
            {
                reload = "_this call SPE_AltReloads_fnc_onReload";
            };
        };
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
    	{
			mass = 90;
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			}; 
			class PointerSlot
			{
			};
        };
	    modes[] = {"Single","Far","Medium","Short","Close","SPE_AltReload1"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 1.6;
			dispersion = 0.0008;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: baseSoundModeType
			{
				soundSetShot[] = {"SPE_K98_Shot_SoundSet","SPE_rifle2_Tail_SoundSet","SPE_K98_stereoLayer_SoundSet"};
			};
		};
		class Close: Single
		{
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.5;
			maxRange = 200;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Short: Single
		{
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Medium: Single
		{
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Far: Single
		{
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class SPE_AltReload1: Single
		{
		modes[] = {"Single"};
		magazines[] = {"SPE_5rnd_MUZZLE_FAKEMAG"};
		reloadAction = "SPE_GestureReload_Common_sniper"; //not used, probably best to keep defined
		textureType = "semi";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 0;
		SPE_reloadMagazineSound = "SPE_k98_reload_altReload"; //not used, probably best to keep defined
		SPE_Incremental_Reload = 1; //Tells the altReload system that this is a incremental reload
		SPE_Incremental_Reload_Animation[] = {"SPE_GestureReload_Common_Sniper_OpeningBolt","SPE_GestureReload_Common_Sniper_SingleBulletLoop","SPE_GestureReload_Common_Sniper_ClosingBolt"}; //Start,Loop(Load),End gestures
		SPE_GestureReload_Common_Sniper_OpeningBolt[] = {"SPE_k98_bolt_open"}; //What sound to play for each gesture
		SPE_GestureReload_Common_Sniper_SingleBulletLoop[] = {"SPE_genericBoltAction_altReload_loop"};
		SPE_GestureReload_Common_Sniper_ClosingBolt[] = {"SPE_k98_bolt_close"};
		SPE_Incremental_Reload_Delay[] = {2.3,0.4,1.16}; //The delays between animations, so 2.3 seconds to open the bolt, 0.4 for each bullet loaded, 1.16 to close
		};
		class SPE_Alt_Reloads
		{
			class SEP_WP_Gewehr98_Sniper //main weapon classname, can also just be 'this' now
			{
			condition = "(%1 <= 1 || %1 == %2 || %3 != %4)"; //If magazine is less than or equal to one, magazine is full or magazine types do not match perform full reload
			};
			class SPE_AltReload1
			{
			condition = "(%1 > 1 && %1 < %2)"; //if magazine count is greater than 1 or new magazine capacity is less than current magazine capacity, perform incremental reload
			};
		};
	};
};