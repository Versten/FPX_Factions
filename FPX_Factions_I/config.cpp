class CfgPatches
{
  class FPX_Factions_I {
    name = "FPX Factions - INDFOR";
    units[] = {
      #include "FPX_Factions_I_BEC\CfgPatches_Units.hpp"
    };
    weapons[] = {};
    requiredAddons[] = {
      "A3_Characters_F",
      "A3_Weapons_F",
      "FPX_Factions_I_DTA"
    };
    authors[] = {"Versten", "Croguy"};
  };
};
class CfgFactionClasses
{
  class FPX_I_BEC {
    displayName = "Black Element (BEC)";
  };
};
class CfgEditorSubcategories {
  #include "FPX_Factions_I_BEC\CfgEditorSubcategories.hpp"
};
class CfgVehicles
{
  class I_Soldier_F;
	class I_Soldier_02_F;
	class I_Soldier_03_F;

  #include "FPX_Factions_I_BEC\CfgVehicles.hpp"
};
class CfgWeapons
{
  class Default;
	class ItemCore: Default{};
  class VestItem;
  class UniformItem: ItemCore {
		class ItemInfo;
	};
  class Uniform_Base: ItemCore {
		class ItemInfo;
	};
  class Vest_NoCamo_Base;
  class V_PlateCarrier1_rgr : Vest_NoCamo_Base {
    class ItemInfo;
  };
  class V_PlateCarrier2_rgr : Vest_NoCamo_Base {
    class ItemInfo;
  };
  class H_HelmetIA;
  class rhs_weap_m16a4_carryhandle;
  class rhs_weap_m4a1_carryhandle;
  class CUP_lmg_m249_pip1;

  #include "FPX_Factions_I_BEC\CfgWeapons.hpp"
};
