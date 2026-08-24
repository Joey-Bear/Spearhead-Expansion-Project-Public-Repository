//Uniforms (CfgWeapons)
class SEP_B_GER_H_Volk_M38_Helmet: H_SPE_GER_FSJ_M38_Helmet
{
    author = "Joe";
    displayName = "GER Volk Stahlhelm 1938";
    picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_Volk_M38_Helmet_ca.paa";
    scope = 2;
    hiddenSelectionsTextures[] = 
    {
        "SEP\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_Volk_M38_Helmet_CO.paa"
    };
};

//M43 Field Uniforms
class SEP_B_GER_U_FieldUniform_Volk : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Field Uniform 1943 (Volkssturm)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_Volk_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_FieldUniform_Volk_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_FieldUniform_Volk_Unblsd : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Field Uniform 1943 (Volkssturm, Unbloused)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_Volk_Unblsd_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_FieldUniform_Volk_Unblsd_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};
/*
class SEP_B_GER_U_FieldUniform_Volk_Unblsd_Gefr : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Field Uniform 1943 (Volkssturm, Unbloused, Gefr.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_Volk_Unblsd_Gefr_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_FieldUniform_Volk_Unblsd_Gefr_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};*/

class SEP_B_GER_U_FieldUniform_Volk_Unblsd_Unter : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Field Uniform 1943 (Volkssturm, Unbloused, Grpfhr.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_Volk_Unblsd_Unter_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_FieldUniform_Volk_Unblsd_Unter_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

//Mantel
class SEP_B_GER_U_Mantel_M40_volk : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER Mantel 1940 (Volkssturm)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_Mantel_M40_volk_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Mantel_M40_volk_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

//M44s
class SEP_B_GER_Volk_U_FieldUniform_M44 : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER Field Uniform 1944 (Volkssturm)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_Volk_U_FieldUniform_M44_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_Volk_U_FieldUniform_M44_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_Volk_U_FieldUniform_M44_Open : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER Field Uniform 1944 (Volkssturm, Opened)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_Volk_U_FieldUniform_M44_Open_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_Volk_U_FieldUniform_M44_Open_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_Volk_U_FieldUniform_M44_Uffz : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER Field Uniform 1944 (Volkssturm, Uffz.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_Volk_U_FieldUniform_M44_Uffz_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_Volk_U_FieldUniform_M44_Uffz_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

//Civilian
class SEP_B_GER_U_Casual_1 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 1";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_1_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_1_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_Rolled_1 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 1 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_1_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_Rolled_1_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_2 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 2";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_2_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_2_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_Rolled_2 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 2 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_2_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_Rolled_2_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_3 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 3";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_3_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_3_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_Rolled_3 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 3 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_3_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_Rolled_3_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_4 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 4";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_4_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_4_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_Rolled_4 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 4 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_4_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_Rolled_4_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_5 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 5";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_5_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_5_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_Rolled_5 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 5 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_5_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_Rolled_5_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_6 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 6";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_6_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_6_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_Rolled_6 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 6 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_6_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_Rolled_6_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_7 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 7";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_7_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_7_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Casual_Rolled_7 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Casual Outfit 7 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Casual_7_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Casual_Rolled_7_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Jacket_zwart : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Suit Open Black (Brown Shirt)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Jacket_zwart_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Jacket_zwart_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Jacket_zwart_alt : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Suit Open Black (Plaid Shirt)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Jacket_zwart_Alt_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Jacket_zwart_alt_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Jacket_zwart_swetr : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Suit Open Black (Sweater)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Jacket_zwart_swetr_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Jacket_zwart_swetr_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Jacket_bruin : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Suit Open Brown";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Jacket_bruin_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Jacket_bruin_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Jacket_bruin_swetr : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Suit Open Brown (Sweater)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Jacket_bruin_swetr_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Jacket_bruin_swetr_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Jacket_grijs : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Suit Open Grey";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Jacket_grijs_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Jacket_grijs_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Jacket_grijs_swetr : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Suit Open Grey (Sweater)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Jacket_grijs_swetr_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Jacket_grijs_swetr_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_1 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 1";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_1_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_1_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Rolled_1 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 1 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_1_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Rolled_1_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_2 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 2";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_2_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_2_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Rolled_2 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 2 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_2_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Rolled_2_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_3 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 3";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_3_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_3_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Rolled_3 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 3 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_3_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Rolled_3_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_4 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 4";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_4_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_4_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Rolled_4 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Outfit 4 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_FFI_Worker_4_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Rolled_4_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Coverall_1 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Coveralls 1";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Worker_Coverall_2_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Coverall_1_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Coverall_Rolled_1 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Coveralls 1 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Worker_Coverall_2_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Coverall_Rolled_1_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Coverall_2 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Coveralls 2";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Worker_Coverall_2_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Coverall_2_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Worker_Coverall_Rolled_2 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Working Coveralls 2 (Rolled)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Worker_Coverall_2_trop_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Worker_Coverall_Rolled_2_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Swetr_vest_1 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Sweater Outfit 1 (Vest)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Swetr_1_vest_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Swetr_vest_1_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Swetr_vest_2 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Sweater Outfit 2 (Vest)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Swetr_2_vest_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Swetr_vest_2_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Swetr_vest_3 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Sweater Outfit 3 (Vest)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Swetr_3_vest_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Swetr_vest_3_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Swetr_vest_4 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Sweater Outfit 4 (Vest)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Swetr_4_vest_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Swetr_vest_4_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_Swetr_vest_5 : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER Sweater Outfit 5 (Vest)";
	descriptionShort = "";
	model = "\WW2\SPE_Assets_m\Characters\Civilians_m\civilians\SPE_suitpack_civ.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_CIV_Swetr_5_vest_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_Swetr_vest_5_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};