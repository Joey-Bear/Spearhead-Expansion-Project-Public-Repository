//Uniforms (CfgVehicles)

//M43 Field Uniforms
class SEP_B_GER_U_FieldUniform_Volk_CFV : SPE_GER_Soldier_Boots
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Field Uniform 1943 (Volkssturm)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_U_FieldUniform_Volk";
	hiddenSelections[] = 
	{
		"camo",
		"camoB",
		"badge"
	};
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_Volk_co.paa",
		"\WW2\SPE_Assets_t\Characters\Germans_t\GER_Wehrmacht\Feldbluse_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_VOLK_VOLKSTURMMANN_MC.paa"
	};
};

class SEP_B_GER_U_FieldUniform_Volk_Unblsd_CFV : SPE_GER_Soldier_Unbloused
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Field Uniform 1943 (Volkssturm, Unbloused)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_U_FieldUniform_Volk_Unblsd";
	hiddenSelections[] = 
	{
		"camo",
		"camo2",
		"badge"
	};
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_Volk_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_Volk_Pnts_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_VOLK_VOLKSTURMMANN_MC.paa"
	};
};
/*
class SEP_B_GER_U_FieldUniform_Volk_Unblsd_Gefr_CFV : SPE_GER_Soldier_Unbloused
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Field Uniform 1943 (Volkssturm, Unbloused, Gefr.)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_U_FieldUniform_Volk_Unblsd_Gefr";
	hiddenSelections[] = 
	{
		"camo",
		"camo2",
		"badge"
	};
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_Volk_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_Volk_Pnts_co.paa",
		"\WW2\SPE_Assets_t\Characters\Germans_t\Badges\SPE_WH_GEFREITER_mc.paa"
	};
};*/

class SEP_B_GER_U_FieldUniform_Volk_Unblsd_Unter_CFV : SPE_GER_Soldier_Unbloused
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Field Uniform 1943 (Volkssturm, Unbloused, Grpfhr.)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_U_FieldUniform_Volk_Unblsd_Unter";
	hiddenSelections[] = 
	{
		"camo",
		"camo2",
		"badge"
	};
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_Volk_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_Volk_Pnts_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_VOLK_GRUPPENFUHRER_mc.paa"
	};
};

//Mantel
class SEP_B_GER_U_Mantel_M40_volk_CFV : SEP_B_GER_U_Mantel_M40_Unbloused_CFV
{
	author="Jamie";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Mantel 1940 (Volkssturm)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_U_Mantel_M40_volk";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Mantel_m40_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_M44_Lows_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_VOLK_VOLKSTURMMANN_MC.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
};

//M44s
class SEP_B_GER_Volk_U_FieldUniform_M44_CFV : SEP_B_GER_U_FieldUniform_M44_CFV
{
	author="Jamie";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Field Uniform 1944 (Volkssturm)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_Volk_U_FieldUniform_M44";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_M44_late_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_M44_Lows_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_VOLK_VOLKSTURMMANN_M44_mc.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
};

class SEP_B_GER_Volk_U_FieldUniform_M44_Open_CFV : SEP_B_GER_U_FieldUniform_M44_Open_CFV
{
	author="Jamie";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Field Uniform 1944 (Volkssturm, Open)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_Volk_U_FieldUniform_M44_Open";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_M44_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_M44_Lows_late_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_VOLK_VOLKSTURMMANN_M44_mc.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
};

class SEP_B_GER_Volk_U_FieldUniform_M44_Uffz_CFV : SEP_B_GER_U_FieldUniform_M44_CFV
{
	author="Jamie";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName="GER Field Uniform 1944 (Volkssturm, Grpfhr.)";
	side = 1;
	nakedUniform="U_BasicBody";
	uniformClass="SEP_B_GER_Volk_U_FieldUniform_M44_Uffz";
	hiddenSelectionsTextures[] = 
	{
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_M44_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_B_GER_U_Feldbluse_M44_Lows_CO.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\SEP_VOLK_GRUPPENFUHRER_M44_mc.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
};

//Civilian
class SEP_B_GER_U_Casual_1_CFV: SPE_FFI_Casual_1
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 1";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_1";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_a_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_Rolled_1_CFV: SPE_FFI_Casual_1_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 1 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_Rolled_1";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_a_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_a_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_2_CFV: SPE_FFI_Casual_2
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 2";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_2";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_b_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_e_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_Rolled_2_CFV: SPE_FFI_Casual_2_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 2 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_Rolled_2";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_b_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_grijs_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_e_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_3_CFV: SPE_FFI_Casual_3
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 3";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_3";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_c_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_b_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_Rolled_3_CFV: SPE_FFI_Casual_3_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 3 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_Rolled_3";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_c_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_b_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_4_CFV: SPE_FFI_Casual_4
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 4";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_4";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_d_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_grijs_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_c_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_Rolled_4_CFV: SPE_FFI_Casual_4_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 4 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_Rolled_4";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_d_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_grijs_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_c_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_5_CFV: SPE_FFI_Casual_5
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 5";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_5";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_e_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_d_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_Rolled_5_CFV: SPE_FFI_Casual_5_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 5 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_Rolled_5";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_e_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_d_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_6_CFV: SPE_FFI_Casual_6
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 6";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_6";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_f_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_f_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_Rolled_6_CFV: SPE_FFI_Casual_6_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 6 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_Rolled_6";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_f_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_f_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_7_CFV: SPE_FFI_Casual_7
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 7";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_7";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_g_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_c_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Casual_Rolled_7_CFV: SPE_FFI_Casual_7_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Casual Outfit 7 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Casual_Rolled_7";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_g_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_c_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Jacket_zwart_CFV: SPE_FFI_Jacket_zwart
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Suit Open Black (Brown Shirt)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Jacket_zwart";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_zwart_c_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_grijs_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_d_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Jacket_zwart_alt_CFV: SPE_FFI_Jacket_zwart_alt
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Suit Open Black (Plaid Shirt)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Jacket_zwart_alt";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_zwart_d_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_d_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Jacket_zwart_swetr_CFV: SPE_FFI_Jacket_zwart_swetr
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Suit Open Black (Sweater)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Jacket_zwart_swetr";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_zwart_a_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_b_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Jacket_bruin_CFV: SPE_FFI_Jacket_bruin
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Suit Open Brown";
	side = 1;
	uniformClass= "SEP_B_GER_U_Jacket_bruin";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_bruin_b_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_grijs_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_f_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Jacket_bruin_swetr_CFV: SPE_FFI_Jacket_bruin_swetr
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Suit Open Brown (Sweater)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Jacket_bruin_swetr";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_bruin_a_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_b_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Jacket_grijs_CFV: SPE_FFI_Jacket_grijs
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Suit Open Brown";
	side = 1;
	uniformClass= "SEP_B_GER_U_Jacket_grijs";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_grijs_b_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_f_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Jacket_grijs_swetr_CFV: SPE_FFI_Jacket_grijs_swetr
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Suit Open Brown (Sweater)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Jacket_grijs_swetr";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_pak2_grijs_a_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_d_co.paa",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_1_CFV: SPE_FFI_Worker_1
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 1";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_1";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_d_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_grijs_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_e_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Rolled_1_CFV: SPE_FFI_Worker_1_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 1 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Rolled_1";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_d_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_grijs_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_e_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_2_CFV: SPE_FFI_Worker_2
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 2";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_2";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_a_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_c_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Rolled_2_CFV: SPE_FFI_Worker_2_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 2 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Rolled_2";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_a_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_c_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_3_CFV: SPE_FFI_Worker_3
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 3";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_3";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_c_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_b_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Rolled_3_CFV: SPE_FFI_Worker_3_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 3 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Rolled_3";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_c_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_b_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_4_CFV: SPE_FFI_Worker_4
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 4";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_4";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_b_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_f_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Rolled_4_CFV: SPE_FFI_Worker_4_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Outfit 4 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Rolled_4";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_b_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_hbt_blauw_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\nekutai_f_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Coverall_1_CFV: SPE_CIV_Worker_Coverall_2
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Coveralls 1";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Coverall_1";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_covral_blauw_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Coverall_Rolled_1_CFV: SPE_CIV_Worker_Coverall_2_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Coveralls 1 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Coverall_Rolled_1";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_covral_blauw_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Coverall_2_CFV: SPE_CIV_Worker_Coverall_2
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Coveralls 2";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Coverall_2";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_covral_grijs_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Worker_Coverall_Rolled_2_CFV: SPE_CIV_Worker_Coverall_2_trop
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Working Coveralls 2 (Rolled)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Worker_Coverall_Rolled_2";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_covral_grijs_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa"
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Swetr_vest_1_CFV: SPE_CIV_Swetr_1_vest
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Sweater Outfit 1 (Vest)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Swetr_vest_1";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc2_c_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_d_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Swetr_vest_2_CFV: SPE_CIV_Swetr_2_vest
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Sweater Outfit 2 (Vest)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Swetr_vest_2";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_c_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_a_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Swetr_vest_3_CFV: SPE_CIV_Swetr_3_vest
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Sweater Outfit 3 (Vest)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Swetr_vest_3";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_e_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_e_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Swetr_vest_4_CFV: SPE_CIV_Swetr_4_vest
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Sweater Outfit 4 (Vest)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Swetr_vest_4";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_f_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_bruin_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_c_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};

class SEP_B_GER_U_Swetr_vest_5_CFV: SPE_CIV_Swetr_5_vest
{
	author="Joe";
	scope= 1;
	scopeArsenal=2;
	scopeCurator= 2;
	displayName = "GER Sweater Outfit 5 (Vest)";
	side = 1;
	uniformClass= "SEP_B_GER_U_Swetr_vest_5";
	nakedUniform = "U_SPE_Underwear";
	hiddenSelectionsTextures[] = 
	{
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_sc1_d_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\civ_woolie_zwart_co.paa",
		"\WW2\SPE_Assets_t\Characters\Civilians_t\civilians\swetr1_b_co.paa",
		"",
		"\SEP_B_GER\SEP_B_GER_Characters\data\Volk_Armband_co.paa",
		""
	};
	modelSides[] = {6};
};