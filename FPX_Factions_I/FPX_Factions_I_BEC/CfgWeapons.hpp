// TODO: scope=1 all of the entries here
class FPX_I_BEC_arifle_Cyrus : srifle_DMR_05_blk_F
{
  scope = 1;
  class LinkedItems { //key: LinkedItemsOptic(CowsSlot), LinkedItemsUnder(UnderBarrelSlot), LinkedItemsAcc(PointerSlot), -->BarrelSlot???<--
    class LinkedItemsOptic {
      item = "optic_DMS";
      slot = "CowsSlot";
    };
    class LinkedItemsUnder {
      item = "RH_HBLM";
      slot = "UnderBarrelSlot";
    };
  };
  displayName = "Cyrus (Black)";
};