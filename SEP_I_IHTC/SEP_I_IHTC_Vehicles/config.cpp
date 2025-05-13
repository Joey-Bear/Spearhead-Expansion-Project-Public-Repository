class CfgPatches
{
	class SEP_I_IHTC_Vehicles
	{
        units[] = {
			 //Air//
			 //Statics//
			 "SEP_I_IHTC_57mm_M1",
			 "SEP_I_IHTC_MLE_27_31",
			 "SEP_I_IHTC_FM24_M24_Bipod" ,
			 //Tracked//
			 "SEP_I_IHTC_M3_Halftrack",
			 "SEP_I_IHTC_M3_Halftrack_Open",
			 "SEP_I_IHTC_M3A1_Halftrack",
			 "SEP_I_IHTC_M3_Halftrack_Ambulance",
			 "SEP_I_IHTC_M3_Halftrack_Ammo",
			 "SEP_I_IHTC_M3_Halftrack_Fuel",
			 "SEP_I_IHTC_M3_Halftrack_Repair",
			 "SEP_I_IHTC_M4A1_75",
			 //Wheeled//
			 "SEP_I_IHTC_G503_MB",
			 "SEP_I_IHTC_G503_MB_M1919",
			 "SEP_I_IHTC_G503_MB_Armoured",
			 "SEP_I_IHTC_G503_MB_M1919_Armoured",
			 "SEP_I_IHTC_G503_MB_Ambulance",
			 "SEP_I_IHTC_G503_MB_Open",
			 "SEP_I_IHTC_CCKW_353",
			 "SEP_I_IHTC_CCKW_353_Open",
			 "SEP_I_IHTC_CCKW_353_M2",
			 "SEP_I_IHTC_CCKW_353_Ambulance",
			 "SEP_I_IHTC_CCKW_353_Ammo",
			 "SEP_I_IHTC_CCKW_353_Fuel",
			 "SEP_I_IHTC_CCKW_353_Repair",
			 "SEP_I_IHTC_M20_AUC",
			 "SEP_I_IHTC_M8_LAC",
			 "SEP_I_IHTC_M8_LAC_ringMount",
			 "SEP_I_IHTC_Trailer",
			 "SEP_I_IHTC_Trailer_Ammo",
			 "SEP_I_IHTC_Trailer_Fuel",
			 "SEP_I_IHTC_Trailer_Repair",
        };
		weapons[]={};
		requiredAddons[]=
		{
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

	#include "cfgIHTC_CfgGroups.hpp"

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
class kurs_MG_turret;
class MainTurret;
class CommanderMG;
class CommanderOptics;
class Loader_place;

class CfgVehicles 
{

//===================================
//AIR
//===================================
	
//===================================
//STATICS
//===================================

	#include "cfgIHTC_Vehicles_Statics.hpp"

//===================================
//TRACKED
//===================================
			
	#include "cfgIHTC_Vehicles_M3.hpp"
	#include "cfgIHTC_Vehicles_Sherman.hpp"
		
//===================================
//WHEELED
//===================================

	#include "cfgIHTC_Vehicles_G503.hpp"
	#include "cfgIHTC_Vehicles_G508.hpp"
	#include "cfgIHTC_Vehicles_M8.hpp"
	#include "cfgIHTC_Vehicles_Trailer.hpp"	

};