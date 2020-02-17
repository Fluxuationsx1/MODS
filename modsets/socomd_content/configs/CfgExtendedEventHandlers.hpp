class Extended_FiredBIS_EventHandlers  {
    class CAManBase  {
		rpgMalfunction = "_this call SOCOMD_fnc_Event_rpgMalfunction";
		shotgunBreach = "_this call SOCOMD_fnc_Event_shotgunBreach";
    };
};

class Extended_Killed_EventHandlers {
	class CAManBase {
		weaponMalfunction = "_this call SOCOMD_fnc_Event_weaponMalfunction";
	};
};

class Extended_AnimStateChanged_EventHandlers {
    class CAManBase {
		  animStateChanged = "[_this select 0,_this select 1] call SOCOMD_fnc_animSpeedSet";
    };
};