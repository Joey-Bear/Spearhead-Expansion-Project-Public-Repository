class CfgPatches
{
	class SEP_B_EHM_Statics
	{
		author="Joe";
		units[]=
		{
			"SEP_B_EHM_MG34_Lafette_Deployed",
			"SEP_B_EHM_MG34_Bipod",
			"SEP_B_EHM_MG34_Lafette_low_Deployed",
			"SEP_B_EHM_MG34_Lafette_Trench_Deployed",
			"SEP_B_EHM_SearchLight"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"WW2_SPE_Assets_c_Vehicles_StaticWeapons_c"
		};
	};
};
class Turrets;
class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;
class MainTurret;
class CommanderOptics;

class CfgVehicles
{

	class SPE_MG34_Lafette_Deployed;
	class SEP_B_EHM_MG34_Lafette_Deployed: SPE_MG34_Lafette_Deployed
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_B_EHM";
		author = "Joe";
		side = 1;
		faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_B_EHM_Militia_G98";
		displayName = "MG 34";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Vehicles\SEP_B_EHM_Statics\editorPreviews\SEP_B_EHM_MG34_Lafette_Deployed.jpg";
	};

	class SPE_MG34_Bipod;
	class SEP_B_EHM_MG34_Bipod : SPE_MG34_Bipod
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_B_EHM";
		author = "Joe";
		side = 1;
		faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_B_EHM_Militia_G98";
		displayName = "MG 34 (Bipod)";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Vehicles\SEP_B_EHM_Statics\editorPreviews\SEP_B_EHM_MG34_Bipod.jpg";
	};
	
	class SPE_MG34_Lafette_low_Deployed;
	class SEP_B_EHM_MG34_Lafette_low_Deployed : SPE_MG34_Lafette_low_Deployed
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_B_EHM";
		author = "Joe";
		side = 1;
		faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_B_EHM_Militia_G98";
		displayName = "MG 34 (Low)";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Vehicles\SEP_B_EHM_Statics\editorPreviews\SEP_B_EHM_MG34_Lafette_low_Deployed.jpg";
	};
	
	class SPE_MG34_Lafette_Trench_Deployed;
	class SEP_B_EHM_MG34_Lafette_Trench_Deployed : SPE_MG34_Lafette_Trench_Deployed
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_B_EHM";
		author = "Joe";
		side = 1;
		faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_B_EHM_Militia_G98";
		displayName = "MG 34 (Trench)";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Vehicles\SEP_B_EHM_Statics\editorPreviews\SEP_B_EHM_MG34_Lafette_Trench_Deployed.jpg";
	};

	class SPE_GER_SearchLight;
	class SEP_B_EHM_SearchLight : SPE_GER_SearchLight
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_B_EHM";
		author = "Joe";
		side = 1;
		faction = "SEP_B_EHM_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_B_EHM_Militia_G98";
		displayName = "Search Light";
		editorPreview="\SEP_B_EHM\SEP_B_EHM_Vehicles\SEP_B_EHM_Statics\editorPreviews\SEP_B_EHM_SearchLight.jpg";
	};
};