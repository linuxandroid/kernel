/*
 * max98504.h -- MAX98504 ALSA SoC Audio driver
 *
 * Copyright 2011-2012 Maxim Integrated Products
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
 
#ifndef _MAX98504_H
#define _MAX98504_H

#include <linux/version.h>

/*
 * MAX98504 Register Definitions
 */
#define MAX98504_REG_01_INTERRUPT_STATUS	0x01
#define MAX98504_REG_02_INTERRUPT_FLAGS	0x02
#define MAX98504_REG_03_INTERRUPT_ENABLES	0x03
#define MAX98504_REG_04_INTERRUPT_FLAG_CLEARS	0x04
#define MAX98504_REG_10_GPIO_ENABLE	0x10
#define MAX98504_REG_11_GPIO_CONFIG	0x11
#define MAX98504_REG_12_WATCHDOG_ENABLE	0x12
#define MAX98504_REG_13_WATCHDOG_CONFIG	0x13
#define MAX98504_REG_14_WATCHDOG_CLEAR	0x14
#define MAX98504_REG_15_CLOCK_MONITOR_ENABLE	0x15
#define MAX98504_REG_16_PVDD_BROWNOUT_ENABLE	0x16
#define MAX98504_REG_17_PVDD_BROWNOUT_CONFIG_1	0x17
#define MAX98504_REG_18_PVDD_BROWNOUT_CONFIG_2	0x18
#define MAX98504_REG_19_PVDD_BROWNOUT_CONFIG_3	0x19
#define MAX98504_REG_1A_PVDD_BROWNOUT_CONFIG_4	0x1a
#define MAX98504_REG_20_PCM_RX_ENABLES	0x20
#define MAX98504_REG_21_PCM_TX_ENABLES	0x21
#define MAX98504_REG_22_PCM_TX_HIZ_CONTROL	0x22
#define MAX98504_REG_23_PCM_TX_CHANNEL_SOURCES	0x23
#define MAX98504_REG_24_PCM_MODE_CONFIG	0x24
#define MAX98504_REG_25_PCM_DSP_CONFIG	0x25
#define MAX98504_REG_26_PCM_CLOCK_SETUP	0x26
#define MAX98504_REG_27_PCM_SAMPLE_RATE_SETUP	0x27
#define MAX98504_REG_28_PCM_TO_SPEAKER_MONOMIX	0x28
#define MAX98504_REG_30_PDM_TX_ENABLES	0x30
#define MAX98504_REG_31_PDM_TX_HIZ_CONTROL	0x31
#define MAX98504_REG_32_PDM_TX_CONTROL	0x32
#define MAX98504_REG_33_PDM_RX_ENABLE	0x33
#define MAX98504_REG_34_SPEAKER_ENABLE	0x34
#define MAX98504_REG_35_SPEAKER_SOURCE_SELECT	0x35
#define MAX98504_REG_36_MEASUREMENT_ENABLES	0x36
#define MAX98504_REG_37_ANALOGUE_INPUT_GAIN	0x37
#define MAX98504_REG_38_TEMPERATURE_LIMIT_CONFIG	0x38
#define MAX98504_REG_39_ANALOGUE_SPARE	0x39
#define MAX98504_REG_40_GLOBAL_ENABLE	0x40
#define MAX98504_REG_41_SOFTWARE_RESET	0x41
#define MAX98504_REG_7FFF_REV_ID	0x7fff

#define MAX98504_REG_CNT                      (MAX98504_REG_41_SOFTWARE_RESET+1)

/* MAX98504 Register Bit Fields */

/* MAX98504_REG_01_INTERRUPT_STATUS	 */ // 0x01
#define M98504_INT_GENFAIL_STATUS_MASK			(1<<7)
#define M98504_INT_GENFAIL_STATUS_SHIFT			7
#define M98504_INT_GENFAIL_STATUS_WIDTH			1

#define M98504_INT_AUTHDONE_STATUS_MASK			(1<<6)
#define M98504_INT_AUTHDONE_STATUS_SHIFT			6
#define M98504_INT_AUTHDONE_STATUS_WIDTH			1

#define M98504_INT_VBATBROWN_STATUS_MASK			(1<<5)
#define M98504_INT_VBATBROWN_STATUS_SHIFT			5
#define M98504_INT_VBATBROWN_STATUS_WIDTH			1

#define M98504_INT_WATCHFAIL_STATUS_MASK			(1<<4)
#define M98504_INT_WATCHFAIL_STATUS_SHIFT			4
#define M98504_INT_WATCHFAIL_STATUS_WIDTH			1

#define M98504_INT_THERMWARN_STATUS_MASK			(1<<3)
#define M98504_INT_THERMWARN_STATUS_SHIFT			3
#define M98504_INT_THERMWARN_STATUS_WIDTH			1

#define M98504_INT_THERMSHDN_STATUS_MASK			(1<<1)
#define M98504_INT_THERMSHDN_STATUS_SHIFT			1
#define M98504_INT_THERMSHDN_STATUS_WIDTH			1

#define M98504_INT_INTERRUPT_STATUS_MASK			M98504_INT_GENFAIL_STATUS_MASK|M98504_INT_AUTHDONE_STATUS_MASK\
													|M98504_INT_VBATBROWN_STATUS_MASK|M98504_INT_WATCHFAIL_STATUS_MASK\
													|M98504_INT_THERMWARN_STATUS_MASK|M98504_INT_THERMSHDN_STATUS_MASK

/* MAX98504_REG_02_INTERRUPT_FLAGS	 */ // 0x02
#define M98504_INT_GENFAIL_FLAG_MASK			(1<<7)
#define M98504_INT_GENFAIL_FLAG_SHIFT			7
#define M98504_INT_GENFAIL_FLAG_WIDTH			1

#define M98504_INT_AUTHDONE_FLAG_MASK			(1<<6)
#define M98504_INT_AUTHDONE_FLAG_SHIFT			6
#define M98504_INT_AUTHDONE_FLAG_WIDTH			1

#define M98504_INT_VBATBROWN_FLAG_MASK			(1<<5)
#define M98504_INT_VBATBROWN_FLAG_SHIFT			5
#define M98504_INT_VBATBROWN_FLAG_WIDTH			1

#define M98504_INT_WATCHFAIL_FLAG_MASK			(1<<4)
#define M98504_INT_WATCHFAIL_FLAG_SHIFT			4
#define M98504_INT_WATCHFAIL_FLAG_WIDTH			1

#define M98504_INT_THERMWARN_END_FLAG_MASK			(1<<3)
#define M98504_INT_THERMWARN_END_FLAG_SHIFT			3
#define M98504_INT_THERMWARN_END_FLAG_WIDTH			1

#define M98504_INT_THERMWARN_BGN_FLAG_MASK			(1<<2)
#define M98504_INT_THERMWARN_BGN_FLAG_SHIFT			2
#define M98504_INT_THERMWARN_BGN_FLAG_WIDTH			1

#define M98504_INT_THERMSHDN_END_EN_MASK			(1<<1)
#define M98504_INT_THERMSHDN_END_FLAG_SHIFT			1
#define M98504_INT_THERMSHDN_END_FLAG_WIDTH			1

#define M98504_INT_THERMSHDN_BGN_FLAG_MASK			(1<<0)
#define M98504_INT_THERMSHDN_BGN_FLAG_SHIFT			0
#define M98504_INT_THERMSHDN_BGN_FLAG_WIDTH			1

/* MAX98504_REG_03_INTERRUPT_ENABLES	 */ // 0x03
#define M98504_INT_GENFAIL_EN_MASK			(1<<7)
#define M98504_INT_GENFAIL_EN_SHIFT			7
#define M98504_INT_GENFAIL_EN_WIDTH			1

#define M98504_INT_AUTHDONE_EN_MASK			(1<<6)
#define M98504_INT_AUTHDONE_EN_SHIFT			6
#define M98504_INT_AUTHDONE_EN_WIDTH			1

#define M98504_INT_VBATBROWN_EN_MASK			(1<<5)
#define M98504_INT_VBATBROWN_EN_SHIFT			5
#define M98504_INT_VBATBROWN_EN_WIDTH			1

#define M98504_INT_WATCHFAIL_EN_MASK			(1<<4)
#define M98504_INT_WATCHFAIL_EN_SHIFT			4
#define M98504_INT_WATCHFAIL_EN_WIDTH			1

#define M98504_INT_THERMWARN_END_EN_MASK			(1<<3)
#define M98504_INT_THERMWARN_END_EN_SHIFT			3
#define M98504_INT_THERMWARN_END_EN_WIDTH			1

#define M98504_INT_THERMWARN_BGN_EN_MASK			(1<<2)
#define M98504_INT_THERMWARN_BGN_EN_SHIFT			2
#define M98504_INT_THERMWARN_BGN_EN_WIDTH			1

#define M98504_INT_THERMSHDN_END_EN_MASK			(1<<1)
#define M98504_INT_THERMSHDN_END_EN_SHIFT			1
#define M98504_INT_THERMSHDN_END_EN_WIDTH			1

#define M98504_INT_THERMSHDN_BGN_EN_MASK			(1<<0)
#define M98504_INT_THERMSHDN_BGN_EN_SHIFT			0
#define M98504_INT_THERMSHDN_BGN_EN_WIDTH			1

/* MAX98504_REG_04_INTERRUPT_FLAG_CLEARS	 */ // 0x04
#define M98504_INT_FLAG_GENFAIL_CLR_MASK			(1<<7)
#define M98504_INT_FLAG_GENFAIL_CLR_SHIFT			7
#define M98504_INT_FLAG_GENFAIL_CLR_WIDTH			1

#define M98504_INT_FLAG_AUTHDONE_CLR_MASK			(1<<6)
#define M98504_INT_FLAG_AUTHDONE_CLR_SHIFT			6
#define M98504_INT_FLAG_AUTHDONE_CLR_WIDTH			1

#define M98504_INT_FLAG_VBATBROWN_CLR_MASK			(1<<5)
#define M98504_INT_FLAG_VBATBROWN_CLR_SHIFT			5
#define M98504_INT_FLAG_VBATBROWN_CLR_WIDTH			1

#define M98504_INT_FLAG_WATCHFAIL_CLR_MASK			(1<<4)
#define M98504_INT_FLAG_WATCHFAIL_CLR_SHIFT			4
#define M98504_INT_FLAG_WATCHFAIL_CLR_WIDTH			1

#define M98504_INT_FLAG_THERMWARN_END_CLR_MASK			(1<<3)
#define M98504_INT_FLAG_THERMWARN_END_CLR_SHIFT			3
#define M98504_INT_FLAG_THERMWARN_END_CLR_WIDTH			1

#define M98504_INT_FLAG_THERMWARN_BGN_CLR_MASK			(1<<2)
#define M98504_INT_FLAG_THERMWARN_BGN_CLR_SHIFT			2
#define M98504_INT_FLAG_THERMWARN_BGN_CLR_WIDTH			1

#define M98504_INT_FLAG_THERMSHDN_END_CLR_MASK			(1<<1)
#define M98504_INT_FLAG_THERMSHDN_END_CLR_SHIFT			1
#define M98504_INT_FLAG_THERMSHDN_END_CLR_WIDTH			1

#define M98504_INT_FLAG_THERMSHDN_BGN_CLR_MASK			(1<<0)
#define M98504_INT_FLAG_THERMSHDN_BGN_CLR_SHIFT			0
#define M98504_INT_FLAG_THERMSHDN_BGN_CLR_WIDTH			1

/* MAX98504_REG_10_GPIO_ENABLE	 */ // 0x10
#define M98504_GPIO_ENABLE_MASK			(1<<0)
#define M98504_GPIO_ENALBE_SHIFT			0
#define M98504_GPIO_ENABLE_WIDTH			1

/* MAX98504_REG_11_GPIO_CONFIG	 */ // 0x11
#define M98504_GPIO_OP_MODE_MASK			(1<<0)
#define M98504_GPIO_OP_MODE_SHIFT			0
#define M98504_GPIO_OP_MODE_WIDTH			1

/* MAX98504_REG_12_WATCHDOG_ENABLE	 */ // 0x12
#define M98504_WDOG_ENABLE_MASK			(1<<0)
#define M98504_WDOG_ENABLE_SHIFT			0
#define M98504_WDOG_ENABLE_WIDTH			1

/* MAX98504_REG_13_WATCHDOG_CONFIG	 */ // 0x13
#define M98504_WDOG_CONFIG_MASK			(0x3<<0)
#define M98504_WDOG_CONFIG_SHIFT			0
#define M98504_WDOG_CONFIG_WIDTH			2

#define M98504_WDOG_CONFIG_100MS			0
#define M98504_WDOG_CONFIG_500MS			1
#define M98504_WDOG_CONFIG_1000MS			2
#define M98504_WDOG_CONFIG_2000MS			3

/* MAX98504_REG_14_WATCHDOG_CLEAR	 */ // 0x14
#define M98504_WDOG_CLEAR_MASK			(0xff<<0)
#define M98504_WDOG_CLEAR_SHIFT			0
#define M98504_WDOG_CLEAR_WIDTH			8

/* MAX98504_REG_15_CLOCK_MONITOR_ENABLE	 */ // 0x15
#define M98504_CMON_ENA_MASK			(1<<0)
#define M98504_CMON_ENA_SHIFT			0
#define M98504_CMON_ENA_WIDTH			1

/* MAX98504_REG_16_PVDD_BROWNOUT_ENABLE	 */ // 0x16
#define M98504_PVDD_BROWNOUT_ENA_MASK			(1<<0)
#define M98504_PVDD_BROWNOUT_ENA_SHIFT			0
#define M98504_PVDD_BROWNOUT_ENA_WIDTH			1

/* MAX98504_REG_17_PVDD_BROWNOUT_CONFIG_1	 */ // 0x17
#define M98504_PVDD_BROWNOUT_CFG1_CODE_MASK			(0x1f<<3)
#define M98504_PVDD_BROWNOUT_CFG1_CODE_SHIFT			3
#define M98504_PVDD_BROWNOUT_CFG1_CODE_WIDTH			5

#define M98504_PVDD_BROWNOUT_CFG1_MAX_ATTEN_MASK			(0x7<<0)
#define M98504_PVDD_BROWNOUT_CFG1_MAX_ATTEN_SHIFT			0
#define M98504_PVDD_BROWNOUT_CFG1_MAX_ATTEN_WIDTH			3

/* MAX98504_REG_18_PVDD_BROWNOUT_CONFIG_2	 */ // 0x18
#define M98504_PVDD_BROWNOUT_CFG2_ATTK_HOLD_MASK			(0xff<<0)
#define M98504_PVDD_BROWNOUT_CFG2_ATTK_HOLD_SHIFT			0
#define M98504_PVDD_BROWNOUT_CFG2_ATTK_HOLD_WIDTH			8

/* MAX98504_REG_19_PVDD_BROWNOUT_CONFIG_3	 */ // 0x19
#define M98504_PVDD_BROWNOUT_CFG3_TIMED_HOLD_MASK			(0xff<<0)
#define M98504_PVDD_BROWNOUT_CFG3_TIMED_HOLD_SHIFT			0
#define M98504_PVDD_BROWNOUT_CFG3_TIMED_HOLD_WIDTH			8

/* MAX98504_REG_1A_PVDD_BROWNOUT_CONFIG_4	 */ // 0x1a
#define M98504_PVDD_BROWNOUT_CFG4_RELEASE_MASK			(0xff<<0)
#define M98504_PVDD_BROWNOUT_CFG4_RELEASE_SHIFT			0
#define M98504_PVDD_BROWNOUT_CFG4_RELEASE_WIDTH			8

/* MAX98504_REG_20_PCM_RX_ENABLES	 */ // 0x20
#define M98504_PCM_RX_EN_CH7_MASK			(1<<7)
#define M98504_PCM_RX_EN_CH7_SHIFT			7
#define M98504_PCM_RX_EN_CH7_WIDTH			1

#define M98504_PCM_RX_EN_CH6_MASK			(1<<6)
#define M98504_PCM_RX_EN_CH6_SHIFT			6
#define M98504_PCM_RX_EN_CH6_WIDTH			1

#define M98504_PCM_RX_EN_CH5_MASK			(1<<5)
#define M98504_PCM_RX_EN_CH5_SHIFT			5
#define M98504_PCM_RX_EN_CH5_WIDTH			1

#define M98504_PCM_RX_EN_CH4_MASK			(1<<4)
#define M98504_PCM_RX_EN_CH4_SHIFT			4
#define M98504_PCM_RX_EN_CH4_WIDTH			1

#define M98504_PCM_RX_EN_CH3_MASK			(1<<3)
#define M98504_PCM_RX_EN_CH3_SHIFT			3
#define M98504_PCM_RX_EN_CH3_WIDTH			1

#define M98504_PCM_RX_EN_CH2_MASK			(1<<2)
#define M98504_PCM_RX_EN_CH2_SHIFT			2
#define M98504_PCM_RX_EN_CH2_WIDTH			1

#define M98504_PCM_RX_EN_CH1_MASK			(1<<1)
#define M98504_PCM_RX_EN_CH1_SHIFT			1
#define M98504_PCM_RX_EN_CH1_WIDTH			1

#define M98504_PCM_RX_EN_CH0_MASK			(1<<0)
#define M98504_PCM_RX_EN_CH0_SHIFT			0
#define M98504_PCM_RX_EN_CH0_WIDTH			1

/* MAX98504_REG_21_PCM_TX_ENABLES	 */ // 0x21
#define M98504_PCM_TX_EN_CH7_MASK			(1<<7)
#define M98504_PCM_TX_EN_CH7_SHIFT			7
#define M98504_PCM_TX_EN_CH7_WIDTH			1

#define M98504_PCM_TX_EN_CH6_MASK			(1<<6)
#define M98504_PCM_TX_EN_CH6_SHIFT			6
#define M98504_PCM_TX_EN_CH6_WIDTH			1

#define M98504_PCM_TX_EN_CH5_MASK			(1<<5)
#define M98504_PCM_TX_EN_CH5_SHIFT			5
#define M98504_PCM_TX_EN_CH5_WIDTH			1

#define M98504_PCM_TX_EN_CH4_MASK			(1<<4)
#define M98504_PCM_TX_EN_CH4_SHIFT			4
#define M98504_PCM_TX_EN_CH4_WIDTH			1

#define M98504_PCM_TX_EN_CH3_MASK			(1<<3)
#define M98504_PCM_TX_EN_CH3_SHIFT			3
#define M98504_PCM_TX_EN_CH3_WIDTH			1

#define M98504_PCM_TX_EN_CH2_MASK			(1<<2)
#define M98504_PCM_TX_EN_CH2_SHIFT			2
#define M98504_PCM_TX_EN_CH2_WIDTH			1

#define M98504_PCM_TX_EN_CH1_MASK			(1<<1)
#define M98504_PCM_TX_EN_CH1_SHIFT			1
#define M98504_PCM_TX_EN_CH1_WIDTH			1

#define M98504_PCM_TX_EN_CH0_MASK			(1<<0)
#define M98504_PCM_TX_EN_CH0_SHIFT			0
#define M98504_PCM_TX_EN_CH0_WIDTH			1

/* MAX98504_REG_22_PCM_TX_HIZ_CONTROL	 */ // 0x22
#define M98504_PCM_TX_HIZ_CTRL_CH7_MASK			(1<<7)
#define M98504_PCM_TX_HIZ_CTRL_CH7_SHIFT			7
#define M98504_PCM_TX_HIZ_CTRL_CH7_WIDTH			1

#define M98504_PCM_TX_HIZ_CTRL_CH6_MASK			(1<<6)
#define M98504_PCM_TX_HIZ_CTRL_CH6_SHIFT			6
#define M98504_PCM_TX_HIZ_CTRL_CH6_WIDTH			1

#define M98504_PCM_TX_HIZ_CTRL_CH5_MASK			(1<<5)
#define M98504_PCM_TX_HIZ_CTRL_CH5_SHIFT			5
#define M98504_PCM_TX_HIZ_CTRL_CH5_WIDTH			1

#define M98504_PCM_TX_HIZ_CTRL_CH4_MASK			(1<<4)
#define M98504_PCM_TX_HIZ_CTRL_CH4_SHIFT			4
#define M98504_PCM_TX_HIZ_CTRL_CH4_WIDTH			1

#define M98504_PCM_TX_HIZ_CTRL_CH3_MASK			(1<<3)
#define M98504_PCM_TX_HIZ_CTRL_CH3_SHIFT			3
#define M98504_PCM_TX_HIZ_CTRL_CH3_WIDTH			1

#define M98504_PCM_TX_HIZ_CTRL_CH2_MASK			(1<<2)
#define M98504_PCM_TX_HIZ_CTRL_CH2_SHIFT			2
#define M98504_PCM_TX_HIZ_CTRL_CH2_WIDTH			1

#define M98504_PCM_TX_HIZ_CTRL_CH1_MASK			(1<<1)
#define M98504_PCM_TX_HIZ_CTRL_CH1_SHIFT			1
#define M98504_PCM_TX_HIZ_CTRL_CH1_WIDTH			1

#define M98504_PCM_TX_HIZ_CTRL_CH0_MASK			(1<<0)
#define M98504_PCM_TX_HIZ_CTRL_CH0_SHIFT			0
#define M98504_PCM_TX_HIZ_CTRL_CH0_WIDTH			1

/* MAX98504_REG_23_PCM_TX_CHANNEL_SOURCES	 */ // 0x23
#define M98504_PCM_TX_SOURCE_CH7_MASK			(1<<7)
#define M98504_PCM_TX_SOURCE_CH7_SHIFT			7
#define M98504_PCM_TX_SOURCE_CH7_WIDTH			1

#define M98504_PCM_TX_SOURCE_CH6_MASK			(1<<6)
#define M98504_PCM_TX_SOURCE_CH6_SHIFT			6
#define M98504_PCM_TX_SOURCE_CH6_WIDTH			1

#define M98504_PCM_TX_SOURCE_CH5_MASK			(1<<5)
#define M98504_PCM_TX_SOURCE_CH5_SHIFT			5
#define M98504_PCM_TX_SOURCE_CH5_WIDTH			1

#define M98504_PCM_TX_SOURCE_CH4_MASK			(1<<4)
#define M98504_PCM_TX_SOURCE_CH4_SHIFT			4
#define M98504_PCM_TX_SOURCE_CH4_WIDTH			1

#define M98504_PCM_TX_SOURCE_CH3_MASK			(1<<3)
#define M98504_PCM_TX_SOURCE_CH3_SHIFT			3
#define M98504_PCM_TX_SOURCE_CH3_WIDTH			1

#define M98504_PCM_TX_SOURCE_CH2_MASK			(1<<2)
#define M98504_PCM_TX_SOURCE_CH2_SHIFT			2
#define M98504_PCM_TX_SOURCE_CH2_WIDTH			1

#define M98504_PCM_TX_SOURCE_CH1_MASK			(1<<1)
#define M98504_PCM_TX_SOURCE_CH1_SHIFT			1
#define M98504_PCM_TX_SOURCE_CH1_WIDTH			1

#define M98504_PCM_TX_SOURCE_CH0_MASK			(1<<0)
#define M98504_PCM_TX_SOURCE_CH0_SHIFT			0
#define M98504_PCM_TX_SOURCE_CH0_WIDTH			1

/* MAX98504_REG_24_PCM_MODE_CONFIG	 */ // 0x24
#define M98504_PCM_MODE_CFG_CH_SIZE_MASK			(0x3<<6)
#define M98504_PCM_MODE_CFG_CH_SIZE_SHIFT			6
#define M98504_PCM_MODE_CFG_CH_SIZE_WIDTH			2

#define M98504_PCM_MODE_CFG_CH_SIZE_8_MASK		(0<<M98504_PCM_MODE_CFG_CH_SIZE_SHIFT)
#define M98504_PCM_MODE_CFG_CH_SIZE_16_MASK		(1<<M98504_PCM_MODE_CFG_CH_SIZE_SHIFT)
#define M98504_PCM_MODE_CFG_CH_SIZE_24_MASK		(2<<M98504_PCM_MODE_CFG_CH_SIZE_SHIFT)
#define M98504_PCM_MODE_CFG_CH_SIZE_32_MASK		(3<<M98504_PCM_MODE_CFG_CH_SIZE_SHIFT)


#define M98504_PCM_MODE_CFG_FORMAT_MASK			(0x7<<3)
#define M98504_PCM_MODE_CFG_FORMAT_SHIFT			3
#define M98504_PCM_MODE_CFG_FORMAT_WIDTH			3

#define M98504_PCM_MODE_CFG_FORMAT_I2S_MASK		(0<<M98504_PCM_MODE_CFG_FORMAT_SHIFT)
#define M98504_PCM_MODE_CFG_FORMAT_LJ_MASK		(1<<M98504_PCM_MODE_CFG_FORMAT_SHIFT)
#define M98504_PCM_MODE_CFG_FORMAT_RJ_MASK		(2<<M98504_PCM_MODE_CFG_FORMAT_SHIFT)
#define M98504_PCM_MODE_CFG_FORMAT_TDM_MODE1_MASK	(3<<M98504_PCM_MODE_CFG_FORMAT_SHIFT)
#define M98504_PCM_MODE_CFG_FORMAT_TDM_MODE2_MASK	(4<<M98504_PCM_MODE_CFG_FORMAT_SHIFT)

#define M98504_PCM_MODE_CFG_BCLKEDGE_MASK			(1<<2)
#define M98504_PCM_MODE_CFG_BCLKEDGE_SHIFT			2
#define M98504_PCM_MODE_CFG_BCLKEDGE_WIDTH			1

#define M98504_PCM_MODE_CFG_CHSEL_MASK			(1<<1)
#define M98504_PCM_MODE_CFG_CHSEL_SHIFT			1
#define M98504_PCM_MODE_CFG_CHSEL_WIDTH			1

#define M98504_PCM_MODE_CFG_TX_EXTRA_HIZ_MASK			(1<<0)
#define M98504_PCM_MODE_CFG_TX_EXTRA_HIZ_SHIFT			0
#define M98504_PCM_MODE_CFG_TX_EXTRA_HIZ_WIDTH			1

/* MAX98504_REG_25_PCM_DSP_CONFIG	 */ // 0x25
#define M98504_PCM_DSP_CFG_TX_DITH_EN_MASK			(1<<7)
#define M98504_PCM_DSP_CFG_TX_DITH_EN_SHIFT			7
#define M98504_PCM_DSP_CFG_TX_DITH_EN_WIDTH			1

#define M98504_PCM_DSP_CFG_MEAS_DCBLK_EN_MASK			(1<<6)
#define M98504_PCM_DSP_CFG_MEAS_DCBLK_EN_SHIFT			6
#define M98504_PCM_DSP_CFG_MEAS_DCBLK_EN_WIDTH			1

#define M98504_PCM_DSP_CFG_RX_DITH_EN_MASK			(1<<5)
#define M98504_PCM_DSP_CFG_RX_DITH_EN_SHIFT			5
#define M98504_PCM_DSP_CFG_RX_DITH_EN_WIDTH			1

#define M98504_PCM_DSP_CFG_RX_FLT_MODE_MASK			(1<<4)
#define M98504_PCM_DSP_CFG_RX_FLT_MODE_SHIFT			4
#define M98504_PCM_DSP_CFG_RX_FLT_MODE_WIDTH			1

#define M98504_PCM_DSP_CFG_FLT_MASK	M98504_PCM_DSP_CFG_TX_DITH_EN_MASK|M98504_PCM_DSP_CFG_MEAS_DCBLK_EN_MASK\
	|M98504_PCM_DSP_CFG_RX_DITH_EN_MASK|M98504_PCM_DSP_CFG_RX_FLT_MODE_MASK
#define M98504_PCM_DSP_CFG_FLT_SHIFT			4
#define M98504_PCM_DSP_CFG_FLT_WIDTH			4


#define M98504_PCM_DSP_CFG_RX_GAIN_MASK			(0xf<<0)
#define M98504_PCM_DSP_CFG_RX_GAIN_SHIFT			0
#define M98504_PCM_DSP_CFG_RX_GAIN_WIDTH			4

/* MAX98504_REG_26_PCM_CLOCK_SETUP	 */ // 0x26
#define M98504_PCM_CLK_SETUP_BSEL_MASK			(0xf<<0)
#define M98504_PCM_CLK_SETUP_BSEL_SHIFT			0
#define M98504_PCM_CLK_SETUP_BSEL_WIDTH			4

#define M98094_PCM_CLK_SETUP_DAI_BSEL64				(1<<2)

/* MAX98504_REG_27_PCM_SAMPLE_RATE_SETUP	 */ // 0x27
#define M98504_PCM_SR_SETUP_SPK_SR_MASK			(0xf<<4)
#define M98504_PCM_SR_SETUP_SPK_SR_SHIFT			4
#define M98504_PCM_SR_SETUP_SPK_SR_WIDTH			4

#define M98504_PCM_SR_SETUP_MEAS_SR_MASK			(0xf<<0)
#define M98504_PCM_SR_SETUP_MEAS_SR_SHIFT			0
#define M98504_PCM_SR_SETUP_MEAS_SR_WIDTH			4

/* MAX98504_REG_28_PCM_TO_SPEAKER_MONOMIX	 */ // 0x28
#define M98504_PCM_TO_SPK_MONOMIX_CFG_MASK			(0x3<<6)
#define M98504_PCM_TO_SPK_MONOMIX_CFG_SHIFT			6
#define M98504_PCM_TO_SPK_MONOMIX_CFG_WIDTH			2

#define M98504_PCM_TO_SPK_MONOMIX_CH1_SRC_MASK			(0x7<<3)
#define M98504_PCM_TO_SPK_MONOMIX_CH1_SRC_SHIFT			3
#define M98504_PCM_TO_SPK_MONOMIX_CH1_SRC_WIDTH			3

#define M98504_PCM_TO_SPK_MONOMIX_CH0_SRC_MASK			(0x7<<0)
#define M98504_PCM_TO_SPK_MONOMIX_CH0_SRC_SHIFT			0
#define M98504_PCM_TO_SPK_MONOMIX_CH0_SRC_WIDTH			3

/* MAX98504_REG_30_PDM_TX_ENABLES	 */ // 0x30
#define M98504_PDM_EX_EN_CH1_MASK			(1<<1)
#define M98504_PDM_EX_EN_CH1_SHIFT			1
#define M98504_PDM_EX_EN_CH1_WIDTH			1

#define M98504_PDM_EX_EN_CH0_MASK			(1<<0)
#define M98504_PDM_EX_EN_CH0_SHIFT			0
#define M98504_PDM_EX_EN_CH0_WIDTH			1

/* MAX98504_REG_31_PDM_TX_HIZ_CONTROL	 */ // 0x31
#define M98504_PDM_EX_HIZ_CTRL_CH1_MASK			(1<<1)
#define M98504_PDM_EX_HIZ_CTRL_CH1_SHIFT			1
#define M98504_PDM_EX_HIZ_CTRL_CH1_WIDTH			1

#define M98504_PDM_EX_HIZ_CTRL_CH0_MASK			(1<<0)
#define M98504_PDM_EX_HIZ_CTRL_CH0_SHIFT			0
#define M98504_PDM_EX_HIZ_CTRL_CH0_WIDTH			1

/* MAX98504_REG_32_PDM_TX_CONTROL	 */ // 0x32
#define M98504_PDM_EX_CTRL_CH1_SRC_MASK			(1<<1)
#define M98504_PDM_EX_CTRL_CH1_SRC_SHIFT			1
#define M98504_PDM_EX_CTRL_CH1_SRC_WIDTH			1

#define M98504_PDM_EX_CTRL_CH0_SRC_MASK			(1<<0)
#define M98504_PDM_EX_CTRL_CH0_SRC_SHIFT			0
#define M98504_PDM_EX_CTRL_CH0_SRC_WIDTH			1

/* MAX98504_REG_33_PDM_RX_ENABLE	 */ // 0x33
#define M98504_PDM_RX_EN_MASK			(1<<0)
#define M98504_PDM_RX_EN_SHIFT			0
#define M98504_PDM_RX_EN_WIDTH			1

/* MAX98504_REG_34_SPEAKER_ENABLE	 */ // 0x34
#define M98504_SPK_EN_MASK			(1<<0)
#define M98504_SPK_EN_SHIFT			0
#define M98504_SPK_EN_WIDTH			1

/* MAX98504_REG_35_SPEAKER_SOURCE_SELECT	 */ // 0x35
#define M98504_SPK_SRC_SEL_MASK			(0x3<<0)
#define M98504_SPK_SRC_SEL_SHIFT			0
#define M98504_SPK_SRC_SEL_WIDTH			2

/* MAX98504_REG_36_MEASUREMENT_ENABLES	 */ // 0x36
#define M98504_MEAS_I_EN_MASK			(1<<1)
#define M98504_MEAS_I_EN_SHIFT			1
#define M98504_MEAS_I_EN_WIDTH			1

#define M98504_MEAS_V_EN_MASK			(1<<0)
#define M98504_MEAS_V_EN_SHIFT			0
#define M98504_MEAS_V_EN_WIDTH			1

/* MAX98504_REG_37_ANALOGUE_INPUT_GAIN	 */ // 0x37
#define M98504_ANALOG_INPUT_GAIN_MASK			(1<<0)
#define M98504_ANALOG_INPUT_GAIN_SHIFT			0
#define M98504_ANALOG_INPUT_GAIN_WIDTH			1

/* MAX98504_REG_38_TEMPERATURE_LIMIT_CONFIG	*/	// 0x38
#define M98504_TEMP_LIMIT_CFG_TEMPWARN_SEL_MASK			(0x2<<2)
#define M98504_TEMP_LIMIT_CFG_TEMPWARN_SEL_SHIFT			2
#define M98504_TEMP_LIMIT_CFG_TEMPWARN_SEL_WIDTH			2

#define M98504_TEMP_LIMIT_CFG_TEMP_SEL_MASK			(0x2<<0)
#define M98504_TEMP_LIMIT_CFG_TEMP_SEL_SHIFT			0
#define M98504_TEMP_LIMIT_CFG_TEMP_SEL_WIDTH			2

/* MAX98504_REG_39_ANALOGUE_SPARE*/	// 0x39
#define M98504_ANALOG_SPARE_MASK			(0xff<<0)
#define M98504_ANALOG_SPARE_SHIFT			0
#define M98504_ANALOG_SPARE_WIDTH			8

/* MAX98504_REG_40_GLOBAL_ENABLE	 */ // 0x40
#define M98504_GLOBAL_EN_MASK			(1<<0)
#define M98504_GLOBAL_EN_SHIFT			0
#define M98504_GLOBAL_EN_WIDTH			1

/* MAX98504_REG_41_SOFTWARE_RESET	 */ // 0x41
#define M98504_SOFTWARE_RESET_MASK			(1<<0)
#define M98504_SOFTWARE_RESET_SHIFT			0
#define M98504_SOFTWARE_RESET_WIDTH			1

enum max98504_type {
	MAX98504,
};

struct max98504_cdata {
	unsigned int rate;
	unsigned int fmt;
};

struct max98504_priv {
	struct snd_soc_codec *codec;
	enum max98504_type devtype;
	void *control_data;
	struct max98504_pdata *pdata;
	unsigned int sysclk;
	struct max98504_cdata dai[1];
	unsigned int status;
};

#endif

