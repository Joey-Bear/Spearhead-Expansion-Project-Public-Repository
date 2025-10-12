class CfgGroups 
{
	class West
	{
		/*
		class SEP_B_GER_DAK
		{
			name = "[SEP] Afrika Korps";	
			
			class Armor
			{
				name = "Armor";
				class SEP_B_GER_DAK_Armor_Platoon_PzKpfw_III_J
				{
					name = "PzKpfw III Ausf.J Platoon";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_PzKpfw_III_J";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_DAK_PzKpfw_III_J";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_DAK_PzKpfw_III_J";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_DAK_PzKpfw_III_J";
						position[] = {20,-20,0};
					};
				};
			
				class SEP_B_GER_DAK_Armor_Platoon_PzKpfw_IV_G
				{
					name = "PzKpfw IV Ausf.G Platoon";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_PzKpfw_IV_G";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_DAK_PzKpfw_IV_G";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_DAK_PzKpfw_IV_G";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_DAK_PzKpfw_IV_G";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_DAK_Armor_Platoon_PzKpfw_VI_H1
				{
					name = "PzKpfw VI Ausf.H1 Tiger";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_PzKpfw_VI_H1";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_DAK_PzKpfw_VI_H1";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_DAK_PzKpfw_VI_H1";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_DAK_PzKpfw_VI_H1";
						position[] = {20,-20,0};
					};
				};
			};

			class MechanizedInfantry
			{
				name = "Mechanized Infantry";
				class SEP_B_GER_DAK_Mechanized_Platoon_HQ
				{
					name = "Armored Platoon HQ";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_HQ.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_Ofcr";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_DAK_SdKfz_2501";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_DAK_Radioman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_DAK_ASL";
						rank = "SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_DAK_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
				};
				
				class SEP_B_GER_DAK_Mechanized_Infantry_Squad
				{
					name = "Armored Infantry Squad";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Mechanized.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_DAK_SdKfz_2501";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_DAK_MG_MG34";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_DAK_AMG";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_DAK_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_B_GER_DAK_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_K98";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_Pith";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_K98";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_Pith";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			
				class SEP_B_GER_DAK_Mechanized_Scout_Team
				{
					name = "Mechanized Scout Team";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Mechanized.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_DAK_SdKfz_2501";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_DAK_MG_MG42";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_DAK_AMG";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_DAK_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
				};
			};

			class MotorizedInfantry
			{
				name = "Motorized Infantry";
				class SEP_B_GER_DAK_Motorized_Platoon_HQ
				{
					name = "Command Section";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_HQ.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_Ofcr";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_DAK_R200_Unarmed";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_DAK_Radioman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_DAK_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				
				class SEP_B_GER_DAK_Motorized_Infantry_Squad
				{
					name = "Motorized Infantry Squad";
					side = 1;
					faction="SEP_B_GER_DAK_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Axis_Car.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_DAK_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_DAK_OpelBlitz";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_DAK_MG_MG34";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_DAK_AMG";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_DAK_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_B_GER_DAK_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_K98";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_Pith";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_K98";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_B_GER_DAK_Rflmn_Pith";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};		
		};*/	
		
		class SEP_B_GER_WIN
		{
			name = "[SEP] Wehrmacht (Winter)";	

			class Air
			{
				name = "Air";
				class SEP_B_GER_WIN_Air_FW190F8_Group
				{
					name = "Fw 190 F-8 Flight";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Air.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_FW190F8";
						rank = "CAPTAIN";
						position[] = {0,20,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "LIEUTENANT";
						vehicle="SEP_B_GER_WIN_FW190F8";
						position[] = {-10,-10,0};
					};
				};
			};
			
			class Armor
			{
				name = "Armor";
				class SEP_B_GER_WIN_Armor_Platoon_PzKpfw_III_J
				{
					name = "PzKpfw III Ausf.J Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_PzKpfw_III_J";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_WIN_PzKpfw_III_J";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_WIN_PzKpfw_III_J";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_PzKpfw_III_J";
						position[] = {20,-20,0};
					};
				};

				class SEP_B_GER_WIN_Armor_Platoon_PzKpfw_IV_G
				{
					name = "PzKpfw IV Ausf.G Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_PzKpfw_IV_G";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_WIN_PzKpfw_IV_G";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_WIN_PzKpfw_IV_G";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_PzKpfw_IV_G";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_WIN_Armor_Platoon_PzKpfw_VI_H1
				{
					name = "PzKpfw VI Ausf.H1 Tiger";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_PzKpfw_VI_H1";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_WIN_PzKpfw_VI_H1";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_WIN_PzKpfw_VI_H1";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_PzKpfw_VI_H1";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_WIN_Armor_Platoon_Nashorn
				{
					name = "Sd.Kfz. 164 PanzerjÃ¤ger Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_Nashorn";
						rank = "LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_WIN_Nashorn";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_WIN_Nashorn";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_Nashorn";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_WIN_Armor_Section_Jagdpanther_G1
				{
					name = "Sd.Kfz. 173 Jagdpanther Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_Jagdpanther_G1";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_Jagdpanther_G1";
						position[]={10,-10,0};
					};
				};
				
				class SEP_B_GER_WIN_Armor_Section_StuG_III_G_Early
				{
					name = "Sd.Kfz. 142/1 StuG (Early) Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_StuG_III_G_Early";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_StuG_III_G_Early";
						position[]={10,-10,0};
					};
				};
				
				class SEP_B_GER_WIN_Armor_Section_StuG_III_G_Late
				{
					name = "Sd.Kfz. 142/1 StuG (Late) Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_StuG_III_G_Late";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_StuG_III_G_SKB";
						position[]={10,-10,0};
					};
				};

				class SEP_B_GER_WIN_Armor_Section_StuH_42
				{
					name = "Sd.Kfz. 142/2 StuH 42 Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_StuH_42";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_WIN_StuH_42";
						position[]={10,-10,0};
					};
				};
			};

			class MechanizedInfantry
			{
				name = "Mechanized Infantry";
				class SEP_B_GER_WIN_Mechanized_Platoon_HQ
				{
					name = "Armored Platoon HQ";
					side = 1;
					faction="SEP_B_GER_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_HQ.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_Hauptmann";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_WIN_SdKfz_2501";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_WIN_Radioman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_WIN_ASL";
						rank = "SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_WIN_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
				};
				
				/*
				class SEP_B_GER_WIN_Mechanized_Infantry_Squad
				{
					name = "Armored Infantry Squad";
					side = 1;
					faction="SEP_B_GER_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Mechanized.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_WIN_SdKfz_2501";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_WIN_MGunner";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_WIN_AMG";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_WIN_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_B_GER_WIN_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_B_GER_WIN_Rflmn_K98";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_B_GER_WIN_Rflmn_K98";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_B_GER_WIN_Rflmn_K98";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_B_GER_WIN_Rflmn_K98";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
				*/
				
				class SEP_B_GER_WIN_Mechanized_Scout_Team
				{
					name = "Mechanized Scout Team";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Mechanized.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_Scout_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_WIN_SdKfz_2501";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_WIN_Scout_MGunner";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_WIN_Scout_AMGunner";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_WIN_Scout_Rflmn_Pvt";
						rank = "PRIVATE";
						position[]={-10,-10,0};
					};
				};
			};
			
			class MotorizedInfantry
			{
				name = "Motorized Infantry";
				class SEP_B_GER_WIN_Motorized_Platoon_HQ
				{
					name = "Command Section";
					side = 1;
					faction="SEP_B_GER_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_HQ.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_Hauptmann";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_WIN_R200_Hood";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_WIN_Radioman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_WIN_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				
				class SEP_B_GER_WIN_Motorized_Infantry_Squad
				{
					name = "Motorized Infantry Squad";
					side = 1;
					faction="SEP_B_GER_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Axis_Car.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_WIN_OpelBlitz";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_WIN_MGunner";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_WIN_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_WIN_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_B_GER_WIN_Rflmn_K98";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_B_GER_WIN_AMGunner";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_B_GER_WIN_LAT_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_B_GER_WIN_Ober_Grenadier";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_B_GER_WIN_Rflmn_K98";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};
		};
		
		class SEP_B_GER_Sturm_WIN
		{
			name = "[SEP] Sturmtroopers (Winter)";	
			
			class Armor
			{
				name = "Armor";
				class SEP_B_GER_Sturm_WIN_Armor_Platoon_PzKpfw_III_J
				{
					name = "PzKpfw III Ausf.J Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_J";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_J";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_J";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_J";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Armor_Platoon_PzKpfw_III_L
				{
					name = "PzKpfw III Ausf.L Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_L";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_L";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_L";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_L";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Armor_Platoon_PzKpfw_III_M
				{
					name = "PzKpfw III Ausf.M Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_M";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_M";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_M";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_M";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Armor_Platoon_PzKpfw_III_N
				{
					name = "PzKpfw III Ausf.N Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_N";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_N";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_N";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_III_N";
						position[] = {20,-20,0};
					};
				};

				class SEP_B_GER_WIN_Armor_Platoon_PzKpfw_IV_G
				{
					name = "PzKpfw IV Ausf.G Platoon";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_IV_G";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_IV_G";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_IV_G";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_IV_G";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Armor_Platoon_PzKpfw_VI_H1
				{
					name = "PzKpfw VI Ausf.H1 Tiger";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Armored.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_VI_H1";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank="SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_VI_H1";
						position[]={10,-10,0};
					};
					class Vehicle3: Vehicle2
					{
						rank = "SERGEANT";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_VI_H1";
						position[]={-10,-10,0};
					};
					class Vehicle4: Vehicle2
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_PzKpfw_VI_H1";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Armor_Section_Jagdpanther_G1
				{
					name = "Sd.Kfz. 173 Jagdpanther Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_Jagdpanther_G1";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_Jagdpanther_G1";
						position[]={10,-10,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Armor_Section_StuG_III_G_Early
				{
					name = "Sd.Kfz. 142/1 StuG (Early) Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_StuG_III_G_Early";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_StuG_III_G_Early";
						position[]={10,-10,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Armor_Section_StuG_III_G_Late
				{
					name = "Sd.Kfz. 142/1 StuG (Late) Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_StuG_III_G_Late";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_StuG_III_G_SKB";
						position[]={10,-10,0};
					};
				};

				class SEP_B_GER_Sturm_WIN_Armor_Section_StuH_42
				{
					name = "Sd.Kfz. 142/2 StuH 42 Section";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_SPG.paa";
					class Vehicle1
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_StuH_42";
						rank = "SERGEANT";
						position[]={0,0,0};
					};
					class Vehicle2: Vehicle1
					{
						rank = "CORPORAL";
						vehicle="SEP_B_GER_Sturm_WIN_StuH_42";
						position[]={10,-10,0};
					};
				};
			};

			class MechanizedInfantry
			{
				name = "Mechanized Infantry";								
				class SEP_B_GER_Sturm_WIN_Mechanized_Scout_Team
				{
					name = "Mechanized Scout Team";
					side = 1;
					faction="SEP_B_GER_WIN_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Mechanized.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_SdKfz_2501";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_MGunner";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_AMGunner";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_Rflmn_Pvt";
						rank = "PRIVATE";
						position[]={-10,-10,0};
					};
				};
			};
			
			class MotorizedInfantry
			{
				name = "Motorized Infantry";
				class SEP_B_GER_Sturm_WIN_Motorized_Platoon_HQ
				{
					name = "Command Section";
					side = 1;
					faction="SEP_B_GER_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_HQ.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_Untersturmfuhrer";
						rank="LIEUTENANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_R200_Hood";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_Radioman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				
				class SEP_B_GER_Sturm_WIN_Motorized_Infantry_Squad
				{
					name = "Motorized Infantry Squad";
					side = 1;
					faction="SEP_B_GER_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Axis\SPE_Icon_Axis_Axis_Car.paa";
					class Unit0
					{
						side = 1;
						vehicle="SEP_B_GER_Sturm_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_OpelBlitz";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_MGunner";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_Rflmn_STG";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_AMGunner";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_LAT_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_Ober_Grenadier";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_B_GER_Sturm_WIN_Rflmn_K98";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};
		};
	};
};