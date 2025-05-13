class SPE_FW190F8;
class SEP_B_GER_DAK_FW190F8 : SPE_FW190F8 
{
	author = "Joe";
	editorSubcategory = "EdSubcat_Planes";
	scope = 2;
	scopeCurator = 2;
	displayName = "Fw 190 F-8";
	side = 1;
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_DAK_FW190F8.jpg";
	faction = "SEP_B_GER_DAK_Units";
	crew = "SEP_B_GER_DAK_Pilot";	
	hiddenSelectionsTextures[]=
	{
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_01_camo_DAK_CO.paa",
		"WW2\SPE_Assets_t\Vehicles\Planes_t\FW190F8\Fw190F8_Sd_co.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_03_camo_DAK_CO.paa",
	};

	
	class TextureSources
	{
		class SEP_B_GER_Camo_DAK
		{
			factions[]=
			{
			};
			displayname="DAK";
			author = "Hyena"
			textures[]=
			{
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_01_camo_DAK_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Planes_t\FW190F8\Fw190F8_Sd_co.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_03_camo_DAK_CO.paa",
			};
		};
	};
};

class SEP_B_GER_WIN_FW190F8 : SPE_FW190F8 
{
	author = "Joe";
	editorSubcategory = "EdSubcat_Planes";
	scope = 2;
	scopeCurator = 2;
	displayName = "Fw 190 F-8";
	side = 1;
	editorPreview = "\SEP_B_GER\SEP_B_GER_Vehicles\data\editorPreviews\SEP_B_GER_WIN_FW190F8.jpg";
	faction = "SEP_B_GER_Winter_Units";
	crew = "SEP_B_GER_WIN_Pilot";	
	hiddenSelectionsTextures[]=
	{
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_01_camo_win_CO.paa",
		"WW2\SPE_Assets_t\Vehicles\Planes_t\FW190F8\Fw190F8_Sd_co.paa",
		"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_03_camo_win_CO.paa",
	};
	
	class TextureSources
	{
		class SEP_B_GER_Camo_Winter
		{
			factions[]=
			{
			};
			displayname="Winter Camouflage";
			author = "Hyena"
			textures[]=
			{
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_01_camo_win_CO.paa",
				"WW2\SPE_Assets_t\Vehicles\Planes_t\FW190F8\Fw190F8_Sd_co.paa",
				"SEP_B_GER\SEP_B_GER_Vehicles\data\SEP_B_GER_FW190F8_03_camo_win_CO.paa",
			};
		};
	};
};