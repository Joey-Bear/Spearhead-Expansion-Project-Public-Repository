#define __ROF(rpm) reloadtime = (60/##rpm)

class CfgPatches 
{
    class SEP_WP_MAS38_SPESNDS 
	{
	addonRootClass = "SEP_WP_MAS38";
    requiredaddons[] = 
	{
		"WW2_SPE_Assets_c_Characters_Americans_c_US_Army",
		"WW2_SPE_Core_c_EditorPreviews_c"
	};
    units[] = {};
	skipWhenMissingDependencies = 1;
        weapons[] = {};
        magazines[] = {};
        author="Cover Fire Studios";
        version = "1.0";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

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
		modes[] = 
		{
			"FullAuto",
			"close",
			"short",
			"medium"
		};
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