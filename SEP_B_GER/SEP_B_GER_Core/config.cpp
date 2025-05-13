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
		icon = "";
		flag = "";
	};
    class SEP_B_GER_Winter_Units
	{
		displayName = "[SEP] Wehrmacht (Winter)";
		priority = 3;
		side = 1;
		icon = "";
		flag = "";
	};
    class SEP_B_GER_Sturm_Winter_Units
	{
		displayName = "[SEP] Sturmtroopers (Winter)";
		priority = 3;
		side = 1;
		icon = "";
		flag = "";
	};
};

class CfgEditorSubcategories
{
	//Wehrmacht
    class SEP_B_GER_Units_Infantry_Early
    {
        displayName="Men (Early)";
    };

    class SEP_B_GER_Units_Infantry_Volk
    {
        displayName="Men (Volkssturm)";
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
