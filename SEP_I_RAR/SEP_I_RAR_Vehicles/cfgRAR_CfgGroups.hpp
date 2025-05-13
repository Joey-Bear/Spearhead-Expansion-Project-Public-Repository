class CfgGroups 
{
    class Indep
	{
        class SEP_I_RAR
		{
            name = "[SEP] Royal Altian Regiment";
			
			class MechanizedInfantry
			{
				name = "Mechanized Infantry";
				class SEP_I_RAR_Mechanized_Platoon_HQ
				{
					name = "Armored Platoon HQ";
					side = 2;
					faction="SEP_I_RAR_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_RAR_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_RAR_M3A1_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_RAR_Radio";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_RAR_ASL";
						rank = "SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_RAR_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_RAR_AT";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
				
				class SEP_I_RAR_Mechanized_Infantry_Squad
				{
					name = "Armored Infantry Squad";
					side = 2;
					faction="SEP_I_RAR_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_Infantry.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_RAR_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_RAR_M3A1_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_RAR_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_RAR_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_RAR_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_RAR_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};
			
			class MotorizedInfantry
			{
				name = "Motorized Infantry";
				class SEP_I_RAR_Motorized_Command_Section
				{
					name = "Command Section";
					side = 2;
					faction="SEP_I_RAR_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_RAR_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_RAR_G503_MB";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_RAR_Radio";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_RAR_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				
				class SEP_I_RAR_Motorized_Infantry_Squad
				{
					name = "Motorized Infantry Squad";
					side = 2;
					faction="SEP_I_RAR_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Motorized.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_RAR_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_RAR_CCKW_353";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_RAR_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_RAR_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_RAR_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_RAR_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_RAR_Rflmn";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};
			
			class Armored
			{
				name = "Armor";				
				class SEP_I_RAR_Armor_M8_Recon_Section
				{
					name = "M8 LAC Recon Section";
					side = 2;
					faction = "SEP_I_RAR_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Scout_Car.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_RAR_M8_LAC_ringMount";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_RAR_M8_LAC";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};