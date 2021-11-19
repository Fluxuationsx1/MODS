#include "macro.sqf"
    _GPS = "";
    _items = (ASORGS_CurrentInventory select GSVI_Items);
    for [{_i = 0}, {(_i < count _items) && (_GPS == "")}, {_i = _i + 1}] do
    {
        _item = _items select _i;
        if(getText (configFile >> "cfgWeapons" >> _item >> "simulation") == "ItemGPS") then {
            _GPS = _item;
        };
    };
    _GPS
