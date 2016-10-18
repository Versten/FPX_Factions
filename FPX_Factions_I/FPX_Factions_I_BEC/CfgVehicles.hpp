// CfgVehicles for FPX_I_BEC

class FPX_I_BEC_Soldier_TL : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Team Leader";
  uniformClass = "U_BG_Guerilla2_3";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"};
  weapons[] = {"hlc_rifle_auga1carb_t", "RH_g17", "Put", "Throw"};
  respawnWeapons[] = {"hlc_rifle_auga1carb_t", "RH_g17", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
	"SmokeShell",
    "SmokeShell",
    "HandGrenade",
	"B_IR_Grenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
	"SmokeShell",
    "SmokeShell",
    "HandGrenade",
	"B_IR_Grenade",
    "Chemlight_green"
  };
  linkedItems[] = {"H_Booniehat_khk_hs", "G_Shades_Black", "CUP_V_B_RRV_Officer", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"H_Booniehat_khk_hs", "G_Shades_Black", "CUP_V_B_RRV_Officer", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_G36 : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Mercenary (G36)";
  uniformClass = "FP_Uniform_BlkKhk";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"};
  weapons[] = {"hlc_rifle_G36A1", "Put", "Throw"};
  respawnWeapons[] = {"hlc_rifle_G36A1", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_AK : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Mercenary (AK-74)";
  uniformClass = "FP_Uniform_BlkKhk";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"};
  weapons[] = {"hlc_rifle_aks74_MTK", "Put", "Throw"};
  respawnWeapons[] = {"hlc_rifle_aks74_MTK", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  linkedItems[] = {"CUP_H_RUS_6B27", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"CUP_H_RUS_6B27", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_Crew : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Transporter";
  uniformClass = "U_BG_Guerrilla_6_1"; //check this later
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  //hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"};
  weapons[] = {"hgun_PDW2000_F", "Put", "Throw"};
  respawnWeapons[] = {"hgun_PDW2000_F", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "SmokeShell",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "30Rnd_9x21_Mag",
    "SmokeShell",
    "Chemlight_green"
  };
  linkedItems[] = {"CUP_H_PMC_Cap_PRR_Tan", "G_Aviator", "V_BandollierB_khk", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"CUP_H_PMC_Cap_PRR_Tan", "G_Aviator", "V_BandollierB_khk", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_Security : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Security Detail";
  uniformClass = "U_I_C_Soldier_Bandit_2_F"; //check this later
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  //hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"};
  weapons[] = {"SMG_03C_TR_khaki", "RH_g17", "Put", "Throw"};
  respawnWeapons[] = {"SMG_03C_TR_khaki", "RH_g17", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  linkedItems[] = {"H_Cap_blk", "G_Shades_Black", "LOP_V_Carrier_TAN", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"H_Cap_blk", "G_Shades_Black", "LOP_V_Carrier_TAN", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_Func : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Functionary (Armed)";
  uniformClass = "CUP_U_C_Suit_01"; //check this later
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  //hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"};
  weapons[] = {"str_oc_kipa", "Put", "Throw"};
  respawnWeapons[] = {"str_oc_kipa", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr"
  };
  respawnMagazines[] = {
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr"
  };
  linkedItems[] = {"CUP_H_FR_Headset", "G_Aviator", "CUP_V_O_TK_OfficerBelt", "ItemMap", "ItemCompass", "ItemRadio"}; // V_PlateCarrier2_rgr_noflag_F - > carrier rig
  respawnLinkedItems[] = {"CUP_H_FR_Headset", "G_Aviator", "CUP_V_O_TK_OfficerBelt", "ItemMap", "ItemCompass", "ItemRadio"};
};
/*class FPX_B_CAF_Soldier_LAT : FPX_B_CAF_Soldier {
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
};*/

/*class FPX_B_CAF_Soldier_M : FPX_B_CAF_Soldier {
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
    "FPX_B_CAF_arifle_AR10T",
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
};*/