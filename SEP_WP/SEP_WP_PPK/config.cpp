class CfgPatches
{
	class SEP_WP_PPK
	{
        units[] = {};		
		
		weapons[] = 
		{
			"SEP_WP_PPK",
			"SEP_WP_PPK_PW",
		};
        magazines[] = 
		{				
			"SEP_WP_M_765_17_7Rnd_PPK",
			"SEP_WP_M_765_17_7Rnd_PPK_PW"
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
    class SEP_WP_MW_765_17_PPK
	{
        SEP_WP_765_17_PPK[] = {"SEP_WP_M_765_17_7Rnd_PPK","SEP_WP_M_765_17_7Rnd_PPK_PW"};
    };
};

class CfgMagazines
{
	//Spearhead 1944//
    class SPE_8Rnd_9x19_P08;

	/* Walther PPK Magazines*/		
    class SEP_WP_M_765_17_7Rnd_PPK : SPE_8Rnd_9x19_P08
    {
		dlc = "SEP_WP";
        author = "Joe";
        displayName = "7.65×17mmSR 7Rnd Mag";
		displayNameShort = "7.65×17mmSR 7Rnd Mag";
		descriptionShort = "Caliber: 7.65×17mmSR<br />Rounds: 7<br />Type: Box Magazine<br />Used in: Walther PPK";
		picture = "\SEP\SEP_WP\SEP_WP_PPK\data\icons\SEP_WP_PPK_M_ca.paa";
        ammo = "SEP_A_765_17";
        count = 7;
        mass = 4;
        model = "\SEP\SEP_WP\SEP_WP_PPK\data\mesh\7Rnd_765_17_PPK.p3d";
        initspeed = 390.2;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
    };
	
    class SEP_WP_M_765_17_7Rnd_PPK_PW : SEP_WP_M_765_17_7Rnd_PPK
    {
		dlc = "SEP_WP";
        author = "Joe";
        displayName = "7.65×17mmSR 7Rnd Mag (Bakelite)";
		displayNameShort = "7.65×17mmSR 7Rnd Mag (Bakelite)";
		descriptionShort = "Caliber: 7.65×17mmSR<br />Rounds: 7<br />Type: Box Magazine<br />Used in: Walther PPK";
		picture = "\SEP\SEP_WP\SEP_WP_PPK\data\icons\SEP_WP_PPK_PW_M_ca.paa";
        model = "\SEP\SEP_WP\SEP_WP_PPK\data\mesh\7Rnd_765_17_PPK_PW.p3d";
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
	//* Walther PPK - Standard *//
    class SEP_WP_PPK: SPE_PISTOL
    {
        scope = 2;
        author = "Ture Right, Winter";
        dlc = "SEP_WP";
        displayName = "Walther PPK";
        descriptionShort = "Handgun <br/>Caliber: 7.65×17mmSR";
		model = "\SEP\SEP_WP\SEP_WP_PPK\data\mesh\SEP_WP_PPK.p3d";
		picture = "\SEP\SEP_WP\SEP_WP_PPK\data\icons\SEP_WP_PPK_x_ca.paa";
        magazines[] = {"SEP_WP_M_765_17_7Rnd_PPK","SEP_WP_M_765_17_7Rnd_PPK_PW"};
        magazineWell[] = {"SEP_WP_MW_765_17_PPK"};
		hiddenSelectionsTextures[] = 
		{
			"\SEP\SEP_WP\SEP_WP_PPK\data\tex\SEP_WP_PPK_co.paa"
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
            mass = 11.6;
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
	
    class SEP_WP_PPK_PW: SEP_WP_PPK
    {
        scope = 2;
        author = "Ture Right, Winter";
        dlc = "SEP_WP";
        displayName = "Walther PPK (Bakelite)";
        descriptionShort = "Handgun <br/>Caliber: 7.65×17mmSR";
		model = "\SEP\SEP_WP\SEP_WP_PPK\data\mesh\SEP_WP_PPK_PW.p3d";
		picture = "\SEP\SEP_WP\SEP_WP_PPK\data\icons\SEP_WP_PPK_PW_x_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\SEP\SEP_WP\SEP_WP_PPK\data\tex\prewar\SEP_WP_PPK_PW_co.paa"
		};
    };
};
