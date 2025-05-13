class SPE_P47;
class SEP_I_US_WIN_P47D: SPE_P47 
{
	author = "Joe";
	editorSubCategory = "EdSubcat_Planes";
	scope = 2;
	scopeCurator = 2;
	displayName = "P-47D Thunderbolt";
	editorPreview = "SEP_I_US\SEP_I_US_Vehicles\data\editorPreviews\SEP_I_US_WIN_P47D.jpg";
	side = 2;
	faction = "SEP_I_US_Winter_Units";
	crew = "SEP_I_US_WIN_Pilot";
	//init="[_this,"",'SPE_Numbers'] spawn SPE_Fnc_System_Vehicle_Numbers_update; [_this,"",'SPE_Letters'] spawn SPE_Fnc_System_Vehicle_Numbers_update;";
	hiddenSelectionsMaterials[] = 
	{
		"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Fuselage_OD9.rvmat",
		"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Wings_OD9.rvmat",
		"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_1.rvmat",
		"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_2.rvmat",
		"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Misc.rvmat"
	};
	hiddenSelectionsTextures[] = 
	{
		"SEP_I_US\SEP_I_US_Vehicles\data\SEP_I_US_WIN_P47D_01_co.paa",
		"SEP_I_US\SEP_I_US_Vehicles\data\SEP_I_US_WIN_P47D_02_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_1_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_2_co.paa",
		"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Misc_co.paa",
		"\a3\data_f\clear_empty.paa",
		""
	};		
	class TextureSources
	{
		class SEP_I_US_WIN_P47D
		{
			factions[]=
			{
			};
			displayname="Força Expedicionária Brasileira";
			author="Hyena";
			materials[] = 
			{
				"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Fuselage_OD9.rvmat",
				"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Wings_OD9.rvmat",
				"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_1.rvmat",
				"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Cockpit_2.rvmat",
				"WW2\SPE_Assets_r\Vehicles\Planes_r\P47\Misc.rvmat"
			};
			textures[]=
			{
				"SEP_I_US\SEP_I_US_Vehicles\data\SEP_I_US_WIN_P47D_01_co.paa",
				"SEP_I_US\SEP_I_US_Vehicles\data\SEP_I_US_WIN_P47D_02_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_1_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Cockpit_2_co.paa",
				"WW2\SPE_Assets_t\Vehicles\Planes_t\P47\P47_Misc_co.paa",
				"\a3\data_f\clear_empty.paa",
				""
			};
		};
	};
	class EventHandlers
	{
		fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		init = "";
		killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
		//init = "[_this,"",'SPE_Numbers'] spawn SPE_Fnc_System_Vehicle_Numbers_update; [_this,"",'SPE_Letters'] spawn SPE_Fnc_System_Vehicle_Numbers_update;";
		class SPE_Canopy_EjectionSystem
		{
			hit = "_this call spe_fnc_planeAiEject";
		};
		class SPE_Wreck_MaterialFix
		{
			killed = "_this params ['_vehicle']; {_vehicle setObjectMaterialGlobal [_forEachIndex,'']} forEach (getObjectMaterials _vehicle);";
		};
		class SPE_VehicleTypeCaching
		{
			init = "(_this select 0) setVariable ['SPE_isPlane',true];";
		};
		class SPE_Planes
		{
			getIn = "_this call SPE_FNC_getIn";
			getOut = "_this call SPE_FNC_getOut";
		};
		class SPE_MaxSpeed
		{
			init = "(_this select 0) setVariable ['SPE_maxSpeed',getNumber (configFile/'CfgVehicles'/(typeOf (_this select 0))/'maxSpeed')];";
		};
		class SPE_AiTurretHelper
		{
			getIn = "_this spawn SPE_fnc_aiTurretHelper_getInEH";
			getOut = "_this call SPE_fnc_aiTurretHelper_getOutEH";
		};
		class SPE_Ai_CrewManagement
		{
			getIn = "_this call SPE_Fnc_System_Crew_getInEH";
			getOut = "_this call SPE_Fnc_System_Crew_getOutEH";
			SeatSwitched = "_this call SPE_Fnc_System_Crew_seatSwitchedEH";
		};
	};
	class Attributes
	{
		class SPE_UnitNumber
		{
			control = "EditShort";
			defaultValue = "-1";
			displayName = $STR_SPE_ASSETS_VEHICLES_DISPLAYNAME_SERIAL_NUMBER;
			tooltip = $STR_SPE_ASSETS_VEHICLES_TOOLTIP_LEAVE_BLANK_TO_DISABLE_4;
			expression = "[_this,_value,'SPE_Numbers'] spawn SPE_Fnc_System_Vehicle_Numbers_update;";
			property = "SPE_Unit_Number_attribute";
			typeName = "STRING";
			validate = "STRING";
		};
		class SPE_UnitNumber2
		{
			defaultValue = "null";
			displayName = $STR_SPE_ASSETS_VEHICLES_DISPLAYNAME_AIRCRAFT_IDENTIFIER;
			tooltip = $STR_SPE_ASSETS_VEHICLES_TOOLTIP_LEAVE_BLANK_TO_DISABLE_5;
			expression = "[_this,_value,'SPE_Letters'] spawn SPE_Fnc_System_Vehicle_Numbers_update;";
			property = "SPE_Unit_Number2_attribute";
			control = "EditShort";
			typeName = "STRING";
			validate = "STRING";
		};
	};
};