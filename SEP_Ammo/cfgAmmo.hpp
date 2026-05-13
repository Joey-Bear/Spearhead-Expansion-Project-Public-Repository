class cfgAmmo
{	
	//M1914//
	class SPE_B_45ACP_Ball;
	class SEP_A_765_17: SPE_B_45ACP_Ball
	{
		airFriction = -0.002;
		caliber = "(3 /((15 * 250)/1000))";
		cartridge = "SPE_FxCartridge9x19";
		cost = 100;
		deflecting = 15;
		typicalSpeed = 250;		
		hit = 4.4;
        indirecthit = 0;
        indirecthitrange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		SPE_Cartridge = "\WW2\SPE_Assets_m\Weapons\Misc_m\Particles\Casings\SPE_45ACP_Scripted.p3d";
		timeToLive = 6;
		audibleFire = 35;
		visibleFire = 3;
	};	

	//MAS-38//
	class SEP_A_765_20: SPE_B_45ACP_Ball 
	{
        airFriction = -0.001513;
        caliber = "(3 /((15 * 360)/1000))";
		cartridge = "SPE_FxCartridge9x19";
        cost = 1;
        deflecting = 15;
        typicalSpeed = 440;
        hit = 2;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\A3\Weapons_f\ammo\shell";
		SPE_Cartridge = "\WW2\SPE_Assets_m\Weapons\Misc_m\Particles\Casings\SPE_45ACP_Scripted.p3d";
        timeToLive = 6;
		audibleFire = 18;
        visibleFire = 22;
	};

	//Astra 300//
	class SPE_B_9x19_Ball;
	class SEP_A_9_17: SPE_B_9x19_Ball
	{
		airFriction = -0.001513;
		caliber = "(3 /((15 * 360)/1000))";
		cartridge = "SPE_FxCartridge9x19";
		cost = 100;
		deflecting = 15;
		typicalSpeed = 360;
		hit = 3.7;
        indirecthit = 0;
        indirecthitrange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		timeToLive = 6;
		audibleFire = 20;
		visibleFire = 3;
	};	
	
	//M1903//
	class SEP_A_9_20: SPE_B_9x19_Ball
	{
		airFriction = -0.001513;
		caliber = "(3 /((15 * 360)/1000))";
		cartridge = "SPE_FxCartridge9x19";
		cost = 100;
		deflecting = 15;
		typicalSpeed = 360;
		hit = 3.7;
        indirecthit = 0;
        indirecthitrange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		timeToLive = 6;
		audibleFire = 20;
		visibleFire = 3;
	};
		
	//C96//
    class SPE_B_762x33_Ball;
    class SEP_A_763x25: SPE_B_762x33_Ball
    {
        airFriction = -0.001513;
        caliber = "(3 /((15 * 360)/1000))";
		cartridge = "SPE_FxCartridge9x19";
        cost = 100;
        deflecting = 15;
        typicalSpeed = 440;
        hit = 2;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\A3\Weapons_f\ammo\shell";
        timeToLive = 6;
		audibleFire = 18;
        visibleFire = 22;
    };
};