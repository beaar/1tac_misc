// in case of fire, tell Bear

tooltip = "Author: Bear\n\nSerbian Army (RHS: SAF). 7.62x39 mm Zastava rifles.";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhssaf_uniform_m93_oakleaf_summer"};
   	vest[] = {};
   	backpack[] = {"rhssaf_kitbag_smb"};
   	headgear[] = {};
   	goggles[] = {"default"};
   	hmd[] = {};
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
    linkedItems[] =
	{
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = 
	{
		"rhssaf_helmet_m59_85_nocamo",
		"rhssaf_helmet_m59_85_oakleaf",
		"rhssaf_helmet_m59_85_oakleaf",
		"rhssaf_helmet_m59_85_oakleaf",
		"rhssaf_helmet_m97_olive_nocamo",
		"rhssaf_helmet_m97_oakleaf",
		"rhssaf_helmet_m97_oakleaf",
		"rhssaf_helmet_m97_woodland",
		"rhssaf_helmet_m97_woodland"
	};
	vest[] = {"rhssaf_vest_md99_woodland_rifleman", "rhssaf_vest_md99_md2camo_rifleman"};
    backpack[] = {"rhssaf_kitbag_smb"};
    primaryWeapon[] =
	{
		"rhs_weap_m70b1"
	};
	scope[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_m70b3n_pbg40"};
    magazines[] =
    {
		LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_6("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m70ab2"};
	magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class m : car 
{
    displayName = "Medic";
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m92"};
	silencer[] = {};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"rhssaf_vest_md99_woodland_rifleman_radio", "rhssaf_vest_md99_md2camo_rifleman_radio"};
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
		LIST_2("rhs_GRD40_Red"),
		LIST_2("SmokeShellGreen")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
	items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
	radios[] = {"ACRE_PRC117F"};
	magazines[] = {
		LIST_2("rhs_GRD40_Green"),
		LIST_3("rhs_GRD40_Red"),
		LIST_2("SmokeShellGreen"),
		LIST_2("SmokeShellYellow"),
		LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
		LIST_6("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
	};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	radios[] = {"ACRE_PRC117F"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"rhs_pdu4"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_Maptools"
	};
};
class ar : r
{
	displayName = "Automatic Rifleman";
	primaryWeapon[] = {"rhs_weap_m84"};
	bipod[] = {};
	silencer[] = {};
	sidearmWeapon[] = {};
	magazines[] =
	{
		LIST_4("rhs_100Rnd_762x54mmR"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        LIST_2("rhs_30Rnd_762x39mm")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
	backpackItems[] += {"rhsgref_mag_rkg3em"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_m76"};
	silencer[] = {};
	scope[] = {};
	bipod[] = {};
	magazines[] =
	{
		LIST_16("rhsgref_10Rnd_792x57_m76"),
		LIST_2("rhs_mag_rdg2_white")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	primaryWeapon[] = {"rhs_weap_m84"};
	sidearmWeapon[] = {};
	scope[] = {};
	magazines[] =
	{
		LIST_5("rhs_100Rnd_762x54mmR"),
		"rhs_mag_rgd5",
		"rhs_mag_rdg2_white"
	};
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
	backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	backpack[] = {"B_Carryall_oli"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		LIST_3("rhs_100Rnd_762x54mmR")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_NSV_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_NSV_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_NSV_Tripod_Bag"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
    backPack[] = {"B_Carryall_oli"};
	secondaryWeapon[] = {"rhs_weap_smaw_green"};
	secondaryAttachments[] = {"rhs_weap_optic_smaw"};
	magazines[] +=
	{
		"rhs_mag_smaw_HEAA",
		"rhs_mag_smaw_HEDP",
		LIST_5("rhs_mag_smaw_SR")
	};
};
class matac : car
{
	displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
	backpackItems[] =
	{
		"rhs_mag_smaw_HEAA",
		"rhs_mag_smaw_HEDP",
		LIST_5("rhs_mag_smaw_SR")
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
    backpack[] = {"B_Carryall_oli"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"Binocular"
	};
	backpackItems[] =
	{
		"rhs_mag_smaw_HEAA",
		"rhs_mag_smaw_HEDP"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	backpack[] = {"RHS_SPG9_Gun_Bag"};
	secondaryWeapon[] = {};
	backpackItems[] = {};
};
class hatac : car
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"RHS_SPG9_Tripod_Bag"};
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
		"Binocular"
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
        "ItemWatch"
    };
};
class mtrac : car
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
        "Binocular"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	backpack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    headgear[] = {"rhssaf_booniehat_md2camo"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m76"};
    scope[] = {"rhs_acc_pso1m2"};
	bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_10("rhsgref_10Rnd_792x57_m76"),
        "rhs_mag_rgd5",
        LIST_3("rhs_mag_9x18_12_57N181S")
    };
	backpack[] = {};
	linkedItems[] += {"Binocular"};
};
class sp : sn
{
    displayName = "Spotter";
	backpack[] = {"rhssaf_kitbag_md2camo"};
    scope[] = {};
	silencer[] = {"rhs_acc_dtk"};
	primaryWeapon[] = {"rhs_weap_m70ab2"};
    sidearmWeapon[] = {};
    magazines[] =
    {
		LIST_4("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_30Rnd_762x39mm_tracer"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
	linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
	backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhssaf_uniform_heli_pilot"};
    vest[] = {"rhs_vydra_3m"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhssaf_helmet_hgu56p"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("SmokeShellGreen")
	};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhssaf_uniform_heli_pilot"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhssaf_helmet_hgu56p"};
    goggles[] = {};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("SmokeShellGreen")
	};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhssaf_uniform_heli_pilot"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
	sidearmWeapon[] = {"rhs_weap_makarov_pmm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_12_57N181S")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
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
        LIST_3("rhs_mine_pmn2_mag"),
        LIST_3("rhs_mine_tm62m_mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"rhs_sidor"};
    linkedItems[] += {"O_UavTerminal"};
};
