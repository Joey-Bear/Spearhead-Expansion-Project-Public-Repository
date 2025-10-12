// Headgear

class SEP_I_US_H_M1Helmet_WIN : H_SPE_US_Helmet
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "US Helmet, M1 (Winter)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_H_M1Helmet_WIN_os_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_H_M1Helmet_win_co.paa",
        "",
        "",
        "",
        "",
        ""
    };
};
class SEP_I_US_H_M1Helmet_WIN_ns : H_SPE_US_Helmet_ns
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "US Helmet, M1 (Winter, Folded)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_H_M1Helmet_WIN_os_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_H_M1Helmet_win_co.paa",
        "",
        "",
        "",
        "",
        ""
    };
};
class SEP_I_US_H_M1Helmet_WIN_os : H_SPE_US_Helmet_os
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "US Helmet, M1 (Winter, Opened)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_H_M1Helmet_WIN_os_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_H_M1Helmet_win_co.paa",
        "",
        "",
        "",
        "",
        ""
    };
};

class SEP_I_US_H_M1Helmet_Cover_WIN : H_SPE_US_Helmet_cover
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "US Helmet, M1 (Winter Cover)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_H_M1Helmet_Cover_WIN_os_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa",
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_H_M1Helmet_Cover_win_co.paa",
        "",
        "",
        "",
        ""
    };
};
class SEP_I_US_H_M1Helmet_Cover_WIN_ns : H_SPE_US_Helmet_cover_ns
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "US Helmet, M1 (Winter Cover, Folded)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_H_M1Helmet_Cover_WIN_os_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa",
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_H_M1Helmet_Cover_win_co.paa",
        "",
        "",
        "",
        ""
    };
};
class SEP_I_US_H_M1Helmet_Cover_WIN_os : H_SPE_US_Helmet_cover_os
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "US Helmet, M1 (Winter Cover, Opened)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_H_M1Helmet_Cover_WIN_os_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Pot_co.paa",
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_H_M1Helmet_Cover_win_co.paa",
        "",
        "",
        "",
        ""
    };
};

// Uniforms (CfgWeapons)
class SEP_I_US_U_Coat_brn : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "US Greatcoat";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_U_Coat_brn_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_I_US_U_Coat_brn_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};
class SEP_I_US_U_Coat_snow : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "US Greatcoat (Snow)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_U_Coat_snow_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_I_US_U_Coat_snow_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_I_US_U_M43_snow : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "US M1943 Uniform (Snow)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_U_M43_snow_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_I_US_U_M43_snow_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_I_US_U_M43_trop_snow : Uniform_Base
{
    author = "Jamie";
    scope = 2;
    displayName = "US M1943 Uniform (Unbloused, Snow)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_I_US\SEP_I_US_Characters\data\icons\SEP_I_US_U_M43_trop_snow_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_I_US_U_M43_trop_snow_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};