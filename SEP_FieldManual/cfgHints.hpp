class CfgHintCategories
{
	class SEP_Assets
	{
		displayName = "SEP - Assets";
		logicalOrder = 199;
	};
};

class CfgHints
{
    class SEP_WP_PrimaryWeapons
	{
		category = "SEP_Assets";
		displayName = "Small Arms";

		class SEP_WP_Gewehr98
		{
			displayName = "Gew 98";
			description = "The Gewehr 98 (also known as the G98, Gew 98 or M98) is a bolt-action rifle manufactured by Mauser and adopted by the German Empire in 1898. Chambered in 7.92×57mm Mauser with a 5-round internal magazine, the rifle features a straight bolt handle and a full-length wooden stock. While it was Germany’s main rifle during the First World War, it also saw limited use during Second World War where it was often issued to second-line units and reserves.";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_BoltAction_ca.paa";
			weapon = "SEP_WP_Gewehr98";
			logicalOrder = 200;
		};

		class SEP_WP_Gewehr98_Sniper
		{
			displayName = "Gew 98 (Luxor 3x)";
			description = "First issued in the spring of 1915, the sniper variant of the Gewehr 98 was outfitted a telescopic sight for precision shooting, typically a 4x Görtz or Zeiss, or in many cases the Luxor 3x. These rifles saw service with German marksmen during the First World War and, in smaller numbers, during the Second World War.";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SniperRifle_ca.paa";
			weapon = "SEP_WP_Gewehr98_Sniper";
			logicalOrder = 201;
		};

		class SEP_WP_W_M1917_Enfield
		{
			displayName = "M1917 Enfield";
			description = "The M1917 Enfield is a bolt-action rifle chambered in .30-06 Springfield with a 5-round internal magazine. An American modification of the Pattern 1914 Enfield, large numbers were sent to Britain under Lend-Lease and issued to the Home Guard during the Second World War. Known for its reliability and robust design, it served as a stopgap rifle while more modern weapons were in short supply.";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_BoltAction_ca.paa";
			weapon = "SEP_WP_W_M1917_Enfield";
			logicalOrder = 202;
		};
	
		class SEP_WP_MAS38
		{
			displayName = "MAS-38";
			description = "The MAS-38 is a submachine gun that was developed for the French Army before the outbreak of the Second World War. Chambered in the 7.65mm Longue cartridge and feeding from a 32-round detachable box magazine, the MAS-38 features a wooden stock and a compact, lightweight design. The Wehrmacht seized the MAS plant in 1940 just as the MAS-38 was entering large-scale production.";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SMG_ca.paa";
			weapon = "SEP_WP_MAS38";
			logicalOrder = 203;
		};
		
		class SEP_WP_MP507
		{
			displayName = "MP 507";
			description = "The MP 507, also known as the Gustloff Volkssturmgewehr, is a semi-automatic rifle that saw service during the closing months of the Second World War. Chambered in 7.92×33mm Kurz, the MP 507 used the same detachable 30-round box magazine as the StG 44. Designed for the Primitiv-Waffen-Programm, it had a simple gas-delayed blowback action based on the Barnitzke system.";
			image = "\WW2\SPE_Core_t\Data_t\FieldManual\icons\SPE_SelfLoadingRifle_ca.paa";
			weapon = "SEP_WP_MP507";
			logicalOrder = 204;
		};
    };
};