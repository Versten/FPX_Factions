// CfgVehicles for FPX_B_CAF
class FPX_B_FACTION_Soldier : B_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_B_FACTION";
  displayName = "Rifleman";
  uniformClass = "FPX_U_B_FACTION";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_FACTION\Data\TEXTURE.paa"};
  hiddenSelectionsMaterials[] = {"\FPX_Factions_B_DTA\Data\crye_G3.rvmat"}; // Remove this if the uniform isn't based off of Combat Fatigues (MTP)
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
