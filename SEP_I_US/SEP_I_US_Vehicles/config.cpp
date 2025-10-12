class CfgPatches
{
	class SEP_I_US_Vehicles
	{
        units[] = {
			 //Air//
			 "SEP_I_US_WIN_P47D",
			 //Statics//
			 "SEP_I_US_WIN_57mm_M1",
			 "SEP_I_US_WIN_M1_81",
			 "SEP_I_US_WIN_M1919_M2",
			 "SEP_I_US_WIN_M1919_M2_Trench_Deployed",
			 "SEP_I_US_WIN_M1919A6_Bipod",
			 "SEP_I_US_WIN_M2_M3_Trench",
			 "SEP_I_US_WIN_M2_M3",
			 "SEP_I_US_WIN_M2_60",
			 "SEP_I_US_WIN_105mm_M3",
			 "SEP_I_US_WIN_105mm_M3_Direct",
			 "SEP_I_US_WIN_M45_Quadmount",
			 //Tracked//
			 "SEP_I_US_WIN_M10",
			 "SEP_I_US_WIN_M18_Hellcat",
			 "SEP_I_US_WIN_M3_Halftrack",
			 "SEP_I_US_WIN_M3_Halftrack_Open",
			 "SEP_I_US_WIN_M3A1_Halftrack",
			 "SEP_I_US_WIN_M3_Halftrack_Ambulance",
			 "SEP_I_US_WIN_M3_Halftrack_Ammo",
			 "SEP_I_US_WIN_M3_Halftrack_Fuel",
			 "SEP_I_US_WIN_M3_Halftrack_Repair",
			 "SEP_I_US_WIN_M16_Halftrack",
			 "SEP_I_US_WIN_M4A0",
			 "SEP_I_US_WIN_M4A0_75",
			 "SEP_I_US_WIN_M4A0_75_Early",
			 "SEP_I_US_WIN_M4A0_105",
			 "SEP_I_US_WIN_M4A1_75_erla",
			 "SEP_I_US_WIN_M4A1_75",
			 "SEP_I_US_WIN_M4A1_76",
			 "SEP_I_US_WIN_M4A1_T34_Calliope",
			 "SEP_I_US_WIN_M4A1_T34_Calliope_Direct",
			 "SEP_I_US_WIN_M4A3_105",
			 "SEP_I_US_WIN_M4A3_75",
			 "SEP_I_US_WIN_M4A3_76",
			 "SEP_I_US_WIN_M4A3_T34_Calliope",
			 "SEP_I_US_WIN_M4A3_T34_Calliope_Direct",	 
			 //Wheeled//
			 "SEP_I_US_WIN_G503_MB",
			 "SEP_I_US_WIN_G503_MB_M1919",
			 "SEP_I_US_WIN_G503_MB_M2",
			 "SEP_I_US_WIN_G503_MB_Armoured",
			 "SEP_I_US_WIN_G503_MB_M1919_Armoured",
			 "SEP_I_US_WIN_G503_MB_M2_Armoured",
			 "SEP_I_US_WIN_G503_MB_Ambulance",
			 "SEP_I_US_WIN_G503_MB_Open",
			 "SEP_I_US_WIN_G503_MB_M2_Patrol",
			 "SEP_I_US_WIN_G503_MB_M1919_Patrol",
			 "SEP_I_US_WIN_CCKW_353",
			 "SEP_I_US_WIN_CCKW_353_Open",
			 "SEP_I_US_WIN_CCKW_353_M2",
			 "SEP_I_US_WIN_CCKW_353_Ambulance",
			 "SEP_I_US_WIN_CCKW_353_Ammo",
			 "SEP_I_US_WIN_CCKW_353_Fuel",
			 "SEP_I_US_WIN_CCKW_353_Repair",
			 "SEP_I_US_WIN_M20_AUC",
			 "SEP_I_US_WIN_M8_LAC",
			 "SEP_I_US_WIN_M8_LAC_ringMount",
			 "SEP_I_US_WIN_Trailer",
			 "SEP_I_US_WIN_Trailer_Ammo",
			 "SEP_I_US_WIN_Trailer_Fuel",
			 "SEP_I_US_WIN_Trailer_Repair",
        };
		weapons[]={};
		requiredAddons[]=
		{
			"WW2_SPE_Assets_c_Vehicles_Planes_c_P47",
			"WW2_SPE_Assets_c_Vehicles_StaticWeapons_c_57mm_M1",
			"WW2_SPE_Assets_c_Vehicles_WheeledAPC_c_M3_Halftrack",
			"WW2_SPE_Assets_c_Vehicles_Wheeled_U1_c_G503_MB",
			"WW2_SPE_Assets_c_Vehicles_Wheeled_U1_c_CCKW_353",
			"WW2_SPE_Assets_m_Vehicles_ArmoredCar_U1_c_M20_AUC",
			"WW2_SPEX_Assets_c_Vehicles_Wheeled_c_T3_Trailer",
			"WW2_SPE_Assets_c_Vehicles_Tanks_c_M4A1"
		};
	};
};

	#include "cfgUS_CfgGroups.hpp"

class EventHandlers;
class TextureSources;

class SPE_Canopy_EjectionSystem;
class SPE_System_NumberMarkings;
class SPE_Wreck_MaterialFix;
class SPE_VehicleTypeCaching;
class SPE_Planes;
class SPE_MaxSpeed;
class SPE_AiTurretHelper;
class SPE_Ai_CrewManagement;
class SPE_FramePitch;
class SPE_mainPlaneHandler;

class Attributes;
class SPE_UnitNumber;
class SPE_UnitNumber2;

class Turrets;
class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;
class CargoTurret_04;
class CargoTurret_05;
class CargoTurret_06;
class kurs_MG_turret;
class MainTurret;
class CommanderMG;
class CommanderOptics;
class Loader_place;
class FrontTurret;
class Assist_Driver;

class CfgVehicles 
{

//===================================
//AIR
//===================================

    #include "cfgUS_Vehicles_P47D.hpp"
	
//===================================
//STATICS
//===================================

	#include "cfgUS_Vehicles_Statics.hpp"

//===================================
//TRACKED
//===================================
	
	#include "cfgUS_Vehicles_M10_M18.hpp"
	#include "cfgUS_Vehicles_M3.hpp"
	#include "cfgUS_Vehicles_Sherman.hpp"
		
//===================================
//WHEELED
//===================================

	#include "cfgUS_Vehicles_G503.hpp"
	#include "cfgUS_Vehicles_G508.hpp"
	#include "cfgUS_Vehicles_M8.hpp"
	#include "cfgUS_Vehicles_Trailer.hpp"	

};
