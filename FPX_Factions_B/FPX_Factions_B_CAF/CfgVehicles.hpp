// CfgVehicles for FPX_B_CAF
class FPX_B_CAF_Soldier : B_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_B_CAF";
  displayName = "Rifleman";
  uniformClass = "FPX_U_B_CAF";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\TW.paa"};
  hiddenSelectionsMaterials[] = {"\FPX_Factions_B_DTA\Data\crye_G3.rvmat"};
  weapons[] = {"FPX_B_CAF_C7A2","RH_p226"};
  respawnWeapons[] = {"FPX_B_CAF_C7A2","RH_p226"};
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
    "RH_15Rnd_9x19_SIG"
  };
  linkedItems[] = {"H_HelmetB", "V_PlateCarrier1_rgr_noflag_F"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"H_HelmetB", "V_PlateCarrier1_rgr_noflag_F"};
};
