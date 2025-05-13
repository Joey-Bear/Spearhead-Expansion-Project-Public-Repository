// Headgear

class SEP_B_GER_H_Stahlhelm_DAK : H_SPE_GER_Helmet
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Stahlhelm 1942";
    descriptionShort = "Armor Level I";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_Stahlhelm_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_Stahlhelm_DAK_co.paa"
    };
};

class SEP_B_GER_H_Stahlhelm_M35_DAK : H_SPE_GER_Helmet_M35
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Stahlhelm 1935";
    descriptionShort = "Armor Level I";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_Stahlhelm_M35_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_Stahlhelm_M35_DAK_co.paa"
    };
};

class SEP_B_GER_H_Stahlhelm_M35_Glasses_DAK : H_SPE_GER_Helmet_M35_Glasses
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Stahlhelm 1935 (Goggles)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_Stahlhelm_M35_Glasses_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_Stahlhelm_M35_DAK_co.paa",
        "WW2\SPE_Assets_t\Characters\Germans_t\GER_Wehrmacht\German_Pilot_co.paa"
    };
};

class SEP_B_GER_H_Stahlhelm_M35_ns_DAK : H_SPE_GER_Helmet_M35_ns
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Stahlhelm 1935 (Folded)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_Stahlhelm_M35_ns_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_Stahlhelm_M35_DAK_co.paa"
    };
};
class SEP_B_GER_H_Stahlhelm_M35_Glasses_ns_DAK : H_SPE_GER_Helmet_M35_Glasses_ns
{
    author = "OokamiJamie";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Stahlhelm 1935 (Goggles, Folded)";
    descriptionShort = "Armor Level I";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_Stahlhelm_M35_Glasses_ns_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_Stahlhelm_M35_DAK_co.paa",
        "WW2\SPE_Assets_t\Characters\Germans_t\GER_Wehrmacht\German_Pilot_co.paa"
    };
};

class SEP_B_GER_H_PithHelmet: H_HelmetB
{
    author = "OokamiJamie";
    displayName = "GER DAK Pith Helmet";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_PithHelmet_ca.paa";
    scope = 2;
    model = "\SEP_B_GER\SEP_B_GER_Characters\SEP_GER_H_PithHelmet.p3d";
    hiddenSelections[] = 
    {
        "camo"
    };
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_CO.paa"
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
            "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_CO.paa"
        };
        uniformModel = "\SEP_B_GER\SEP_B_GER_Characters\SEP_GER_H_PithHelmet.p3d";
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

class SEP_B_GER_H_PithHelmet_oli: SEP_B_GER_H_PithHelmet
{
    author = "OokamiJamie";
    displayName = "GER DAK Pith Helmet (Olive)";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_PithHelmet_ca.paa";
    scope = 2;
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_oli_CO.paa"
    };
};

class SEP_B_GER_H_PithHelmet_ns: H_HelmetB
{
    author = "OokamiJamie";
    displayName = "GER DAK Pith Helmet (Folded)";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_PithHelmet_ns_ca.paa";
    scope = 2;
    model = "\SEP_B_GER\SEP_B_GER_Characters\SEP_GER_H_PithHelmet_ns.p3d";
    hiddenSelections[] = 
    {
        "camo"
    };
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_CO.paa"
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
            "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_CO.paa"
        };
        uniformModel = "\SEP_B_GER\SEP_B_GER_Characters\SEP_GER_H_PithHelmet_ns.p3d";
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

class SEP_B_GER_H_PithHelmet_ns_oli: SEP_B_GER_H_PithHelmet_ns
{
    author = "OokamiJamie";
    displayName = "GER DAK Pith Helmet (Folded, Olive)";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_PithHelmet_ca.paa";
    scope = 2;
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\Data\SEP_B_GER_H_PithHelmet_oli_CO.paa"
    };
};

class SEP_B_GER_H_FieldCap_DAK : H_SPE_GER_Cap
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Field Cap 1943";
    descriptionShort = "No Armor";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_FieldCap_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_FieldCap_DAK_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_DAK_FieldCap_Decal_ca.paa"
    };
};

class SEP_B_GER_H_FieldCap_DAK_alt : H_SPE_GER_Cap
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Field Cap 1943, Sand";
    descriptionShort = "No Armor";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_FieldCap_DAK_alt_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_FieldCap_DAK_alt_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_DAK_FieldCap_Decal_ca.paa"
    };
};

class SEP_B_GER_H_SideCap_DAK : H_SPE_GER_M38
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Side Cap";
    descriptionShort = "No Armor";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_SideCap_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_SideCap_DAK_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_DAK_SideCap_Decal_ca.paa"
    };
};

class SEP_B_GER_H_SideCap_2_DAK : H_SPE_GER_M38_2
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Side Cap (Tilt)";
    descriptionShort = "No Armor";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_SideCap_2_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_SideCap_DAK_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_DAK_SideCap_Decal_ca.paa"
    };
};

class SEP_B_GER_H_SideCap_DAK_alt : H_SPE_GER_M38
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Side Cap, Sand";
    descriptionShort = "No Armor";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_SideCap_DAK_alt_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_SideCap_DAK_alt_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_DAK_SideCap_Decal_ca.paa"
    };
};

class SEP_B_GER_H_SideCap_2_DAK_alt : H_SPE_GER_M38_2
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Side Cap, Sand (Tilt)";
    descriptionShort = "No Armor";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_SideCap_2_DAK_alt_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_SideCap_DAK_alt_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_DAK_SideCap_Decal_ca.paa"
    };
};

class SEP_B_GER_H_TankerFieldCap_DAK : H_SPE_GER_TankPrivateCap
{
    author = "Joe";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "GER DAK Field Cap 1943 (Tanker, HP Down)";
    descriptionShort = "No Armor";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_H_TankerFieldCap_DAK_ca.paa";
    hiddenSelectionsTextures[] = 
    {
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_H_FieldCap_DAK_co.paa",
        "\SEP_B_GER\SEP_B_GER_Characters\data\SEP_DAK_FieldCap_Decal_ca.paa"
    };
};

// Uniforms (CfgWeapons)
class SEP_B_GER_U_FieldUniform_DAK : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_DAK_Rolled : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 (Rolled)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_Rolled_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_Rolled_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_DAK_Shorts : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 (Shorts)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_Shorts_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_Shorts_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_DAK_alt : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 (Sand)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_alt_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_alt_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_DAK_Rolled_alt : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 (Rolled, Sand)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_Rolled_alt_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_Rolled_alt_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

    class SEP_B_GER_U_FieldUniform_DAK_reed : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 (Green)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_reed_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_reed_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_DAK_Rolled_reed : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 (Rolled, Green)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_Rolled_reed_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_Rolled_reed_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_MixedUniform_DAK : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Mixed Uniform 1940";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_DAK_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_MixedUniform_DAK_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_MixedUniform_DAK_Shorts : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Mixed Uniform 1940 (Shorts)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_DAK_Shorts_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_MixedUniform_DAK_Shorts_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_MixedUniform_DAK_Rolled : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Mixed Uniform 1940 (Rolled)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_DAK_Rolled_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_MixedUniform_DAK_Rolled_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_MixedUniform_DAK_NCO : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Mixed Uniform 1940 (Unteroffizier)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_MixedUniform_DAK_NCO_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_MixedUniform_DAK_NCO_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_ShortUniform_DAK : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Shirt 1940";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_ShortUniform_DAK_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_ShortUniform_DAK_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_ShortUniform_DAK_alt : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Shirt 1940 (Sand)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_ShortUniform_DAK_alt_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_ShortUniform_DAK_alt_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_ShortUniform_DAK_mix_01 : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Shirt 1940 (Mixed)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_ShortUniform_DAK_mix_01_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_ShortUniform_DAK_mix_01_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_ShortUniform_DAK_Rolled : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Shirt 1940 (Rolled)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_ShortUniform_DAK_Rolled_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_ShortUniform_DAK_Rolled_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_ShortUniform_DAK_Rolled_alt : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Shirt 1940 (Rolled, Sand)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_ShortUniform_DAK_Rolled_alt_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_ShortUniform_DAK_Rolled_alt_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_ShortUniform_DAK_Rolled_NCO : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Shirt 1940 (Rolled, Unteroffizier)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_ShortUniform_DAK_Rolled_NCO_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_ShortUniform_DAK_Rolled_NCO_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_Officer_DAK : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Officer Uniform (Hauptmann)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_Officer_DAK_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_Officer_DAK_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_DAK_ART : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 Artillerie";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_ART_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_ART_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_FieldUniform_DAK_ART_NCO : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Field Uniform 1940 Artillerie (Unteroffizier)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_FieldUniform_DAK_ART_NCO_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_FieldUniform_DAK_ART_NCO_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};

class SEP_B_GER_U_Officer_DAK_Art : Uniform_Base
{
    author = "Joe";
    scope = 2;
    displayName = "GER DAK Officer Uniform Artillerie (Leutnant)";
    descriptionShort = "";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    picture = "\SEP_B_GER\SEP_B_GER_Characters\data\icons\SEP_B_GER_U_Officer_DAK_Art_ca.paa";
    class ItemInfo: UniformItem
    {
        uniformModel= "-";
        uniformClass= "SEP_B_GER_U_Officer_DAK_Art_CFV";
        containerClass= "Supply50";
        mass=20;
    };
};