class Indep {
	class FPX_Factions_I_BEC_Units {
		name = "Black Element (BEC)";
			class Infantry {
				name = "Mercenaries";
				class FPX_Factions_I_BEC_Squad {
					name = "Light Squad";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					}; 
					class Unit4 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_M";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class FPX_Factions_I_BEC_Team {
					name = "Fire Team";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
				};
				class FPX_Factions_I_BEC_Machinegun {
					name = "MG Team";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class FPX_Factions_I_BEC_Marksman {
					name = "Marksman Team";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_M";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_M";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
			class SpecialForces
			{
				name = "Civil Security Teams";
				class FPX_Factions_I_BEC_Security {
					name = "Security Attachment";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Security";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Security";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Security";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class FPX_Factions_I_BEC_Functionary {
					name = "Functionary Guards";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Func";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Func";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Func";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			/*class Motorized
			{
				name = "MEC Motorized Infantry (Shocktroops)";
				class MEC_Riflesquad
				{
					name = "Rifle Squad (Motorized)";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Vehicle_BTR90_d";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class MEC_WeaponsSquad
				{
					name = "Weapons Team (Motorized)";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Vehicle_BTR90_d";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
			class Support
			{
				name = "MEC Company Attachments (Shocktroops)";
				class MEC_DoctorTeam
				{
					name = "Doctor Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MEC_MMGTeam
				{
					name = "MMG Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class MEC_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MEC_MATTeam
				{
					name = "MAT Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class MEC_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};*/
		};
	};