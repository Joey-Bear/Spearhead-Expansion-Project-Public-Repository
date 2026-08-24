class CfgPatches
{
	class SEP_B_GER_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	class SEP_B_GER_DAK_Units
	{
		displayName = "[SEP] Afrika Korps";
		priority = 3;
		side = 1;
		flag = "\WW2\SPE_Core_t\Data_t\Flags\flag_GER_co.paa";
		icon = "\SEP\SEP_B_GER\SEP_B_GER_Core\data\cfgFactionClasses_GER_ca.paa";
	};
    class SEP_B_GER_Winter_Units
	{
		displayName = "[SEP] Wehrmacht (Winter)";
		priority = 3;
		side = 1;
		flag = "\WW2\SPE_Core_t\Data_t\Flags\flag_GER_co.paa";
		icon = "\SEP\SEP_B_GER\SEP_B_GER_Core\data\cfgFactionClasses_GER_ca.paa";
	};
    class SEP_B_GER_Sturm_Winter_Units
	{
		displayName = "[SEP] Sturmtroopers (Winter)";
		priority = 3;
		side = 1;
		flag = "\WW2\SPE_Core_t\Data_t\Flags\flag_GER_co.paa";
		icon = "\SEP\SEP_B_GER\SEP_B_GER_Core\data\cfgFactionClasses_GER_ca.paa";
	};
	class SEP_B_GER_Volk_Units
	{
		displayName = "[SEP] Volkssturm";
		priority = 3;
		side = 1;
		flag = "\WW2\SPE_Core_t\Data_t\Flags\flag_GER_co.paa";
		icon = "\SEP\SEP_B_GER\SEP_B_GER_Core\data\cfgFactionClasses_GER_ca.paa";
	};
};

class CfgEditorSubcategories
{
	//Wehrmacht
    class SEP_B_GER_Units_Infantry_Early
    {
        displayName="Men (Early)";
    };
	
    class SEP_B_GER_Units_Infantry_Gren
    {
        displayName="Men (Volks-Grenadier)";
    };

    class SEP_B_GER_Units_Infantry_Blue_Division
    {
        displayName="Men (Blue Division)";
    };
	
    class SEP_B_GER_Units_Infantry_Blue_Division_Winter
    {
        displayName="Men (Blue Division)";
    };
	
	class SEP_B_GER_Units_Infantry_LwFD
    {
        displayName="Men (Field Division)";
    };
	
	class SEP_B_GER_Units_Infantry_LwFD_Winter
    {
        displayName="Men (Field Division)";
    };
	
	class SEP_B_GER_Units_Infantry_Lehr_Winter
    {
        displayName="Men (Panzer-Lehr)";
    };
	
	//Sturmtroopers
	class SEP_B_GER_Units_Infantry_Sturm_Early
    {
        displayName="Men (Early)";
    };	
	
	class SEP_B_GER_Units_Infantry_Sturm_French
    {
        displayName="Men (French Volunteers)";
    };
	
	class SEP_B_GER_Units_Infantry_Sturm_Spanish
    {
        displayName="Men (Spanish Volunteers)";
    };
};
