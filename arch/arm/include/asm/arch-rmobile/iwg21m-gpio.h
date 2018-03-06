/*
 * Copyright (c) 2016 iWave Systems Technologies Pvt. Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

/*
 * @file iwg21m-gpio.h 
 *
 * @brief IOMUX pin definition file 
 *
 * @ingroup Main
 */

#ifndef __ASM_IWG21M_H__
#define __ASM_IWG21M_H__

/* Pin Function Controller:
 * GPIO_FN_xx - GPIO used to select pin function
 * GPIO_GP_x_x - GPIO mapped to real I/O pin on CPU
 */
enum {
	GPIO_GP_0_0, GPIO_GP_0_1, GPIO_GP_0_2, GPIO_GP_0_3,
	GPIO_GP_0_4, GPIO_GP_0_5, GPIO_GP_0_6, GPIO_GP_0_7,
	GPIO_GP_0_8, GPIO_GP_0_9, GPIO_GP_0_10, GPIO_GP_0_11,
	GPIO_GP_0_12, GPIO_GP_0_13, GPIO_GP_0_14, GPIO_GP_0_15,
	GPIO_GP_0_16, GPIO_GP_0_17, GPIO_GP_0_18, GPIO_GP_0_19,
	GPIO_GP_0_20, GPIO_GP_0_21, GPIO_GP_0_22, GPIO_GP_0_23,
	GPIO_GP_0_24, GPIO_GP_0_25, GPIO_GP_0_26, GPIO_GP_0_27,
	GPIO_GP_0_28, GPIO_GP_0_29, GPIO_GP_0_30, GPIO_GP_0_31,

	GPIO_GP_1_0, GPIO_GP_1_1, GPIO_GP_1_2, GPIO_GP_1_3,
	GPIO_GP_1_4, GPIO_GP_1_5, GPIO_GP_1_6, GPIO_GP_1_7,
	GPIO_GP_1_8, GPIO_GP_1_9, GPIO_GP_1_10, GPIO_GP_1_11,
	GPIO_GP_1_12, GPIO_GP_1_13, GPIO_GP_1_14, GPIO_GP_1_15,
	GPIO_GP_1_16, GPIO_GP_1_17, GPIO_GP_1_18, GPIO_GP_1_19,
	GPIO_GP_1_20, GPIO_GP_1_21, GPIO_GP_1_22, GPIO_GP_1_23,
	GPIO_GP_1_24, GPIO_GP_1_25, GPIO_GP_1_26, GPIO_GP_1_27,
	GPIO_GP_1_28, GPIO_GP_1_29,

	GPIO_GP_2_0, GPIO_GP_2_1, GPIO_GP_2_2, GPIO_GP_2_3,
	GPIO_GP_2_4, GPIO_GP_2_5, GPIO_GP_2_6, GPIO_GP_2_7,
	GPIO_GP_2_8, GPIO_GP_2_9, GPIO_GP_2_10, GPIO_GP_2_11,
	GPIO_GP_2_12, GPIO_GP_2_13, GPIO_GP_2_14, GPIO_GP_2_15,
	GPIO_GP_2_16, GPIO_GP_2_17, GPIO_GP_2_18, GPIO_GP_2_19,
	GPIO_GP_2_20, GPIO_GP_2_21, GPIO_GP_2_22, GPIO_GP_2_23,
	GPIO_GP_2_24, GPIO_GP_2_25, GPIO_GP_2_26, GPIO_GP_2_27,
	GPIO_GP_2_28, GPIO_GP_2_29,

	GPIO_GP_3_0, GPIO_GP_3_1, GPIO_GP_3_2, GPIO_GP_3_3,
	GPIO_GP_3_4, GPIO_GP_3_5, GPIO_GP_3_6, GPIO_GP_3_7,
	GPIO_GP_3_8, GPIO_GP_3_9, GPIO_GP_3_10, GPIO_GP_3_11,
	GPIO_GP_3_12, GPIO_GP_3_13, GPIO_GP_3_14, GPIO_GP_3_15,
	GPIO_GP_3_16, GPIO_GP_3_17, GPIO_GP_3_18, GPIO_GP_3_19,
	GPIO_GP_3_20, GPIO_GP_3_21, GPIO_GP_3_22, GPIO_GP_3_23,
	GPIO_GP_3_24, GPIO_GP_3_25, GPIO_GP_3_26, GPIO_GP_3_27,
	GPIO_GP_3_28, GPIO_GP_3_29, GPIO_GP_3_30, GPIO_GP_3_31,

	GPIO_GP_4_0, GPIO_GP_4_1, GPIO_GP_4_2, GPIO_GP_4_3,
	GPIO_GP_4_4, GPIO_GP_4_5, GPIO_GP_4_6, GPIO_GP_4_7,
	GPIO_GP_4_8, GPIO_GP_4_9, GPIO_GP_4_10, GPIO_GP_4_11,
	GPIO_GP_4_12, GPIO_GP_4_13, GPIO_GP_4_14, GPIO_GP_4_15,
	GPIO_GP_4_16, GPIO_GP_4_17, GPIO_GP_4_18, GPIO_GP_4_19,
	GPIO_GP_4_20, GPIO_GP_4_21, GPIO_GP_4_22, GPIO_GP_4_23,
	GPIO_GP_4_24, GPIO_GP_4_25, GPIO_GP_4_26, GPIO_GP_4_27,
	GPIO_GP_4_28, GPIO_GP_4_29, GPIO_GP_4_30, GPIO_GP_4_31,

	GPIO_GP_5_0, GPIO_GP_5_1, GPIO_GP_5_2, GPIO_GP_5_3,
	GPIO_GP_5_4, GPIO_GP_5_5, GPIO_GP_5_6, GPIO_GP_5_7,
	GPIO_GP_5_8, GPIO_GP_5_9, GPIO_GP_5_10, GPIO_GP_5_11,
	GPIO_GP_5_12, GPIO_GP_5_13, GPIO_GP_5_14, GPIO_GP_5_15,
	GPIO_GP_5_16, GPIO_GP_5_17, GPIO_GP_5_18, GPIO_GP_5_19,
	GPIO_GP_5_20, GPIO_GP_5_21, GPIO_GP_5_22, GPIO_GP_5_23,
	GPIO_GP_5_24, GPIO_GP_5_25, GPIO_GP_5_26, GPIO_GP_5_27,
	GPIO_GP_5_28, GPIO_GP_5_29, GPIO_GP_5_30, GPIO_GP_5_31,

	GPIO_FN_VI1_DATA7_VI1_B7, GPIO_FN_USB0_PWEN, GPIO_FN_USB0_OVC_VBUS,
	GPIO_FN_USB2_PWEN, GPIO_FN_USB2_OVC, GPIO_FN_AVS1, GPIO_FN_AVS2,
	GPIO_FN_DU_DOTCLKIN0, GPIO_FN_DU_DOTCLKIN2,

	/* IPSR0 */
	GPIO_FN_D0, GPIO_FN_MSIOF3_SCK_B, GPIO_FN_VI3_DATA0, GPIO_FN_VI0_G4, GPIO_FN_VI0_G4_B,
	GPIO_FN_D1, GPIO_FN_MSIOF3_SYNC_B, GPIO_FN_VI3_DATA1, GPIO_FN_VI0_G5, GPIO_FN_VI0_G5_B, 
	GPIO_FN_D2, GPIO_FN_MSIOF3_RXD_B, GPIO_FN_VI3_DATA2, GPIO_FN_VI0_G6, GPIO_FN_VI0_G6_B,
	GPIO_FN_D3, GPIO_FN_MSIOF3_TXD_B, GPIO_FN_VI3_DATA3, GPIO_FN_VI0_G7, GPIO_FN_VI0_G7_B,
	GPIO_FN_D4, GPIO_FN_SCIFB1_RXD_F, GPIO_FN_SCIFB0_RXD_C, GPIO_FN_VI3_DATA4, GPIO_FN_VI0_R0,GPIO_FN_VI0_R0_B, GPIO_FN_RX0_B,
	GPIO_FN_D5, GPIO_FN_SCIFB1_TXD_F, GPIO_FN_SCIFB0_TXD_C, GPIO_FN_VI3_DATA5, GPIO_FN_VI0_R1, GPIO_FN_VI0_R1_B, GPIO_FN_TX0_B,
	GPIO_FN_D6, GPIO_FN_IIC2_SCL_C, GPIO_FN_VI3_DATA6, GPIO_FN_VI0_R2, GPIO_FN_VI0_R2_B, GPIO_FN_I2C2_SCL_C,
	GPIO_FN_D7, GPIO_FN_IIC2_SDA_C, GPIO_FN_VI3_DATA7, GPIO_FN_VI0_R3, GPIO_FN_VI0_R3_B, GPIO_FN_I2C2_SDA_C, GPIO_FN_TCLK1,
	GPIO_FN_D8, GPIO_FN_SCIFA1_SCK_C, GPIO_FN_AVB_TXD0, GPIO_FN_VI0_G0, GPIO_FN_VI0_G0_B, GPIO_FN_VI2_DATA0_VI2_B0,

	/* IPSR1 */
	GPIO_FN_D9, GPIO_FN_SCIFA1_RXD_C, GPIO_FN_AVB_TXD1, GPIO_FN_VI0_G1, GPIO_FN_VI0_G1_B, GPIO_FN_VI2_DATA1_VI2_B1,
	GPIO_FN_D10, GPIO_FN_SCIFA1_TXD_C, GPIO_FN_AVB_TXD2, GPIO_FN_VI0_G2, GPIO_FN_VI0_G2_B, GPIO_FN_VI2_DATA2_VI2_B2,
	GPIO_FN_D11, GPIO_FN_SCIFA1_CTS_N_C, GPIO_FN_AVB_TXD3, GPIO_FN_VI0_G3, GPIO_FN_VI0_G3_B, GPIO_FN_VI2_DATA3_VI2_B3,
	GPIO_FN_D12, GPIO_FN_SCIFA1_RTS_N_C, GPIO_FN_AVB_TXD4, GPIO_FN_VI0_HSYNC_N, GPIO_FN_VI0_HSYNC_N_B, GPIO_FN_VI2_DATA4_VI2_B4,
	GPIO_FN_D13, GPIO_FN_AVB_TXD5, GPIO_FN_VI0_VSYNC_N, GPIO_FN_VI0_VSYNC_N_B, GPIO_FN_VI2_DATA5_VI2_B5,
	GPIO_FN_D14, GPIO_FN_SCIFB1_RXD_C, GPIO_FN_AVB_TXD6, GPIO_FN_RX1_B, GPIO_FN_VI0_CLKENB, GPIO_FN_VI0_CLKENB_B, GPIO_FN_VI2_DATA6_VI2_B6,
	GPIO_FN_D15, GPIO_FN_SCIFB1_TXD_C, GPIO_FN_AVB_TXD7, GPIO_FN_TX1_B, GPIO_FN_VI0_FIELD, GPIO_FN_VI0_FIELD_B, GPIO_FN_VI2_DATA7_VI2_B7,
	GPIO_FN_A0, GPIO_FN_PWM3,
	GPIO_FN_A1, GPIO_FN_PWM4,

	/* IPSR2 */
	GPIO_FN_A2, GPIO_FN_PWM5, GPIO_FN_MSIOF1_SS1_B,
	GPIO_FN_A3, GPIO_FN_PWM6, GPIO_FN_MSIOF1_SS2_B,
	GPIO_FN_A4, GPIO_FN_MSIOF1_TXD_B, GPIO_FN_TPU0TO0,
	GPIO_FN_A5, GPIO_FN_SCIFA1_TXD_B, GPIO_FN_TPU0TO1,
	GPIO_FN_A6, GPIO_FN_SCIFA1_RTS_N_B, GPIO_FN_TPU0TO2,
	GPIO_FN_A7, GPIO_FN_SCIFA1_SCK_B, GPIO_FN_AUDIO_CLKOUT_B, GPIO_FN_TPU0TO3,
	GPIO_FN_A8, GPIO_FN_SCIFA1_RXD_B, GPIO_FN_SSI_SCK5_B, GPIO_FN_VI0_R4, GPIO_FN_VI0_R4_B, GPIO_FN_SCIFB2_RXD_C, GPIO_FN_RX2_B, GPIO_FN_VI2_DATA0_VI2_B0_B,
	GPIO_FN_A9, GPIO_FN_SCIFA1_CTS_N_B, GPIO_FN_SSI_WS5_B, GPIO_FN_VI0_R5, GPIO_FN_VI0_R5_B, GPIO_FN_SCIFB2_TXD_C, GPIO_FN_TX2_B, GPIO_FN_VI2_DATA1_VI2_B1_B,
	GPIO_FN_A10, GPIO_FN_SSI_SDATA5_B, GPIO_FN_MSIOF2_SYNC, GPIO_FN_VI0_R6, GPIO_FN_VI0_R6_B, GPIO_FN_VI2_DATA2_VI2_B2_B,

	/* IPSR3 */
	GPIO_FN_A11, GPIO_FN_SCIFB2_CTS_N_B, GPIO_FN_MSIOF2_SCK, GPIO_FN_VI1_R0, GPIO_FN_VI1_R0_B, GPIO_FN_VI2_G0, GPIO_FN_VI2_DATA3_VI2_B3_B,
	GPIO_FN_A12, GPIO_FN_SCIFB2_RXD_B, GPIO_FN_MSIOF2_TXD, GPIO_FN_VI1_R1, GPIO_FN_VI1_R1_B, GPIO_FN_VI2_G1, GPIO_FN_VI2_DATA4_VI2_B4_B,
	GPIO_FN_A13, GPIO_FN_SCIFB2_RTS_N_B, GPIO_FN_EX_WAIT2, GPIO_FN_MSIOF2_RXD, GPIO_FN_VI1_R2, GPIO_FN_VI1_R2_B, GPIO_FN_VI2_G2, GPIO_FN_VI2_DATA5_VI2_B5_B,
	GPIO_FN_A14, GPIO_FN_SCIFB2_TXD_B, GPIO_FN_ATACS11_N, GPIO_FN_MSIOF2_SS1,
	GPIO_FN_A15, GPIO_FN_SCIFB2_SCK_B, GPIO_FN_ATARD1_N, GPIO_FN_MSIOF2_SS2,
	GPIO_FN_A16, GPIO_FN_ATAWR1_N,
	GPIO_FN_A17, GPIO_FN_ATADIR1_N,
	GPIO_FN_A18, GPIO_FN_ATAG1_N,
	GPIO_FN_A19, GPIO_FN_ATACS01_N, GPIO_FN_EX_WAIT0_B,
	GPIO_FN_A20, GPIO_FN_SPCLK, GPIO_FN_VI1_R3, GPIO_FN_VI1_R3_B, GPIO_FN_VI2_G4,

	/* IPSR4 */
	GPIO_FN_A21, GPIO_FN_MOSI_IO0, GPIO_FN_VI1_R4, GPIO_FN_VI1_R4_B, GPIO_FN_VI2_G5,
	GPIO_FN_A22, GPIO_FN_MISO_IO1, GPIO_FN_VI1_R5, GPIO_FN_VI1_R5_B, GPIO_FN_VI2_G6,
	GPIO_FN_A23, GPIO_FN_IO2, GPIO_FN_VI1_G7, GPIO_FN_VI1_G7_B, GPIO_FN_VI2_G7,
	GPIO_FN_A24, GPIO_FN_IO3, GPIO_FN_VI1_R7, GPIO_FN_VI1_R7_B, GPIO_FN_VI2_CLKENB, GPIO_FN_VI2_CLKENB_B,
	GPIO_FN_A25, GPIO_FN_SSL, GPIO_FN_VI1_G6, GPIO_FN_VI1_G6_B, GPIO_FN_VI2_FIELD, GPIO_FN_VI2_FIELD_B,
	GPIO_FN_CS0_N, GPIO_FN_VI1_R6, GPIO_FN_VI1_R6_B, GPIO_FN_VI2_G3, GPIO_FN_MSIOF0_SS2_B,
	GPIO_FN_CS1_N_A26, GPIO_FN_VI0_R7, GPIO_FN_VI0_R7_B, GPIO_FN_VI2_CLK, GPIO_FN_VI2_CLK_B,
	GPIO_FN_EX_CS0_N, GPIO_FN_HRX1_B, GPIO_FN_VI1_G5, GPIO_FN_VI1_G5_B, GPIO_FN_VI2_R0, GPIO_FN_HTX0_B, GPIO_FN_MSIOF0_SS1_B,
	GPIO_FN_EX_CS1_N, GPIO_FN_GPS_CLK, GPIO_FN_HCTS1_N_B, GPIO_FN_VI1_FIELD, GPIO_FN_VI1_FIELD_B, GPIO_FN_VI2_R1,
	GPIO_FN_EX_CS2_N, GPIO_FN_GPS_SIGN, GPIO_FN_HRTS1_N_B, GPIO_FN_VI3_CLKENB, GPIO_FN_VI1_G0, GPIO_FN_VI1_G0_B, GPIO_FN_VI2_R2,

	/* IPSR5 */
	GPIO_FN_EX_CS3_N, GPIO_FN_VI3_FIELD, GPIO_FN_VI1_G1, GPIO_FN_VI1_G1_B, GPIO_FN_VI2_R3,
	GPIO_FN_EX_CS4_N, GPIO_FN_MSIOF1_SCK_B, GPIO_FN_VI3_HSYNC_N, GPIO_FN_VI2_HSYNC_N, GPIO_FN_IIC1_SCL, GPIO_FN_VI2_HSYNC_N_B, GPIO_FN_I2C1_SCL,
	GPIO_FN_EX_CS5_N, GPIO_FN_CAN0_RX, GPIO_FN_MSIOF1_RXD_B, GPIO_FN_VI3_VSYNC_N, GPIO_FN_VI1_G2, GPIO_FN_VI1_G2_B, GPIO_FN_VI2_R4, GPIO_FN_IIC1_SDA, GPIO_FN_I2C1_SDA,
	GPIO_FN_BS_N, GPIO_FN_HTX1_B, GPIO_FN_CAN1_TX, GPIO_FN_DRACK0,
	GPIO_FN_RD_N, GPIO_FN_CAN0_TX, GPIO_FN_SCIFA0_SCK_B,
	GPIO_FN_RD_WR_N, GPIO_FN_VI1_G3, GPIO_FN_VI1_G3_B, GPIO_FN_VI2_R5, GPIO_FN_SCIFA0_RXD_B,
	GPIO_FN_WE0_N, GPIO_FN_CAN_CLK, GPIO_FN_VI2_VSYNC_N, GPIO_FN_SCIFA0_TXD_B, GPIO_FN_VI2_VSYNC_N_B,
	GPIO_FN_WE1_N, GPIO_FN_CAN1_RX, GPIO_FN_VI1_G4, GPIO_FN_VI1_G4_B, GPIO_FN_VI2_R6, GPIO_FN_SCIFA0_CTS_N_B,
	GPIO_FN_EX_WAIT0, GPIO_FN_IRQ3, GPIO_FN_VI3_CLK, GPIO_FN_SCIFA0_RTS_N_B, GPIO_FN_HRX0_B, GPIO_FN_MSIOF0_SCK_B,
	GPIO_FN_DREQ0_N, GPIO_FN_VI1_HSYNC_N, GPIO_FN_VI1_HSYNC_N_B, GPIO_FN_VI2_R7, GPIO_FN_SSI_SCK78_C, GPIO_FN_SSI_WS78_B,

	/* IPSR6 */
	GPIO_FN_DACK0, GPIO_FN_IRQ0, GPIO_FN_SSI_SCK6_B, GPIO_FN_VI1_VSYNC_N, GPIO_FN_VI1_VSYNC_N_B, GPIO_FN_SSI_WS78_C,
	GPIO_FN_DREQ1_N, GPIO_FN_VI1_CLKENB, GPIO_FN_VI1_CLKENB_B, GPIO_FN_SSI_SDATA7_C, GPIO_FN_SSI_SCK78_B,
	GPIO_FN_DACK1, GPIO_FN_IRQ1, GPIO_FN_SSI_WS6_B, GPIO_FN_SSI_SDATA8_C,
	GPIO_FN_DREQ2_N, GPIO_FN_HSCK1_B, GPIO_FN_HCTS0_N_B, GPIO_FN_MSIOF0_TXD_B,
	GPIO_FN_DACK2, GPIO_FN_IRQ2, GPIO_FN_SSI_SDATA6_B, GPIO_FN_HRTS0_N_B, GPIO_FN_MSIOF0_RXD_B,
	GPIO_FN_ETH_CRS_DV, GPIO_FN_IIC2_SCL_E, GPIO_FN_I2C2_SCL_E,
	GPIO_FN_ETH_RX_ER, GPIO_FN_IIC2_SDA_E, GPIO_FN_I2C2_SDA_E,
	GPIO_FN_ETH_RXD0, GPIO_FN_SCIFB1_SCK_G, GPIO_FN_SCK1_E,
	GPIO_FN_ETH_RXD1, GPIO_FN_HRX0_E, GPIO_FN_SCIFB1_RXD_G, GPIO_FN_RX1_E,
	GPIO_FN_ETH_LINK, GPIO_FN_HTX0_E, GPIO_FN_SCIFB1_TXD_G, GPIO_FN_TX1_E,
	GPIO_FN_ETH_REF_CLK,  GPIO_FN_HCTS0_N_E, GPIO_FN_HRX0_F,

	/* IPSR7 */
	GPIO_FN_ETH_MDIO, GPIO_FN_HRTS0_N_E, GPIO_FN_HCTS0_N_F,
	GPIO_FN_ETH_TXD1, GPIO_FN_HTX0_F,
	GPIO_FN_ETH_TX_EN, GPIO_FN_HRTS0_N_F,
	GPIO_FN_ETH_MAGIC,
	GPIO_FN_ETH_TXD0,
	GPIO_FN_ETH_MDC,
	GPIO_FN_PWM0, GPIO_FN_SCIFA2_SCK_C,
	GPIO_FN_PWM1, GPIO_FN_SCIFA2_TXD_C,
	GPIO_FN_PWM2, GPIO_FN_SCIFA2_RXD_C,
	GPIO_FN_DU_DOTCLKIN1, GPIO_FN_AUDIO_CLKC, GPIO_FN_AUDIO_CLKOUT_C,
	GPIO_FN_VI0_CLK, GPIO_FN_ATACS00_N, GPIO_FN_AVB_RXD1,
	GPIO_FN_VI0_DATA0_VI0_B0, GPIO_FN_ATACS10_N, GPIO_FN_AVB_RXD2,

	/* IPSR8 */
	GPIO_FN_VI0_DATA1_VI0_B1, GPIO_FN_ATARD0_N, GPIO_FN_AVB_RXD3,
	GPIO_FN_VI0_DATA2_VI0_B2, GPIO_FN_ATAWR0_N, GPIO_FN_AVB_RXD4,
	GPIO_FN_VI0_DATA3_VI0_B3, GPIO_FN_ATADIR0_N,GPIO_FN_AVB_RXD5,
	GPIO_FN_VI0_DATA4_VI0_B4, GPIO_FN_ATAG0_N, GPIO_FN_AVB_RXD6,
	GPIO_FN_VI0_DATA5_VI0_B5, GPIO_FN_EX_WAIT1, GPIO_FN_AVB_RXD7,
	GPIO_FN_VI0_DATA6_VI0_B6, GPIO_FN_AVB_RX_ER,
	GPIO_FN_VI0_DATA7_VI0_B7, GPIO_FN_AVB_RX_CLK,
	GPIO_FN_VI1_CLK, GPIO_FN_AVB_RX_DV,
	GPIO_FN_VI1_DATA0_VI1_B0, GPIO_FN_SCIFA1_SCK_D, GPIO_FN_AVB_CRS,
	GPIO_FN_VI1_DATA1_VI1_B1, GPIO_FN_SCIFA1_RXD_D, GPIO_FN_AVB_MDC,
	GPIO_FN_VI1_DATA2_VI1_B2, GPIO_FN_SCIFA1_TXD_D, GPIO_FN_AVB_MDIO,
	GPIO_FN_VI1_DATA3_VI1_B3, GPIO_FN_SCIFA1_CTS_N_D, GPIO_FN_AVB_GTX_CLK,
	GPIO_FN_VI1_DATA4_VI1_B4, GPIO_FN_SCIFA1_RTS_N_D, GPIO_FN_AVB_MAGIC,
	GPIO_FN_VI1_DATA5_VI1_B5, GPIO_FN_AVB_PHY_INT,
	GPIO_FN_VI1_DATA6_VI1_B6, GPIO_FN_AVB_GTXREFCLK,
	GPIO_FN_SD0_CLK, GPIO_FN_VI1_DATA0_VI1_B0_B,
	GPIO_FN_SD0_CMD, GPIO_FN_SCIFB1_SCK_B, GPIO_FN_VI1_DATA1_VI1_B1_B,

	/* IPSR9 */
	GPIO_FN_SD0_DAT0, GPIO_FN_SCIFB1_RXD_B, GPIO_FN_VI1_DATA2_VI1_B2_B,
	GPIO_FN_SD0_DAT1, GPIO_FN_SCIFB1_TXD_B, GPIO_FN_VI1_DATA3_VI1_B3_B,
	GPIO_FN_SD0_DAT2, GPIO_FN_SCIFB1_CTS_N_B, GPIO_FN_VI1_DATA4_VI1_B4_B,
	GPIO_FN_SD0_DAT3, GPIO_FN_SCIFB1_RTS_N_B, GPIO_FN_VI1_DATA5_VI1_B5_B,
	GPIO_FN_SD0_CD, GPIO_FN_MMC0_D6, GPIO_FN_VI1_DATA6_VI1_B6_B, GPIO_FN_IIC1_SCL_B, GPIO_FN_I2C1_SCL_B, GPIO_FN_VI2_DATA6_VI2_B6_B,
	GPIO_FN_SD0_WP, GPIO_FN_MMC0_D7, GPIO_FN_VI1_DATA7_VI1_B7_B, GPIO_FN_IIC1_SDA_B, GPIO_FN_I2C1_SDA_B, GPIO_FN_VI2_DATA7_VI2_B7_B,
	GPIO_FN_SD1_CLK, GPIO_FN_AVB_TX_EN,
	GPIO_FN_SD1_CMD, GPIO_FN_AVB_TX_ER, GPIO_FN_SCIFB0_SCK_B,
	GPIO_FN_SD1_DAT0, GPIO_FN_AVB_TX_CLK, GPIO_FN_SCIFB0_RXD_B,
	GPIO_FN_SD1_DAT1, GPIO_FN_AVB_LINK, GPIO_FN_SCIFB0_TXD_B,
	GPIO_FN_SD1_DAT2, GPIO_FN_AVB_COL, GPIO_FN_SCIFB0_CTS_N_B,
	GPIO_FN_SD1_DAT3, GPIO_FN_AVB_RXD0, GPIO_FN_SCIFB0_RTS_N_B,
	GPIO_FN_SD1_CD, GPIO_FN_MMC1_D6, GPIO_FN_VI0_CLK_B, GPIO_FN_IIC2_SCL_D, GPIO_FN_I2C2_SCL_D, GPIO_FN_VI3_CLK_B,

	/* IPSR10 */
	GPIO_FN_SD1_WP, GPIO_FN_MMC1_D7, GPIO_FN_VI1_CLK_B, GPIO_FN_IIC2_SDA_D, GPIO_FN_I2C2_SDA_D,
	GPIO_FN_SD2_CLK, GPIO_FN_MMC0_CLK, GPIO_FN_VI0_DATA0_VI0_B0_B, GPIO_FN_VI3_DATA0_B,
	GPIO_FN_SD2_CMD, GPIO_FN_MMC0_CMD, GPIO_FN_VI0_DATA1_VI0_B1_B, GPIO_FN_SCIFB1_SCK_E, GPIO_FN_SCK1_D, GPIO_FN_VI3_DATA1_B,
	GPIO_FN_SD2_DAT0, GPIO_FN_MMC0_D0, GPIO_FN_VI0_DATA2_VI0_B2_B, GPIO_FN_SCIFB1_RXD_E, GPIO_FN_RX1_D, GPIO_FN_VI3_DATA2_B,
	GPIO_FN_SD2_DAT1, GPIO_FN_MMC0_D1, GPIO_FN_VI0_DATA3_VI0_B3_B, GPIO_FN_SCIFB1_TXD_E, GPIO_FN_TX1_D, GPIO_FN_VI3_DATA3_B,
	GPIO_FN_SD2_DAT2, GPIO_FN_MMC0_D2, GPIO_FN_VI0_DATA4_VI0_B4_B, GPIO_FN_HRX0_D, GPIO_FN_VI3_DATA4_B,
	GPIO_FN_SD2_DAT3, GPIO_FN_MMC0_D3, GPIO_FN_VI0_DATA5_VI0_B5_B, GPIO_FN_HTX0_D, GPIO_FN_VI3_DATA5_B,
	GPIO_FN_SD2_CD, GPIO_FN_MMC0_D4, GPIO_FN_VI0_DATA6_VI0_B6_B, GPIO_FN_HCTS0_N_D,GPIO_FN_VI3_DATA6_B,

	/* IPSR11 */
	GPIO_FN_SD2_WP, GPIO_FN_MMC0_D5, GPIO_FN_VI0_DATA7_VI0_B7_B, GPIO_FN_HRTS0_N_D, GPIO_FN_VI3_DATA7_B,
	GPIO_FN_SD3_CLK, GPIO_FN_MMC1_CLK,
	GPIO_FN_SD3_CMD, GPIO_FN_MMC1_CMD,
	GPIO_FN_SD3_DAT0, GPIO_FN_MMC1_D0,
	GPIO_FN_SD3_DAT1, GPIO_FN_MMC1_D1,
	GPIO_FN_SD3_DAT2, GPIO_FN_MMC1_D2,
	GPIO_FN_SD3_DAT3, GPIO_FN_MMC1_D3,
	GPIO_FN_SD3_CD, GPIO_FN_MMC1_D4,
	GPIO_FN_SD3_WP, GPIO_FN_MMC1_D5,
	GPIO_FN_IIC2_SCL_B, GPIO_FN_I2C2_SCL_B,
	GPIO_FN_SCIFB1_RXD_D, GPIO_FN_RX1_C, GPIO_FN_IIC2_SDA_B, GPIO_FN_I2C2_SDA_B,
	GPIO_FN_SCIFB1_TXD_D, GPIO_FN_TX1_C,
	GPIO_FN_SSI_SCK0129, GPIO_FN_CAN_CLK_B,

	/* IPSR12 */
	GPIO_FN_SSI_WS0129, GPIO_FN_CAN0_TX_B,
	GPIO_FN_SSI_SDATA0, GPIO_FN_CAN0_RX_B,
	GPIO_FN_SSI_SDATA1, GPIO_FN_CAN1_TX_B,
	GPIO_FN_SSI_SDATA2, GPIO_FN_CAN1_RX_B, GPIO_FN_SSI_SCK1,
	GPIO_FN_SSI_SCK34, GPIO_FN_SCIFB0_SCK, GPIO_FN_MSIOF1_SCK, 
	GPIO_FN_SSI_WS34, GPIO_FN_SCIFB0_RXD, GPIO_FN_MSIOF1_SYNC,
	GPIO_FN_SSI_SDATA3, GPIO_FN_SCIFB0_TXD, GPIO_FN_MSIOF1_SS1, 
	GPIO_FN_SSI_SCK4, GPIO_FN_SCIFB0_CTS_N, GPIO_FN_MSIOF1_SS2, GPIO_FN_SSI_SCK5_C,
	GPIO_FN_SSI_WS4, GPIO_FN_SCIFB0_RTS_N, GPIO_FN_MSIOF1_TXD, GPIO_FN_SSI_WS5_C,
	GPIO_FN_SSI_SDATA4, GPIO_FN_MSIOF1_RXD,
	GPIO_FN_SSI_SCK5, GPIO_FN_SCIFB1_SCK, GPIO_FN_DU2_EXHSYNC_DU2_HSYNC,
	GPIO_FN_SSI_WS5, GPIO_FN_SCIFB1_RXD, GPIO_FN_DU2_EXVSYNC_DU2_VSYNC,

	/* IPSR13 */
	GPIO_FN_SSI_SDATA5, GPIO_FN_SCIFB1_TXD, GPIO_FN_DU2_DR2,
	GPIO_FN_SSI_SCK6, GPIO_FN_SCIFB1_CTS_N, GPIO_FN_DU2_DR3, 
	GPIO_FN_SSI_WS6, GPIO_FN_SCIFB1_RTS_N, GPIO_FN_CAN0_TX_D, GPIO_FN_DU2_DR4,
	GPIO_FN_SSI_SDATA6, GPIO_FN_DU2_DR5,
	GPIO_FN_SSI_SCK78, GPIO_FN_SCK1, GPIO_FN_SCIFA1_SCK, GPIO_FN_DU2_DR6,
	GPIO_FN_SSI_WS78, GPIO_FN_SCIFB2_SCK, GPIO_FN_SCIFA2_CTS_N, GPIO_FN_DU2_DR7,
	GPIO_FN_SSI_SDATA7, GPIO_FN_SCIFB2_RXD, GPIO_FN_SCIFA2_RTS_N, GPIO_FN_TCLK2, GPIO_FN_SSI_SDATA7_B, 
	GPIO_FN_SSI_SDATA8, GPIO_FN_SCIFB2_TXD, GPIO_FN_CAN0_TX_C, GPIO_FN_SSI_SDATA8_B, 
	GPIO_FN_SSI_SDATA9, 	GPIO_FN_SCIFB2_CTS_N, GPIO_FN_SSI_WS1, GPIO_FN_SSI_SDATA5_C, 
	GPIO_FN_AUDIO_CLKA, GPIO_FN_SCIFB2_RTS_N,

	/* IPSR14 */
	GPIO_FN_AUDIO_CLKB, GPIO_FN_SCIF_CLK, GPIO_FN_CAN0_RX_D, GPIO_FN_DVC_MUTE, GPIO_FN_CAN0_RX_C, 
	GPIO_FN_SCIFA0_SCK, GPIO_FN_HSCK1, GPIO_FN_SCK0, GPIO_FN_MSIOF3_SS2, GPIO_FN_DU2_DG2, GPIO_FN_IIC1_SDA_C, GPIO_FN_I2C1_SDA_C, 
	GPIO_FN_SCIFA0_RXD, GPIO_FN_HRX1, GPIO_FN_RX0,	GPIO_FN_DU2_DR0, 
	GPIO_FN_SCIFA0_TXD, GPIO_FN_HTX1,	GPIO_FN_TX0, GPIO_FN_DU2_DR1, 
	GPIO_FN_SCIFA0_CTS_N, GPIO_FN_HCTS1_N, GPIO_FN_CTS0_N, GPIO_FN_MSIOF3_SYNC, GPIO_FN_DU2_DG3, GPIO_FN_PWM0_B, GPIO_FN_IIC1_SCL_C, GPIO_FN_I2C1_SCL_C,
	GPIO_FN_SCIFA0_RTS_N, GPIO_FN_HRTS1_N, GPIO_FN_RTS0_N,	GPIO_FN_MSIOF3_SS1, GPIO_FN_DU2_DG0, GPIO_FN_PWM1_B,
	GPIO_FN_SCIFA1_RXD, GPIO_FN_RX1, GPIO_FN_DU2_EXODDF_DU2_ODDF_DISP_CDE,
	GPIO_FN_SCIFA1_TXD, GPIO_FN_TX1, GPIO_FN_DU2_DG1,
	GPIO_FN_SCIFA1_CTS_N, GPIO_FN_CTS1_N, GPIO_FN_MSIOF3_RXD, GPIO_FN_DU0_DOTCLKOUT,
	GPIO_FN_SCIFA1_RTS_N, GPIO_FN_RTS1_N, GPIO_FN_MSIOF3_TXD, GPIO_FN_DU1_DOTCLKOUT, GPIO_FN_HRTS0_N_C,

	/* IPSR15 */
	GPIO_FN_SCIFA2_SCK, GPIO_FN_SCK2, GPIO_FN_MSIOF3_SCK, GPIO_FN_DU2_DG7, GPIO_FN_SCIF_CLK_B, 
	GPIO_FN_SCIFA2_RXD, GPIO_FN_TX2, GPIO_FN_DU2_DB0, GPIO_FN_IIC2_SCL, GPIO_FN_I2C2_SCL,
	GPIO_FN_SCIFA2_TXD, GPIO_FN_RX2, GPIO_FN_DU2_DB1, GPIO_FN_IIC2_SDA, GPIO_FN_I2C2_SDA, 
	GPIO_FN_HSCK0, GPIO_FN_DU2_DG4, GPIO_FN_HCTS0_N_C, 
	GPIO_FN_HRX0, GPIO_FN_DU2_DB2, 
	GPIO_FN_HTX0, GPIO_FN_DU2_DB3,
	GPIO_FN_HCTS0_N, GPIO_FN_SSI_SCK9, GPIO_FN_DU2_DB4,
	GPIO_FN_HRTS0_N, GPIO_FN_SSI_WS9, GPIO_FN_DU2_DB5,
	GPIO_FN_MSIOF0_SCK, GPIO_FN_DU2_DB6, 
	GPIO_FN_MSIOF0_SYNC, GPIO_FN_SSI_SCK2, GPIO_FN_DU2_DB7, GPIO_FN_HRX0_C, 
	GPIO_FN_MSIOF0_SS1, GPIO_FN_DU2_DG5, 
	GPIO_FN_MSIOF0_TXD, GPIO_FN_DU2_DG6,

	/* IPSR16 */
	GPIO_FN_MSIOF0_SS2, GPIO_FN_AUDIO_CLKOUT, GPIO_FN_DU2_DISP, GPIO_FN_HTX0_C, GPIO_FN_SCIFA2_TXD_B,
	GPIO_FN_MSIOF0_RXD, GPIO_FN_SSI_WS2, GPIO_FN_DU2_CDE, GPIO_FN_SCIFA2_RXD_B,
	GPIO_FN_USB1_PWEN, GPIO_FN_AUDIO_CLKOUT_D, 
	GPIO_FN_USB1_OVC, GPIO_FN_TCLK1_B,
};

#endif /* __ASM_IWG21M_H__ */
