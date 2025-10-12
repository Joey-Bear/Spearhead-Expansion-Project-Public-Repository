class CfgPatches
{
	class SEP_I_AK_Statics
	{
		author="Joe";
		units[]=
		{
			"SEP_I_AK_GrW278_1",
			"SEP_I_AK_MG34_Lafette_Deployed",
			"SEP_I_AK_MG34_Bipod",
			"SEP_I_AK_MG34_Lafette_low_Deployed",
			"SEP_I_AK_MG34_Lafette_Trench_Deployed"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"WW2_SPE_Assets_c_Vehicles_StaticWeapons_c"
		};
	};
};
class CfgVehicles
{
	class SPE_GrW278_1;
	class SPE_MG34_Lafette_Deployed;
	class SPE_MG34_Bipod;
	class SPE_MG34_Lafette_low_Deployed;
	class SPE_MG34_Lafette_Trench_Deployed;
	
	class SEP_I_AK_GrW278_1: SPE_GrW278_1
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_I_AK";
		author = "Joe";
		side = 2;
		faction = "SEP_I_AK_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_I_AK_Mortar_Gunner";
		displayName = "8.14 cm GrW 278/1 (f)";
		editorPreview = "\WW2\SPE_Core_t\EditorPreviews_t\SPE_ST_GrW278_1.jpg";
	};	
	
	
	class SEP_I_AK_MG34_Lafette_Deployed: SPE_MG34_Lafette_Deployed
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_I_AK";
		author = "Joe";
		side = 2;
		faction = "SEP_I_AK_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_I_AK_Rflmn_K98";
		displayName = "MG 34";
		editorPreview = "\WW2\SPE_Core_t\EditorPreviews_t\SPE_MG34_Lafette_Deployed.jpg";
	};
	
	class SEP_I_AK_MG34_Bipod: SPE_MG34_Bipod
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_I_AK";
		author = "Joe";
		side = 2;
		faction = "SEP_I_AK_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_I_AK_Rflmn_K98";
		displayName = "MG 34 (Bipod)";
		editorPreview = "\WW2\SPE_Core_t\EditorPreviews_t\SPE_MG34_Bipod.jpg";
	};
	
	class SEP_I_AK_MG34_Lafette_low_Deployed: SPE_MG34_Lafette_low_Deployed
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_I_AK";
		author = "Joe";
		side = 2;
		faction = "SEP_I_AK_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_I_AK_Rflmn_K98";
		displayName = "MG 34 (Low)";
		editorPreview = "\WW2\SPE_Core_t\EditorPreviews_t\SPE_MG34_Lafette_low_Deployed.jpg";
	};

	class SEP_I_AK_MG34_Lafette_Trench_Deployed: SPE_MG34_Lafette_Trench_Deployed
	{
		scope=2;
		scopeCurator=2;
		dlc="SEP_I_AK";
		author = "Joe";
		side = 2;
		faction = "SEP_I_AK_Units";
		editorSubcategory = "EdSubcat_Turrets";
		crew="SEP_I_AK_Rflmn_K98";
		displayName = "MG 34 (Trench)";
		editorPreview = "\WW2\SPE_Core_t\EditorPreviews_t\SPE_MG34_Lafette_Trench_Deployed.jpg";
	};	
};