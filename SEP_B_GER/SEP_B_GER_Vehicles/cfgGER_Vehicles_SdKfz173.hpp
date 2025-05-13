class SPE_Jagdpanther_G1;
class SEP_B_GER_WIN_Jagdpanther_G1 : SPE_Jagdpanther_G1 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sd.Kfz. 173 Jagdpanther";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_Jagdpanther_G1.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_SPG_Crew";
	class Turrets : Turrets
	{
		class MainTurret : MainTurret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_WIN_SPG_SL"; };
		class Loader_place : Loader_place { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
	};
};