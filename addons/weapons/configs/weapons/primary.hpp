class SMG_05_base_F;
//Using CBA_9x19_MP5
class SMG_05_F : SMG_05_base_F {
    magazineWell[] = {"CBA_9x19_MP5"};
};
class Rifle_Base_F;
class Rifle_Long_Base_F : Rifle_Base_F{
    class WeaponSlotsInfo;
};
class bnae_falkor_base : Rifle_Long_Base_F{
    class WeaponSlotsInfo:WeaponSlotsInfo{
        allowedSlots[] = {901};
    }
};
class bnae_trg42_base : Rifle_Long_Base_F{
    class WeaponSlotsInfo:WeaponSlotsInfo{
        allowedSlots[] = {901};
    }
};
class bnae_trg42_f_camo1_virtual;
class bnae_trg42_f_camo1_virtual_kit : bnae_trg42_f_camo1_virtual {
         _generalMacro = "bnae_trg42_f_camo1_virtual_kit";
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "bnae_scope_snd_virtual";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "bnae_bipod_v2_virtual";
            };
        };
    };

class SMA_AssaultBase;
class SMA_762_RIFLEBASE: SMA_AssaultBase {
    magazineWell[] = {"CBA_762x51_HK417"};
};
//Rifle 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4afgSTOCK;
class ACWP_M4A5_base;
class ACWP_M4A5_145_troy_base;
class S_145_MOD_MAG_Camo;
class S_145_MOD_MAG_AWM;
class S_145_MOD_MAG_donaldson;
class S_145_MOD_MAG_leafbrown;
class CUP_sgun_M1014_Entry_vfg;
class CUP_sgun_M1014_base: Rifle_Base_F {
        modes[] = {"Single","Single_close","Single_far"};
        class single: mode_semiauto
        {
            sounds[]=
            {
                "standardsound",
                "silencedsound"
            };
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
            };
            class silencedsound: basesoundmodetype
            {
                soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
            };
        };
};
class SOCOMD_Shotgun: CUP_sgun_M1014_Entry_vfg {
    displayname = "SOCOMD Benelli M4 Entry";
    magazineWell[] = {"SOCOMD_Breaching"};
};
class SOCOMD_SMA_M4afgSTOCK : SMA_M4afgSTOCK {        /// WIP Retexturing
    hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4"
        };
        hiddenSelectionsTextures[]=
        {
            "\SMA_M4\data\plastic_diffuse_co.paa",
            "\SMA_M4\data\grip_blk_co.paa",
            "\SMA_M4\data\magnoalpha_black_co.paa",
            "\SMA_M4\data\metal_diffuse_red_co.paa"
        };
}; 
/*
class hlc_HK416_base : Rifle_Base_F {};
class hlc_rifle_416D145 : hlc_HK416_base {};
class ACWP_M4A5_base : hlc_rifle_416D145 {
    class WeaponSlotsInfo
    {
        class MuzzleSlot
        {
            compatibleItems[]=
            {
                "sma_gemtech_one_blk",
                "sma_gemtech_one_des",
                "sma_gemtech_one_wdl",
                "SMA_Silencer_556",
                "SMA_Silencer_556_Bronze",
                "SMA_Silencer_556_Silver",
                "SMA_FLASHHIDER1",
                "SMA_FLASHHIDER2",
                "SMA_supp2btan_556",
                "SMA_supp1tan_556",
                "SMA_supp1b_556",
                "SMA_supp2b_556",
                "SMA_supp1BB_556",
                "SMA_supp1BOD_556",
                "SMA_supp1BT_556",
                "SMA_supp1Bwht_556",
                "SMA_supp1TB_556",
                "SMA_supp1TOD_556",
                "SMA_supp1TT_556",
                "SMA_supp1TW_556",
                "SMA_supp2BOD_556",
                "SMA_supp2BT_556",
                "SMA_supp2BW_556",
                "SMA_supp2T_556",
                "SMA_supp2TB_556",
                "SMA_supp2TOD_556",
                "SMA_supp2TWH_556",
                "SMA_supp2smaB_556",
                "SMA_supp2smaT_556",
                "SMA_rotex_blk",
                "SMA_rotex_tan",
                "SMA_rotex_gry"
            };
        };
    };
};*/

//Default
class SMA_MK18MOEBLK_SM;
class SMA_AUG_A3_F;
class hlc_rifle_416D10;

//RifleGL 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4_GL_SM; //Default
class SMA_MK18BLK_GL_SM;
class SMA_AUG_EGLM;
class hlc_rifle_416D10_gl;

//Tan
class SMA_MK18MOETAN_SM;
class SMA_AUG_A3_KRYPT_F;
class hlc_rifle_416D10_tan;
class SMA_MK18TAN_GL_SM;
class SMA_AUG_EGLM_tan;
// defining retextures for Toadie's 416GL variants
class hlc_rifle_416D10_tan_gl:hlc_rifle_416D10_gl{
    displayName = "H&K HK416 D10 (Tan/GL)";
    baseWeapon = "hlc_rifle_416D10_tan_gl";
    rhs_grip1_change = "hlc_rifle_416D10_tan_gl";
    rhs_grip2_change = "hlc_rifle_416D10_tan_gl";
    rhs_grip3_change = "hlc_rifle_416D10_tan_gl";
    class nia_magSwitch {
        default = "hlc_rifle_416D10_tan_gl";
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_tan_gl";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_tan_gl";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_tan_gl";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_tan_gl";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_tan_gl";
    };
    hiddenSelections[] = {"416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","AG-C_Firecntrol"};
    HiddenSelectionsMaterials[] = {"nia_wp_hk416\mat\416_upper_camo.rvmat","nia_wp_hk416\mat\416_lower_camo.rvmat","nia_wp_hk416\mat\416_barrel_camo.rvmat","nia_wp_hk416\mat\416_common_camo.rvmat","nia_wp_hk416\mat\416_stocks_camo.rvmat","hlc_core\mat\hk_agc.rvmat"};
    hiddenSelectionsTextures[] = {"nia_wp_hk416\tex\toadie_416\416_upper_camo1_co.paa","nia_wp_hk416\tex\toadie_416\416_lower_camo1_co.paa","nia_wp_hk416\tex\toadie_416\416_barrel_camo1_co.paa","nia_wp_hk416\tex\toadie_416\416_common_camo1_co.paa","nia_wp_hk416\tex\toadie_416\416_stocks_camo1_co.paa","hlc_core\tex\toadie_ag-c\416_agc_co.paa"};
};

//OD
class SMA_MK18MOEOD_SM;
class SMA_AUG_A3_MCAM_F;
class hlc_rifle_416D10_wdl;
class SMA_MK18OD_GL_SM;
class SMA_AUG_EGLM_Olive;
// defining retextures for Toadie's 416GL variants
class hlc_rifle_416D10_wdl_gl:hlc_rifle_416D10_gl{
    displayName = "H&K HK416 D10 (Woodland/GL)";
    baseWeapon = "hlc_rifle_416D10_wdl_gl";
    rhs_grip1_change = "hlc_rifle_416D10_wdl_gl";
    rhs_grip2_change = "hlc_rifle_416D10_wdl_gl";
    rhs_grip3_change = "hlc_rifle_416D10_wdl_gl";
    class nia_magSwitch {
        default = "hlc_rifle_416D10_wdl_gl";
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_wdl_gl";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_wdl_gl";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_wdl_gl";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_wdl_gl";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_wdl_gl";
    };
    hiddenSelections[] = {"416_upper","416_lower","416_SBRBarrel","416_mainparts","416_light Stock","AG-C_Firecntrol"};
    HiddenSelectionsMaterials[] = {"nia_wp_hk416\mat\416_upper_camo.rvmat","nia_wp_hk416\mat\416_lower_camo.rvmat","nia_wp_hk416\mat\416_barrel_camo.rvmat","nia_wp_hk416\mat\416_common_camo.rvmat","nia_wp_hk416\mat\416_stocks_camo.rvmat","hlc_core\mat\hk_agc.rvmat"};
    hiddenSelectionsTextures[] = {"nia_wp_hk416\tex\toadie_416\416_upper_camo2_co.paa","nia_wp_hk416\tex\toadie_416\416_lower_camo2_co.paa","nia_wp_hk416\tex\toadie_416\416_barrel_camo2_co.paa","nia_wp_hk416\tex\toadie_416\416_common_camo2_co.paa","nia_wp_hk416\tex\toadie_416\416_stocks_camo2_co.paa","hlc_core\tex\toadie_ag-c\416_agc_co.paa"};
};
// class ACWP_HK416_base;
// class ACWP_HK416D_105_base:ACWP_HK416_base{
    
//     class WeaponSlotsInfo  {
//         mass = 71.6;
//         class CowsSlot : asdg_OpticRail1913{};
//         class PointerSlot : asdg_FrontSideRail{};
//         class MuzzleSlot : asdg_MuzzleSlot_556{};
//         class UnderBarrelSlot : ACWP_troy_underslot{
//             compatibleItems[] = {
//             };
//         };
//     };
// };
// class ACWP_HK416D_105_AFG: ACWP_HK416D_105_base{};
// class ACWP_HK416D_105_don: ACWP_HK416D_105_base{};
// class ACWP_HK416D_105_AFG_don: ACWP_HK416D_105_base{};
// class ACWP_HK416D_105_tan: ACWP_HK416D_105_base{};
// class ACWP_HK416D_105_AFG_tan: ACWP_HK416D_105_base{};

class CUP_arifle_M16A4_GL;

//Rifle 762 - 20Rnd_762x51_Mag
class SMA_HK417_16in;
class SMA_HK417vfg;
class CUP_srifle_M110 : Rifle_Base_F {
    magazineWell[] = {"CBA_762x51_HK417"};
    displayName = "SR-25";
};
class srifle_DMR_06_camo_F;
class ACWP_sr25: srifle_DMR_06_camo_F {
    magazineWell[] = {"CBA_762x51_HK417"};
};
class ACWP_sr25_camo: ACWP_sr25 {};
class ACWP_sr25_ec: ACWP_sr25 {};
class ACWP_sr25_ec_camo: ACWP_sr25 {};
class ACWP_sr25_VFG: ACWP_sr25 {};
class ACWP_sr25_VFG_camo: ACWP_sr25_VFG {};

class srifle_EBR_F;
class SPARTAN_EBR_black_F : srifle_EBR_F {
    magazineWell[] = {"CBA_762x51_HK417"};
};
class SPARTAN_EBR_snake_F : srifle_EBR_F {         //Camo
    magazineWell[] = {"CBA_762x51_HK417"};
};

//Machine Gun 556
class CUP_lmg_minimipara;
class CUP_lmg_minimi_railed : CUP_lmg_minimipara {
    displayName = "FN Minimi HS";
    magazineWell[] += {"CBA_556x45_MINIMI"};
    ace_overheating_dispersion = 0.95; //Dispersion Factor (this will be scaled based on the barrel temp)  
    // ace_overheating_mrbs = 1200; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
};
class LMG_03_base_F;
class LMG_03_F :LMG_03_base_F {
    displayName = "Renduhh's Gun";
    magazineWell[] += {"CBA_556x45_MINIMI"};
    ace_overheating_dispersion = 0.95; //Dispersion Factor (this will be scaled based on the barrel temp)  
    // ace_overheating_mrbs = 1200; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
};

class CUP_lmg_L110A1;
class CUP_lmg_L110A1_railed : CUP_lmg_L110A1 {
    displayName = "FN Minimi PARA";
    magazineWell[] += {"CBA_556x45_MINIMI"};
    ace_overheating_dispersion = 0.85; //Dispersion Factor (this will be scaled based on the barrel temp)
    // ace_overheating_mrbs = 1200; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
};
//Machine Gun 762
class CUP_lmg_Mk48;
class CUP_lmg_Mk48_nohg : CUP_lmg_Mk48 {
    displayName = "Mk 48 Maximi";
    magazineWell[] += {"SOCOMD_762_150Rnd"};
    ace_overheating_mrbs = 2000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
    ace_overheating_dispersion = 0.8; //Dispersion Factor (this will be scaled based on the barrel temp)  
};

class CUP_lmg_Mk48_nohg_des : CUP_lmg_Mk48_nohg {};
class CUP_lmg_Mk48_nohg_tan : CUP_lmg_Mk48_nohg {};
class CUP_lmg_Mk48_nohg_wdl : CUP_lmg_Mk48_nohg {};

//Machine Gun 762
class CUP_lmg_FNMAG_RIS;
class SOCOMD_mag58: CUP_lmg_FNMAG_RIS {
    inertia = 3;
    displayName = "MAG 58";
    magazineWell[] = {
        "SOCOMD_762_150Rnd",
        "CBA_762x51_LINKS",
        "M240_762x51"};
    magazines[]=
        {
            "SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"
        };
    ace_overheating_mrbs = 3000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
    ace_overheating_slowdownFactor = 1; //Slowdown Factor (this will be scaled based on the barrel temp)
    ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
    ace_overheating_dispersion = 0.9; //Dispersion Factor (this will be scaled based on the barrel temp)  
};

//MP5
class CUP_smg_MP5A5;

//Rifle 300WM
class hlc_AWC_base;
class hlc_rifle_awmagnum : hlc_AWC_base {
    magazineWell[] = {"SOCOMD_300_MAG"};
    mass=120;
    allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};

//Rfile Barret
class ej_barrett_base;
class ej_m107 : ej_barrett_base {
    recoil = "recoil_gm6";
    magazineWell[] = {"SOCOMD_Barret_MAG"};
    allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};

class bnae_trg42_camo2_virtual;

class bnae_falkor_camo1_virtual;
/*

class SOCOMD_trg42 : bnae_trg42_camo2_virtual {
    magazineWell[] = {"SOCOMD_338_bolt"};
    allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
    class WeaponSlotsInfo {
        class UnderBarrelSlot {
            access=1;
            compatibleitems[]=
            {
                "bnae_bipod_v2_virtual",
                "dzn_tripod_rifle",
                "dzn_tripod_rifle_od",
                "dzn_tripod_rifle_tan"
            };
            linkproxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            iconPosition[]={0.2,0.80000001};
            iconScale=0.30000001;
        };
    };
    
};



class SOCOMD_falkor : bnae_falkor_camo1_virtual{
    magazineWell[] = {"SOCOMD_300WM_semi"};
    allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
    class WeaponSlotsInfo
        {
        class UnderBarrelSlot
            {
            access=1;
            compatibleitems[] = {
                "bnae_bipod_blk_virtual",
                "bnae_bipod_snd_virtual",
                "bipod_01_F_snd",
                "bipod_01_F_blk",
                "bipod_01_F_mtp",
                "bipod_01_F_khk",
                "bipod_02_F_blk",
                "bipod_02_F_tan",
                "bipod_02_F_hex",
                "bipod_03_F_blk",
                "bipod_03_F_oli",
                "dzn_tripod_rifle",
                "dzn_tripod_rifle_od",
                "dzn_tripod_rifle_tan"
            };
        };
    };
};*/
//Russian Gun
class CUP_arifle_AK104_railed;
class SOCOMD_SSO_AK: CUP_arifle_AK104_railed {
    displayName="RU-AK-104 (Modified)";
    hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "CamoRail",
            "CamoRailHG"
        };
        hiddenSelectionsTextures[]=
        {
            "\z\socomd\addons\data\Russian\ak74m_body_camo_co.paa",
            "\z\socomd\addons\data\Russian\ak74m_stock_camo_co.paa",
            "\z\socomd\addons\data\Russian\ak74m_grip_rail_co.paa",
            "\z\socomd\addons\data\Russian\fortisshift_foregrip_co.paa"
        };
        magazines[]=
        {
            "CUP_30Rnd_545x39_AK74M_camo_M",
            "CUP_30Rnd_545x39_AK74M_M",
            "CUP_30Rnd_Subsonic_545x39_AK74M_M",
            "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
            "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",
            "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",
            "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_Subsonic_545x39_AK_M",
            "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
            "CUP_30Rnd_545x39_AK74_plum_M",
            "CUP_30Rnd_Subsonic_545x39_AK74_plum_M",
            "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
            "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
            "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
            "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
            "CUP_20Rnd_545x39_AKSU_M",
            "CUP_20Rnd_Subsonic_545x39_AKSU_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
            "CUP_60Rnd_545x39_AK74M_M",
            "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
            "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",
            "CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",
            "CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M"
        };
    /*class Single {
        dispersion=0.00015;
    };
    class Burst {
        dispersion=0.00015;
    };
    class FullAuto {
        dispersion=0.00015;
    };*/
    aiDispersionCoefY=4;
    aiDispersionCoefX=4;
};
class SOCOMD_SSO_AK_acc: SOCOMD_SSO_AK {
    displayName="RU-AK-104 (Modified)";
    class LinkedItems{
        class LinkedItemsOptic{
            item = "CUP_optic_MARS_OD";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsAcc{
            item = "CUP_acc_ANPEQ_15_Flashlight_OD_L";
            slot = "CUP_PicatinnyTopMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_Bizon";
            slot = "CUP_EastMuzzleSlotAK";
        };
    };
};
class CUP_arifle_AK74M_GL_railed_camo;
class SOCOMD_SSO_AK_GL: CUP_arifle_AK74M_GL_railed_camo {
    displayName="RU-AK-104-GL (Modified)";
    magazines[]=
    {
        "CUP_30Rnd_545x39_AK74M_camo_M",
        "CUP_30Rnd_545x39_AK74M_M",
        "CUP_30Rnd_Subsonic_545x39_AK74M_M",
        "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_545x39_AK_M",
        "CUP_30Rnd_Subsonic_545x39_AK_M",
        "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
        "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
        "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
        "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
        "CUP_30Rnd_545x39_AK74_plum_M",
        "CUP_30Rnd_Subsonic_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
        "CUP_20Rnd_545x39_AKSU_M",
        "CUP_20Rnd_Subsonic_545x39_AKSU_M",
        "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
        "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
        "CUP_60Rnd_545x39_AK74M_M",
        "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
        "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",
        "CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",
        "CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M"
    };
    aiDispersionCoefY=4;
    aiDispersionCoefX=4;

};
class SOCOMD_SSO_AK_GL_acc: SOCOMD_SSO_AK_GL{
    class LinkedItems{
        class LinkedItemsOptic{
            item = "CUP_optic_MARS_OD";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsAcc{
            item = "CUP_acc_ANPEQ_15_Flashlight_OD_L";
            slot = "CUP_PicatinnyTopMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_TGPA_woodland";
            slot = "CUP_EastMuzzleSlotAK";
        };
    };
};
class CUP_arifle_RPK74M_railed;
class SOCOMD_SSO_RPK: CUP_arifle_RPK74M_railed{
    displayName="RU-RPK-74m (Modified)";
    hiddenSelections[] = {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4"
        };
    hiddenSelectionsTextures[] = {
        "CUP\Weapons\CUP_Weapons_AK\Data\rpk_body_co.paa",
        "CUP\Weapons\CUP_Weapons_AK\Data\rpk_furniture_co.paa",
        "CUP\Weapons\CUP_Weapons_AK\Data\rpk74m_furniture_co.paa",
        "CUP\Weapons\CUP_Weapons_AK\Data\rpk74m_other_co.paa"
        };

    magazines[] = {
        "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
        "SOCOMD_RPK_MAGAZINE",
        "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
        "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
        "CUP_30Rnd_545x39_AK_M",
        "CUP_30Rnd_Subsonic_545x39_AK_M",
        "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
        "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
        "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
        "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
        "CUP_30Rnd_545x39_AK74M_M",
        "CUP_30Rnd_Subsonic_545x39_AK74M_M",
        "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
        "CUP_30Rnd_545x39_AK74_plum_M",
        "CUP_30Rnd_Subsonic_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
        "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
        "CUP_30Rnd_545x39_AK74M_camo_M",
        "CUP_20Rnd_545x39_AKSU_M",
        "CUP_20Rnd_Subsonic_545x39_AKSU_M",
        "CUP_60Rnd_545x39_AK74M_M",
        "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",
        "CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",
        "CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
        "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"
        };
    aiDispersionCoefY=10;
    aiDispersionCoefX=10;
};
class SOCOMD_SSO_RPK_acc : SOCOMD_SSO_RPK{
    class LinkedItems{
        class LinkedItemsOptic{
            item = "CUP_optic_MARS_OD";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsAcc{
            item = "CUP_acc_ANPEQ_15_Flashlight_OD_L";
            slot = "CUP_PicatinnyTopMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_TGPA_woodland";
            slot = "CUP_EastMuzzleSlotAK";
        };
    };
};

class srifle_DMR_05_blk_F;
class SOCOMD_SSO_Cyrus_acc : srifle_DMR_05_blk_F{
    class LinkedItems{
        class LinkedItemsOptic{
            item = "optic_TWS";
            slot = "CowsSlot";
        };
        class LinkedItemsAcc{
            item = "RH_peq15b";
            slot = "PointerSlot";
        };
        class LinkedItemsMuzzle{
            item = "muzzle_snds_93mmg";
            slot = "MuzzleSlot";
        };
    };
};

class CUP_lmg_Pecheneg_woodland;
class SOCOMD_pkp: CUP_lmg_Pecheneg_woodland{
    inertia = 3;

};
class SOCOMD_pkp_acc: SOCOMD_pkp{
    class LinkedItemsOptic{
            item = "CUP_optic_1p63";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_snds_KZRZP_PK_woodland";
            slot = "CUP_EastMuzzleSlotAK";
        };
};

class SOCOMD_VEGA_AK_V1_acc: CUP_arifle_AK104_railed{
    displayName="RU-AK-104 V1 (VEGA)";
    class LinkedItems{
        class LinkedItemsOptic{
            item = "SMA_eotech552";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsAcc{
            item = "CUP_acc_Flashlight_wdl";
            slot = "CUP_PicatinnyTopMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
            slot = "CUP_EastMuzzleSlotAK";
        };
    };
};

class CUP_arifle_AK101_railed;
class SOCOMD_VEGA_AK_V2_acc: CUP_arifle_AK101_railed{
    displayName="RU-AK-101 (VEGA)";
    class LinkedItems{
        class LinkedItemsOptic{
            item = "CUP_optic_MicroT1";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsAcc{
            item = "CUP_acc_Flashlight_wdl";
            slot = "CUP_PicatinnyTopMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
            slot = "CUP_EastMuzzleSlotAK";
        };
    };
};

class CUP_arifle_AK101_GL_railed;
class SOCOMD_VEGA_AK_GL_acc: CUP_arifle_AK101_GL_railed{
    displayName="RU-AK-101 GL (VEGA)";
    class LinkedItems{
        class LinkedItemsOptic{
            item = "SMA_eotech552";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsAcc{
            item = "CUP_acc_Flashlight_wdl";
            slot = "CUP_PicatinnyTopMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
            slot = "CUP_EastMuzzleSlotAK";
        };
    };
};

class SOCOMD_VEGA_RPK_acc: CUP_arifle_RPK74M_railed{
    displayName="RU-RPK-74M (VEGA)";
    class LinkedItems{
        class LinkedItemsOptic{
            item = "CUP_optic_MicroT1";
            slot = "CUP_PicatinnySideMountAK";
        };
        class LinkedItemsMuzzle{
            item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
            slot = "CUP_EastMuzzleSlotAK";
        };
    };
};

class CUP_srifle_SVD_wdl_top_rail;
class SOCOMD_VEGA_SVD: CUP_srifle_SVD_wdl_top_rail{
};
class SOCOMD_VEGA_SVD_acc: CUP_srifle_SVD_wdl_top_rail{
    displayName="RU-SVD (VEGA)";
    class LinkedItems{
        class LinkedItemsOptic{
            item = "CUP_optic_SB_11_4x20_PM_od";
            slot = "CUP_PicatinnyTopMount_SVD";
        };
    };
};

class CUP_smg_vityaz_vfg_front_rail;
class SOCOMD_ALFA_PP19: CUP_smg_vityaz_vfg_front_rail{
};
class SOCOMD_ALFA_PP19_acc: CUP_smg_vityaz_vfg_front_rail{
    displayname="RU-PP19 (ALFA)";
    class LinkedItems{
        class LinkedItemsOptic{
            item = "CUP_optic_MicroT1_low";
            slot = "CUP_DovetailMountBizon";
        };
    };
};