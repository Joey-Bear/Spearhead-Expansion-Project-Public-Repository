class CfgGroups 
{
    class Indep
	{
        class SEP_I_US_Winter_Units
		{
            name = "[SEP] US Army (Winter)";	
						
			class MotorizedInfantry
			{
				name = "Motorized Infantry";
				class SEP_I_US_Winter_Motorized_Command_Section
				{
					name = "Command Section";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_G503_MB";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_Radioman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_Medic";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				
				class SEP_I_US_Winter_Motorized_Infantry_Squad
				{
					name = "Motorized Infantry Squad";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Motorized.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_CCKW_353";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_US_WIN_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_US_WIN_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};

			class Mechanized
			{
				name = "Armored Infantry";
				class SEP_I_US_Winter_Mechanized_Platoon_HQ
				{
					name = "Armored Platoon HQ";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_HQ.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_Cpt";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M3_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_Radioman";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_Sniper";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_US_WIN_ASL";
						rank = "SERGEANT";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_US_WIN_Medic";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_US_WIN_AT";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_US_WIN_Gren";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_US_WIN_Gren";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
				
				class SEP_I_US_Winter_Mechanized_Infantry_Squad
				{
					name = "Armored Infantry Squad";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_Infantry.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M3_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_AR";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_AAR";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_US_WIN_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_US_WIN_AR";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_US_WIN_AT";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_US_WIN_Gren";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_US_WIN_Gren";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
				
				class SEP_I_US_Winter_Mechanized_Engineer_Squad
				{
					name = "Armored Assault Engineer Squad";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_Infantry.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M3_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_Flamethrower_Operator";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_US_WIN_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_US_WIN_Flamethrower_Operator";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_US_WIN_Engi";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_US_WIN_Engi_Expl";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Mechanized_MG_Squad
				{
					name = "Armored Light MG Squad";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_Infantry.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_SL";
						rank="SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M3_Halftrack";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_HMGunner";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4: Unit0
					{
						vehicle="SEP_I_US_WIN_ASL";
						rank = "CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5: Unit0
					{
						vehicle="SEP_I_US_WIN_HMGunner";
						rank = "PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6: Unit0
					{
						vehicle="SEP_I_US_WIN_AT";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle="SEP_I_US_WIN_AHMGunner";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8: Unit0
					{
						vehicle="SEP_I_US_WIN_AHMGunner";
						rank = "PRIVATE";
						position[]={-20,-20,0};
					};
					class Unit9: Unit0
					{
						vehicle="SEP_I_US_WIN_Rflmn";
						rank = "PRIVATE";
						position[]={25,-25,0};
					};
				};
			};			
			
			class Air
			{
				name = "Air";
				class SEP_I_US_Winter_Air_P47_Flight
				{
					name = "P-47D Thunderbolt Flight";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Air.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_P47D";
						rank="CAPTAIN";
						position[] = {0,20,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_P47D";
						rank = "LIEUTENANT";
						position[] = {-10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_P47D";
						rank = "SERGEANT";
						position[] = {-20,0,0};
					};
				};
			};
			
			class Armored
			{
				name = "Armor";
				class SEP_I_US_Winter_Armor_M4A1_Calliope_Section
				{
					name = "Calliope Rocket Artillery Section";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Rocket.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M4A1_T34_Calliope";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A1_T34_Calliope";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M10_TD_Platoon
				{
					name = "M10 Tank Destroyer Platoon";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_AT.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M10";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M10";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_M10";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_M10";
						rank="CORPORAL";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M18_TD_Platoon
				{
					name = "M18 Hellcat Tank Destroyer Platoon";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored_AT.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M18_Hellcat";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M18_Hellcat";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_M18_Hellcat";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_M18_Hellcat";
						rank="CORPORAL";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M20_AUC_Section
				{
					name = "M20 AUC Recon Section";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Scout_Car.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M20_AUC";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M20_AUC";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
				};

				class SEP_I_US_Winter_Armor_M4_105_Platoon
				{
					name = "M4 (105) Sherman Platoon";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M4A3_105";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A0_105";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A0_105";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A3_105";
						rank="CORPORAL";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M4A1_75_Platoon
				{
					name = "M4 Sherman Platoon";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M4A0_75";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A1_75";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A0_75";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A0_75_Early";
						rank="CORPORAL";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M4A1_76_Platoon
				{
					name = "M4 (76) Sherman Platoon";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M4A1_76";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A0_75";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A0_75_Early";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A1_76";
						rank="CORPORAL";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M4A3_75_Platoon
				{
					name = "M4A3 Sherman Platoon";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M4A3_75";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A3_75";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A3_75";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A3_75";
						rank="CORPORAL";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M4A3_76_Platoon
				{
					name = "M4A3 (76) Sherman Platoon";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Armored.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M4A3_76";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A3_76";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A3_76";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3: Unit0
					{
						vehicle="SEP_I_US_WIN_M4A1_76";
						rank="CORPORAL";
						position[] = {20,-20,0};
					};
				};
				
				class SEP_I_US_Winter_Armor_M8_Recon_Section
				{
					name = "M8 LAC Recon Section";
					side = 2;
					faction = "SEP_I_US_Winter_Units";
					icon = "\WW2\SPE_Core_t\Markers_t\Allies\SPE_Icon_Allies_Scout_Car.paa";
					class Unit0
					{
						side = 2;
						vehicle="SEP_I_US_WIN_M8_LAC_ringMount";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle="SEP_I_US_WIN_M8_LAC";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};