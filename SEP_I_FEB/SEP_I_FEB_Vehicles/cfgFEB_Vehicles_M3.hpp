//Unarmed
class SPE_Halftrack_base;
class SEP_I_FEB_M3_Halftrack : SPE_Halftrack_base 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_APCs";
	scope = 2;
	scopeCurator = 2;
	displayName = "M3 Half-Track (Unarmed)";
	side = 2;
	editorPreview = "\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M3_Halftrack.jpg";
	faction = "SEP_I_FEB_Units";
	crew = "SEP_I_FEB_Rflmn_Carb";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
		"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
		"\a3\data_f\clear_empty.paa"
	};		
	class TextureSources
	{
		class FEB
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
				"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
};

class SPE_US_M3_Halftrack_Unarmed_Open;
class SEP_I_FEB_M3_Halftrack_Open : SPE_US_M3_Halftrack_Unarmed_Open 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_APCs";
	scope = 2;
	scopeCurator = 2;
	displayName = "M3 Half-Track (Unarmed, Open)";
	editorPreview = "\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M3_Halftrack_Open.jpg";
	side = 2;
	faction = "SEP_I_FEB_Units";
	crew = "SEP_I_FEB_Rflmn_Carb";
	animationList[] = 
	{
		"canopy_frame_hide_source",1
		,"canopy_hide_source",1
		,"winch_hide_source",1
		,"stowage_hide_source",0
	};
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
		"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
		"\a3\data_f\clear_empty.paa"
	};	
	class TextureSources
	{
		class FEB
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
				"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
};

class SPE_M3A1_Halftrack_base;
class SEP_I_FEB_M3A1_Halftrack : SPE_M3A1_Halftrack_base 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_APCs";
	scope = 2;
	scopeCurator = 2;
	displayName = "M3A1 Half-Track";
	editorPreview = "\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M3A1_Halftrack.jpg";
	side = 2;
	faction = "SEP_I_FEB_Units";
	crew = "SEP_I_FEB_Rflmn_Carb";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_M2Mount_co.paa",
		"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
		"\a3\data_f\clear_empty.paa"
	};	
	class Turrets : Turrets 
	{
		class MainTurret : MainTurret 
		{ 
			gunnerType = "SEP_I_FEB_Rflmn_Carb"; 
		};
		class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
		class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
	};	  
	class TextureSources
	{
		class FEB
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_M2Mount_co.paa",
				"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
};

class SPE_US_M3_Halftrack_Ambulance;
class SEP_I_FEB_M3_Halftrack_Ambulance : SPE_US_M3_Halftrack_Ambulance 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_APCs";
	scope = 2;
	scopeCurator = 2;
	displayName = "M3 Half-Track (Ambulance)";
	editorPreview = "\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M3_Halftrack_Ambulance.jpg";
	side = 2;
	faction = "SEP_I_FEB_Units";
	crew = "SEP_I_FEB_Medic";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1_decals\decal_med_mc.paa",
		"\a3\data_f\clear_empty.paa"
	};		
	class TextureSources
	{
		class FEB
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1_decals\decal_med_mc.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
};

class SPE_US_M3_Halftrack_Ammo;
class SEP_I_FEB_M3_Halftrack_Ammo : SPE_US_M3_Halftrack_Ammo 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_APCs";
	scope = 2;
	scopeCurator = 2;
	displayName = "M3 Half-Track (Ammo)";
	editorPreview = "\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M3_Halftrack_Ammo.jpg";
	side = 2;
	faction = "SEP_I_FEB_Units";
	crew = "SEP_I_FEB_Rflmn_Carb";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
		"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
		"\a3\data_f\clear_empty.paa"
	};		
	class TextureSources
	{
		class FEB
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
				"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
};

class SPE_US_M3_Halftrack_Fuel;
class SEP_I_FEB_M3_Halftrack_Fuel : SPE_US_M3_Halftrack_Fuel 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_APCs";
	scope = 2;
	scopeCurator = 2;
	displayName = "M3 Half-Track (Fuel)";
	editorPreview = "\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M3_Halftrack_Fuel.jpg";
	side = 2;
	faction = "SEP_I_FEB_Units";
	crew = "SEP_I_FEB_Rflmn_Carb";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
		"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
		"\a3\data_f\clear_empty.paa"
	};		
	class TextureSources
	{
		class FEB
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
				"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
};

class SPE_US_M3_Halftrack_Repair;
class SEP_I_FEB_M3_Halftrack_Repair : SPE_US_M3_Halftrack_Repair 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_APCs";
	scope = 2;
	scopeCurator = 2;
	displayName = "M3 Half-Track (Repair)";
	editorPreview = "\SEP_I_FEB\SEP_I_FEB_Vehicles\data\editorPreviews\SEP_I_FEB_M3_Halftrack_Repair.jpg";
	side = 2;
	faction = "SEP_I_FEB_Units";
	crew = "SEP_I_FEB_Engi";
	hiddenSelectionsTextures[] = 
	{
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
		"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
		"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
		"\a3\data_f\clear_empty.paa"
	};		
	class TextureSources
	{
		class FEB
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			textures[]=
			{
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Exterior_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Interior_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Wheels_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Winch_co.paa",
				"WW2\SPE_Assets_t\Vehicles\WheeledAPC_t\M3A1\M3A1_Tracks_co.paa",
				"\SEP_I_FEB\SEP_I_FEB_Vehicles\data\SEP_I_FEB_M3_Halftrack_Decals_ca.paa",
				"\a3\data_f\clear_empty.paa"
			};
		};
	};
};