class CfgGroups 
{
    class Indep
	{
        class SEP_I_IHTC
		{
            name = "[SEP] Îles Horizon Troupes Coloniales";	
						
			class MotorizedInfantry
			{
				name = "Motorized Infantry";
				class SEP_I_IHTC_Motorized_Command_Section
				{
					name = "Command Section";
					side = 2;
					faction="SEP_I_IHTC_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_IHTC_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_IHTC_G503_MB";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_IHTC_Radio";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_IHTC_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				
				class SEP_I_IHTC_Motorized_Infantry_Squad
				{
					name = "Motorized Infantry Squad";
					side = 2;
					faction="SEP_I_IHTC_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Motorized.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_IHTC_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_IHTC_CCKW_353";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_IHTC_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_IHTC_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_IHTC_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_IHTC_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};

			class MechanizedInfantry
			{
				name = "Mechanized Infantry";
				class SEP_I_IHTC_Mechanized_Platoon_HQ
				{
					name = "Armored Platoon HQ";
					side = 2;
					faction="SEP_I_IHTC_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_IHTC_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_IHTC_M3A1_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_IHTC_Radio";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_IHTC_Sniper";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_IHTC_ASL";
						rank = "SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_IHTC_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_IHTC_AT";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_IHTC_AT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_IHTC_Gren";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
				
				class SEP_I_IHTC_Mechanized_Infantry_Squad
				{
					name = "Armored Infantry Squad";
					side = 2;
					faction="SEP_I_IHTC_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_Infantry.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_IHTC_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_IHTC_M3A1_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_IHTC_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_IHTC_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_IHTC_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_IHTC_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_IHTC_Rflmn_M1903";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};
			
			class Armored
			{
				name = "Armor";
				class SEP_I_IHTC_Armor_Platoon_M4A1
				{
					name = "M4A1 Sherman Platoon";
					side = 2;
					faction="SEP_I_IHTC_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored.paa";
					class Vehicle1
					{
						side = 2;
						vehicle="SEP_I_IHTC_M4A1_75";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_I_IHTC_M4A1_75";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_I_IHTC_M4A1_75";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_I_IHTC_M4A1_75";
						position[] = {20,-20,0};
					};
				};
			};
		};
	};
};