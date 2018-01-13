// 2018 Nerd Ralph
// based on code from OhGodADecode:
// Copyright (c) 2017 OhGodACompany - OhGodAGirl & OhGodAPet


#pragma once

#pragma pack(push, 1)

typedef struct _SEQ_RAS_TIMING
{
	uint32_t TRCDW : 5;
	uint32_t TRCDWA : 5;
	uint32_t TRCDR : 5;
	uint32_t TRCDRA : 5;
	uint32_t TRRD : 4;
	uint32_t TRC : 7;
} SEQ_RAS_TIMING;

typedef struct _SEQ_CAS_TIMING
{
	uint32_t TNOPW : 2;
	uint32_t TNOPR : 2;
	uint32_t TR2W : 5;
	uint32_t TCCDL : 3;
	uint32_t TR2R : 4;
	uint32_t TW2R : 5;
	uint32_t Pad0 : 3;
	uint32_t TCL : 5;
} SEQ_CAS_TIMING;

typedef struct _SEQ_MISC_TIMING
{
	uint32_t TRP_WRA : 7;
	uint32_t TRP_RDA : 7;
	uint32_t TRP : 6;
	uint32_t TRFC : 9;
} SEQ_MISC_TIMING;

typedef struct _SEQ_MISC_TIMING_R9
{
	uint32_t TRP_WRA : 8;
	uint32_t TRP_RDA : 7;
	uint32_t TRP : 5;
	uint32_t TRFC : 9;
} SEQ_MISC_TIMING_R9;

typedef struct _SEQ_MISC_TIMING2
{
	uint32_t PA2RDATA : 4;
	uint32_t PA2WDATA : 4;
	uint32_t TFAW : 5;
	uint32_t TREDC : 3;
	uint32_t TWEDC : 5;
	uint32_t T32AW : 4;
	uint32_t Pad0 : 3;
	uint32_t TWDATATR : 4;
} SEQ_MISC_TIMING2;

typedef struct _ARB_DRAM_TIMING
{
	uint32_t ACTRD : 8;
	uint32_t ACTWR : 8;
	uint32_t RASMACTRD : 8;
	uint32_t RASMACTWR : 8;
} ARB_DRAM_TIMING;

typedef struct _ARB_DRAM_TIMING2
{
	uint32_t RAS2RAS : 8;
	uint32_t RP : 8;
	uint32_t WRPLUSRP : 8;
	uint32_t BUS_TURN : 8;
} ARB_DRAM_TIMING2;

#pragma pack(pop)

