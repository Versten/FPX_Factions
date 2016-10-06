/*class FP_Factions_CUP_CDF_str_svd_pso : str_svd
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_str_pso1";
				slot = "CowsSlot";
			};
		};
	};*/
class FPX_B_CAF_C7A2 : rhs_weap_m16a4_carryhandle
{
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      item = "RH_c79";
      slot = "CowsSlot";
    };
    // Link a side item to it as well, PEQ15 RH_peq15b
  };
  displayName = "C7A2";
};
class FPX_B_CAF_C8A3 : rhs_weap_m4a1_carryhandle
{
  scope = 1;
  class LinkedItems {
    class LinkedItemsOptic {
      item = "CUP_optic_HoloBlack";
      slot = "CowsSlot";
    };
    // Link a side item to it as well, PEQ15 RH_peq15b
  };
  displayName = "C8A3";
};
class FPX_U_B_CAF : Uniform_Base {
  scope = 2;
  displayName = "Combat Fatigues (CADPAT TW)";
  author = "Killoch, FPX Mod Team";
  picture = ""; // default uniform image
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
  /*hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ARD_Crye\tx\uwear_Blk_co.paa"};*/
  class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "FPX_B_CAF_Soldier";
		containerClass = "Supply20";
		mass = 5;
	};
};
