// ISO-Designer ISO 11783   Version 5.5.0.4333 Jetter AG
// Do not change!

#include "MyProject1.iop.h"
#include "MyProject1.c.h"

#define WORD(w)  (unsigned char)w, (unsigned char)(w >> 8)
#define LONG(l)  (unsigned char)l, \
					(unsigned char)((unsigned long)l >> 8), \
					(unsigned char)((unsigned long)l >> 16), \
					(unsigned char)((unsigned long)l >> 24)
#define ID(id)           WORD(id)
#define REF(id)          WORD(id)
#define XYREF(id, x, y)  WORD(id), WORD(x), WORD(y)
#define MACRO(ev, id)    ev, id
#define COLOR(c)         c

const unsigned char ISO_OP_MEMORY_CLASS isoOP_MyProject1[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR(187), 1, ID(DataMask_Home), 1, 0, 2,
		XYREF(OutputString_Fasszaehler, 0, 20),
		'e', 'n',
		'd', 'e',
	ID(DataMask_Home), TYPEID_DATAMASK, COLOR(230), ID(SoftKeyMask_Home), 13, 0, 
		XYREF(Button_PlusPlus, 310, 380),
		XYREF(Container_Gesamtzaehler, 10, 10),
		XYREF(Container_Tageszaehler, 10, 98),
		XYREF(Meter_Gesamtzaehler, 10, 240),
		XYREF(Meter_Tageszaehler, 10, 240),
		XYREF(LinearBargraph_Gesamtzaehler, 310, 180),
		XYREF(LinearBargraph_Tageszaehler, 380, 180),
		XYREF(Button_minus, 11, 171),
		XYREF(InputNumber_Tagesziel, 28, 423),
		XYREF(InputNumber_Gesamtziel, 227, 415),
		XYREF(Container_tagesz_err, 145, 170),
		XYREF(ObjectPointer_G_Ziel, 264, 244),
		XYREF(OutputString_G_erreicht, 266, 517),
	ID(Container_Gesamtzaehler), TYPEID_CONTAINER, WORD(460), WORD(60), 0, 3, 0, 
		XYREF(OutputString_Gesamtzaehler, 0, 0),
		XYREF(OutputNumber_Gesamtzaehler, 210, 0),
		XYREF(Button_Reset_Gesamtzaehler, 330, 0),
	ID(Container_Tageszaehler), TYPEID_CONTAINER, WORD(460), WORD(60), 0, 3, 0, 
		XYREF(OutputNumber_Tageszaehler, 210, 0),
		XYREF(OutputString_Tageszaehler, 0, 0),
		XYREF(Button_Reset_Tageszaehler, 330, 0),
	ID(Container_tagesz_err), TYPEID_CONTAINER, WORD(113), WORD(49), 1, 1, 0, 
		XYREF(OutputString_T_erreicht, 0, 0),
	ID(SoftKeyMask_Home), TYPEID_SKEYMASK, COLOR(230), 6, 0, 
		REF(SoftKey_Reset_Gesamtzaehler),
		REF(SoftKey_Reset_Tageszaehler),
		REF(SoftKey_Minus),
		REF(ObjectPointer_Null2),
		REF(ObjectPointer_Null3),
		REF(SoftKey_PlusPlus),
	ID(SoftKey_PlusPlus), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_PlusPlus, 0, 10),
	ID(SoftKey_Reset_Gesamtzaehler), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_Reset_Gesamtzaehler, 0, 20),
	ID(SoftKey_Reset_Tageszaehler), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_Reset_Tageszaehler, 0, 20),
	ID(SoftKey_Minus), TYPEID_SOFTKEY, COLOR_OLIVE, 1, 1, 0, 
		XYREF(OutputString_11007, 0, 15),
	ID(Button_minus), TYPEID_BUTTON, WORD(123), WORD(34), 221, 179, 1, 0, 1, 0, 
		XYREF(OutputString_minus, -5, 2),
	ID(Button_Reset_Gesamtzaehler), TYPEID_BUTTON, WORD(130), WORD(60), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_Reset_Gesamtzaehler, 20, 10),
	ID(Button_Reset_Tageszaehler), TYPEID_BUTTON, WORD(130), WORD(60), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_Reset_Tageszaehler, 10, 10),
	ID(Button_PlusPlus), TYPEID_BUTTON, WORD(154), WORD(88), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_PlusPlus, 30, 20),
	ID(InputNumber_Tagesziel), TYPEID_INNUM, WORD(167), WORD(42), COLOR_LIME, ID(FontAttributes_Default), 0, 
		ID(NumberVariable_Tagesziel), LONG(123UL), LONG(0UL), LONG(65535UL), LONG(0L), FLOAT_1, 0, 0, 2, 1, 0, 
	ID(InputNumber_Gesamtziel), TYPEID_INNUM, WORD(77), WORD(50), COLOR_RED, ID(FontAttributes_Default), 0, 
		ID(NumberVariable_Gesamtziel), LONG(123UL), LONG(0UL), LONG(65535UL), LONG(0L), FLOAT_1, 0, 0, 2, 1, 0, 
	ID(OutputString_PlusPlus), TYPEID_OUTSTR, WORD(80), WORD(44), COLOR_WHITE, ID(FontAttributes_Default), 1,
		ID(ID_NULL), 1, WORD(4), '+', '+', ' ', ' ', 0,
	ID(OutputString_Fasszaehler), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 3,
		ID(ID_NULL), 1, WORD(12), 'F', 'a', 's', 's', '\r', '\n',
		'Z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Reset_Gesamtzaehler), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 3,
		ID(ID_NULL), 1, WORD(13), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'G', 'e', 's', 'a', 'm', 't', 0,
	ID(OutputString_Gesamtzaehler), TYPEID_OUTSTR, WORD(200), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(ID_NULL), 0, WORD(12), 'G', 'e', 's', 'a', 'm', 't', 'z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Tageszaehler), TYPEID_OUTSTR, WORD(200), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(ID_NULL), 0, WORD(11), 'T', 'a', 'g', 'e', 's', 'z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Reset_Tageszaehler), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 3,
		ID(ID_NULL), 1, WORD(12), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'T', 'a', 'g', 'e', 's', 0,
	ID(OutputString_minus), TYPEID_OUTSTR, WORD(126), WORD(26), COLOR(137), ID(FontAttributes_23000), 1,
		ID(ID_NULL), 1, WORD(4), '-', '-', ' ', ' ', 0,
	ID(OutputString_11007), TYPEID_OUTSTR, WORD(80), WORD(80), COLOR_WHITE, ID(FontAttributes_Default), 3,
		ID(ID_NULL), 1, WORD(12), 'M', 'i', 'n', 'u', 's', '\r', '\n',
		'M', 'i', 'n', 'u', 's', 0,
	ID(OutputString_T_erreicht), TYPEID_OUTSTR, WORD(112), WORD(48), COLOR(164), ID(FontAttributes_lila), 2,
		ID(ID_NULL), 5, WORD(21), 'T', 'a', 'g', 'e', 's', 'z', 'i', 'e', 'l', ' ', 'e', 'r', 'r', 'e', 'i', 'c', 'h', 't', '!', '!', '!', 0,
	ID(OutputString_G_erreicht), TYPEID_OUTSTR, WORD(234), WORD(69), COLOR_CYAN, ID(FontAttributes_Default), 0,
		ID(ID_NULL), 5, WORD(22), 'G', 'e', 's', 'a', 'm', 't', 'z', 'i', 'e', 'l', ' ', 'e', 'r', 'r', 'e', 'i', 'c', 'h', 't', '!', '!', '!', 0,
	ID(OutputNumber_Tageszaehler), TYPEID_OUTNUM, WORD(110), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(NumberVariable_Tageszaehler), LONG(0UL), LONG(0L), FLOAT_1, 0, 0, 2, 0,
	ID(OutputNumber_Gesamtzaehler), TYPEID_OUTNUM, WORD(110), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 0,
		ID(NumberVariable_Gesamtzaehler), LONG(0UL), LONG(0L), FLOAT_1, 0, 0, 2, 0,
	ID(Meter_Gesamtzaehler), TYPEID_OUTMETER, WORD(220), COLOR_BLACK, COLOR_BLACK, COLOR_BLACK, 13, 11, 165, 105, 
		WORD(0), WORD(100), ID(NumberVariable_Gesamtzaehler), WORD(0), 0, 
	ID(Meter_Tageszaehler), TYPEID_OUTMETER, WORD(220), COLOR_BLACK, COLOR_BLACK, COLOR_BLACK, 13, 11, 165, 105, 
		WORD(0), WORD(100), ID(NumberVariable_Tageszaehler), WORD(0), 0, 
	ID(LinearBargraph_Gesamtzaehler), TYPEID_OUTLINBAR, WORD(60), WORD(180), COLOR_BLACK, COLOR_RED, 39, 11, 
		WORD(0), WORD(100), ID(NumberVariable_Gesamtzaehler), WORD(0), ID(NumberVariable_Gesamtziel), WORD(0), 0, 
	ID(LinearBargraph_Tageszaehler), TYPEID_OUTLINBAR, WORD(60), WORD(180), COLOR_BLACK, COLOR_RED, 39, 11, 
		WORD(0), WORD(100), ID(NumberVariable_Tageszaehler), WORD(0), ID(NumberVariable_Tagesziel), WORD(0), 0, 
	ID(NumberVariable_Tageszaehler), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Gesamtzaehler), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Tagesziel), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Gesamtziel), TYPEID_VARNUM, LONG(0UL), 
	ID(FontAttributes_23000), TYPEID_FONTATTR, COLOR_BLACK, 5, 0, 0, 0, 
	ID(FontAttributes_Default), TYPEID_FONTATTR, COLOR_BLACK, 4, 0, 0, 0, 
	ID(FontAttributes_Button), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(FontAttributes_lila), TYPEID_FONTATTR, COLOR_BLACK, 2, 0, 0, 0, 
	ID(ObjectPointer_Null2), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(ObjectPointer_Null3), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(ObjectPointer_G_Ziel), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(AuxFunction2_PlusPlus), TYPEID_AUXFUNC2, COLOR_WHITE, 130, 1, 
		XYREF(OutputString_PlusPlus, -22, 0),
	ID(ExternalObjectDefinition_38000), TYPEID_EXTOBJDEF, 1, , 0,
}; // isoOP_MyProject1
