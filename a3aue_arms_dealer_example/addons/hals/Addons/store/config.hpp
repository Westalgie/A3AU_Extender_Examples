/*
	Macro: ERROR_WITH_TITLE()

	Parameters:
	0: CLASSNAME - Classname of item
	1: PRICE - Default item price
	2: STOCK - Default item stock
__________________________________________________________________*/
#define ITEM(CLASSNAME, PRICE, STOCK)\
	class CLASSNAME {\
		price = PRICE;\
		stock = STOCK;\
	};

#define MAGAZINE_STOCK 200
#define LAUNCHER_STOCK 15
#define PISTOL_STOCK 50
#define RIFLE_STOCK 20
#define MZ_STOCK 50
#define NN_STOCK 50
#define PN_STOCK 25
#define MISC_STOCK 50

class cfgHALsStore 
{
	class categories 
	{
		#include "config\rhs.hpp"
	};

	class stores 
	{
		class rhs 
		{
			displayName = $STR_ARMS_DEALER_STORE;
			categories[] = {
				"handgunsRhs", 
				"launchersRhs", 
				"riflesRhs", 
				"sniperRiflesRhs", 
				"specialWeaponsRhs",
				"mgRhs", 
				"smgRhs", 
				"launcherMagazinesRhs", 
				"magazinesRhs", 
				"opticsRhs", 
				"muzzlesRhs", 
				"underbarrelRhs", 
				"pointersRhs", 
				"navigationRhs", 
				"miscRhs"
			};
		};
	};
};
