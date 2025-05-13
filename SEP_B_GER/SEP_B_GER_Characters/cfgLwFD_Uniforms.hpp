class SEP_B_GER_U_LwFDSmock_CFV : B_Soldier_F
{
    author="Jamie";
    scope= 1;
    scopeArsenal=2;
    scopeCurator= 2;
    displayName="GER LwFD Field Smock";
    side = 2;
    nakedUniform="U_BasicBody";
    uniformClass="SEP_B_GER_U_LwFDSmock";
    model = "\SEP_B_GER\SEP_B_GER_Characters\SEP_GER_U_LwFDSmock.p3d";
    hiddenSelections[] = 
    {
        "camo",
        "branch"
    };
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_LwFDSmock_split_CO.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_GER_LwFD_SCHUTZE_CA.paa"
    };
};
class SEP_B_GER_U_LwFDSmock_gry_CFV : SEP_B_GER_U_LwFDSmock_CFV
{
    author="Jamie";
    scope= 1;
    scopeArsenal=2;
    scopeCurator= 2;
    displayName="GER LwFD Field Smock (Grau)";
    side = 2;
    nakedUniform="U_BasicBody";
    uniformClass="SEP_B_GER_U_LwFDSmock_gry";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_LwFDSmock_gry_CO.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_GER_LwFD_SCHUTZE_CA.paa"
    };
};
class SEP_B_GER_U_LwFDSmock_Uffz_CFV : SEP_B_GER_U_LwFDSmock_CFV
{
    author="Jamie";
    scope= 1;
    scopeArsenal=2;
    scopeCurator= 2;
    displayName="GER LwFD Field Smock (Uffz.)";
    side = 2;
    nakedUniform="U_BasicBody";
    uniformClass="SEP_B_GER_U_LwFDSmock_Uffz";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_LwFDSmock_mix_CO.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_GER_LwFD_UNTEROFFIZER_CA.paa"
    };
};