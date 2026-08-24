// Headgear (CfgWeapons)
class SEP_I_IHTC_H_SafariHat : H_Hat_Safari_sand_F
{
	author = "Joe";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "HI Safari Hat";
	descriptionShort = "No Armor";
	picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_Hat_Safari_sand_CA.paa";
	hiddenSelectionsTextures[] = 
	{
		"\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_H_SafariHat_co.paa"
	};
};

class SEP_I_IHTC_H_CoconutHelmet : H_HelmetB
{
	author = "OokamiJamie";
	displayName = "HI Coconut Pith";
	picture = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_H_CoconutHelmet_ca.paa";
	scope = 2;
	model = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\SEP_IHTC_H_CoconutHelmet.p3d";
	hiddenSelections[] = 
	{
		"camo"
	};
	hiddenSelectionsTextures[] = 
	{
		"\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_H_CoconutHelmet_CO.paa"
	};
	class ItemInfo: ItemInfo
	{
		mass = 20;
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\SEP_I_IHTC_H_CoconutHelmet_CO.paa"
		};
		uniformModel = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\SEP_IHTC_H_CoconutHelmet.p3d";
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = HitHead;
				armor = 2;
				passThrough = 0.2;
			};
		};
	};
};

// Uniforms (CfgWeapons)
class SEP_I_IHTC_U_HBT_Khk : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "HI Wool 1943 HBT";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\suitpacks\suitpack_us_wool_hbt_co.paa"};
	picture = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Khk_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_I_IHTC_U_HBT_Khk_CFV";
		containerClass = "Supply40";
		mass=20;
	};
};
	
class SEP_I_IHTC_U_HBT_Rolled_Khk : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "HI Wool 1943 HBT (Rolled)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\suitpacks\suitpack_us_wool_hbt_co.paa"};
	picture = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Rolled_Khk_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_I_IHTC_U_HBT_Rolled_Khk_CFV";
		containerClass = "Supply40";
		mass=20;
	};
};

class SEP_I_IHTC_U_HBT_Medic_Khk : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "HI Wool 1943 HBT (Medic)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\suitpacks\suitpack_us_wool_hbt_co.paa"};
	picture = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Medic_Khk_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_I_IHTC_U_HBT_Medic_Khk_CFV";
		containerClass = "Supply40";
		mass=20;
	};
};
	
class SEP_I_IHTC_U_HBT_Medic_Rolled_Khk : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "HI Wool 1943 HBT (Medic, Rolled)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\suitpacks\suitpack_us_wool_hbt_co.paa"};
	picture = "\SEP\SEP_I_IHTC\SEP_I_IHTC_Characters\data\icons\SEP_I_IHTC_U_HBT_Medic_Rolled_Khk_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_I_IHTC_U_HBT_Medic_Rolled_Khk_CFV";
		containerClass = "Supply40";
		mass=20;
	};
};