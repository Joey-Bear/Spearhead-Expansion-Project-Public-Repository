// Headgear
class SEP_B_GER_H_PithHelmet_LW: SEP_B_GER_H_PithHelmet
{
    author = "OokamiJamie";
    displayName = "GER LW Pith Helmet (Blue)";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_PithHelmet_LW_ca.paa";
    scope = 2;
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_LW_CO.paa"
    };
};

class SEP_B_GER_H_PithHelmet_ns_LW: SEP_B_GER_H_PithHelmet_ns
{
    author = "OokamiJamie";
    displayName = "GER LW Pith Helmet (Folded, Blue)";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_PithHelmet_ns_LW_ca.paa";
    scope = 2;
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_LW_CO.paa"
    };
};

// Uniforms (CfgWeapons)
class SEP_B_GER_LW_U_Mantel : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER LW Mantel 1940";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_LW_U_Mantel_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_LW_U_Mantel_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_B_GER_LW_U_Mantel_Gaiters : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "GER LW Mantel 1940 (Gaiters)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_LW_U_Mantel_Gaiters_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_LW_U_Mantel_Gaiters_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};