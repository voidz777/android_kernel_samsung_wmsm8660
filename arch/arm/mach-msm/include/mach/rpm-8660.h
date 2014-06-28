/* Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_RPM_8660_H
#define __ARCH_ARM_MACH_MSM_RPM_8660_H

#define RPM_MAJOR_VER	2
#define RPM_MINOR_VER	0
#define RPM_BUILD_VER	0


/* RPM control message RAM enums */
enum {
	MSM_RPM_CTRL_VERSION_MAJOR,
	MSM_RPM_CTRL_VERSION_MINOR,
	MSM_RPM_CTRL_VERSION_BUILD,

	MSM_RPM_CTRL_REQ_CTX_0,
	MSM_RPM_CTRL_REQ_CTX_7 = MSM_RPM_CTRL_REQ_CTX_0 + 7,
	MSM_RPM_CTRL_REQ_SEL_0,
	MSM_RPM_CTRL_REQ_SEL_7 = MSM_RPM_CTRL_REQ_SEL_0 + 7,
	MSM_RPM_CTRL_ACK_CTX_0,
	MSM_RPM_CTRL_ACK_CTX_7 = MSM_RPM_CTRL_ACK_CTX_0 + 7,
	MSM_RPM_CTRL_ACK_SEL_0,
	MSM_RPM_CTRL_ACK_SEL_7 = MSM_RPM_CTRL_ACK_SEL_0 + 7,
};

enum {
	MSM_RPM_SEL_NOTIFICATION,
	MSM_RPM_SEL_INVALIDATE,
	MSM_RPM_SEL_TRIGGER_TIMED,
	MSM_RPM_SEL_TRIGGER_SET,
	MSM_RPM_SEL_TRIGGER_CLEAR,

	MSM_RPM_SEL_CXO_CLK,
	MSM_RPM_SEL_PXO_CLK,
	MSM_RPM_SEL_PLL_4,
	MSM_RPM_SEL_APPS_FABRIC_CLK,
	MSM_RPM_SEL_SYSTEM_FABRIC_CLK,
	MSM_RPM_SEL_MM_FABRIC_CLK,
	MSM_RPM_SEL_DAYTONA_FABRIC_CLK,
	MSM_RPM_SEL_SFPB_CLK,
	MSM_RPM_SEL_CFPB_CLK,
	MSM_RPM_SEL_MMFPB_CLK,
	MSM_RPM_SEL_SMI_CLK,
	MSM_RPM_SEL_EBI1_CLK,

	MSM_RPM_SEL_APPS_L2_CACHE_CTL,

	MSM_RPM_SEL_APPS_FABRIC_HALT,
	MSM_RPM_SEL_APPS_FABRIC_CLOCK_MODE,
	MSM_RPM_SEL_APPS_FABRIC_IOCTL,
	MSM_RPM_SEL_APPS_FABRIC_ARB,

	MSM_RPM_SEL_SYSTEM_FABRIC_HALT,
	MSM_RPM_SEL_SYSTEM_FABRIC_CLOCK_MODE,
	MSM_RPM_SEL_SYSTEM_FABRIC_IOCTL,
	MSM_RPM_SEL_SYSTEM_FABRIC_ARB,

	MSM_RPM_SEL_MM_FABRIC_HALT,
	MSM_RPM_SEL_MM_FABRIC_CLOCK_MODE,
	MSM_RPM_SEL_MM_FABRIC_IOCTL,
	MSM_RPM_SEL_MM_FABRIC_ARB,

	MSM_RPM_SEL_SMPS0B,
	MSM_RPM_SEL_SMPS1B,
	MSM_RPM_SEL_SMPS2B,
	MSM_RPM_SEL_SMPS3B,
	MSM_RPM_SEL_SMPS4B,
	MSM_RPM_SEL_LDO0B,
	MSM_RPM_SEL_LDO1B,
	MSM_RPM_SEL_LDO2B,
	MSM_RPM_SEL_LDO3B,
	MSM_RPM_SEL_LDO4B,
	MSM_RPM_SEL_LDO5B,
	MSM_RPM_SEL_LDO6B,
	MSM_RPM_SEL_LVS0B,
	MSM_RPM_SEL_LVS1B,
	MSM_RPM_SEL_LVS2B,
	MSM_RPM_SEL_LVS3B,
	MSM_RPM_SEL_MVS,

	MSM_RPM_SEL_SMPS0,
	MSM_RPM_SEL_SMPS1,
	MSM_RPM_SEL_SMPS2,
	MSM_RPM_SEL_SMPS3,
	MSM_RPM_SEL_SMPS4,

	MSM_RPM_SEL_LDO0,
	MSM_RPM_SEL_LDO1,
	MSM_RPM_SEL_LDO2,
	MSM_RPM_SEL_LDO3,
	MSM_RPM_SEL_LDO4,
	MSM_RPM_SEL_LDO5,
	MSM_RPM_SEL_LDO6,
	MSM_RPM_SEL_LDO7,
	MSM_RPM_SEL_LDO8,
	MSM_RPM_SEL_LDO9,
	MSM_RPM_SEL_LDO10,
	MSM_RPM_SEL_LDO11,
	MSM_RPM_SEL_LDO12,
	MSM_RPM_SEL_LDO13,
	MSM_RPM_SEL_LDO14,
	MSM_RPM_SEL_LDO15,
	MSM_RPM_SEL_LDO16,
	MSM_RPM_SEL_LDO17,
	MSM_RPM_SEL_LDO18,
	MSM_RPM_SEL_LDO19,
	MSM_RPM_SEL_LDO20,
	MSM_RPM_SEL_LDO21,
	MSM_RPM_SEL_LDO22,
	MSM_RPM_SEL_LDO23,
	MSM_RPM_SEL_LDO24,
	MSM_RPM_SEL_LDO25,
	MSM_RPM_SEL_LVS0,
	MSM_RPM_SEL_LVS1,
	MSM_RPM_SEL_NCP,

	MSM_RPM_SEL_CXO_BUFFERS,

	MSM_RPM_SEL_LAST = MSM_RPM_SEL_CXO_BUFFERS,
};


enum {
	MSM_RPM_ID_NOTIFICATION_CONFIGURED_0,
	MSM_RPM_ID_NOTIFICATION_CONFIGURED_7 =
		MSM_RPM_ID_NOTIFICATION_CONFIGURED_0 + 7,

	MSM_RPM_ID_NOTIFICATION_REGISTERED_0,
	MSM_RPM_ID_NOTIFICATION_REGISTERED_7 =
		MSM_RPM_ID_NOTIFICATION_REGISTERED_0 + 7,

	MSM_RPM_ID_INVALIDATE_0,
	MSM_RPM_ID_INVALIDATE_7 = MSM_RPM_ID_INVALIDATE_0 + 7,

	MSM_RPM_ID_TRIGGER_TIMED_TO,
	MSM_RPM_ID_TRIGGER_TIMED_SCLK_COUNT,

	MSM_RPM_ID_TRIGGER_SET_FROM,
	MSM_RPM_ID_TRIGGER_SET_TO,
	MSM_RPM_ID_TRIGGER_SET_TRIGGER,

	MSM_RPM_ID_TRIGGER_CLEAR_FROM,
	MSM_RPM_ID_TRIGGER_CLEAR_TO,
	MSM_RPM_ID_TRIGGER_CLEAR_TRIGGER,

	MSM_RPM_ID_CXO_CLK,
	MSM_RPM_ID_PXO_CLK,
	MSM_RPM_ID_PLL_4,
	MSM_RPM_ID_APPS_FABRIC_CLK,
	MSM_RPM_ID_SYSTEM_FABRIC_CLK,
	MSM_RPM_ID_MM_FABRIC_CLK,
	MSM_RPM_ID_DAYTONA_FABRIC_CLK,
	MSM_RPM_ID_SFPB_CLK,
	MSM_RPM_ID_CFPB_CLK,
	MSM_RPM_ID_MMFPB_CLK,
	MSM_RPM_ID_SMI_CLK,
	MSM_RPM_ID_EBI1_CLK,

	MSM_RPM_ID_APPS_L2_CACHE_CTL,

	MSM_RPM_ID_APPS_FABRIC_HALT_0,
	MSM_RPM_ID_APPS_FABRIC_HALT_1,
	MSM_RPM_ID_APPS_FABRIC_CLOCK_MODE_0,
	MSM_RPM_ID_APPS_FABRIC_CLOCK_MODE_1,
	MSM_RPM_ID_APPS_FABRIC_CLOCK_MODE_2,
	MSM_RPM_ID_APPS_FABRIC_RESERVED_A,
	MSM_RPM_ID_APPS_FABRIC_ARB_0,
	MSM_RPM_ID_APPS_FABRIC_ARB_5 = MSM_RPM_ID_APPS_FABRIC_ARB_0 + 5,
	MSM_RPM_ID_APPS_FABRIC_RESERVED_B_0,
	MSM_RPM_ID_APPS_FABRIC_RESERVED_B_5 =
		MSM_RPM_ID_APPS_FABRIC_RESERVED_B_0 + 5,

	MSM_RPM_ID_SYSTEM_FABRIC_HALT_0,
	MSM_RPM_ID_SYSTEM_FABRIC_HALT_1,
	MSM_RPM_ID_SYSTEM_FABRIC_CLOCK_MODE_0,
	MSM_RPM_ID_SYSTEM_FABRIC_CLOCK_MODE_1,
	MSM_RPM_ID_SYSTEM_FABRIC_CLOCK_MODE_2,
	MSM_RPM_ID_SYSTEM_FABRIC_RESERVED_A,
	MSM_RPM_ID_SYSTEM_FABRIC_ARB_0,
	MSM_RPM_ID_SYSTEM_FABRIC_ARB_21 = MSM_RPM_ID_SYSTEM_FABRIC_ARB_0 + 21,
	MSM_RPM_ID_SYSTEM_FABRIC_RESERVED_B_0,
	MSM_RPM_ID_SYSTEM_FABRIC_RESERVED_B_13 =
		MSM_RPM_ID_SYSTEM_FABRIC_RESERVED_B_0 + 13,

	MSM_RPM_ID_MM_FABRIC_HALT_0,
	MSM_RPM_ID_MM_FABRIC_HALT_1,
	MSM_RPM_ID_MM_FABRIC_CLOCK_MODE_0,
	MSM_RPM_ID_MM_FABRIC_CLOCK_MODE_1,
	MSM_RPM_ID_MM_FABRIC_CLOCK_MODE_2,
	MSM_RPM_ID_MM_FABRIC_RESERVED_A,
	MSM_RPM_ID_MM_FABRIC_ARB_0,
	MSM_RPM_ID_MM_FABRIC_ARB_22 = MSM_RPM_ID_MM_FABRIC_ARB_0 + 22,

	/* pmic 8901 */
	MSM_RPM_ID_SMPS0B_0,
	MSM_RPM_ID_SMPS0B_1,
	MSM_RPM_ID_SMPS1B_0,
	MSM_RPM_ID_SMPS1B_1,
	MSM_RPM_ID_SMPS2B_0,
	MSM_RPM_ID_SMPS2B_1,
	MSM_RPM_ID_SMPS3B_0,
	MSM_RPM_ID_SMPS3B_1,
	MSM_RPM_ID_SMPS4B_0,
	MSM_RPM_ID_SMPS4B_1,
	MSM_RPM_ID_LDO0B_0,
	MSM_RPM_ID_LDO0B_1,
	MSM_RPM_ID_LDO1B_0,
	MSM_RPM_ID_LDO1B_1,
	MSM_RPM_ID_LDO2B_0,
	MSM_RPM_ID_LDO2B_1,
	MSM_RPM_ID_LDO3B_0,
	MSM_RPM_ID_LDO3B_1,
	MSM_RPM_ID_LDO4B_0,
	MSM_RPM_ID_LDO4B_1,
	MSM_RPM_ID_LDO5B_0,
	MSM_RPM_ID_LDO5B_1,
	MSM_RPM_ID_LDO6B_0,
	MSM_RPM_ID_LDO6B_1,
	MSM_RPM_ID_LVS0B,
	MSM_RPM_ID_LVS1B,
	MSM_RPM_ID_LVS2B,
	MSM_RPM_ID_LVS3B,
	MSM_RPM_ID_MVS,

	/* pmic 8058 */
	MSM_RPM_ID_SMPS0_0,
	MSM_RPM_ID_SMPS0_1,
	MSM_RPM_ID_SMPS1_0,
	MSM_RPM_ID_SMPS1_1,
	MSM_RPM_ID_SMPS2_0,
	MSM_RPM_ID_SMPS2_1,
	MSM_RPM_ID_SMPS3_0,
	MSM_RPM_ID_SMPS3_1,
	MSM_RPM_ID_SMPS4_0,
	MSM_RPM_ID_SMPS4_1,
	MSM_RPM_ID_LDO0_0,
	MSM_RPM_ID_LDO0_1,
	MSM_RPM_ID_LDO1_0,
	MSM_RPM_ID_LDO1_1,
	MSM_RPM_ID_LDO2_0,
	MSM_RPM_ID_LDO2_1,
	MSM_RPM_ID_LDO3_0,
	MSM_RPM_ID_LDO3_1,
	MSM_RPM_ID_LDO4_0,
	MSM_RPM_ID_LDO4_1,
	MSM_RPM_ID_LDO5_0,
	MSM_RPM_ID_LDO5_1,
	MSM_RPM_ID_LDO6_0,
	MSM_RPM_ID_LDO6_1,
	MSM_RPM_ID_LDO7_0,
	MSM_RPM_ID_LDO7_1,
	MSM_RPM_ID_LDO8_0,
	MSM_RPM_ID_LDO8_1,
	MSM_RPM_ID_LDO9_0,
	MSM_RPM_ID_LDO9_1,
	MSM_RPM_ID_LDO10_0,
	MSM_RPM_ID_LDO10_1,
	MSM_RPM_ID_LDO11_0,
	MSM_RPM_ID_LDO11_1,
	MSM_RPM_ID_LDO12_0,
	MSM_RPM_ID_LDO12_1,
	MSM_RPM_ID_LDO13_0,
	MSM_RPM_ID_LDO13_1,
	MSM_RPM_ID_LDO14_0,
	MSM_RPM_ID_LDO14_1,
	MSM_RPM_ID_LDO15_0,
	MSM_RPM_ID_LDO15_1,
	MSM_RPM_ID_LDO16_0,
	MSM_RPM_ID_LDO16_1,
	MSM_RPM_ID_LDO17_0,
	MSM_RPM_ID_LDO17_1,
	MSM_RPM_ID_LDO18_0,
	MSM_RPM_ID_LDO18_1,
	MSM_RPM_ID_LDO19_0,
	MSM_RPM_ID_LDO19_1,
	MSM_RPM_ID_LDO20_0,
	MSM_RPM_ID_LDO20_1,
	MSM_RPM_ID_LDO21_0,
	MSM_RPM_ID_LDO21_1,
	MSM_RPM_ID_LDO22_0,
	MSM_RPM_ID_LDO22_1,
	MSM_RPM_ID_LDO23_0,
	MSM_RPM_ID_LDO23_1,
	MSM_RPM_ID_LDO24_0,
	MSM_RPM_ID_LDO24_1,
	MSM_RPM_ID_LDO25_0,
	MSM_RPM_ID_LDO25_1,
	MSM_RPM_ID_LVS0,
	MSM_RPM_ID_LVS1,
	MSM_RPM_ID_NCP_0,
	MSM_RPM_ID_NCP_1,

	MSM_RPM_ID_CXO_BUFFERS,

	MSM_RPM_ID_LAST = MSM_RPM_ID_CXO_BUFFERS
};

/* RPM resources RPM_ID aliases */
enum {
	MSM_RPMRS_ID_RPM_CTL = MSM_RPM_ID_TRIGGER_SET_FROM,
	MSM_RPMRS_ID_PXO_CLK = MSM_RPM_ID_PXO_CLK,
	MSM_RPMRS_ID_APPS_L2_CACHE_CTL = MSM_RPM_ID_APPS_L2_CACHE_CTL,
	MSM_RPMRS_ID_VDD_MEM_0 = MSM_RPM_ID_SMPS0_0,
	MSM_RPMRS_ID_VDD_MEM_1 = MSM_RPM_ID_SMPS0_1,
	MSM_RPMRS_ID_VDD_DIG_0 = MSM_RPM_ID_SMPS1_0,
	MSM_RPMRS_ID_VDD_DIG_1 = MSM_RPM_ID_SMPS1_1
};

/* VDD values are in millivolts */
#define MSM_RPMRS_VDD_MASK  0xfff
enum {
	MSM_RPMRS_VDD_MEM_RET_LOW = 500,
	MSM_RPMRS_VDD_MEM_RET_HIGH = 750,
	MSM_RPMRS_VDD_MEM_ACTIVE = 1000,
	MSM_RPMRS_VDD_MEM_MAX = 1350,
};

enum {
	MSM_RPMRS_VDD_DIG_RET_LOW = 500,
	MSM_RPMRS_VDD_DIG_RET_HIGH = 750,
	MSM_RPMRS_VDD_DIG_ACTIVE = 1000,
	MSM_RPMRS_VDD_DIG_MAX = 1350,
};

enum {
	MSM_RPM_STATUS_ID_VERSION_MAJOR,
	MSM_RPM_STATUS_ID_VERSION_MINOR,
	MSM_RPM_STATUS_ID_VERSION_BUILD,
	MSM_RPM_STATUS_ID_SUPPORTED_RESOURCES_0,
	MSM_RPM_STATUS_ID_SUPPORTED_RESOURCES_1,
	MSM_RPM_STATUS_ID_SUPPORTED_RESOURCES_2,
	MSM_RPM_STATUS_ID_RESERVED_0,
	MSM_RPM_STATUS_ID_RESERVED_4 = MSM_RPM_STATUS_ID_RESERVED_0 + 4,
	MSM_RPM_STATUS_ID_SEQUENCE,

	MSM_RPM_STATUS_ID_CXO_CLK,
	MSM_RPM_STATUS_ID_PXO_CLK,
	MSM_RPM_STATUS_ID_PLL_4,
	MSM_RPM_STATUS_ID_APPS_FABRIC_CLK,
	MSM_RPM_STATUS_ID_SYSTEM_FABRIC_CLK,
	MSM_RPM_STATUS_ID_MM_FABRIC_CLK,
	MSM_RPM_STATUS_ID_DAYTONA_FABRIC_CLK,
	MSM_RPM_STATUS_ID_SFPB_CLK,
	MSM_RPM_STATUS_ID_CFPB_CLK,
	MSM_RPM_STATUS_ID_MMFPB_CLK,
	MSM_RPM_STATUS_ID_SMI_CLK,
	MSM_RPM_STATUS_ID_EBI1_CLK,

	MSM_RPM_STATUS_ID_APPS_L2_CACHE_CTL,

	MSM_RPM_STATUS_ID_APPS_FABRIC_HALT,
	MSM_RPM_STATUS_ID_APPS_FABRIC_CLOCK_MODE,
	MSM_RPM_STATUS_ID_APPS_FABRIC_RESERVED,
	MSM_RPM_STATUS_ID_APPS_FABRIC_ARB,

	MSM_RPM_STATUS_ID_SYSTEM_FABRIC_HALT,
	MSM_RPM_STATUS_ID_SYSTEM_FABRIC_CLOCK_MODE,
	MSM_RPM_STATUS_ID_SYSTEM_FABRIC_RESERVED,
	MSM_RPM_STATUS_ID_SYSTEM_FABRIC_ARB,

	MSM_RPM_STATUS_ID_MM_FABRIC_HALT,
	MSM_RPM_STATUS_ID_MM_FABRIC_CLOCK_MODE,
	MSM_RPM_STATUS_ID_MM_FABRIC_RESERVED,
	MSM_RPM_STATUS_ID_MM_FABRIC_ARB,

	/* pmic 8901 */
	MSM_RPM_STATUS_ID_SMPS0B_0,
	MSM_RPM_STATUS_ID_SMPS0B_1,
	MSM_RPM_STATUS_ID_SMPS1B_0,
	MSM_RPM_STATUS_ID_SMPS1B_1,
	MSM_RPM_STATUS_ID_SMPS2B_0,
	MSM_RPM_STATUS_ID_SMPS2B_1,
	MSM_RPM_STATUS_ID_SMPS3B_0,
	MSM_RPM_STATUS_ID_SMPS3B_1,
	MSM_RPM_STATUS_ID_SMPS4B_0,
	MSM_RPM_STATUS_ID_SMPS4B_1,
	MSM_RPM_STATUS_ID_LDO0B_0,
	MSM_RPM_STATUS_ID_LDO0B_1,
	MSM_RPM_STATUS_ID_LDO1B_0,
	MSM_RPM_STATUS_ID_LDO1B_1,
	MSM_RPM_STATUS_ID_LDO2B_0,
	MSM_RPM_STATUS_ID_LDO2B_1,
	MSM_RPM_STATUS_ID_LDO3B_0,
	MSM_RPM_STATUS_ID_LDO3B_1,
	MSM_RPM_STATUS_ID_LDO4B_0,
	MSM_RPM_STATUS_ID_LDO4B_1,
	MSM_RPM_STATUS_ID_LDO5B_0,
	MSM_RPM_STATUS_ID_LDO5B_1,
	MSM_RPM_STATUS_ID_LDO6B_0,
	MSM_RPM_STATUS_ID_LDO6B_1,
	MSM_RPM_STATUS_ID_LVS0B,
	MSM_RPM_STATUS_ID_LVS1B,
	MSM_RPM_STATUS_ID_LVS2B,
	MSM_RPM_STATUS_ID_LVS3B,
	MSM_RPM_STATUS_ID_MVS,

	/* pmic 8058 */
	MSM_RPM_STATUS_ID_SMPS0_0,
	MSM_RPM_STATUS_ID_SMPS0_1,
	MSM_RPM_STATUS_ID_SMPS1_0,
	MSM_RPM_STATUS_ID_SMPS1_1,
	MSM_RPM_STATUS_ID_SMPS2_0,
	MSM_RPM_STATUS_ID_SMPS2_1,
	MSM_RPM_STATUS_ID_SMPS3_0,
	MSM_RPM_STATUS_ID_SMPS3_1,
	MSM_RPM_STATUS_ID_SMPS4_0,
	MSM_RPM_STATUS_ID_SMPS4_1,
	MSM_RPM_STATUS_ID_LDO0_0,
	MSM_RPM_STATUS_ID_LDO0_1,
	MSM_RPM_STATUS_ID_LDO1_0,
	MSM_RPM_STATUS_ID_LDO1_1,
	MSM_RPM_STATUS_ID_LDO2_0,
	MSM_RPM_STATUS_ID_LDO2_1,
	MSM_RPM_STATUS_ID_LDO3_0,
	MSM_RPM_STATUS_ID_LDO3_1,
	MSM_RPM_STATUS_ID_LDO4_0,
	MSM_RPM_STATUS_ID_LDO4_1,
	MSM_RPM_STATUS_ID_LDO5_0,
	MSM_RPM_STATUS_ID_LDO5_1,
	MSM_RPM_STATUS_ID_LDO6_0,
	MSM_RPM_STATUS_ID_LDO6_1,
	MSM_RPM_STATUS_ID_LDO7_0,
	MSM_RPM_STATUS_ID_LDO7_1,
	MSM_RPM_STATUS_ID_LDO8_0,
	MSM_RPM_STATUS_ID_LDO8_1,
	MSM_RPM_STATUS_ID_LDO9_0,
	MSM_RPM_STATUS_ID_LDO9_1,
	MSM_RPM_STATUS_ID_LDO10_0,
	MSM_RPM_STATUS_ID_LDO10_1,
	MSM_RPM_STATUS_ID_LDO11_0,
	MSM_RPM_STATUS_ID_LDO11_1,
	MSM_RPM_STATUS_ID_LDO12_0,
	MSM_RPM_STATUS_ID_LDO12_1,
	MSM_RPM_STATUS_ID_LDO13_0,
	MSM_RPM_STATUS_ID_LDO13_1,
	MSM_RPM_STATUS_ID_LDO14_0,
	MSM_RPM_STATUS_ID_LDO14_1,
	MSM_RPM_STATUS_ID_LDO15_0,
	MSM_RPM_STATUS_ID_LDO15_1,
	MSM_RPM_STATUS_ID_LDO16_0,
	MSM_RPM_STATUS_ID_LDO16_1,
	MSM_RPM_STATUS_ID_LDO17_0,
	MSM_RPM_STATUS_ID_LDO17_1,
	MSM_RPM_STATUS_ID_LDO18_0,
	MSM_RPM_STATUS_ID_LDO18_1,
	MSM_RPM_STATUS_ID_LDO19_0,
	MSM_RPM_STATUS_ID_LDO19_1,
	MSM_RPM_STATUS_ID_LDO20_0,
	MSM_RPM_STATUS_ID_LDO20_1,
	MSM_RPM_STATUS_ID_LDO21_0,
	MSM_RPM_STATUS_ID_LDO21_1,
	MSM_RPM_STATUS_ID_LDO22_0,
	MSM_RPM_STATUS_ID_LDO22_1,
	MSM_RPM_STATUS_ID_LDO23_0,
	MSM_RPM_STATUS_ID_LDO23_1,
	MSM_RPM_STATUS_ID_LDO24_0,
	MSM_RPM_STATUS_ID_LDO24_1,
	MSM_RPM_STATUS_ID_LDO25_0,
	MSM_RPM_STATUS_ID_LDO25_1,
	MSM_RPM_STATUS_ID_LVS0,
	MSM_RPM_STATUS_ID_LVS1,
	MSM_RPM_STATUS_ID_NCP_0,
	MSM_RPM_STATUS_ID_NCP_1,

	MSM_RPM_STATUS_ID_CXO_BUFFERS,

	MSM_RPM_STATUS_ID_LAST = MSM_RPM_STATUS_ID_CXO_BUFFERS
};

#endif /* __ARCH_ARM_MACH_MSM_RPM_8660_H */
