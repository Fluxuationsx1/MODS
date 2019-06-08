class CfgWeapons
{

	class Default;
	class LauncherCore;
	class ItemCore : Default {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
		class ItemInfo;
	};
	class Launcher: LauncherCore
	{
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class GrenadeLauncher: Default
	{
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class UGL_F: GrenadeLauncher
	{
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class RifleCore;
	class Rifle: RifleCore
	{
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class PistolCore;
	class Pistol: PistolCore
	{
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class Pistol_Base_F: Pistol
	{
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class Put: Default
	{
		class PutMuzzle: Default
		{
			opticsZoomMin = 0.75;
			opticsZoomMax = 0.75;
			opticsZoomInit = 0.75;
		};
	};

	// SMA weapons no attachement zooming
	class SMA_556_RIFLEBASE;
	class SMA_A3_BASE_F : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class SMA_ACR_BASE : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class SMA_HK416_BASE : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class SMA_762_RIFLEBASE;
	class SMA_HK417 : SMA_762_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class SMA_HK417_16in : SMA_HK417 {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class SMA_L85RIS_BASE :  SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};

	class SMA_M4_BASE : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};

	class SMA_MK16 : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};
	class SMA_Mk17 : SMA_762_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};

	class SMA_MK18_BASE : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};

	class SMA_SAR21_BASE_F : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};

	class SMA_Steyr_AUG_BASE_F : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};

	class SMA_STG_BASE_F : SMA_556_RIFLEBASE {
		opticsZoomMin = 0.75;
		opticsZoomMax = 0.75;
		opticsZoomInit = 0.75;
	};

// prefixed scopes disabled for now
/*
	#include "optics\vanilla.hpp"
	#include "optics\rh.hpp"
	#include "optics\cup.hpp"
	#include "optics\sma.hpp"
*/
/*

ace_optic_arco_2d
  ARCO2collimator:
    init: 0.75
    min: 0.75
    max: 0.75
  ARCO2scope:
    init: 0.0872665
    min: 0.0872665
    max: 0.0872665

ace_optic_arco_pip
  ARCO2collimator:
    init: 0.75
    min: 0.75
    max: 0.75
  ARCO2scope:
    init: 0.0872665
    min: 0.0872665
    max: 0.0872665

*/
};

/*helper script is below to make it much easier to get optics modes and current values */
/*
_optic = "rh_m3lr";

_scopes = "true" configClasses (configFile >> "cfgWeapons" >> _optic >> "ItemInfo" >> "OpticsModes");
_br = toString [13,10];
_response = _optic + _br;

{
   _name = configName _x;
   _initv = getNumber (_x >> "opticsZoomInit");
   _minv = getNumber (_x >> "opticsZoomMin");
   _maxv = getNumber (_x >> "opticsZoomMax");
   _response = _response +"  "+ (configName _x) +":"+ _br + "    " + "init: " + (str _initv) + _br + "    " + "min: " + (str _minv) + _br + "    " + "max: " + (str _maxv) + _br;
} foreach _scopes;

copyToClipboard _response;
*/