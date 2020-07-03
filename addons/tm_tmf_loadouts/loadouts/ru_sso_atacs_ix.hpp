// in case of fire, tell Bear
//Compatible with ACE Advanced Medical
tooltip = "Author: Bear\n\nHigh speed, low drag. Inspired by photos of SSO in Syria and elsewhere.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"bear_uniform_g3_atacs_ix_ru"};
    vest[] = {};
    backpack[] = {
        "B_AssaultPack_khk",
        "B_AssaultPack_khk",
        "B_AssaultPack_khk",
        "rhs_assault_umbts",
        "rhs_assault_umbts_engineer_empty",
        "rhs_assault_umbts_engineer_empty",
        "bear_eagleaiii_atacs_fg",
        "bear_eagleaiii_atacs_fg"
    };
    headgear[] = {};
    /*goggles[] = {
        "tac1_tm_rhs_extra_content_Ratnik_GSSh01_black",
        "tac1_tm_rhs_extra_content_Ratnik_GSSh01_green",
        "tac1_tm_rhs_extra_content_Ratnik_GSSh01_grey",
        "tac1_tm_rhs_extra_content_Ratnik_GSSh01_green_Balaclava_v2_green"
    };*/
    goggles[] = {
        "rhs_scarf",
        "G_Bandanna_blk",
        "G_Bandanna_oli",
        "rhs_balaclava",
        "rhs_balaclava",
        "rhs_balaclava1_olive",
        "bear_balaclava1_black",
        "bear_balaclava1_black",
        "rhs_googles_orange",
        "rhs_googles_yellow",
        "rhs_googles_clear",
        "CUP_FR_NeckScarf",
        LIST_5("")
    };
    hmd[] = {
        "rhs_1PN138"
    };
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};
    
    code = "";
    
    insignias[] = {"tac1_tm_insignia_ru_sso"};
    faces[] = {"faceset:russian"};
};
class r : baseMan
{
    displayName = "Rifleman (AS Val)";
    /*headgear[] = {
        "bear_6b47_atacs_ix",
        "bear_6b47_bala_atacs_ix",
        "bear_6b47_bala_atacs_fg"
    };*/
    headgear[] = {
        "bear_opscore_atacs_fg_ru_pelt",
        "bear_opscore_atacs_fg_ru_pelt_nsw",
        "bear_opscore_atacs_fg_cover_pelt",
        "bear_opscore_atacs_fg_cover_pelt_cam",
        "bear_opscore_atacs_fg_cover_pelt_nsw",
        "bear_opscore_atacs_fg_cover_pelt_nsw_cam",
        "bear_opscore_multicam4_cover_pelt",
        "bear_opscore_multicam_cover_pelt_nsw"
    };
    vest[] = {
        "bear_ciras1_atacs_fg",
        "bear_ciras2_atacs_fg",
        "bear_ciras3_atacs_fg",
        "bear_ciras4_atacs_fg",
        "CUP_V_B_Ciras_MCam",
        "CUP_V_B_Ciras_MCam2",
        "CUP_V_B_Ciras_Mcam3",
        "CUP_V_B_Ciras_Mcam4"
    };
    primaryWeapon[] = {"CUP_arifle_AS_VAL_VFG"};
    attachment[] = {"cup_acc_llm_black_flashlight"};
    scope[] = {"rhs_acc_okp7_dovetail"};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] = {
        LIST_5("tac1_tm_mag_compat_30Rnd_9x39mm_SP5"),
        LIST_4("tac1_tm_mag_compat_30Rnd_9x39mm_SP6"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
};
class r_ak74 : r
{
    displayName = "Rifleman";
    primaryWeapon[] = {
        "rhs_weap_ak74m_zenitco01_b33",
        "rhs_weap_ak74mr",
        "rhs_weap_ak105_zenitco01_b33",
        "tm_weap_ak74m_zenitco01_b33_camo",
        "tm_weap_ak74mr_camo",
        "tm_weap_ak105_zenitco01_b33_camo"
    };
    silencer[] = {
        "rhs_acc_dtk4short",
        "cup_muzzle_snds_kzrzp_ak545",
        "cup_muzzle_snds_kzrzp_ak545_woodland",
        "cup_muzzle_tgpa",
        "cup_muzzle_tgpa_woodland"
    };
    attachment[] = {"rhs_acc_perst3_2dp_light_h"};
    scope[] = {
        "rhs_acc_1p87",
        "rhs_acc_1p87",
        "rhsusf_acc_eotech_xps3"
    };
    bipod[] = {
        "rhs_acc_grip_ffg2",
        "rhs_acc_grip_rk6",
        "rhsusf_acc_grip2"
    };
    magazines[] = {
        LIST_5("bear_30Rnd_545x39_green_7N10"),
        LIST_4("rhs_30Rnd_545x39_7N22_camo_AK"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class g : r_ak74
{
    displayName = "Grenadier";
    primaryWeapon[] = {
        "rhs_weap_ak74mr_gp25",
        "tm_weap_ak74mr_gp25_camo"
    };
    magazines[] +=
    {
        LIST_3("rhs_VOG25"),
        LIST_3("rhs_VOG25P"),
        LIST_4("rhs_GDM40")
    };
};
class car : r_ak74
{
    displayName = "Carabinier";
    primaryWeapon[] = {
        "rhs_weap_ak105_zenitco01",
        "tm_weap_ak105_zenitco01_camo"
    };
    scope[] = {"rhs_acc_okp7_dovetail"};
};
class m : car 
{
    displayName = "Medic";
    backpack[] = {"rhs_medic_bag"};
    backpackItems[] =
    {
        LIST_15("ACE_fieldDressing"),
        LIST_20("ACE_elasticBandage"),
        LIST_20("ACE_packingBandage"),
        LIST_2("ACE_adenosine"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_5("ACE_tourniquet"),
        LIST_6("ACE_bloodIV"),
        LIST_6("ACE_Splint"),
        LIST_1("ACE_surgicalKit")
    };
};
class smg : r_ak74
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"CUP_arifle_AKS74U_railed"};
    scope[] = {"rhs_acc_okp7_picatinny"};
    silencer[] = {"cup_muzzle_snds_kzrzp_ak545"};
    bipod[] = {};
    attachment[] = {"rhs_acc_2dpZenit_ris"};
    sidearmWeapon[] = {};
    magazines[] = {
        LIST_5("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red")
    };
    linkedItems[] += {"rhs_pdu4", "ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
    magazines[] = {
        LIST_2("rhs_GRD40_Green"),
        LIST_3("rhs_GRD40_Red"),
        LIST_2("rhs_mag_nspd"),
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_4("bear_30Rnd_545x39_green_7N10"),
        LIST_3("rhs_30Rnd_545x39_7N22_camo_AK"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet",
        "ACE_Kestrel4500",
        "ACE_microDAGR",
        "ACE_Maptools"
    };
};
class ar : r_ak74
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"CUP_lmg_PKM_front_rail_B50_vfg"};
    attachment[] = {"rhs_acc_perst3"};
    silencer[] = {"cup_muzzle_snds_kzrzp_pk", "cup_muzzle_snds_kzrzp_pk_woodland"};
    bipod[] = {};
    backpack[] = 
    {
        "rhs_assault_umbts",
        "bear_eagleaiii_atacs_fg"
    };
    magazines[] =
    {
        LIST_5("rhs_100Rnd_762x54mmR_7N26"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class aar : r_ak74
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = 
    {
        "rhs_assault_umbts",
        "bear_eagleaiii_atacs_fg"
    };
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR_7N26")
    };
    linkedItems[] += {"rhs_pdu4"};
    primaryWeapon[] = {"rhs_weap_ak104_zenitco01_b33"};
    silencer[] = {"rhs_acc_dtk4long", "cup_muzzle_snds_kzrzp_ak762", "cup_muzzle_snds_kzrzp_ak762_woodland"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm_polymer_89"),
        LIST_4("rhs_30Rnd_762x39mm_polymer_tracer"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class rat : r_ak74
{
    displayName = "Rifleman (RPG-26)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
    backpackItems[] = {"rhs_weap_rshg2"};
};
class dm : r_ak74
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_vss_grip"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m21"};
    bipod[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_4("rhs_10rnd_9x39mm_SP5"),
        LIST_4("rhs_10rnd_9x39mm_SP6"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR_7N26"),
        LIST_2("rhs_18rnd_9x21mm_7BT3"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r_ak74
{
    displayName = "MMG Ammo Carrier";
    backpack[] = 
    {
        "rhs_assault_umbts",
        "bear_eagleaiii_atacs_fg"
    };
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR_7N26")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = 
    {
        "rhs_assault_umbts",
        "bear_eagleaiii_atacs_fg"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR_7N26")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : r_ak74
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matac : r_ak74
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VR_mag"),
        "rhs_rpg7_OG7V_mag"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_TBG7V_mag",
        "rhs_rpg7_OG7V_mag"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Kornet_Tripod_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : r_ak74
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    secondaryWeapon[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r_ak74
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backpack[] = {"rhs_rpg"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"rhs_rpg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r_ak74
{
    displayName = "Sniper";
    //headgear[] = {"rhs_beanie","rhs_beanie_green"};
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
    bipod[] = {"rhs_acc_harris_swivel"};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    magazines[] =
    {
        LIST_10("rhs_5Rnd_338lapua_t5000"),
        LIST_4("rhs_18rnd_9x21mm_7BT3")
    };
    backpack[] = {};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : r_ak74
{
    displayName = "Spotter";
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"rhs_uniform_msv_emr"};
    vest[] = {"rhs_6b13_EMR_6sh92_headset_mapcase"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"rhs_uniform_msv_emr"};
    vest[] = {"rhs_6b13_EMR"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("rhs_mag_nspd")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
    };
    items[] =
    {
        LIST_5("ACE_fieldDressing"),
        LIST_3("ACE_quikclot"),
        LIST_2("ACE_Splint"),
        "ACE_morphine",
        "ACE_tourniquet"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backpack[] = {"B_Carryall_oli"};
    items[] +=
    {
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("rhs_mine_pmn2_mag"),
        LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {};
    linkedItems[] += {"O_UavTerminal"};
};
