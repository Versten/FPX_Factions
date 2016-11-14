// CfgVehicles for FPX_O
class FPX_O_FACTION_Soldier : O_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_O_FACTION";
  displayName = "Rifleman";
  uniformClass = "FPX_U_O_FACTION";
  hiddenSelections[] = {"camo"};
  //identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
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
