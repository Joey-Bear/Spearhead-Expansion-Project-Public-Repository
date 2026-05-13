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
        picture = "\SEP_WP\SEP_WP_MAS38\data\icons\SEP_WP_MAS38_Mag_ca.paa";
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
	class Default;
	class PistolCore;
	class RifleCore;
	class LauncherCore;
	class ItemCore;
	class InventoryFlashLightItem_Base_F;

    /* Bases */
	class Rifle: RifleCore
	{
		class WeaponSlotsInfo;
	};
	
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class GunParticles: GunParticles
		{
		};
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
	
	class SPE_SMG: Rifle_Short_Base_F
	{
		class SAFE: SPE_SAFE_BASE
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class GunParticles
		{
			class SmokeEffect;
			class RifleAmmoCloud;
		};
	};
	
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
		picture = "\SEP_WP\SEP_WP_MAS38\data\icons\SEP_WP_MAS38_ca.paa";
		UiPicture = "\WW2\SPE_Assets_t\Weapons\UiPicture_t\Icon_Regular_ca.paa";
		model = "SEP_WP\SEP_WP_MAS38\data\mesh\SEP_WP_MAS38.p3d";		
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		hiddenselections[] = 
		{
			"camo",
			"camo1"
		};
		hiddenselectionsTextures[] = 
		{
			"SEP_WP\SEP_WP_MAS38\data\tex\SEP_WP_MAS38_co.paa",
			"SEP_WP\SEP_WP_MAS38\data\tex\SEP_WP_MAS38_Mag_co.paa"
		};
		magazines[]=
		{
			"SEP_WP_MAS38_Mag"
		};
		modes[]=
		{
			"Full",
			"Far",
			"Medium",
			"Short"
		};
		recoil="recoil_mp35_1";
		reloadAction="GestureReloadSMG_02";
		reloadMagazineSound[] = {"SEP_WP\SEP_WP_MAS38\data\snds\SEP_WP_MAS38_Reload.wss",1,1,32};
		class Full: Mode_FullAuto
		{
			textureType="fullAuto";
			reloadTime=0.085714288;
			dispersion=0.003;
			aiRateOfFire=0.001;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.2;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.050000001;
		};
		class Far: Full
		{
			showToPlayer=0;
			autoFire=0;
			aiRateOfFire=10;
			aiRateOfFireDistance=300;
			minRange=150;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.5;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class Medium: Full
		{
			showToPlayer=0;
			burst=3;
			autoFire=0;
			aiRateOfFire=5;
			aiRateOfFireDistance=100;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=125;
			midRangeProbab=0.60000002;
			maxRange=150;
			maxRangeProbab=0.039999999;
		};
		class Short: Medium
		{
			showToPlayer=0;
			aiRateOfFire=0.050000001;
			aiRateOfFireDistance=100;
			minRange=10;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
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