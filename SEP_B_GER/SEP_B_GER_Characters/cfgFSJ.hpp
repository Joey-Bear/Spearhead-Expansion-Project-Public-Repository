// Headgear
class SEP_B_GER_H_FSJ_M38_Helmet_Cover_Telo: H_SPE_GER_FSJ_M38_Helmet_Cover
{
    author = "Joe";
    displayName = "GER FSJ Stahlhelm 1938 (Covered, Telo)";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_FSJ_M38_Helmet_Cover_Telo_ca.paa";
    scope = 2;
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_FSJ_M38_Helmet_Cover_Telo_CO.paa"
    };
};

class SEP_B_GER_H_FSJ_M38_Helmet_Burlap_Telo: H_SPE_GER_FSJ_M38_Helmet_kentang
{
    author = "Joe";
    displayName = "GER FSJ Stahlhelm 1938 (Burlap, Telo)";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_FSJ_M38_Helmet_Burlap_Telo_ca.paa";
    scope = 2;
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_FSJ_M38_Helmet_Burlap_Telo_co.paa"
    };
};

// Uniforms (CfgWeapons)
class SEP_B_GER_FSJ_MK3_Telo : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Gefr : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Gefr.)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Gefr_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Gefr_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Gloves : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Gloves)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Gloves_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Gloves_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Gloves_Pads : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Gloves, Pads)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Gloves_Pads_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Gloves_Pads_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Open : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Open)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Open_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Open_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Open_Roll : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Open, Rolled)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Open_Roll_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Open_Roll_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Pads : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Pads)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Pads_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Pads_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Pads_Roll : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Pads, Rolled)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Pads_Roll_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Pads_Roll_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Roll : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Rolled)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Roll_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Roll_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Uffz : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Uffz.)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Uffz_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Uffz_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Uffz_Gloves : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Uffz., Gloves)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Uffz_Gloves_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Uffz_Gloves_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Uffz_Gloves_Pads : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Uffz., Gloves, Pads)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Uffz_Gloves_Pads_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Uffz_Gloves_Pads_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Uffz_Pads : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Jump Smock 1942 (Telo, Uffz., Pads)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Uffz_Pads_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Uffz_Pads_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Offz : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Officer Jump Smock 1942 (Telo)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Offz_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Offz_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Offz_Gloves : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Officer Jump Smock 1942 (Telo, Gloves)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Offz_Gloves_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Offz_Gloves_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Offz_Gloves_Pads : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Officer Jump Smock 1942 (Telo, Gloves, Pads)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Offz_Gloves_Pads_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Offz_Gloves_Pads_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_FSJ_MK3_Telo_Offz_Pads : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER FSJ Officer Jump Smock 1942 (Telo, Pads)";
    descriptionShort = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Germans_t\suitpacks\suitpack_de_feldbluse_co.paa"};
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_FSJ_MK3_Telo_Offz_Pads_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_FSJ_MK3_Telo_Offz_Pads_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};