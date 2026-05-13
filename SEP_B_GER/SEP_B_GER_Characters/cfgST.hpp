// Headgear
class SEP_B_GER_ST_H_StahlhelmCover_Telo : H_SPE_GER_HelmetCamo
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER ST Stahlhelm (Telo Cover)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_H_StahlhelmCover_Telo_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\WW2\SPE_Assets_t\Characters\Germans_t\GER_Wehrmacht\M42_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_ST_H_Stahlhelm_Cover_Telo_co.paa"
    };
};

class SEP_B_GER_ST_H_StahlhelmCover_Telo_ns : H_SPE_GER_HelmetCamo2
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER ST Stahlhelm (Telo Cover, Opened)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_H_StahlhelmCover_Telo_ns_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\WW2\SPE_Assets_t\Characters\Germans_t\GER_Wehrmacht\M42_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_ST_H_Stahlhelm_Cover_Telo_co.paa"
    };
};

class SEP_B_GER_ST_H_FieldCap_Telo : H_SPE_GER_Cap
{
	author = "Joe";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "GER ST Field Cap 1943 (Telo)";
	descriptionShort = "No Armor";
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_H_FieldCap_Telo_ca.paa";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_ST_H_FieldCap_Telo_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\M43_Decal_ST_co.paa"
	};
};

// Uniforms (CfgWeapons)
class SEP_B_GER_ST_U_Parka_maus : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_maus_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_maus_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_ST_U_Parka_maus_mix : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka (Grey/White Mixed)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_maus_mix_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_maus_mix_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_ST_U_Parka_oak : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka (Spring)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_oak_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_oak_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_ST_U_Parka_oak_mix : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka (Autumn/Spring Mixed)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_oak_mix_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_oak_mix_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_ST_U_Parka_autm : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka (Autumn)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_autm_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_autm_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_ST_U_Parka_autm_mix : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka (Grey/Autumn Mixed)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_autm_mix_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_autm_mix_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_ST_U_Parka_autm_mix_uscharf : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka (Uscharf. Grey/Autumn Mixed)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_autm_mix_uscharf_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_autm_mix_uscharf_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_ST_U_Parka_oak_mix_uscharf : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER ST Parka (Uscharf. Autumn/Spring Mixed)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Parka_oak_mix_uscharf_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_Parka_oak_mix_uscharf_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_ST_French : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER ST Field Uniform 1943 (French)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_ST_French_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_FieldUniform_ST_French_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_FieldUniform_ST_French_Rld : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER ST Field Uniform 1943 (French, Rolled)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Uniforms\U_SPE_GER_MG_schutze_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_FieldUniform_ST_French_Rld_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_MixedUniform_ST_French : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER ST Mixed Camo Uniform (French)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_ST_French_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_MixedUniform_ST_French_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_MixedUniform_ST_French_Rld : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER ST Mixed Camo Uniform (French, Rolled)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_ST_French_Rld_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_MixedUniform_ST_French_Rld_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_MixedUniform_ST_Sgt_French : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER ST Mixed Camo Uniform (Unterscharführer, French)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_ST_Sgt_French_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_MixedUniform_ST_Sgt_French_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_MixedUniform_ST_Sgt_French_Rld : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER ST Mixed Camo Uniform (Unterscharführer, French, Rolled)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_ST_Sgt_French_Rld_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_MixedUniform_ST_Sgt_French_Rld_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_U_ST_French_Officer : Uniform_Base
{
	author = "Joe";
	scope = 2;
	displayName = "GER ST Officer Uniform (Hauptsturmführer, French)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_ST_French_Officer_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_U_ST_French_Officer_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_CoatOfficer : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Leather Coat (Standartenfuhrer)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_CoatOfficer_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_CoatOfficer_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44 : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Sturm : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Sturmmann)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Sturm_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Open : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Opened)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Open_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Open_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Sturm_Open : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Opened, Sturmmann)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Open_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Sturm_Open_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Roll : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Rolled)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Roll_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Roll_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Unbloused : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Unbloused)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Unbloused_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Unbloused_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Uscharf : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Uscharf.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Uscharf_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Uscharf_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Open_Uscharf : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Opened, Uscharf.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Open_Uscharf_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Open_Uscharf_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Roll_Uscharf : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Field Uniform 1944 (Rolled, Uscharf.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Roll_Uscharf_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Roll_Uscharf_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Mix : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mixed Uniform 1944 (Opened)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Mix_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Mix_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Sturm_Mix : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mixed Uniform 1944 (Opened, Sturmmann)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Mix_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Sturm_Mix_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Mix_Uscharf : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mixed Uniform 1944 (Opened, Uscharf.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Mix_Uscharf_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Mix_Uscharf_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_FieldUniform_M44_Mix_Roll : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mixed Uniform 1944 (Rolled)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_M44_Mix_Roll_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_FieldUniform_M44_Mix_Roll_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_Mantel_M36 : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mantel 1936";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Mantel_M36_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_Mantel_M36_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_Mantel_M36_Gaiters : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mantel 1936 (Gaiters)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Mantel_M36_Gaiters_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_Mantel_M36_Gaiters_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_Mantel_M36_Uscharf : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mantel 1936 (Uscharf.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Mantel_M36_Uscharf_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_Mantel_M36_Uscharf_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_Mantel_M40 : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mantel 1940";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Mantel_M40_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_Mantel_M40_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_Mantel_M40_Gaiters : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mantel 1940 (Gaiters)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Mantel_M40_Gaiters_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_Mantel_M40_Gaiters_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

class SEP_B_GER_ST_U_Mantel_M40_Uscharf : Uniform_Base
{
	author = "Jamie";
	scope = 2;
	displayName = "GER ST Mantel 1940 (Uscharf.)";
	descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
	picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_Mantel_M40_Uscharf_ca.paa";
	class ItemInfo: UniformItem
	{
		uniformModel= "-";
		uniformClass= "SEP_B_GER_ST_U_Mantel_M40_Uscharf_CFV";
		containerClass= "Supply50";
		mass=20;
	};
};

/*
class SEP_B_GER_ST_U_FieldUniform_Telo : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER ST Field Uniform (Telo mimetico Smock)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_ST_U_FieldUniform_Telo_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_ST_U_FieldUniform_Telo_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
*/