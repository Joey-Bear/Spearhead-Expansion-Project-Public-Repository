class CfgPatches
{
	class SEP_WP
	{
        units[] = {};
        weapons[] = 
		{
			"SEP_WP_W_M1917_Enfield"
		};
        magazines[] = {};
		requiredAddons[]={};
	};
};

class cfgWeapons
{
//===================================
//Class Parent Names
//===================================
	//Weapon Inheritances - Vanilla//
	
	class SPE_No3_Mk1_Enfield;
					
//===================================
//Custom Classes (Weapons)
//===================================	
	 		
    class SEP_WP_W_M1917_Enfield: SPE_No3_Mk1_Enfield
    {
        author="Joe";
        _generalMacro="SEP_WP_W_M1917_Enfield";
        baseWeapon="SEP_WP_W_M1917_Enfield";
        scope=2;
		scopeArsenal = 2;
        displayName = "M1917 Enfield";
        descriptionShort = "Bolt-Action Rifle<br />Caliber: .30-06";
		reloadMagazineSound[] = {"WW2\SPE_Assets_s\Weapons\Sounds_s\sounds\specific\genericBoltAction\1903A1_reload_noscope",0.85,1,25};
        magazines[] = 
		{
			"SPE_5Rnd_762x63",
			"SPE_5Rnd_762x63_t",
			"SPE_5Rnd_762x63_M1",
			"SPE_5Rnd_762x63_M2_AP"
		};
        magazineWell[] =
        {
            "SPE_3006_Spring"
        };
    };
};