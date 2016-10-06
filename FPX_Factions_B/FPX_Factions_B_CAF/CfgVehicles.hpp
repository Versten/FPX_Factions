// CfgVehicles for FPX_B_CAF
class FPX_B_CAF_Soldier : B_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_B_CAF";
  editorSubcategory = "FPX_EDSubCat_B_CAF_Men_W";
  displayName = "Rifleman";
  uniformClass = "FPX_B_CAF_U_CombatUniform_TW";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
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
  class SpeechVariants {
		class Default {
			speechSingular[] = {"veh_infantry_AT_s"};
			speechPlural[] = {"veh_infantry_AT_p"};
		};
	};
  textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
  nameSound = "veh_infantry_AT_s";
  icon = "iconManAT";
  threat[] = {1,0.7,0.3};
  cost = 180000;
  weapons[] = {"FPX_B_CAF_arifle_C7A2","RH_p226", "Put", "Throw", "CUP_launch_RPG18"};
  backpack = "B_AssaultPack_rgr";
  respawnWeapons[] = {"FPX_B_CAF_arifle_C7A2","RH_p226", "Put", "Throw", "CUP_launch_RPG18"};
};
class FPX_B_CAF_Soldier_AR : B_Soldier_02_F  {
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\U_TW.paa"};
  hiddenSelectionsMaterials[] = {"\FPX_Factions_B_DTA\Data\crye_G3.rvmat"};
  editorSubcategory = "FPX_EDSubCat_B_CAF_Men_W";
  faction = "FPX_B_CAF";
  displayName = "Autorifleman";
  textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
	textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
	nameSound = "veh_infantry_MG_s";
  uniformClass = "FPX_B_CAF_U_CombatUniform_Tee_TW";
  cost = 95000;
	threat[] = {1,0.1,0.3};
	icon = "iconManMG";
  scope = 2;
  weapons[] = {"FPX_B_CAF_arifle_C9LMG","RH_p226", "Put", "Throw"};
  respawnWeapons[] = {"FPX_B_CAF_arifle_C9LMG","RH_p226", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_200rnd_556x45_M_SAW",
    "hlc_200rnd_556x45_M_SAW",
    "hlc_200rnd_556x45_M_SAW",
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
    "hlc_200rnd_556x45_M_SAW",
    "hlc_200rnd_556x45_M_SAW",
    "hlc_200rnd_556x45_M_SAW",
    "RH_15Rnd_9x19_SIG",
    "RH_15Rnd_9x19_SIG",
    "SmokeShell",
    "SmokeShell",
    "HandGrenade",
    "HandGrenade",
    "Chemlight_green",
    "Chemlight_green",
    "B_IR_Grenade"
  };
  linkedItems[] = {"FPX_B_CAF_H_Helmet_TW", "FPX_B_CAF_V_PlateCarrier2_TW", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"FPX_B_CAF_H_Helmet_TW", "FPX_B_CAF_V_PlateCarrier2_TW", "ItemMap", "ItemCompass", "ItemRadio"};
};

class FPX_B_CAF_Soldier_M : FPX_B_CAF_Soldier {
  displayName="Marksman";
  weapons[] = {
    "FPX_B_CAF_arifle_RH_Mk11",
    "RH_p226",
    "Put",
    "Throw"
  };
  magazines[] = {
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "RH_15Rnd_9x19_SIG",
    "RH_15Rnd_9x19_SIG",
    "Put",
    "Throw",
    "HandGrenade",
    "SmokeShell"
  };
  respawnWeapons[] = {
    "FPX_B_CAF_arifle_RH_Mk11",
    "RH_p226",
    "Put",
    "Throw"
  };
  respawnMagazines[] = {
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "20Rnd_762x51_Mag",
    "RH_15Rnd_9x19_SIG",
    "RH_15Rnd_9x19_SIG",
    "Put",
    "Throw",
    "HandGrenade",
    "SmokeShell"
  };
  linkedItems[] = {"FPX_B_CAF_H_Booniehat_TW", "FPX_B_CAF_V_PlateCarrier1_TW", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"FPX_B_CAF_H_Booniehat_TW", "FPX_B_CAF_V_PlateCarrier1_TW", "ItemMap", "ItemCompass", "ItemRadio"};
};
