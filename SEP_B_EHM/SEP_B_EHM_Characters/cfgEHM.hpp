//Headgear//
	//Stahlhelm 1940//
	class SEP_B_EHM_H_Stahlhelm_M16 : SEP_B_GER_H_Stahlhelm_M16
	{
		author = "Joe";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "EHM Stahlhelm 1916";
		descriptionShort = "Armor Level I";
		picture = "\SEP\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_H_Stahlhelm_M16_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"SEP\SEP_B_EHM\SEP_B_EHM_Characters\data\SEP_B_EHM_H_Stahlhelm_M16_co.paa"
		};
	};
		
//Uniforms (CfgWeapons)

	class SEP_B_EHM_U_FieldUniform : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "EHM Field Uniform";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
		picture = "\SEP\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_U_FieldUniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_EHM_U_FieldUniform_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};

	class SEP_B_EHM_U_FieldUniform_Open : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "EHM Field Uniform (Opened)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
		picture = "\SEP\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_U_FieldUniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_EHM_U_FieldUniform_Open_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};

	class SEP_B_EHM_U_FieldUniform_Rolled : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "EHM Field Uniform (Rolled)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
		picture = "\SEP\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_U_FieldUniform_Rolled_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_EHM_U_FieldUniform_Rolled_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};

	class SEP_B_EHM_U_Mantel : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "EHM Mantel";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
		picture = "\SEP\SEP_B_EHM\SEP_B_EHM_Characters\data\icons\SEP_B_EHM_U_Mantel_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_EHM_U_Mantel_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};