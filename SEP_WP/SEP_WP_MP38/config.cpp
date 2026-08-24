class CfgPatches 
{
    class SEP_WP_MP38 
	{
        weapons[] = 
		{
			"SEP_WP_MP38",
		};
        units[] = {};
        magazines[] = {};
        requiredaddons[] = 
		{
			"A3_Weapons_F",
			"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal"
		};
        author="Cover Fire Studios";
        version = "1.0";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
#include "asdg.hpp"

class CfgWeapons 
{

/* Inheritance Tree */
    /* Bases */	
	class SPE_MP40;
	class SEP_WP_MP38_Base: SPE_MP40 
	{
		memoryPointCamera = "eye";		
		author = "Lukinator";
		displayname = "MP 38";
		descriptionShort = "Submachine Gun<br />Caliber: 9x19 mm";
		scope = 1;
		scopeArsenal = 1;
		discreteDistance[] = {100,200};
		discreteDistanceCameraPoint[] = {"eye"};
		picture = "\SEP\SEP_WP\SEP_WP_MP38\data\icons\SEP_WP_MP38_ca.paa";
		UiPicture = "\WW2\SPE_Assets_t\Weapons\UiPicture_t\Icon_Regular_ca.paa";
		model = "SEP\SEP_WP\SEP_WP_MP38\data\mesh\SEP_WP_MP38.p3d";		
		magazineWell[] = 
		{
			"SPE_9x19_MP40",
			"CBA_9x19_MP40"
		};
		magazines[] = 
		{
			"SPE_32rnd_9x19",
			"SPE_32rnd_9x19_t"
		};
		hiddenselections[] = 
		{
			"camo"
		};
		hiddenselectionsTextures[] = 
		{
			"SEP\SEP_WP\SEP_WP_MP38\data\tex\SEP_WP_MP38_co.paa"
		};
		modes[] = {"Full","Far","Medium","Short"};
		class Full: Mode_FullAuto
		{
			dispersion = "((9.6) * 0.00029088)";
			sounds[] = {"StandardSound"};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			reloadTime = 0.15;
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPE_MP40_Shot_SoundSet","SPE_rifle_small_ob_Tail_SoundSet","SPE_MP40_stereoLayer_SoundSet"};
			};
		};
		class Far: Full
		{
			burst = 1;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 200;
			minRange = 150;
			minRangeProbab = 0.1;
			midRange = 175;
			midRangeProbab = 0.5;
			maxRange = 200;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Medium: Full
		{
			burst = 3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 100;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 125;
			midRangeProbab = 0.6;
			maxRange = 150;
			maxRangeProbab = 0.04;
		};
		class Short: Medium
		{
			burst = 3;
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class SPE_Alt_Reloads
		{
			class SEP_WP_MP38
			{
				condition = "%1 == 0 || %3 != %4";
			};
			class SPE_AltReload1
			{
				condition = "%1 > 0";
			};
		};
		class Library
		{
			libTextDesc="";
		};
	};

	/* MP 38 */		
	class SEP_WP_MP38: SEP_WP_MP38_Base 
	{
		scope = 2;
		scopearsenal = 2;
		baseweapon = "SEP_WP_MP38";
	};
};