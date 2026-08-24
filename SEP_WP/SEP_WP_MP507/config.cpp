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

class RifleCore;
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
    /* Bases */
	class Rifle: RifleCore
	{
		class WeaponSlotsInfo;
	};
	
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	
	class SPE_SAFE_BASE: Rifle_Base_F
	{
		class Safe: Mode_SemiAuto
		{
		};
		class Single: Mode_SemiAuto
		{
		};
		class Full: Mode_FullAuto
		{
		};
	};
	
	class SPE_RIFLE: Rifle_Base_F
	{
		class SAFE: SPE_SAFE_BASE
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class GunParticles: GunParticles
		{
			class FirstEffect;
			class SmokeEffect;
		};
	};
	
    /* Arsenal */
	class SEP_WP_MP507: SPE_RIFLE
	{
		author = "Ture Right";
        _generalMacro="SEP_WP_MP507";
        baseWeapon="SEP_WP_MP507";
		displayName="MP 507";
		model="\SEP\SEP_WP\SEP_WP_MP507\SEP_WP_MP507.p3d";
		picture = "\SEP\SEP_WP\SEP_WP_MP507\data\icons\SEP_WP_MP507_ca.paa";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = 
		{
			"\SEP\SEP_WP\SEP_WP_MP507\data\vg15_co.paa",
			"\SEP\SEP_WP\SEP_WP_MP507\data\inside_co.paa"
		};
		reloadAction="SPE_GestureReload_stg44";//"SPE_GestureReload_stg44";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\a3\Anims_F_Enoch\Data\Anim\handanims\HunterShotgun_01.rtm"//\WW2\SPE_Core_a\Animations_a\Weapons\STG44\STG44_handanim.rtm
		};
		reloadMagazineSound[]={"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\stg44\reload",1,1,10};//"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\stg44\reload",1,1,10};
		changeFiremodeSound[]={"A3\sounds_f\weapons\closure\firemode_changer_2.wss",0.1778,1,5};
		drySound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\stg44\empty",0.7,1,12};
		discreteDistance[] = {100};
		maxZeroing=800;
		dexterity=1.30808;//2.1
		Inertia=0.74916601;//0.5
		magazines[]=
		{
			"SPE_30rnd_792x33",
			"SPE_30rnd_792x33_t"			
		};
		modes[]=
		{
			"Single",
			"Far",
			"Medium",
			"Short"
		};
		magazineReloadSwitchPhase=0.30000001;
		recoil = "recoil_ar_1";
		recoilProne = "assaultRifleBase";
		class Single: Mode_SemiAuto
		{
			textureType = "semi";
			displayName = "Semi";
			reloadTime = 0.1;
			dispersion = 0.0021;
			aiRateOfFire=0.001;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.2;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.050000001;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: baseSoundModeType
			{
				soundSetShot[] = {"SPE_stg44_Shot_SoundSet","SPE_rifle_med_Tail_SoundSet","SPE_stg44_stereoLayer_SoundSet"};
			};
		};
		class Far: Single
		{
			showToPlayer=0;
			aiRateOfFire=10;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.5;
			maxRange=500;
			maxRangeProbab=0.039999999;
		};
		class Medium: Single
		{
			showToPlayer=0;
			aiRateOfFire=5;
			aiRateOfFireDistance=300;
			minRange=100;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.5;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class Short: Single
		{
			showToPlayer=0;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=50;
			midRangeProbab=0.5;
			maxRange=100;
			maxRangeProbab=0.039999999;
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
	};
};