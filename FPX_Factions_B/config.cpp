class CfgPatches
{
  class FPX_Factions_B {
    name = "FPX Factions - BLUFOR";
    units[] = {
      #include "FPX_Factions_B_CAF\CfgPatches_Units.hpp"
    };
    weapons[] = {};
    requiredAddons[] = {
      "A3_Characters_F",
      "A3_Weapons_F",
      "FPX_Factions_B_DTA"
    };
    authors[] = {"Versten", "Croguy"};
  };
};
class CfgFactionClasses
{
  class FPX_B_CAF {
    displayName = "CAF";
  };
};
class CfgEditorSubcategories {
  #include "FPX_Factions_B_CAF\CfgEditorSubcategories.hpp"
};
class CfgVehicles
{
  class CAManBase;
  class B_Soldier_base_F : CAManBase {
    class Eventhandlers;
  };
  class B_Soldier_F : B_Soldier_base_F {};
	class B_Soldier_02_F : B_Soldier_base_F {};
	class B_Soldier_03_F : B_Soldier_base_F {};

  #include "FPX_Factions_B_CAF\CfgVehicles.hpp"
};
class CfgWeapons
{
  // Stock A3 declarations
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
  // Mod-based declarations
  // RHS
  class rhs_weap_m16a4_carryhandle;
  class rhs_weap_m4a1_carryhandle;
  // CUP
  class CUP_lmg_m249_pip1;
  // FP Mod Pack
  class RH_Mk11;

  #include "FPX_Factions_B_CAF\CfgWeapons.hpp"
};
