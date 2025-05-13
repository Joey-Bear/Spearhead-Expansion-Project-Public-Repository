// Headgear

	class SEP_B_GER_H_Stahlhelm_BD : H_SPE_GER_Helmet
	{
		author = "Joe";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "GER Stahlhelm 1942 (Blue Division)";
		descriptionShort = "Armor Level I";
		picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_Stahlhelm_BD_ca.paa";
		hiddenSelectionsTextures[] = 
		{
			"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_Stahlhelm_BD_co.paa"
		};
	};
	
// Uniforms (CfgWeapons)
	
	class SEP_B_GER_U_FieldUniform_BD : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "GER Field Uniform 1943 (Blue Division)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_BD_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_GER_U_FieldUniform_BD_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};

	class SEP_B_GER_U_FieldUniform_BD_Unblsd : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "GER Field Uniform 1943 (Blue Division, Unbloused)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_BD_Unblsd_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_GER_U_FieldUniform_BD_Unblsd_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_B_GER_U_FieldUniform_BD_Unblsd_Gefr : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "GER Field Uniform 1943 (Blue Division, Unbloused, Gefreiter)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_BD_Unblsd_Gefr_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_GER_U_FieldUniform_BD_Unblsd_Gefr_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_B_GER_U_FieldUniform_BD_Unblsd_Unter : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "GER Field Uniform 1943 (Blue Division, Unbloused, Unteroffizier)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_BD_Unblsd_Unter_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_GER_U_FieldUniform_BD_Unblsd_Unter_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};
	
	class SEP_B_GER_U_Officer_BD : Uniform_Base
	{
		author = "Joe";
		scope = 2;
		displayName = "GER Officer Uniform (Blue Division, Hauptmann)";
		descriptionShort = "";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_Officer_BD_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel= "-";
			uniformClass= "SEP_B_GER_U_Officer_BD_CFV";
			containerClass= "Supply50";
			mass=20;
		};
	};