class CfgHintCategories
{
	class SEP_Hints_Assets
	{
		displayName = "Spearhead Expansion Project - Assets";
		logicalOrder = 199;
	};
	class SEP_Hints_Factions
	{
		displayName = "Spearhead Expansion Project - Factions";
		logicalOrder = 200;
	};
};

class CfgHints
{
	//Small Arms//
    class SEP_WP_PrimaryWeapons
	{
		category = "SEP_Hints_Assets";
		displayName = "Small Arms";

		class SEP_WP_Gewehr98
		{
			arguments[] = {{"STR_SEP_WP_Gewehr98_displayName"},{"STR_SEP_WP_Gewehr98_description"}};
			displayName = "%11";
			description = "%12";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_BoltAction_ca.paa";
			weapon = "SEP_WP_Gewehr98";
			logicalOrder = 201;
		};

		class SEP_WP_Gewehr98_Sniper
		{
			arguments[] = {{"STR_SEP_WP_Gewehr98_Sniper_displayName"},{"STR_SEP_WP_Gewehr98_Sniper_description"}};
			displayName = "%11";
			description = "%12";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SniperRifle_ca.paa";
			weapon = "SEP_WP_Gewehr98_Sniper";
			logicalOrder = 202;
		};
	
		class SEP_WP_MAS38
		{
			arguments[] = {{"STR_SEP_WP_MAS38_displayName"},{"STR_SEP_WP_MAS38_description"}};
			displayName = "%11";
			description = "%12";			
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SMG_ca.paa";
			weapon = "SEP_WP_MAS38";
			logicalOrder = 203;
		};
		
		class SEP_WP_MP18
		{
			arguments[] = {{"STR_SEP_WP_MP18_displayName"},{"STR_SEP_WP_MP18_description"}};
			displayName = "%11";
			description = "%12";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SMG_ca.paa";
			weapon = "SEP_WP_MP18";
			logicalOrder = 204;
		};
		
		class SEP_WP_MP28
		{
			arguments[] = {{"STR_SEP_WP_MP28_displayName"},{"STR_SEP_WP_MP28_description"}};
			displayName = "%11";
			description = "%12";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SMG_ca.paa";
			weapon = "SEP_WP_MP28";
			logicalOrder = 205;
		};
		
		class SEP_WP_MP507
		{
			arguments[] = {{"STR_SEP_WP_MP507_displayName"},{"STR_SEP_WP_MP507_description"}};
			displayName = "%11";
			description = "%12";			
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SelfLoadingRifle_ca.paa";
			weapon = "SEP_WP_MP507";
			logicalOrder = 206;
		};
    };
	
	//Pistols//
    class SEP_WP_HandGuns
	{
		category = "SEP_Hints_Assets";
		displayName = "Pistols";

		class SEP_WP_A300
		{
			arguments[] = {{"STR_SEP_WP_A300_displayName"},{"STR_SEP_WP_A300_description"}};
			displayName = "%11";
			description = "%12";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_Pistol_ca.paa";
			weapon = "SEP_WP_A300";
			logicalOrder = 210;
		};
		
		class SEP_WP_PPK
		{
			arguments[] = {{"STR_SEP_WP_PPK_displayName"},{"STR_SEP_WP_PPK_description"}};
			displayName = "%11";
			description = "%12";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_Pistol_ca.paa";
			weapon = "SEP_WP_PPK";
			logicalOrder = 211;
		};
	};
	
	//Launchers//
	
	//Vehicles Info//
    class SEP_Vehicles
	{
		category = "SEP_Hints_Assets";
		displayName = "Vehicles";

		class SEP_B_GER_RKWerfer43
		{
			arguments[] = {{"STR_SEP_WP_RKWerfer43_displayName"},{"STR_SEP_WP_RKWerfer43_description"}};
			displayName = "%11";
			description = "%12";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "SEP_B_GER_RKWerfer43";
			modelScale = 3;
			logicalOrder = 225;
		};
    };	
	
	//Factions - BLUFOR//
    class SEP_Hints_Factions_B
	{
		category = "SEP_Hints_Factions";
		displayName = "Axis";

		class SEP_Hints_Factions_B_Volk
		{

			arguments[] = {{"STR_SEP_B_GER_VOLKSSTURM_displayName"},{"STR_SEP_B_GER_VOLKSSTURM_description"}};
			displayName = "%11";
			description = "%12";
			image = "\SEP_B_GER\SEP_B_GER_Core\data\cfgFactionClasses_GER_ca.paa";
			logicalOrder = 251;
		};
    };

	/*
	//Factions - OPFOR//
    class SEP_Hints_Factions_O
	{
		category = "SEP_Hints_Factions";
		displayName = "OPFOR";

		class SEP_WP_Gewehr98
		{
			displayName = "Gew 98";
			description = "The Gewehr 98 (also known as the G98, Gew 98 or M98) is a bolt-action rifle manufactured by Mauser and adopted by the German Empire in 1898. Chambered in 7.92×57mm Mauser with a 5-round internal magazine, the rifle features a straight bolt handle and a full-length wooden stock. While it was Germany’s main rifle during the First World War, it also saw limited use during Second World War where it was often issued to second-line units and reserves.";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_BoltAction_ca.paa";
			logicalOrder = 275;
		};
    };
	*/
	
	//Factions - Independent//
    class SEP_Hints_Factions_I
	{
		category = "SEP_Hints_Factions";
		displayName = "Allies";

		class SEP_Hints_Factions_I_FEB
		{
			arguments[] = {{"STR_SEP_I_FEB_displayName"},{"STR_SEP_I_FEB_description"}};
			displayName = "%11";
			description = "%12";
			image = "\SEP_I_FEB\SEP_I_FEB_Core\data\cfgFactionClasses_FEB_ca.paa";
			logicalOrder = 300;
		};
		
		class SEP_Hints_Factions_I_IR
		{
			arguments[] = {{"STR_SEP_I_IR_displayName"},{"STR_SEP_I_IR_description"}};
			displayName = "%11";
			description = "%12";			
			image = "\SEP_I_IR\SEP_I_IR_Core\data\cfgFactionClasses_IR_ca.paa";
			logicalOrder = 301;
		};
		
		class SEP_Hints_Factions_I_AK
		{
			arguments[] = {{"STR_SEP_I_AK_displayName"},{"STR_SEP_I_AK_description"}};
			displayName = "%11";
			description = "%12";
			image = "\SEP_I_AK\SEP_I_AK_Core\data\cfgFactionClasses_AK_ca.paa";
			logicalOrder = 302;
		};
    };
};