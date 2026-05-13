class CfgPatches
{
	class SEP_EditorItems
	{
		units[]=
		{
			//Pistols//
			"Weapon_SEP_WP_A300",
			"Weapon_SEP_WP_PPK",
			"Weapon_SEP_WP_PPK_PW",
			//Repeating Rifles//
			"Weapon_SEP_WP_Gewehr98",
			//Self-Loading Rifles//
			"Weapon_SEP_WP_MP507",
			//SMGs//
			"Weapon_SEP_WP_MAS38",
			"Weapon_SEP_WP_MP18",
			"Weapon_SEP_WP_MP28",
			//Sniper & Marksman Rifles//
			"Weapon_SEP_WP_Gewehr98_Sniper"
		};
		requiredAddons[]={};
	};
};
class cfgVehicles
{
	//Base Classes//
	class Pistol_Base_F;
	class Weapon_Base_F;
	class Launcher_Base_F;
	class SPE_Pistol_Base_F: Pistol_Base_F
	{
	};
	class SPE_Weapon_Base_F: Weapon_Base_F
	{
	};
	class SPE_Launcher_Base_F: Launcher_Base_F
	{
	};

	/* Ground Assets - Pistols */
	class Weapon_SEP_WP_A300: SPE_Pistol_Base_F
	{
		author="Cover Fire Studios";
		displayName = "Astra M300";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class SEP_WP_A300
			{
				weapon="SEP_WP_A300";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SEP_WP_M_9_17_6Rnd_A300
			{
				magazine="SEP_WP_M_9_17_6Rnd_A300";
				count=1;
			};
		};
	};
	
	class Weapon_SEP_WP_PPK: SPE_Pistol_Base_F
	{
		author="Cover Fire Studios";
		displayName = "Walther PPK";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class SEP_WP_PPK
			{
				weapon="SEP_WP_PPK";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SEP_WP_M_765_17_7Rnd_PPK
			{
				magazine="SEP_WP_M_765_17_7Rnd_PPK";
				count=1;
			};
		};
	};
	
	class Weapon_SEP_WP_PPK_PW: SPE_Pistol_Base_F
	{
		author="Cover Fire Studios";
		displayName = "Walther PPK (Bakelite)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Pistols";
		vehicleClass="WeaponsHandguns";
		class TransportWeapons
		{
			class SEP_WP_PPK_PW
			{
				weapon="SEP_WP_PPK_PW";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SEP_WP_M_765_17_7Rnd_PPK_PW
			{
				magazine="SEP_WP_M_765_17_7Rnd_PPK_PW";
				count=1;
			};
		};
	};
	
	/* Ground Assets - Repeating Rifles */	
	class Weapon_SEP_WP_Gewehr98: SPE_Weapon_Base_F
	{
		author="Cover Fire Studios";
		displayName = "Gew 98";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory = "SPE_EdSubcat_RepeatingRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class SEP_WP_Gewehr98
			{
				weapon="SEP_WP_Gewehr98";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SPE_5Rnd_792x57
			{
				magazine="SPE_5Rnd_792x57";
				count=1;
			};
		};
	};
	
	/* Ground Assets - Self-Loading Rifles */	
	class Weapon_SEP_WP_MP507: SPE_Weapon_Base_F
	{
		author="Cover Fire Studios";
		displayName = "MP 507";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory = "SPE_EdSubcat_SelfLoadingRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class SEP_WP_MP507
			{
				weapon="SEP_WP_MP507";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SPE_30Rnd_792x33
			{
				magazine="SPE_30Rnd_792x33";
				count=1;
			};
		};
	};

	/* Ground Assets - SMGs */	
	class Weapon_SEP_WP_MAS38: SPE_Weapon_Base_F
	{
		author="Cover Fire Studios";
		displayName = "MAS-38";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SubMachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class SEP_WP_MAS38
			{
				weapon="SEP_WP_MAS38";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SEP_WP_MAS38_Mag
			{
				magazine="SEP_WP_MAS38_Mag";
				count=1;
			};
		};
	};
	
	class Weapon_SEP_WP_MP18: SPE_Weapon_Base_F
	{
		author="Cover Fire Studios";
		displayName = "MP 18/I";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SubMachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class SEP_WP_MP18
			{
				weapon="SEP_WP_MP18";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SEP_WP_MP18_Mag
			{
				magazine="SEP_WP_MP18_Mag";
				count=1;
			};
		};
	};
	
	class Weapon_SEP_WP_MP28: SPE_Weapon_Base_F
	{
		author="Cover Fire Studios";
		displayName = "MP 28/II";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SubMachineGuns";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class SEP_WP_MP28
			{
				weapon="SEP_WP_MP28";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SEP_WP_MP28_Mag
			{
				magazine="SEP_WP_MP28_Mag";
				count=1;
			};
		};
	};
	
	/* Ground Assets - Sniper & Marksman Rifles */	
	class Weapon_SEP_WP_Gewehr98_Sniper: SPE_Weapon_Base_F
	{
		author="Cover Fire Studios";
		displayName = "Gew 98 (Luxor 3x)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory="EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		class TransportWeapons
		{
			class SEP_WP_Gewehr98_Sniper
			{
				weapon="SEP_WP_Gewehr98_Sniper";
				count=1;
			};
		};
		class TransportMagazines
		{
			class SPE_5Rnd_792x57
			{
				magazine="SPE_5Rnd_792x57";
				count=1;
			};
		};
	};
};