class CfgPatches
{
	class SEP_I_IR_Vehicles
	{
        units[] = {
			 //Statics//
			"SEP_I_IR_GrW278_1",
			"SEP_I_IR_MG34_Lafette_Deployed",
			"SEP_I_IR_MG34_Bipod",
			"SEP_I_IR_MG34_Lafette_low_Deployed",
			"SEP_I_IR_MG34_Lafette_Trench_Deployed", 
        };
		weapons[]={};
		requiredAddons[]=
		{
			"WW2_SPE_Assets_c_Vehicles_StaticWeapons_c"
		};
	};
};

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
class CargoTurret_07;
class CargoTurret_08;
class kurs_MG_turret;
class MainTurret;
class CommanderMG;
class CommanderOptics;
class Loader_place;
class LoaderMG;
class FrontTurret;
class Assist_Driver;

class SPE_Tank_base;

class CfgVehicles 
{
//===================================
//STATICS
//===================================

	#include "cfgIR_Vehicles_Statics.hpp"

//===================================
//TRACKED
//===================================
		
//===================================
//WHEELED
//===================================

};
