#define __ROF(rpm) reloadtime = (60/##rpm)

class CfgPatches 
{
    class SEP_WP_MAS38 
	{
        requiredaddons[] = {};
        units[] = {};
        weapons[] = 
		{
			"SEP_WP_MAS38",
		};
        magazines[] = 
		{
			"SEP_WP_MAS38_Mag"
		};
        author="Cover Fire Studios";
        version = "1.0";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgAmmo 
{
	class B_45ACP_Ball;
	class SEP_WP_765_Longue_Ball: B_45ACP_Ball 
	{
		hit = 2;
	};
};

class CfgMagazines 
{
    class SPE_32Rnd_9x19_Sten;

    class SEP_WP_MAS38_Mag : SPE_32Rnd_9x19_Sten
	{       
        author = "Lukinator";
        ammo = "SEP_WP_765_Longue_Ball";
        count = 32;
        displayName = "7.65 32Rnd MAS-38 Mag";
		descriptionShort = "Caliber: 7.65 mm Longue <br />Projectile: 7.65 French Long 110gr RN<br />Rounds: 32<br />Type: Box Magazine<br />Used in: MAS-38";
        picture = "\SEP_WP_APLND\SEP_WP_MAS38\data\SEP_WP_MAS38_Mag_ca.paa";
		mass = 8;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazineWell[] = {};
    };
};

class CfgWeapons 
{

/* Inheritance Tree */
	class Default
	{
        fireLightDiffuse[] =
        {
            0.937,  // R
            0.322,  // G
            0.259   // B
        };
		fireLightDuration = 0.005;
	};
	class RifleCore;
    class MGunCore;
    class CannonCore;
	class ItemCore;

    /* Bases */
	class Rifle: RifleCore
	{
		zeroingSound[] = {"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",db0,1,5};
	};
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	
	class SEP_WP_MAS38: Rifle_short_Base_F 
	{
		memoryPointCamera = "eye";		
		author = "Lukinator";
		displayname = "MAS-38";
		scope = 2;
		scopeArsenal = 2;
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		picture = "\SEP_WP_APLND\SEP_WP_MAS38\data\SEP_WP_MAS38_ca.paa";
		uipicture = "\SEP_WP_APLND\SEP_WP_MAS38\data\SEP_WP_MAS38_ca.paa";
		icon = "\SEP_WP_APLND\SEP_WP_MAS38\data\SEP_WP_MAS38_ca.paa";
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"SEP_WP_APLND\SEP_WP_MAS38\data\SEP_WP_MAS38_Reload.wss",1,1,32};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		hiddenselections[] = 
		{
			"camo",
			"camo1"
		};
		hiddenselectionsTextures[] = 
		{
			"SEP_WP_APLND\SEP_WP_MAS38\data\SEP_WP_MAS38_co.paa",
			"SEP_WP_APLND\SEP_WP_MAS38\data\SEP_WP_MAS38_Mag_co.paa"
		};
		model = "SEP_WP_APLND\SEP_WP_MAS38\SEP_WP_MAS38.p3d";
		hasBipod = 0;
		htMin = 8;
		htMax = 920;
		inertia = 0.8;
		aimTransitionSpeed = 0.7;
		dexterity = 1.3;
		initSpeed = 350;
		recoil = "recoil_mp35_1";
		maxZeroing = 200;
		cursor = "mg";
		magazines[] = 
		{
			"SEP_WP_MAS38_Mag"
		};
		class Library
		{
			libTextDesc = "The MAS-38 is a submachine gun that was developed for the French Army before the outbreak of the Second World War. Chambered in the 7.65mm Longue cartridge and feeding from a 32-round detachable box magazine, the MAS-38 features a wooden stock and a compact, lightweight design. The Wehrmacht seized the MAS plant in 1940 just as the MAS-38 was entering large-scale production.";
		};
		descriptionShort = "Submachine gun<br />Caliber: 7.65 Longue";
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
		drySound[] = {"\WW2\SPE_Assets_s\Weapons\MachineGun_Sub_s\MP40\MP40_Dry.wss",1,1,10};
		changeFiremodeSound[] = {"",1,1};
		class GunParticles: GunParticles
		{
			
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		modes[] = {"FullAuto","close","short","medium"};
		class FullAuto: Mode_FullAuto
		{
			__ROF(650);
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
		};
	};
};