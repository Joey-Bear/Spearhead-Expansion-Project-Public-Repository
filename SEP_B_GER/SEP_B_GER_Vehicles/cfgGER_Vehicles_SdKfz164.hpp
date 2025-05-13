class SPE_Nashorn;
class SEP_B_GER_WIN_Nashorn : SPE_Nashorn 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Tanks";
	scope = 2;
	scopeCurator = 2;
	displayName = "Sd.Kfz. 164 Nashorn";
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_Nashorn.jpg";
	side = 1;
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_SPG_Crew";
	hiddenSelectionsTextures[]= 
	{
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
		"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Tanks_t\Nashorn\Balkenkreuz_ca.paa"
	};
	
	class TextureSources: TextureSources
	{
		class SEP_B_GER_Dunkelgelb_Winter
		{
			displayName = "Dunkelgelb (Winter)";
			author = "Hyena";
			textures[]=
			{
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
				"\SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_SdKfz164_win_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Tanks_t\Nashorn\Balkenkreuz_ca.paa"
			};
		};
	};
	class Turrets : Turrets
	{
		class MainTurret : MainTurret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class kurs_MG_turret : kurs_MG_turret { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
		class CommanderOptics : CommanderOptics { gunnerType = "SEP_B_GER_WIN_SPG_SL"; };
		class Loader_place : Loader_place { gunnerType = "SEP_B_GER_WIN_SPG_Crew"; };
	};
};