#define __ROF(rpm) reloadtime = (60/##rpm)

class CfgPatches 
{

	class SEP_WP_MP18
	{

		units[] = {};

		weapons[] = 
		{
			"SEP_WP_MP18",
			"SEP_WP_MP28"
		};

        magazines[] = 
		{
			"SEP_WP_MP18_Mag",
			"SEP_WP_MP28_Mag",
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
class WeaponSlotsInfo;
class InventoryMuzzleItem_Base_F;

//Spearhead 1944 Inheritances//
class SPE_RIFLE;
class SPE_Bayonet_base;
class SPE_ACC_Bayonet_Base;

class Rifle_short_Base_F;

class CfgMagazines 
{
    class SPE_32Rnd_9x19_Sten;

    class SEP_WP_MP18_Mag : SPE_32Rnd_9x19_Sten
	{       
        author = "OokamiJamie";
        count = 32;
        displayName = "9x19 32Rnd MP 18/I Mag";
        picture = "\SEP_WP\SEP_WP_MAS38\data\icons\SEP_WP_MAS38_Mag_ca.paa";
		mass = 8;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazineWell[] = {};
    };
	class SEP_WP_MP28_Mag : SPE_32Rnd_9x19_Sten
	{       
        author = "OokamiJamie";
        count = 32;
        displayName = "9x19 32Rnd MP 28/II Mag";
        picture = "\SEP_WP\SEP_WP_MAS38\data\icons\SEP_WP_MAS38_Mag_ca.paa";
		mass = 8;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazineWell[] = {};
    };
};
class CfgMagazineWells
{
	class SEP_WP_MP18_Magwell
	{
        SEP_Magazines[] =
        {
		   SEP_WP_MP18_Mag
        };
    };
	class SEP_WP_MP28_Magwell
	{
        SEP_Magazines[] =
        {
		   SEP_WP_MP28_Mag
        };
    };
};

class CfgWeapons 
{
    /* Arsenal */
	class SEP_WP_MP18: Rifle_short_Base_F
    {
		memoryPointCamera = "eye";	
		author="OokamiJamie and Joe";
		scope=2;
		displayName="MP 18/I";
		descriptionShort = "Submachine Gun<br />Caliber: 9x19 mm";
		picture = "\SEP_WP\SEP_WP_MP18\data\icons\SEP_WP_MP18_ca.paa";
		UiPicture = "\WW2\SPE_Assets_t\Weapons\UiPicture_t\Icon_Regular_ca.paa";
		hiddenSelections[] = {"camo","camo1"};
		model="\SEP_WP\SEP_WP_MP18\SEP_WP_MP18.p3d";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP\SEP_WP_MP18\Data\mp18_CO.paa",
			"\SEP_WP\SEP_WP_MP18\Data\mp18_magazine_CO.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SEP_WP\SEP_WP_MP18\Data\anim\mp18.rtm"
		};
		magazines[] = {"SEP_WP_MP18_Mag"};
		magazineWell[] = {"SEP_WP_MP18_Magwell"};
		htMin = 8;
		htMax = 920;
		inertia = 0.8;
		aimTransitionSpeed = 0.7;
		dexterity = 1.3;
		initSpeed = 350;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 0;
		reloadAction = "SPE_GestureReload_Sten";
		reloadMagazineSound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_U1_s\sounds\specific\mp35\reload",1.25,1,32};
		reloadSound[] = {"",1,1};
		SPE_adsPrefix = "smg";
		SPE_boltSnapSound = "SPE_boltSnap_mp40";
		SPE_emptyBoltSnapSound = "SPE_emptyBoltSnap_mp40";
		SPE_reloadMagazineSound = "SPE_mp35_reload";
		drySound[] = {"\WW2\SPE_Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Dry.wss",1,1,10};
		recoil = "recoil_mp35_1";
		maxZeroing = 200;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		class Eventhandlers: Eventhandlers
        {
            class SPE_Alt_Reloads
            {
                reload = "_this call SPE_AltReloads_fnc_onReload";
            };
			class SPE_EmptyBoltSnap
            {
                fired = "_this call SPE_fnc_emptyBoltSnap";
            };
			class SPE_SimpleOpenBolt
            {
                fired = "_this call SPE_fnc_simpleOpenBolt";
            };
        };
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.4,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.4,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.4,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.4,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.22,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.22,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.22,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.22,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
    	{
			mass = 70;
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
	    modes[] = {"FullAuto","close","short","medium"};
		class FullAuto: Mode_FullAuto
		{
			__ROF(450);
			dispersion = 0.0006;
			sounds[] = {"StandardSound"};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPE_MP35_Shot_SoundSet","SPE_rifle_small_ob_Tail_SoundSet","SPE_MP35_stereoLayer_SoundSet"};
			};
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
		class SPE_AltReload1: FullAuto
		{
			modes[] = {"FullAuto"};
			magazines[] = {"SPE_32rnd_MUZZLE_FAKEMAG"};
			reloadAction = "SPE_GestureReload_Sten";
			textureType = "fullAuto";
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			SPE_reloadMagazineSound = "SPE_mp35_reload";
		};
		class SPE_Alt_Reloads
		{
			class SEP_WP_MP18
			{
				condition = "%1 == 0 || %3 != %4";
			};
			class SPE_AltReload1
			{
				condition = "%1 > 0";
			};
		};
	};
	
	class SEP_WP_MP28: Rifle_short_Base_F
    {
		memoryPointCamera = "eye";	
		author="OokamiJamie and Joe";
		scope=2;
		displayName="MP 28/II";
		descriptionShort = "Submachine Gun<br />Caliber: 9x19 mm";
		picture = "\SEP_WP\SEP_WP_MP18\data\icons\SEP_WP_MP28_ca.paa";
		UiPicture = "\WW2\SPE_Assets_t\Weapons\UiPicture_t\Icon_Regular_ca.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
		model="\SEP_WP\SEP_WP_MP18\SEP_WP_MP28.p3d";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP\SEP_WP_MP18\Data\mp18_CO.paa",
			"\SEP_WP\SEP_WP_MP18\Data\mp28_2_CO.paa",
			"\SEP_WP\SEP_WP_MP18\Data\mp28_CO.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SEP_WP\SEP_WP_MP18\Data\anim\mp18.rtm"
		};
		magazines[] = {"SEP_WP_MP28_Mag"};
		magazineWell[] = {"SEP_WP_MP28_Magwell"};
		htMin = 8;
		htMax = 920;
		inertia = 0.8;
		aimTransitionSpeed = 0.7;
		dexterity = 1.3;
		initSpeed = 350;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
        discreteDistanceInitIndex = 0;
		reloadAction = "SPE_GestureReload_Sten";
		reloadMagazineSound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_U1_s\sounds\specific\mp35\reload",1.25,1,32};
		reloadSound[] = {"",1,1};
		SPE_adsPrefix = "smg";
		SPE_boltSnapSound = "SPE_boltSnap_mp40";
		SPE_emptyBoltSnapSound = "SPE_emptyBoltSnap_mp40";
		SPE_reloadMagazineSound = "SPE_mp35_reload";
		drySound[] = {"\WW2\SPE_Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Dry.wss",1,1,10};
		recoil = "recoil_mp35_1";
		maxZeroing = 200;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		class Eventhandlers: Eventhandlers
        {
            class SPE_Alt_Reloads
            {
                reload = "_this call SPE_AltReloads_fnc_onReload";
            };
			class SPE_EmptyBoltSnap
            {
                fired = "_this call SPE_fnc_emptyBoltSnap";
            };
			class SPE_SimpleOpenBolt
            {
                fired = "_this call SPE_fnc_simpleOpenBolt";
            };
        };
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.4,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.4,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.4,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.4,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.22,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.22,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.22,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.22,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
    	{
			mass = 70;
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
	    modes[] = {"FullAuto","Single","close","short","medium"};
		class Single: Mode_SemiAuto
		{
			textureType = "semi";
			displayName = "Semi";
			reloadTime = 0.1;
			dispersion = 0.0021;
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPE_MP35_Shot_SoundSet","SPE_rifle_small_ob_Tail_SoundSet","SPE_MP35_stereoLayer_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			__ROF(600);
			dispersion = 0.0006;
			sounds[] = {"StandardSound"};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPE_MP35_Shot_SoundSet","SPE_rifle_small_ob_Tail_SoundSet","SPE_MP35_stereoLayer_SoundSet"};
			};
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
		class SPE_AltReload1: FullAuto
		{
			modes[] = {"FullAuto","Single"};
			magazines[] = {"SPE_32rnd_MUZZLE_FAKEMAG"};
			reloadAction = "SPE_GestureReload_Sten";
			textureType = "fullAuto";
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			SPE_reloadMagazineSound = "SPE_mp35_reload";
		};
		class SPE_Alt_Reloads
		{
			class SEP_WP_MP28
			{
				condition = "%1 == 0 || %3 != %4";
			};
			class SPE_AltReload1
			{
				condition = "%1 > 0";
			};
		};
	};
};