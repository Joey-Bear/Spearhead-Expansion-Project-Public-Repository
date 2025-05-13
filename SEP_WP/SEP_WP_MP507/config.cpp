class CfgPatches 
{

	class SEP_WP_MP507 
	{

		units[] = {};

		weapons[] = 
		{
			"SEP_WP_MP507"
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
	class SEP_WP_MP507_Base: Rifle_Base_F
{
		author="Trght";
		scope = 0;
		displayName="MP 507";
		model="SEP_WP\SEP_WP_MP507\SEP_WP_MP507.p3d";
		picture = "";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\a3\Anims_F_Enoch\Data\Anim\handanims\HunterShotgun_01.rtm"//\WW2\SPE_Core_a\Animations_a\Weapons\STG44\STG44_handanim.rtm
		};
		reloadAction="SPE_GestureReload_stg44";//"SPE_GestureReload_stg44";
		magazines[]=
		{
			"SPE_30rnd_792x33",
			"SPE_30rnd_792x33_t"			
		};
		magazineReloadSwitchPhase=0.313;//.313
		htMin=8;
		htMax=920;
		dexterity=1.30808;//2.1
		Inertia=0.74916601;//0.5
		aimTransitionSpeed=1;
		initSpeed=-1;//950
		discreteDistance[] = {100,200,300};
        discreteDistanceInitIndex = 0;
		cameraDir="eye_look";
		discreteDistanceCameraPoint[]=
		{
			"eye"
		};
		reloadMagazineSound[]={"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\stg44\reload",1,1,10};//"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\stg44\reload",1,1,10};
		changeFiremodeSound[]={"A3\sounds_f\weapons\closure\firemode_changer_2.wss",0.1778,1,5};
		drySound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\stg44\empty",0.7,1,12};
		recoil="recoil_ar_1";
		maxZeroing=800;
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.281838,1,10};
        bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.281838,1,10};
        bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.281838,1,10};
        bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.281838,1,10};
        bullet5[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",0.281838,1,10};
        bullet6[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",0.281838,1,10};
        bullet7[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",0.281838,1,10};
        bullet8[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",0.281838,1,10};
        bullet9[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",0.281838,1,10};
        bullet10[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",0.281838,1,10};
        bullet11[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",0.281838,1,10};
        bullet12[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",0.281838,1,10};
        soundBullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 4.53;
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
		modes[] = {"Single"};
		
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
			class BaseSoundModeType;
			class StandardSound: baseSoundModeType
			{
				soundSetShot[] = {"SPE_stg44_Shot_SoundSet","SPE_rifle_med_Tail_SoundSet","SPE_stg44_stereoLayer_SoundSet"};
			};
		};
	};
	
    /* Arsenal */
	class SEP_WP_MP507: SEP_WP_MP507_Base
	{
		author = "Ture Right";
        _generalMacro="SEP_WP_MP507";
        baseWeapon="SEP_WP_MP507";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		picture = "\SEP_WP\SEP_WP_MP507\data\icons\SEP_WP_MP507_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP\SEP_WP_MP507\data\vg15_co.paa",
			"\SEP_WP\SEP_WP_MP507\data\inside_co.paa"
		};
	};
};