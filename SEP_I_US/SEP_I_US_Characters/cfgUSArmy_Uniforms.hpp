class SEP_I_US_U_Coat_brn_CFV : I_Soldier_F
{
    author="Jamie";
    scope= 1;
    scopeArsenal=2;
    scopeCurator= 2;
    displayName="US Greatcoat";
    side = 2;
    nakedUniform="U_BasicBody";
    uniformClass="SEP_I_US_U_Coat_brn";
    model = "\SEP_I_US\SEP_I_US_Characters\SEP_US_U_Coat.p3d";
    hiddenSelections[] = 
    {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = 
    {
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_U_Coat_brn_CO.paa",
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_Boots_CO.paa",
    };
};
class SEP_I_US_U_Coat_snow_CFV : SEP_I_US_U_Coat_brn_CFV
{
    author="Jamie";
    scope= 1;
    scopeArsenal=2;
    scopeCurator= 2;
    displayName="US Greatcoat (Snow)";
    side = 2;
    uniformClass="SEP_I_US_U_Coat_snow";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_U_Coat_snow_CO.paa",
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_Boots_CO.paa",
    };
};

class SEP_I_US_U_M43_snow_CFV : SPE_US_M43
{
    author="Jamie";
    scope= 1;
    scopeArsenal=2;
    scopeCurator= 2;
    displayName="US M1943 Uniform (Snow)";
    side = 2;
    uniformClass="SEP_I_US_U_M43_snow";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_U_M43_win_co.paa",
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_U_PantsWool_win_co.paa",
    };
};

class SEP_I_US_U_M43_trop_snow_CFV : SPE_US_M43_trop
{
    author="Jamie";
    scope= 1;
    scopeArsenal=2;
    scopeCurator= 2;
    displayName="US M1943 Uniform (Unbloused, Snow)";
    side = 2;
    uniformClass="SEP_I_US_U_M43_trop_snow";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_U_M43_win_co.paa",
        "\SEP_I_US\SEP_I_US_Characters\data\SEP_I_US_U_PantsWool_win_co.paa",
    };
};