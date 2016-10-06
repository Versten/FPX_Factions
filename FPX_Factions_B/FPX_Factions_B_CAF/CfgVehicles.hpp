// CfgVehicles for FPX_B_CAF
class FPX_B_CAF_Soldier : B_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_B_CAF";
  editorSubcategory = "FPX_EDSubCat_B_CAF_Men_W";
  displayName = "Rifleman";
  uniformClass = "FPX_B_CAF_U_CombatUniform_TW";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\U_TW.paa"};
  hiddenSelectionsMaterials[] = {"\FPX_Factions_B_DTA\Data\crye_G3.rvmat"};
  weapons[] = {"FPX_B_CAF_arifle_C7A2","RH_p226", "Put", "Throw"};
  respawnWeapons[] = {"FPX_B_CAF_arifle_C7A2","RH_p226", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "RH_15Rnd_9x19_SIG",
    "RH_15Rnd_9x19_SIG",
    "SmokeShell",
    "SmokeShell",
    "HandGrenade",
    "HandGrenade",
    "HandGrenade",
    "Chemlight_green",
    "Chemlight_green",
    "B_IR_Grenade"
  };
  respawnMagazines[] = {
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "ACE_30Rnd_556x45_Stanag_Mk262_mag",
    "RH_15Rnd_9x19_SIG",
    "RH_15Rnd_9x19_SIG",
    "SmokeShell",
    "SmokeShell",
    "HandGrenade",
    "HandGrenade",
    "HandGrenade",
    "Chemlight_green",
    "Chemlight_green",
    "B_IR_Grenade"
  };
  linkedItems[] = {"FPX_B_CAF_H_Helmet_TW", "FPX_B_CAF_V_PlateCarrier1_TW", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"FPX_B_CAF_H_Helmet_TW", "FPX_B_CAF_V_PlateCarrier1_TW", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_B_CAF_Soldier_LAT : FPX_B_CAF_Soldier {
  displayName = "Rifleman (AT)";
  weapons[] = {"FPX_B_CAF_arifle_C7A2","RH_p226", "Put", "Throw", "CUP_launch_RPG18"};
  backpack = "B_AssaultPack_rgr";
  respawnWeapons[] = {"FPX_B_CAF_arifle_C7A2","RH_p226", "Put", "Throw", "CUP_launch_RPG18"};
};
