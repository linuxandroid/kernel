/*
 * es705-veq-params.h  --  Audience eS705 ALSA SoC Audio driver
 *
 * Copyright 2013 Audience, Inc.
 *
 * Author: Jeremy Pi <jpi@audience.com>
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ES705_VEQ_PARAMS_H
#define _ES705_VEQ_PARAMS_H

#if defined(CONFIG_MACH_KLTE_VZW) || defined(CONFIG_MACH_KLTE_USC)
/* index 0 means max. volume level */
static u32 veq_max_gains_nb[] = {
	0x90180004,
	0x90180004,
	0x90180006,
	0x90180008,
	0x90180006,
	0x90180004,
	0x90180004,
	0x90180004,
};

/* index 0 means max. volume level */
static u32 veq_noise_estimate_adjs_nb[] = {
	0x9018001e,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
};

static u32 veq_max_gains_wb[] = {
	0x90180004,
	0x90180004,
	0x90180006,
	0x90180008,
	0x90180006,
	0x90180004,
	0x90180004,
	0x90180004,
};

/* index 0 means max. volume level */
static u32 veq_noise_estimate_adjs_wb[] = {
	0x9018001e,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
};

/* index 0 means max. volume level */
static u8 veq_coefficients_nb[][62] = {
	{ 
	0x11,0x04,0x01,0x00,0x02,0x00,0x00,0x00,0xfb,0xfe,0xe7,0x67,0x5e,0x59,0x5c,
	0x5a,0x5d,0x5c,0x5d,0x5d,0x5b,0x5d,0x5c,0x5e,0x66,0xdf,0xf9,0x00,0xff,0xfc,
	0xfb,0xfe,0xf8,0xeb,0xdf,0xda,0xdc,0xdb,0xdb,0xdb,0xda,0xdd,0xda,0xdc,0xdd,
	0xdc,0xdd,0xdd,0xdd,0xde,0xde,0xdd,0xdd,0xdf,0xdf,0xe0,0xde,0xec,0xd9,0x00,
	0x85,0xc0
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
};


/* index 0 means max. volume level */
static u8 veq_coefficients_wb[][74] = {
	{ 
	0x11,0x04,0x01,0x00,0x02,0x00,0x00,0x00,0xfb,0xfe,0xe7,0x67,0x5e,0x59,0x5c,
	0x5a,0x5d,0x5c,0x5d,0x5d,0x5b,0x5d,0x5c,0x5e,0x66,0xdf,0xf9,0x00,0xff,0xfc,
	0xfb,0xfe,0xf8,0xeb,0xdf,0xda,0xdc,0xdb,0xdb,0xdb,0xda,0xdd,0xda,0xdc,0xdd,
	0xdc,0xdd,0xdd,0xdd,0xde,0xde,0xdd,0xdd,0xdf,0xdf,0xe0,0xde,0xec,0xd9,0x00,
	0x85,0xc0
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},	
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
};
#elif defined(CONFIG_MACH_KLTE_ATT) || defined(CONFIG_MACH_KLTE_TMO) || defined(CONFIG_MACH_KLTE_SPR)
/* index 0 means max. volume level */
static u32 veq_max_gains_nb[] = {
	0x90180004,
	0x90180006,	
	0x90180008,
	0x90180006,
	0x90180004,
	0x90180004
};


/* index 0 means max. volume level */
static u32 veq_noise_estimate_adjs_nb[] = {
	0x9018001e,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014
};

static u32 veq_max_gains_wb[] = {
	0x90180004,
	0x90180006,	
	0x90180008,
	0x90180006,
	0x90180004,
	0x90180004
};

/* index 0 means max. volume level */
static u32 veq_noise_estimate_adjs_wb[] = {
	0x9018001e,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014
};

/* index 0 means max. volume level */
static u8 veq_coefficients_nb[][62] = {
	{ 
	0x11,0x04,0x01,0x00,0x02,0x00,0x00,0x00,0xfb,0xfe,0xe7,0x67,0x5e,0x59,0x5c,
	0x5a,0x5d,0x5c,0x5d,0x5d,0x5b,0x5d,0x5c,0x5e,0x66,0xdf,0xf9,0x00,0xff,0xfc,
	0xfb,0xfe,0xf8,0xeb,0xdf,0xda,0xdc,0xdb,0xdb,0xdb,0xda,0xdd,0xda,0xdc,0xdd,
	0xdc,0xdd,0xdd,0xdd,0xde,0xde,0xdd,0xdd,0xdf,0xdf,0xe0,0xde,0xec,0xd9,0x00,
	0x85,0xc0
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},	
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},		
};


/* index 0 means max. volume level */
static u8 veq_coefficients_wb[][74] = {
	{ 
	0x11,0x04,0x01,0x00,0x02,0x00,0x00,0x00,0xfb,0xfe,0xe7,0x67,0x5e,0x59,0x5c,
	0x5a,0x5d,0x5c,0x5d,0x5d,0x5b,0x5d,0x5c,0x5e,0x66,0xdf,0xf9,0x00,0xff,0xfc,
	0xfb,0xfe,0xf8,0xeb,0xdf,0xda,0xdc,0xdb,0xdb,0xdb,0xda,0xdd,0xda,0xdc,0xdd,
	0xdc,0xdd,0xdd,0xdd,0xde,0xde,0xdd,0xdd,0xdf,0xdf,0xe0,0xde,0xec,0xd9,0x00,
	0x85,0xc0
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},	
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
};
#else
/* index 0 means max. volume level */
static u32 veq_max_gains_nb[] = {
	0x90180003,
	0x90180005,	
	0x90180007,
	0x90180005,
	0x90180003,
	0x90180003
};


/* index 0 means max. volume level */
static u32 veq_noise_estimate_adjs_nb[] = {
	0x90180019,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014
};

static u32 veq_max_gains_wb[] = {
	0x90180003,
	0x90180005,	
	0x90180007,
	0x90180005,
	0x90180003,
	0x90180003
};

/* index 0 means max. volume level */
static u32 veq_noise_estimate_adjs_wb[] = {
	0x90180019,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014,
	0x90180014
};

/* index 0 means max. volume level */
static u8 veq_coefficients_nb[][62] = {
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},	
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x53,
	0x4F, 0x50, 0x52, 0x4F, 0x53, 0x50, 0x53, 0x51, 0x51, 0x52,
	0x51, 0x53, 0x52, 0x54, 0x52, 0x52, 0x50, 0x4E, 0x4B, 0x47,
	0x3F, 0x37, 0x2D, 0x1F, 0x13, 0x10, 0x12, 0x10, 0x12, 0x0B,
	0xFB, 0xF1, 0xE8, 0xE2, 0xDC, 0xD4, 0xCD, 0xC4, 0xBB, 0xAC,
	0x99, 0x91, 0x92, 0x94, 0x94, 0x95, 0x93, 0x9F, 0x8F, 0x00,
	0xD4, 0xAF
	},		
};


/* index 0 means max. volume level */
static u8 veq_coefficients_wb[][74] = {
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},	
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},
	{ 
	0x11, 0x04, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x27,
	0x1C, 0x1E, 0x35, 0x30, 0x1D, 0x22, 0x30, 0x25, 0x26, 0x32,
	0x24, 0x1F, 0x2D, 0x24, 0x25, 0x2D, 0x23, 0x20, 0x29, 0x1F,
	0x27, 0x1E, 0x16, 0x0A, 0x0B, 0x07, 0xFC, 0x02, 0xFA, 0xFE,
	0xFD, 0xF7, 0xF9, 0xF4, 0xEF, 0xED, 0xE8, 0xE2, 0xDB, 0xD5,
	0xCF, 0xCC, 0xCA, 0xC8, 0xC7, 0xC8, 0xC7, 0xC6, 0xC8, 0xCA,
	0xCA, 0xCA, 0xCA, 0xCA, 0xCB, 0xC7, 0xC5, 0xC7, 0xC3, 0xBF,
	0xCE, 0x00, 0xB5, 0xB2
	},		
};
#endif

#endif
