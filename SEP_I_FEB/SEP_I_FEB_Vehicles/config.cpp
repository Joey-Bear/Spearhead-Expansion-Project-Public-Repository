class CfgPatches
{
	class SEP_I_FEB_Vehicles
	{
        units[] = {
			 //Air//
			 "SEP_I_FEB_P47D",
			 //Statics//
			 "SEP_I_FEB_57mm_M1",
			 "SEP_I_FEB_M1_81",
			 "SEP_I_FEB_M1919_M2",
			 "SEP_I_FEB_M1919_M2_Trench_Deployed",
			 "SEP_I_FEB_M1919A6_Bipod",
			 "SEP_I_FEB_M2_M3_Trench",
			 "SEP_I_FEB_M2_M3",	 
			 //Tracked//
			 "SEP_I_FEB_M3_Halftrack",
			 "SEP_I_FEB_M3_Halftrack_Open",
			 "SEP_I_FEB_M3A1_Halftrack",
			 "SEP_I_FEB_M3_Halftrack_Ambulance",
			 "SEP_I_FEB_M3_Halftrack_Ammo",
			 "SEP_I_FEB_M3_Halftrack_Fuel",
			 "SEP_I_FEB_M3_Halftrack_Repair",
			 //Wheeled//
			 "SEP_I_FEB_G503_MB",
			 "SEP_I_FEB_G503_MB_M1919",
			 "SEP_I_FEB_G503_MB_Armoured",
			 "SEP_I_FEB_G503_MB_M1919_Armoured",
			 "SEP_I_FEB_G503_MB_Ambulance",
			 "SEP_I_FEB_G503_MB_Open",
			 "SEP_I_FEB_CCKW_353",
			 "SEP_I_FEB_CCKW_353_Open",
			 "SEP_I_FEB_CCKW_353_M2",
			 "SEP_I_FEB_CCKW_353_Ambulance",
			 "SEP_I_FEB_CCKW_353_Ammo",
			 "SEP_I_FEB_CCKW_353_Fuel",
			 "SEP_I_FEB_CCKW_353_Repair",
			 "SEP_I_FEB_M20_AUC",
			 "SEP_I_FEB_M8_LAC",
			 "SEP_I_FEB_M8_LAC_ringMount",
			 "SEP_I_FEB_Trailer",
			 "SEP_I_FEB_Trailer_Ammo",
			 "SEP_I_FEB_Trailer_Fuel",
			 "SEP_I_FEB_Trailer_Repair",
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
			"WW2_SPEX_Assets_c_Vehicles_Wheeled_c_T3_Trailer"
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

    #include "cfgFEB_Vehicles_P47D.hpp"
	
//===================================
//STATICS
//===================================

	#include "cfgFEB_Vehicles_Statics.hpp"

//===================================
//TRACKED
//===================================
			
	#include "cfgFEB_Vehicles_M3.hpp"
		
//===================================
//WHEELED
//===================================

	#include "cfgFEB_Vehicles_G503.hpp"
	#include "cfgFEB_Vehicles_G508.hpp"
	#include "cfgFEB_Vehicles_M8.hpp"
	#include "cfgFEB_Vehicles_Trailer.hpp"	

};

class CfgGroups 
{
    class Indep
	{
        class SEP_I_FEB
		{
            name = "[SEP] Força Expedicionária Brasileira";	
			
			class MechanizedInfantry
			{
				name = "Mechanized Infantry";
				class SEP_I_FEB_Mechanized_Platoon_HQ
				{
					name = "Armored Platoon HQ";
					side = 2;
					faction="SEP_I_FEB_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_FEB_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_FEB_M3A1_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_FEB_Radio";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_FEB_Sniper";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_FEB_ASL";
						rank = "SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_FEB_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_FEB_AT";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_FEB_Gren";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
				
				class SEP_I_FEB_Mechanized_Infantry_Squad
				{
					name = "Armored Infantry Squad";
					side = 2;
					faction="SEP_I_FEB_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_Infantry.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_FEB_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_FEB_M3A1_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_FEB_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_FEB_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_FEB_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_FEB_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};
			
			class MotorizedInfantry
			{
				name = "Motorized Infantry";
				class SEP_I_FEB_Motorized_Command_Section
				{
					name = "Command Section";
					side = 2;
					faction="SEP_I_FEB_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_FEB_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_FEB_G503_MB";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_FEB_Radio";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_FEB_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				
				class SEP_I_FEB_Motorized_Infantry_Squad
				{
					name = "Motorized Infantry Squad";
					side = 2;
					faction="SEP_I_FEB_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Motorized.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_FEB_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_FEB_CCKW_353";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_FEB_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_FEB_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_FEB_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_FEB_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_FEB_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};
		};
	};
};