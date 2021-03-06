

#pragma once

#include "CoreMinimal.h"
#include "Enumerations.generated.h"

UENUM(BlueprintType)
enum class ERoomZones : uint8
{
	Special,
	Light,
	Heavy,
	Entrance
};

UENUM(BlueprintType)
enum class ERoomShapes : uint8
{
	Special,
	Endcap,
	Hallway,
	Corner,
	Threeway,
	Fourway
};

UENUM(BlueprintType)
enum class ERooms : uint8
{
	NoRoom,
	LCZRoom,
	HCZRoom,
	EZRoom,

	lockroom,
	room173,
	start,
	room178,
	room1123,
	room1archive,
	room2storage,
	room3storage,
	room2tesla_lcz,
	endroom,
	room012,
	room205,
	room2,
	room2_3,
	room2_2,
	room2C,
	room2c2,
	room2closets,
	room2elevator,
	room2doors,
	room2scps,
	room860,
	room2testroom2,
	room3,
	room3_2,
	room4,
	roompj,
	room914,
	room2gw,
	room2gw_b,
	room1162,
	room2scps2,
	room2sl,
	room2_4,
	room2_5,
	lockroom3,
	room4_2,
	checkpoint1,
	room008,
	coffin,
	endroom2,
	testroom,
	tunnel,
	tunnel2,
	room035,
	room049,
	room106,
	room2Ctunnel,
	room2nuke,
	room2pipes,
	room2pit,
	room3pit,
	room2servers,
	room2shaft,
	room2tunnel,
	room2tesla_hcz,
	room3tunnel,
	room4tunnels,
	room513,
	room966,
	room3z2,
	room4pit,
	checkpoint2,
	exit1,
	gatea,
	gateaentrance,
	medibay,
	lockroom2,
	room079,
	room2z3,
	room2cafeteria,
	room2Cz3,
	room2ccont,
	room2offices,
	room2offices2,
	room2offices3,
	room2poffices,
	room2poffices2,
	room2sroom,
	room2toilets,
	room2tesla,
	room3servers,
	room3servers2,
	room3z3,
	room4z3,
	room1lifts,
	room3gw,
	room2servers2,
	room3offices,
	room2z3_2,
	room2offices4,
	pocketdimension,
	dimension1499
};

// used by the old algorithm
UENUM(BlueprintType)
enum class ERoomType : uint8
{
	None,
	GenericEndcap,
	GenericHallway,
	GenericCorner,
	GenericThreeway,
	GenericFourway,
	ZoneTransitionLight,
	ZoneTransitionEntrance,
	Room173,
	End178,
	End205,
	End372,
	End914,
	EndArchives,
	Hall012,
	Hall970,
	Hall1123,
	Hall1499,
	HallStoreroom,
	HallTesting,
	HallSurveillance,
	HallSCPs,
	Corner1162,
	TW939
};

UENUM(BlueprintType)
enum class EDocuments : uint8
{
	doc_arce,
	doc008,
	doc012,
	doc035,
	doc035ad,
	doc038,
	doc049,
	doc079,
	doc093rm,
	doc096,
	doc106,
	doc106_2,
	doc109,
	doc173,
	doc330,
	doc372,
	doc500,
	doc513,
	doc523,
	doc682,
	doc714,
	doc860,
	doc8601,
	doc895,
	doc914,
	doc939,
	doc966,
	doc970,
	doc1048,
	doc1048a,
	doc1123,
	doc1162,
	doc1499,
	docAC,
	docdan,
	docGonzales,
	docIR106,
	docLl,
	docL2,
	docL3,
	docL4,
	docL5,
	docL6,
	docMSP,
	docMTF,
	docNDP,
	docOBJC,
	docORI,
	docRAND1,
	docRAND2,
	docRAND3,
	docRP,
	docSC,
	docStrange,
	f4,
	f5,
	f6,
	leaflet,
	bn,
	dh,
	sn
};

//// Also not used
//UENUM(BlueprintType)
//enum class EItemTypes : uint8
//{
//	Consumable,
//	Effectless,
//	Electronics,
//	Equippable,
//	Headgear,
//	Meta,
//	Readable,
//	Wearable
//};

// not being used right now
UENUM(BlueprintType)
enum class EItems : uint8
{
	None,
	Decal,
	Script,
	Flashlight,
	SuperFlashLight,
	GasMask,
	SuperGasMask,
	HeavyGasMask,
	Keycard0,
	Keycardl,
	Keycard2,
	Keycard3,
	Keycard4,
	Keycard5,
	Keycard6,
	KeycardS,
	FirstAidKit,
	SmallFirstAidKit,
	BlueFirstAidKit,
	StrangeBottle,
	Syringe,
	FineSyringe,
	VeryFineSyringe,
	BallisticVest,
	HeavyBallisticVest,
	BulkyBallisticVest,
	SNav300,
	SNavRed,
	SNav310,
	SNavUltimate,
	HazmatSuit,
	HeavyHazmatSuit,
	MysteryHazmatSuit,
	Battery9V,
	Battery18V,
	StrangeBattery,
	ReVisionEyedrops,
	RedVisionEyedrops,
	FineEyedrops,
	VeryFineEyedrops,
	WhiteSeveredHand,
	BlackSeveredHand,
	Clipboard,
	NightVisionGoggles,
	FineNVG,
	VeryFineNVG,
	SCP148Panel,
	SCP148Ingot,
	SCP178Specs,
	SCP420Blunt,
	SCP500Pill,
	SCP513Bell,
	SCP523FakeCard,
	SCP714Ring,
	SCP860Key,
	SCP1025Book,
	SCP1162Coin,
	SCP1162Ticket,
	SCP1162Key,
	SCP1162Badge,
	SCP1499Mask,
	SCP1499MaskFine,
	Cup,
	Joint,
	SmellyJoint,
	Cigarette,
	MasterCard,
	PlayingCard,
	Origami,
	EmilyBadge,
	Radio,
	FineRadio,
	VeryFineRadio,
	Radio18V,
	Electronics,
	RedCandy,
	BlueCandy,
	YellowCandy,
	SuperRedCandy,
	SuperBlueCandy,
	SuperYellowCandy
};
