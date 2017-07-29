// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

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

// Also not used
UENUM(BlueprintType)
enum class EItemTypes : uint8
{
	Consumable,
	Effectless,
	Electronics,
	Equippable,
	Headgear,
	Meta,
	Readable,
	Wearable
};

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