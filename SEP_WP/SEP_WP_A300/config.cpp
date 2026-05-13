class CfgPatches
{
	class SEP_WP_A300
	{
        units[] = {};		
		
		weapons[] = 
		{
			//Standard//
			"SEP_WP_A300",
			"SEP_WP_A300_32ACP",
		};
        magazines[] = 
		{				
			"SEP_WP_M_9_17_6Rnd_A300",
			"SEP_WP_M_765_17_7Rnd_A300"
		};
		
		requiredAddons[] = 
		{
			"WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_SPE_Assets_s_Weapons_Sounds_s"
		};
	};
};

class CfgMagazineWells
{
    class SEP_WP_MW_9_17_A300
	{
        SEP_WP_9_17_A300[] = {"SEP_WP_M_9_17_6Rnd_A300"};
    };
	
    class SEP_WP_MW_765_17_A300
	{
        SEP_WP_765_17_A300[] = {"SEP_WP_M_765_17_7Rnd_A300"};
    };
};

class CfgMagazines
{
	//Spearhead 1944//
    class SPE_8Rnd_9x19_P08;

	/* Astra 300 Magazines*/	
    class SEP_WP_M_9_17_6Rnd_A300 : SPE_8Rnd_9x19_P08
    {
		dlc = "SEP_WP";
        author = "Joe";
        displayName = "9×17mm Short 6Rnd Mag";
		displayNameShort = "";
		descriptionShort = "Caliber: 9x17mm Short<br />Rounds: 6<br />Type: Box Magazine<br />Used in: Astra M300 9x17mm";
		picture = "\SEP_WP\SEP_WP_A300\data\icons\SEP_WP_A300_M_ca.paa";
        ammo = "SEP_A_9_17";
        count = 6;
        mass = 4;
        model = "\SEP_WP\SEP_WP_A300\data\mesh\6Rnd_9_17_A300.p3d";
        initspeed = 390.2;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
    };
	
    class SEP_WP_M_765_17_7Rnd_A300 : SPE_8Rnd_9x19_P08
    {
		dlc = "SEP_WP";
        author = "Joe";
        displayName = "7.65×17mmSR 7Rnd Mag";
		displayNameShort = "";
		descriptionShort = "Caliber: 7.65×17mmSR<br />Rounds: 7<br />Type: Box Magazine<br />Used in: Astra M300 7.65×17mm";
		picture = "\SEP_WP\SEP_WP_A300\data\icons\SEP_WP_A300_M_ca.paa";
        ammo = "SEP_A_765_17";
        count = 7;
        mass = 4;
        model = "\SEP_WP\SEP_WP_A300\data\mesh\6Rnd_9_17_A300.p3d";
        initspeed = 390.2;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
    };
};

///Firemodes
class Mode_SemiAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;

//Spearhead 1944 Inheritances//
class SPE_PISTOL;

class CfgWeapons
{		
	//* Astra 300 - Standard *//
    class SEP_WP_A300: SPE_PISTOL
    {
        scope = 2;
        author = "Ture Right, frim";
        dlc = "SEP_WP";
        displayName = "Astra M300 9x17mm";
        descriptionShort = "Handgun <br/>Caliber: 9×17mm Short";
		model = "\SEP_WP\SEP_WP_A300\data\mesh\SEP_WP_A300.p3d";
		picture = "\SEP_WP\SEP_WP_A300\data\icons\SEP_WP_A300_ca.paa";
        magazines[] = {"SEP_WP_M_9_17_6Rnd_A300"};
        magazineWell[] = {"SEP_WP_MW_9_17_A300"};
		hiddenSelectionsTextures[] = 
		{
			"\SEP_WP\SEP_WP_A300\data\tex\SEP_WP_A300_co.paa",
			"\SEP_WP\SEP_WP_A300\data\tex\ammo\MP58_CO.paa"
		};
        //Gribblies
        aiRateOfFire = 2;
        aiRateOfFireDistance = 500;
		cameradir = "eye_look";
		dexterity = 2;
		discreteDistance[] = {50};
		discreteDistanceCameraPoint[] = {"eye"};
        discretedistanceinitindex = 0;
        inertia = 0.113;        
        magazineReloadSwitchPhase = 0.67;
        magazinereloadtime = 0;
        maxZeroing = 100;
        minRange = 0;
        minRangeProbab = 0.1;
        midRange = 30;
        midRangeProbab = 0.3;
        maxRange = 50;
        maxRangeProbab = 0.04;
		recoil = "recoil_pistol_acpc2";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
			allowedSlots[] = {801,701,901};
			holsterOffset = "holster";
			holsterScale = 0.95;
            mass = 13.9;
            class MuzzleSlot {};
            class CowsSlot {};
            class PointerSlot {};
        };
        bullet1[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_01", 0.5011872, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_02", 0.5011872, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_03", 0.5011872, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\9mm\metal_9mm_04", 0.5011872, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_01", 0.39810717, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_02", 0.39810717, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_03", 0.39810717, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\9mm\dirt_9mm_04", 0.39810717, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_01", 0.22387211, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_02", 0.22387211, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_03", 0.22387211, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\9mm\grass_9mm_04", 0.22387211, 1, 15 };
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
        drySound[] = {"\WW2\SPE_Assets_s\Weapons\Pistols_s\M1911\M1911_Dry.wss",1,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\reload_ACPC2",1,1,30};
        reloadAction = "GestureReloadPistol";
        sounds[] = {"StandardSound","SilencedSound"};
        modes[] = {"Single"};
        class Single : Mode_SemiAuto
		{
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType 
            {
                weaponSoundEffect = "DefaultRifle";
            };
            class StandardSound : BaseSoundModeType
            {
                soundSetShot[] = {"SPE_1911_Shot_SoundSet","SPE_pistol_Tail_SoundSet","SPE_1911_stereoLayer_SoundSet"};
            };
            class SilencedSound : BaseSoundModeType
            {
                soundSetShot[] = {"SPE_1911_Shot_SoundSet","SPE_pistol_Tail_SoundSet","SPE_1911_stereoLayer_SoundSet"};
            };
        };
    };
	
    class SEP_WP_A300_32ACP: SEP_WP_A300
    {
		scope = 2;
        dlc = "SEP_WP";
        author = "Ture Right, frim";
        displayName = "Astra M300 7.65×17mm";
        descriptionShort = "Handgun <br/>Caliber: 7.65×17mmSR";
		picture = "\SEP_WP\SEP_WP_A300\data\icons\SEP_WP_A300_ca.paa";
        magazines[] = {"SEP_WP_M_765_17_7Rnd_A300"};
        magazineWell[] = {"SEP_WP_MW_765_17_A300"};
    };
};
