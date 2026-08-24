#define __ROF(rpm) reloadtime = (60/##rpm)

class CfgPatches 
{
    class SEP_WP_MAS38 
	{
        weapons[] = 
		{
			"SEP_WP_MAS38",
		};
		units[] = {};
        magazines[] = 
		{
			"SEP_WP_MAS38_Mag"
		};
        requiredaddons[] = 
		{
			"A3_Weapons_F",
			"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal",
			"WW2_SPE_Assets_c_Characters_Americans_c_US_Army",
			"WW2_SPE_Core_c_EditorPreviews_c"
		};
        author="Cover Fire Studios";
        version = "1.0";
    };
};

class CfgMagazines 
{
    class SPE_32Rnd_9x19_Sten;
    class SEP_WP_MAS38_Mag : SPE_32Rnd_9x19_Sten
	{       
        author = "Lukinator";
        ammo = "SEP_A_765_20";
        count = 32;
        displayName = "7.65 32Rnd MAS-38 Mag";
		descriptionShort = "Caliber: 7.65 mm Longue <br />Projectile: 7.65 French Long 110gr RN<br />Rounds: 32<br />Type: Box Magazine<br />Used in: MAS-38";
        picture = "\SEP\SEP_WP\SEP_WP_MAS38\data\icons\SEP_WP_MAS38_Mag_ca.paa";
		mass = 8;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazineWell[] = {};
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
class SPE_SMG;

class CfgWeapons 
{
	
	/* Arsenal */
	class SEP_WP_MAS38: SPE_SMG 
	{
		memoryPointCamera = "eye";		
		author = "Lukinator";
		displayname = "MAS-38";
		descriptionShort = "Submachine gun<br />Caliber: 7.65 Longue";
		scope = 2;
		scopeArsenal = 2;
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		picture = "\SEP\SEP_WP\SEP_WP_MAS38\data\icons\SEP_WP_MAS38_ca.paa";
		UiPicture = "\WW2\SPE_Assets_t\Weapons\UiPicture_t\Icon_Regular_ca.paa";
		model = "SEP\SEP_WP\SEP_WP_MAS38\data\mesh\SEP_WP_MAS38.p3d";		
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		hiddenselections[] = 
		{
			"camo",
			"camo1"
		};
		hiddenselectionsTextures[] = 
		{
			"SEP\SEP_WP\SEP_WP_MAS38\data\tex\SEP_WP_MAS38_co.paa",
			"SEP\SEP_WP\SEP_WP_MAS38\data\tex\SEP_WP_MAS38_Mag_co.paa"
		};
		magazines[]=
		{
			"SEP_WP_MAS38_Mag"
		};
		recoil="recoil_mp35_1";
		reloadAction="GestureReloadSMG_02";
		reloadMagazineSound[] = {"SEP\SEP_WP\SEP_WP_MAS38\data\snds\SEP_WP_MAS38_Reload.wss",1,1,32};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		class FullAuto: Mode_FullAuto
		{
			__ROF(650);
			aiRateOfFire=0.001;
			aiRateOfFireDistance=10;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=93.099998;
			class MuzzleSlot
			{
				iconPosition[]={0,0};
				iconScale=0.30000001;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
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