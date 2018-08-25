class CfgLoadoutVests
{
    class Vest_Leader
    {
        loadoutWhitelist[] = { 
                "SASR_TroopLeader",
                "SASR_PatrolLeader"
            };

    };
    
	class SOCOMD_Leader_Vest : Vest_Leader { };
    class SOCOMD_Leader_Vest_coy : Vest_Leader { };
	
	class Vest_Operator
    {
        loadoutWhitelist[] = { 
                "SASR_Sapper",
                "SASR_LAT",
                "SASR_MAT",
                "SASR_HAT",
				"SASR_Marksman",
				"SASR_Sniper",
				"SASR_Rifleman"
            };

    };
    
	class SOCOMD_Operator_Vest : Vest_Operator { };
    class SOCOMD_Operator_Vest_coy : Vest_Operator { };

	/*class Vest_Rifleman
    {
        loadoutWhitelist[] = { 
                
            };

    };
    
	class SOCOMD_Rifleman_Vest : Vest_Rifleman { };
    class SOCOMD_Rifleman_Vest_coy : Vest_Rifleman { };
	*/
	class Vest_2IC
    {
        loadoutWhitelist[] = { 
                "SASR_Grenadier"
            };

    };
    
	class SOCOMD_2IC_Vest : Vest_2IC { };
    class SOCOMD_2IC_Vest_coy : Vest_2IC { };
	
	class Vest_Medic
    {
        loadoutWhitelist[] = { 
                "SASR_Medic",
            };

    };
    
	class SOCOMD_Medic_Vest : Vest_Medic { };
    class SOCOMD_Medic_Vest_coy : Vest_Medic { };
	
};
