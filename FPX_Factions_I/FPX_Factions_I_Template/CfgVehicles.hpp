// CfgVehicles for FPX_I_NEC
class FPX_I_FACTION_Soldier : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_FACTION";
  displayName = "Rifleman";
  uniformClass = "FPX_U_I_FACTION";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"FPX_Factions_I_DTA\FPX_I_FACTION\Data\TEXTURE.paa"};
  //hiddenSelectionsMaterials[] = {"\FPX_Factions_B_DTA\Data\crye_G3.rvmat"}; // Remove this if the uniform isn't based off of Combat Fatigues (MTP)
  weapons[] = {"WEAPON","SWEAPON"};
  respawnWeapons[] = {"WEAPON","SWEAPON"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "AMMO",
    "AMMO",
    "AMMO",
    "AMMO",
    "AMMO",
    "SAMMO",
    "SAMMO"
  };
  respawnMagazines[] = {
    "AMMO",
    "AMMO",
    "AMMO",
    "AMMO",
    "AMMO",
    "SAMMO",
    "SAMMO"
  };
  linkedItems[] = {"HELMET", "VEST"};
  respawnLinkedItems[] = {"HELMET", "VEST"};
};
