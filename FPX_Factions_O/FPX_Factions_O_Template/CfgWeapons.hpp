class FPX_O_FACTION_arifle_TYPE : WEAPON_TO_INHERIT_FROM
{
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      item = "classname_of_optic";
      slot = "CowsSlot";
    };
	//key: LinkedItemsOptic(CowsSlot), LinkedItemsUnder(UnderBarrelSlot), LinkedItemsAcc(PointerSlot), -->BarrelSlot???<--
    // Link a side item to it as well, PEQ15 RH_peq15b
  };
  displayName = "display_name";
};
class FPX_U_I_FACTION : Uniform_Base {
  scope = 2;
  displayName = "Combat Fatigues (PATTERN)";
  author = "FPX Mod Team";
  picture = "img"; // default uniform image
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
  /*hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"hidden_selections"};*/
  class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "classname_of_unit";
		containerClass = "Supply20";
		mass = 5;
	};
};
