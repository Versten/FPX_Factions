// TODO: scope=1 all of the entries here
class FPX_B_CAF_arifle_C7A2 : rhs_weap_m16a4_carryhandle
{
  scope = 1;
  class LinkedItems { //key: LinkedItemsOptic(CowsSlot), LinkedItemsUnder(UnderBarrelSlot), LinkedItemsAcc(PointerSlot), -->BarrelSlot???<--
    class LinkedItemsOptic {
      item = "RH_c79";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc {
      item = "RH_peq15b";
      slot = "PointerSlot";
    };
  };
  displayName = "C7A2";
};
class FPX_B_CAF_arifle_C8A3 : rhs_weap_m4a1_carryhandle
{
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      item = "CUP_optic_HoloBlack";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc {
      item = "RH_peq15b";
      slot = "PointerSlot";
    };
  };
  displayName = "C8A3";
};
class FPX_B_CAF_arifle_C9LMG : CUP_lmg_m249_pip1
{
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      item = "RH_c79";
      slot = "CowsSlot";
    };
  };
  displayName = "C9 LMG";
};
class FPX_B_CAF_arifle_AR10T : RH_Mk11 {
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      item = "optic_DMS";
      slot = "CowsSlot";
    };
    class LinkedItemsUnder { 
      item = "RH_HBLM";
      slot = "UnderBarrelSlot";
    };
  };
  displayName = "AR-10T MRS/SASW";
};
class FPX_B_CAF_V_PlateCarrier1_TW : V_PlateCarrier1_rgr { // TODO
  scope = 2;
  displayName = "Carrier Lite (CADPAT TW)";
  author = "Killoch, FPX Mod Team";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\V_TW.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\V_TW.paa"};
  };
};
class FPX_B_CAF_V_PlateCarrier2_TW : V_PlateCarrier2_rgr { // TODO
  scope = 2;
  displayName = "Carrier Rig (CADPAT TW)";
  author = "Killoch, FPX Mod Team";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\V_TW.paa"};
  class ItemInfo : ItemInfo {
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\V_TW.paa"};
  };
};
class FPX_B_CAF_H_Helmet_TW : H_HelmetIA {
  scope = 2;
  displayName = "CG634 (CADPAT TW)";
  author = "Killoch, FPX Mod Team";
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\H_TW.paa"};
};
class FPX_B_CAF_H_Helmet_AR : H_HelmetIA {
  scope = 2;
  displayName = "CG634 (CADPAT AR)";
  author = "Killoch, FPX Mod Team";
  hiddenSelectionsTextures[] = {"FPX_Factions_B_DTA\FPX_B_CAF\Data\H_AR.paa"};
};
class FPX_B_CAF_U_CombatUniform_TW : Uniform_Base {
  scope = 2;
  displayName = "Combat Fatigues (CADPAT TW)";
  author = "Killoch, FPX Mod Team";
  picture = "FPX_Factions_B_DTA\FPX_B_CAF\Data\U_TW_Ico.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
  /*hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {""};*/
  class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "FPX_B_CAF_Soldier";
		containerClass = "Supply20";
		mass = 5;
	};
};
class FPX_B_CAF_U_CombatUniform_Tee_TW : Uniform_Base {
  scope = 2;
  displayName = "Combat Fatigues (CADPAT TW, Tee)";
  author = "Killoch, FPX Mod Team";
  picture = "FPX_Factions_B_DTA\FPX_B_CAF\Data\U_TW_Ico.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
  /*hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {""};*/
  class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "FPX_B_CAF_Soldier_AR";
		containerClass = "Supply20";
		mass = 5;
	};
};
