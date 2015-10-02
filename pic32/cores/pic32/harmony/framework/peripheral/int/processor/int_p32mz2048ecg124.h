/* Created by plibgen $Revision: 1.31 $ */

#ifndef _INT_P32MZ2048ECG124_H
#define _INT_P32MZ2048ECG124_H

/* Section 1 - Enumerate instances, define constants, VREGs */

#include <xc.h>
#include <stdbool.h>

#include "peripheral/peripheral_common_32bit.h"

/* Default definition used for all API dispatch functions */
#ifndef PLIB_INLINE_API
    #define PLIB_INLINE_API extern inline
#endif

/* Default definition used for all other functions */
#ifndef PLIB_INLINE
    #define PLIB_INLINE extern inline
#endif

typedef enum {

    INT_ID_0 = 0,
    INT_NUMBER_OF_MODULES

} INT_MODULE_ID;

typedef enum {

    INT_EXTERNAL_INT_SOURCE0 = 0x01,
    INT_EXTERNAL_INT_SOURCE1 = 0x02,
    INT_EXTERNAL_INT_SOURCE2 = 0x04,
    INT_EXTERNAL_INT_SOURCE3 = 0x08,
    INT_EXTERNAL_INT_SOURCE4 = 0x10

} INT_EXTERNAL_SOURCES;

typedef enum {

    INT_DISABLE_INTERRUPT = 0,
    INT_PRIORITY_LEVEL1 = 1,
    INT_PRIORITY_LEVEL2 = 2,
    INT_PRIORITY_LEVEL3 = 3,
    INT_PRIORITY_LEVEL4 = 4,
    INT_PRIORITY_LEVEL5 = 5,
    INT_PRIORITY_LEVEL6 = 6,
    INT_PRIORITY_LEVEL7 = 7

} INT_PRIORITY_LEVEL;

typedef enum {

    INT_SUBPRIORITY_LEVEL0 = 0x00,
    INT_SUBPRIORITY_LEVEL1 = 0x01,
    INT_SUBPRIORITY_LEVEL2 = 0x02,
    INT_SUBPRIORITY_LEVEL3 = 0x03

} INT_SUBPRIORITY_LEVEL;

typedef enum {

    INT_SOURCE_TIMER_CORE = 0,
    INT_SOURCE_SOFTWARE_0 = 1,
    INT_SOURCE_SOFTWARE_1 = 2,
    INT_SOURCE_EXTERNAL_0 = 3,
    INT_SOURCE_TIMER_1 = 4,
    INT_SOURCE_INPUT_CAPTURE_1_ERROR = 5,
    INT_SOURCE_INPUT_CAPTURE_1 = 6,
    INT_SOURCE_OUTPUT_COMPARE_1 = 7,
    INT_SOURCE_EXTERNAL_1 = 8,
    INT_SOURCE_TIMER_2 = 9,
    INT_SOURCE_INPUT_CAPTURE_2_ERROR = 10,
    INT_SOURCE_INPUT_CAPTURE_2 = 11,
    INT_SOURCE_OUTPUT_COMPARE_2 = 12,
    INT_SOURCE_EXTERNAL_2 = 13,
    INT_SOURCE_TIMER_3 = 14,
    INT_SOURCE_INPUT_CAPTURE_3_ERROR = 15,
    INT_SOURCE_INPUT_CAPTURE_3 = 16,
    INT_SOURCE_OUTPUT_COMPARE_3 = 17,
    INT_SOURCE_EXTERNAL_3 = 18,
    INT_SOURCE_TIMER_4 = 19,
    INT_SOURCE_INPUT_CAPTURE_4_ERROR = 20,
    INT_SOURCE_INPUT_CAPTURE_4 = 21,
    INT_SOURCE_OUTPUT_COMPARE_4 = 22,
    INT_SOURCE_EXTERNAL_4 = 23,
    INT_SOURCE_TIMER_5 = 24,
    INT_SOURCE_INPUT_CAPTURE_5_ERROR = 25,
    INT_SOURCE_INPUT_CAPTURE_5 = 26,
    INT_SOURCE_OUTPUT_COMPARE_5 = 27,
    INT_SOURCE_TIMER_6 = 28,
    INT_SOURCE_INPUT_CAPTURE_6_ERROR = 29,
    INT_SOURCE_INPUT_CAPTURE_6 = 30,
    INT_SOURCE_OUTPUT_COMPARE_6 = 31,
    INT_SOURCE_TIMER_7 = 32,
    INT_SOURCE_INPUT_CAPTURE_7_ERROR = 33,
    INT_SOURCE_INPUT_CAPTURE_7 = 34,
    INT_SOURCE_OUTPUT_COMPARE_7 = 35,
    INT_SOURCE_TIMER_8 = 36,
    INT_SOURCE_INPUT_CAPTURE_8_ERROR = 37,
    INT_SOURCE_INPUT_CAPTURE_8 = 38,
    INT_SOURCE_OUTPUT_COMPARE_8 = 39,
    INT_SOURCE_TIMER_9 = 40,
    INT_SOURCE_INPUT_CAPTURE_9_ERROR = 41,
    INT_SOURCE_INPUT_CAPTURE_9 = 42,
    INT_SOURCE_OUTPUT_COMPARE_9 = 43,
    INT_SOURCE_ADC_1 = 44,
    INT_SOURCE_ADC_1_DC1 = 46,
    INT_SOURCE_ADC_1_DC2 = 47,
    INT_SOURCE_ADC_1_DC3 = 48,
    INT_SOURCE_ADC_1_DC4 = 49,
    INT_SOURCE_ADC_1_DC5 = 50,
    INT_SOURCE_ADC_1_DC6 = 51,
    INT_SOURCE_ADC_1_DF1 = 52,
    INT_SOURCE_ADC_1_DF2 = 53,
    INT_SOURCE_ADC_1_DF3 = 54,
    INT_SOURCE_ADC_1_DF4 = 55,
    INT_SOURCE_ADC_1_DF5 = 56,
    INT_SOURCE_ADC_1_DF6 = 57,
    INT_SOURCE_ADC_1_DATA0 = 59,
    INT_SOURCE_ADC_1_DATA1 = 60,
    INT_SOURCE_ADC_1_DATA2 = 61,
    INT_SOURCE_ADC_1_DATA3 = 62,
    INT_SOURCE_ADC_1_DATA4 = 63,
    INT_SOURCE_ADC_1_DATA5 = 64,
    INT_SOURCE_ADC_1_DATA6 = 65,
    INT_SOURCE_ADC_1_DATA7 = 66,
    INT_SOURCE_ADC_1_DATA8 = 67,
    INT_SOURCE_ADC_1_DATA9 = 68,
    INT_SOURCE_ADC_1_DATA10 = 69,
    INT_SOURCE_ADC_1_DATA11 = 70,
    INT_SOURCE_ADC_1_DATA12 = 71,
    INT_SOURCE_ADC_1_DATA13 = 72,
    INT_SOURCE_ADC_1_DATA14 = 73,
    INT_SOURCE_ADC_1_DATA15 = 74,
    INT_SOURCE_ADC_1_DATA16 = 75,
    INT_SOURCE_ADC_1_DATA17 = 76,
    INT_SOURCE_ADC_1_DATA18 = 77,
    INT_SOURCE_ADC_1_DATA19 = 78,
    INT_SOURCE_ADC_1_DATA20 = 79,
    INT_SOURCE_ADC_1_DATA21 = 80,
    INT_SOURCE_ADC_1_DATA22 = 81,
    INT_SOURCE_ADC_1_DATA23 = 82,
    INT_SOURCE_ADC_1_DATA24 = 83,
    INT_SOURCE_ADC_1_DATA25 = 84,
    INT_SOURCE_ADC_1_DATA26 = 85,
    INT_SOURCE_ADC_1_DATA27 = 86,
    INT_SOURCE_ADC_1_DATA28 = 87,
    INT_SOURCE_ADC_1_DATA29 = 88,
    INT_SOURCE_ADC_1_DATA30 = 89,
    INT_SOURCE_ADC_1_DATA31 = 90,
    INT_SOURCE_ADC_1_DATA32 = 91,
    INT_SOURCE_ADC_1_DATA33 = 92,
    INT_SOURCE_ADC_1_DATA34 = 93,
    INT_SOURCE_ADC_1_DATA35 = 94,
    INT_SOURCE_ADC_1_DATA36 = 95,
    INT_SOURCE_ADC_1_DATA37 = 96,
    INT_SOURCE_ADC_1_DATA38 = 97,
    INT_SOURCE_ADC_1_DATA39 = 98,
    INT_SOURCE_ADC_1_DATA40 = 99,
    INT_SOURCE_ADC_1_DATA41 = 100,
    INT_SOURCE_ADC_1_DATA42 = 101,
    INT_SOURCE_ADC_1_DATA43 = 102,
    INT_SOURCE_ADC_1_DATA44 = 103,
    INT_SOURCE_CORE_PERF_COUNT = 104,
    INT_SOURCE_FAST_DEBUG = 105,
    INT_SOURCE_SYSTEM_BUS_PROTECTION = 106,
    INT_SOURCE_SPI_1_ERROR = 109,
    INT_SOURCE_SPI_1_RECEIVE = 110,
    INT_SOURCE_SPI_1_TRANSMIT = 111,
    INT_SOURCE_USART_1_ERROR = 112,
    INT_SOURCE_USART_1_RECEIVE = 113,
    INT_SOURCE_USART_1_TRANSMIT = 114,
    INT_SOURCE_I2C_1_BUS = 115,
    INT_SOURCE_I2C_1_SLAVE = 116,
    INT_SOURCE_I2C_1_MASTER = 117,
    INT_SOURCE_CHANGE_NOTICE_A = 118,
    INT_SOURCE_CHANGE_NOTICE_B = 119,
    INT_SOURCE_CHANGE_NOTICE_C = 120,
    INT_SOURCE_CHANGE_NOTICE_D = 121,
    INT_SOURCE_CHANGE_NOTICE_E = 122,
    INT_SOURCE_CHANGE_NOTICE_F = 123,
    INT_SOURCE_CHANGE_NOTICE_G = 124,
    INT_SOURCE_CHANGE_NOTICE_H = 125,
    INT_SOURCE_CHANGE_NOTICE_J = 126,
    INT_SOURCE_PARALLEL_PORT = 128,
    INT_SOURCE_PARALLEL_PORT_ERROR = 129,
    INT_SOURCE_COMPARATOR_1 = 130,
    INT_SOURCE_COMPARATOR_2 = 131,
    INT_SOURCE_USB_1 = 132,
    INT_SOURCE_USB_1_DMA = 133,
    INT_SOURCE_DMA_0 = 134,
    INT_SOURCE_DMA_1 = 135,
    INT_SOURCE_DMA_2 = 136,
    INT_SOURCE_DMA_3 = 137,
    INT_SOURCE_DMA_4 = 138,
    INT_SOURCE_DMA_5 = 139,
    INT_SOURCE_DMA_6 = 140,
    INT_SOURCE_DMA_7 = 141,
    INT_SOURCE_SPI_2_ERROR = 142,
    INT_SOURCE_SPI_2_RECEIVE = 143,
    INT_SOURCE_SPI_2_TRANSMIT = 144,
    INT_SOURCE_USART_2_ERROR = 145,
    INT_SOURCE_USART_2_RECEIVE = 146,
    INT_SOURCE_USART_2_TRANSMIT = 147,
    INT_SOURCE_I2C_2_BUS = 148,
    INT_SOURCE_I2C_2_SLAVE = 149,
    INT_SOURCE_I2C_2_MASTER = 150,
    INT_SOURCE_ETH_1 = 153,
    INT_SOURCE_SPI_3_ERROR = 154,
    INT_SOURCE_SPI_3_RECEIVE = 155,
    INT_SOURCE_SPI_3_TRANSMIT = 156,
    INT_SOURCE_USART_3_ERROR = 157,
    INT_SOURCE_USART_3_RECEIVE = 158,
    INT_SOURCE_USART_3_TRANSMIT = 159,
    INT_SOURCE_I2C_3_BUS = 160,
    INT_SOURCE_I2C_3_SLAVE = 161,
    INT_SOURCE_I2C_3_MASTER = 162,
    INT_SOURCE_SPI_4_ERROR = 163,
    INT_SOURCE_SPI_4_RECEIVE = 164,
    INT_SOURCE_SPI_4_TRANSMIT = 165,
    INT_SOURCE_USART_4_ERROR = 170,
    INT_SOURCE_USART_4_RECEIVE = 171,
    INT_SOURCE_USART_4_TRANSMIT = 172,
    INT_SOURCE_I2C_4_BUS = 173,
    INT_SOURCE_I2C_4_SLAVE = 174,
    INT_SOURCE_I2C_5_MASTER = 184,
    INT_SOURCE_SPI_5_ERROR = 176,
    INT_SOURCE_SPI_5_RECEIVE = 177,
    INT_SOURCE_SPI_5_TRANSMIT = 178,
    INT_SOURCE_USART_5_ERROR = 179,
    INT_SOURCE_USART_5_RECEIVE = 180,
    INT_SOURCE_USART_5_TRANSMIT = 181,
    INT_SOURCE_I2C_5_BUS = 182,
    INT_SOURCE_I2C_5_SLAVE = 183,
    INT_SOURCE_SPI_6_ERROR = 185,
    INT_SOURCE_SPI_6_RECEIVE = 186,
    INT_SOURCE_SPI_6_TRANSMIT = 187,
    INT_SOURCE_USART_6_ERROR = 188,
    INT_SOURCE_USART_6_RECEIVE = 189,
    INT_SOURCE_USART_6_TRANSMIT = 190,
    INT_SOURCE_RTCC = 166,
    INT_SOURCE_FLASH_CONTROL = 167,
    INT_SOURCE_PREFETCH = 168,
    INT_SOURCE_SQI1 = 169,
    INT_SOURCE_I2C_4_MASTER = 175

} INT_SOURCE;

typedef enum {

    INT_VECTOR_CT = _CORE_TIMER_VECTOR,
    INT_VECTOR_CS0 = _CORE_SOFTWARE_0_VECTOR,
    INT_VECTOR_CS1 = _CORE_SOFTWARE_1_VECTOR,
    INT_VECTOR_INT0 = _EXTERNAL_0_VECTOR,
    INT_VECTOR_T1 = _TIMER_1_VECTOR,
    INT_VECTOR_IC1 = _INPUT_CAPTURE_1_VECTOR,
    INT_VECTOR_IC1_ERROR = _INPUT_CAPTURE_1_ERROR_VECTOR,
    INT_VECTOR_OC1 = _OUTPUT_COMPARE_1_VECTOR,
    INT_VECTOR_INT1 = _EXTERNAL_1_VECTOR,
    INT_VECTOR_T2 = _TIMER_2_VECTOR,
    INT_VECTOR_IC2 = _INPUT_CAPTURE_2_VECTOR,
    INT_VECTOR_IC2_ERROR = _INPUT_CAPTURE_2_ERROR_VECTOR,
    INT_VECTOR_OC2 = _OUTPUT_COMPARE_2_VECTOR,
    INT_VECTOR_INT2 = _EXTERNAL_2_VECTOR,
    INT_VECTOR_T3 = _TIMER_3_VECTOR,
    INT_VECTOR_IC3 = _INPUT_CAPTURE_3_VECTOR,
    INT_VECTOR_IC3_ERROR = _INPUT_CAPTURE_3_ERROR_VECTOR,
    INT_VECTOR_OC3 = _OUTPUT_COMPARE_3_VECTOR,
    INT_VECTOR_INT3 = _EXTERNAL_3_VECTOR,
    INT_VECTOR_T4 = _TIMER_4_VECTOR,
    INT_VECTOR_IC4 = _INPUT_CAPTURE_4_VECTOR,
    INT_VECTOR_IC4_ERROR = _INPUT_CAPTURE_4_ERROR_VECTOR,
    INT_VECTOR_OC4 = _OUTPUT_COMPARE_4_VECTOR,
    INT_VECTOR_INT4 = _EXTERNAL_4_VECTOR,
    INT_VECTOR_T5 = _TIMER_5_VECTOR,
    INT_VECTOR_IC5 = _INPUT_CAPTURE_5_VECTOR,
    INT_VECTOR_IC5_ERROR = _INPUT_CAPTURE_5_ERROR_VECTOR,
    INT_VECTOR_OC5 = _OUTPUT_COMPARE_5_VECTOR,
    INT_VECTOR_T6 = _TIMER_6_VECTOR,
    INT_VECTOR_IC6_ERROR = _INPUT_CAPTURE_6_ERROR_VECTOR,
    INT_VECTOR_IC6 = _INPUT_CAPTURE_6_VECTOR,
    INT_VECTOR_OC6 = _OUTPUT_COMPARE_6_VECTOR,
    INT_VECTOR_T7 = _TIMER_7_VECTOR,
    INT_VECTOR_IC7_ERROR = _INPUT_CAPTURE_7_ERROR_VECTOR,
    INT_VECTOR_IC7 = _INPUT_CAPTURE_7_VECTOR,
    INT_VECTOR_OC7 = _OUTPUT_COMPARE_7_VECTOR,
    INT_VECTOR_T8 = _TIMER_8_VECTOR,
    INT_VECTOR_IC8_ERROR = _INPUT_CAPTURE_8_ERROR_VECTOR,
    INT_VECTOR_IC8 = _INPUT_CAPTURE_8_VECTOR,
    INT_VECTOR_OC8 = _OUTPUT_COMPARE_8_VECTOR,
    INT_VECTOR_T9 = _TIMER_9_VECTOR,
    INT_VECTOR_IC9_ERROR = _INPUT_CAPTURE_9_ERROR_VECTOR,
    INT_VECTOR_IC9 = _INPUT_CAPTURE_9_VECTOR,
    INT_VECTOR_OC9 = _OUTPUT_COMPARE_9_VECTOR,
    INT_VECTOR_ADC1 = _ADC1_VECTOR,
    INT_VECTOR_ADC1_DC1 = _ADC1_DC1_VECTOR,
    INT_VECTOR_ADC1_DC2 = _ADC1_DC2_VECTOR,
    INT_VECTOR_ADC1_DC3 = _ADC1_DC3_VECTOR,
    INT_VECTOR_ADC1_DC4 = _ADC1_DC4_VECTOR,
    INT_VECTOR_ADC1_DC5 = _ADC1_DC5_VECTOR,
    INT_VECTOR_ADC1_DC6 = _ADC1_DC6_VECTOR,
    INT_VECTOR_ADC1_DF1 = _ADC1_DF1_VECTOR,
    INT_VECTOR_ADC1_DF2 = _ADC1_DF2_VECTOR,
    INT_VECTOR_ADC1_DF3 = _ADC1_DF3_VECTOR,
    INT_VECTOR_ADC1_DF4 = _ADC1_DF4_VECTOR,
    INT_VECTOR_ADC1_DF5 = _ADC1_DF5_VECTOR,
    INT_VECTOR_ADC1_DF6 = _ADC1_DF6_VECTOR,
    INT_VECTOR_ADC1_DATA0 = _ADC1_DATA0_VECTOR,
    INT_VECTOR_ADC1_DATA1 = _ADC1_DATA1_VECTOR,
    INT_VECTOR_ADC1_DATA2 = _ADC1_DATA2_VECTOR,
    INT_VECTOR_ADC1_DATA3 = _ADC1_DATA3_VECTOR,
    INT_VECTOR_ADC1_DATA4 = _ADC1_DATA4_VECTOR,
    INT_VECTOR_ADC1_DATA5 = _ADC1_DATA5_VECTOR,
    INT_VECTOR_ADC1_DATA6 = _ADC1_DATA6_VECTOR,
    INT_VECTOR_ADC1_DATA7 = _ADC1_DATA7_VECTOR,
    INT_VECTOR_ADC1_DATA8 = _ADC1_DATA8_VECTOR,
    INT_VECTOR_ADC1_DATA9 = _ADC1_DATA9_VECTOR,
    INT_VECTOR_ADC1_DATA10 = _ADC1_DATA10_VECTOR,
    INT_VECTOR_ADC1_DATA11 = _ADC1_DATA11_VECTOR,
    INT_VECTOR_ADC1_DATA12 = _ADC1_DATA12_VECTOR,
    INT_VECTOR_ADC1_DATA13 = _ADC1_DATA13_VECTOR,
    INT_VECTOR_ADC1_DATA14 = _ADC1_DATA14_VECTOR,
    INT_VECTOR_ADC1_DATA15 = _ADC1_DATA15_VECTOR,
    INT_VECTOR_ADC1_DATA16 = _ADC1_DATA16_VECTOR,
    INT_VECTOR_ADC1_DATA17 = _ADC1_DATA17_VECTOR,
    INT_VECTOR_ADC1_DATA18 = _ADC1_DATA18_VECTOR,
    INT_VECTOR_ADC1_DATA19 = _ADC1_DATA19_VECTOR,
    INT_VECTOR_ADC1_DATA20 = _ADC1_DATA20_VECTOR,
    INT_VECTOR_ADC1_DATA21 = _ADC1_DATA21_VECTOR,
    INT_VECTOR_ADC1_DATA22 = _ADC1_DATA22_VECTOR,
    INT_VECTOR_ADC1_DATA23 = _ADC1_DATA23_VECTOR,
    INT_VECTOR_ADC1_DATA24 = _ADC1_DATA24_VECTOR,
    INT_VECTOR_ADC1_DATA25 = _ADC1_DATA25_VECTOR,
    INT_VECTOR_ADC1_DATA26 = _ADC1_DATA26_VECTOR,
    INT_VECTOR_ADC1_DATA27 = _ADC1_DATA27_VECTOR,
    INT_VECTOR_ADC1_DATA28 = _ADC1_DATA28_VECTOR,
    INT_VECTOR_ADC1_DATA29 = _ADC1_DATA29_VECTOR,
    INT_VECTOR_ADC1_DATA30 = _ADC1_DATA30_VECTOR,
    INT_VECTOR_ADC1_DATA31 = _ADC1_DATA31_VECTOR,
    INT_VECTOR_ADC1_DATA32 = _ADC1_DATA32_VECTOR,
    INT_VECTOR_ADC1_DATA33 = _ADC1_DATA33_VECTOR,
    INT_VECTOR_ADC1_DATA34 = _ADC1_DATA34_VECTOR,
    INT_VECTOR_ADC1_DATA35 = _ADC1_DATA35_VECTOR,
    INT_VECTOR_ADC1_DATA36 = _ADC1_DATA36_VECTOR,
    INT_VECTOR_ADC1_DATA37 = _ADC1_DATA37_VECTOR,
    INT_VECTOR_ADC1_DATA38 = _ADC1_DATA38_VECTOR,
    INT_VECTOR_ADC1_DATA39 = _ADC1_DATA39_VECTOR,
    INT_VECTOR_ADC1_DATA40 = _ADC1_DATA40_VECTOR,
    INT_VECTOR_ADC1_DATA41 = _ADC1_DATA41_VECTOR,
    INT_VECTOR_ADC1_DATA42 = _ADC1_DATA42_VECTOR,
    INT_VECTOR_ADC1_DATA43 = _ADC1_DATA43_VECTOR,
    INT_VECTOR_ADC1_DATA44 = _ADC1_DATA44_VECTOR,
    INT_VECTOR_CORE_PERF_COUNT = _CORE_PERF_COUNT_VECTOR,
    INT_VECTOR_CORE_FAST_DEBUG_CHANNEL = _CORE_FAST_DEBUG_CHAN_VECTOR,
    INT_VECTOR_CORE_SYSTEM_BUS_PROTECTION = _SYSTEM_BUS_PROTECTION_VECTOR,
    INT_VECTOR_SPI1_FAULT = _SPI1_FAULT_VECTOR,
    INT_VECTOR_SPI1_RX = _SPI1_RX_VECTOR,
    INT_VECTOR_SPI1_TX = _SPI1_TX_VECTOR,
    INT_VECTOR_UART1_FAULT = _UART1_FAULT_VECTOR,
    INT_VECTOR_UART1_RX = _UART1_RX_VECTOR,
    INT_VECTOR_UART1_TX = _UART1_TX_VECTOR,
    INT_VECTOR_I2C1_BUS = _I2C1_BUS_VECTOR,
    INT_VECTOR_I2C1_SLAVE = _I2C1_SLAVE_VECTOR,
    INT_VECTOR_I2C1_MASTER = _I2C1_MASTER_VECTOR,
    INT_VECTOR_SPI2_FAULT = _SPI2_FAULT_VECTOR,
    INT_VECTOR_SPI2_RX = _SPI2_RX_VECTOR,
    INT_VECTOR_SPI2_TX = _SPI2_TX_VECTOR,
    INT_VECTOR_UART2_FAULT = _UART2_FAULT_VECTOR,
    INT_VECTOR_UART2_RX = _UART2_RX_VECTOR,
    INT_VECTOR_UART2_TX = _UART2_TX_VECTOR,
    INT_VECTOR_I2C2_BUS = _I2C2_BUS_VECTOR,
    INT_VECTOR_I2C2_SLAVE = _I2C2_SLAVE_VECTOR,
    INT_VECTOR_I2C2_MASTER = _I2C2_MASTER_VECTOR,
    INT_VECTOR_SPI3_FAULT = _SPI3_FAULT_VECTOR,
    INT_VECTOR_SPI3_RX = _SPI3_RX_VECTOR,
    INT_VECTOR_SPI3_TX = _SPI3_TX_VECTOR,
    INT_VECTOR_UART3_FAULT = _UART3_FAULT_VECTOR,
    INT_VECTOR_UART3_RX = _UART3_RX_VECTOR,
    INT_VECTOR_UART3_TX = _UART3_TX_VECTOR,
    INT_VECTOR_I2C3_BUS = _I2C3_BUS_VECTOR,
    INT_VECTOR_I2C3_SLAVE = _I2C3_SLAVE_VECTOR,
    INT_VECTOR_I2C3_MASTER = _I2C3_MASTER_VECTOR,
    INT_VECTOR_SPI4_FAULT = _SPI4_FAULT_VECTOR,
    INT_VECTOR_SPI4_RX = _SPI4_RX_VECTOR,
    INT_VECTOR_SPI4_TX = _SPI4_TX_VECTOR,
    INT_VECTOR_UART4_FAULT = _UART4_FAULT_VECTOR,
    INT_VECTOR_UART4_RX = _UART4_RX_VECTOR,
    INT_VECTOR_UART4_TX = _UART4_TX_VECTOR,
    INT_VECTOR_I2C4_BUS = _I2C4_BUS_VECTOR,
    INT_VECTOR_I2C4_SLAVE = _I2C4_SLAVE_VECTOR,
    INT_VECTOR_I2C4_MASTER = _I2C4_MASTER_VECTOR,
    INT_VECTOR_SPI5_FAULT = _SPI5_FAULT_VECTOR,
    INT_VECTOR_SPI5_RX = _SPI5_RX_VECTOR,
    INT_VECTOR_SPI5_TX = _SPI5_TX_VECTOR,
    INT_VECTOR_UART5_FAULT = _UART5_FAULT_VECTOR,
    INT_VECTOR_UART5_RX = _UART5_RX_VECTOR,
    INT_VECTOR_UART5_TX = _UART5_TX_VECTOR,
    INT_VECTOR_I2C5_BUS = _I2C5_BUS_VECTOR,
    INT_VECTOR_I2C5_SLAVE = _I2C5_SLAVE_VECTOR,
    INT_VECTOR_I2C5_MASTER = _I2C5_MASTER_VECTOR,
    INT_VECTOR_SPI6_FAULT = _SPI6_FAULT_VECTOR,
    INT_VECTOR_SPI6_RX = _SPI6_RX_VECTOR,
    INT_VECTOR_SPI6_TX = _SPI6_TX_VECTOR,
    INT_VECTOR_UART6_FAULT = _UART6_FAULT_VECTOR,
    INT_VECTOR_UART6_RX = _UART6_RX_VECTOR,
    INT_VECTOR_UART6_TX = _UART6_TX_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_A = _CHANGE_NOTICE_A_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_B = _CHANGE_NOTICE_B_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_C = _CHANGE_NOTICE_C_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_D = _CHANGE_NOTICE_D_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_E = _CHANGE_NOTICE_E_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_F = _CHANGE_NOTICE_F_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_G = _CHANGE_NOTICE_G_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_H = _CHANGE_NOTICE_H_VECTOR,
    INT_VECTOR_CHANGE_NOTICE_J = _CHANGE_NOTICE_J_VECTOR,
    INT_VECTOR_PMP = _PMP_VECTOR,
    INT_VECTOR_PMP_ERROR = _PMP_ERROR_VECTOR,
    INT_VECTOR_USB1 = _USB_VECTOR,
    INT_VECTOR_USB1_DMA = _USB_DMA_VECTOR,
    INT_VECTOR_RTCC = _RTCC_VECTOR,
    INT_VECTOR_FLASH = _FLASH_CONTROL_VECTOR,
    INT_VECTOR_SQI1 = _SQI1_VECTOR,
    INT_VECTOR_CMP1 = _COMPARATOR_1_VECTOR,
    INT_VECTOR_CMP2 = _COMPARATOR_2_VECTOR,
    INT_VECTOR_DMA0 = _DMA0_VECTOR,
    INT_VECTOR_DMA1 = _DMA1_VECTOR,
    INT_VECTOR_DMA2 = _DMA2_VECTOR,
    INT_VECTOR_DMA3 = _DMA3_VECTOR,
    INT_VECTOR_DMA4 = _DMA4_VECTOR,
    INT_VECTOR_DMA5 = _DMA5_VECTOR,
    INT_VECTOR_DMA6 = _DMA6_VECTOR,
    INT_VECTOR_DMA7 = _DMA7_VECTOR,
    INT_VECTOR_ETH = _ETHERNET_VECTOR

} INT_VECTOR;

typedef enum {

    INT_VECTOR_SPACING_0 = 0x00,
    INT_VECTOR_SPACING_8 = 0x01,
    INT_VECTOR_SPACING_16 = 0x02,
    INT_VECTOR_SPACING_32 = 0x04,
    INT_VECTOR_SPACING_64 = 0x08,
    INT_VECTOR_SPACING_128 = 0x10,
    INT_VECTOR_SPACING_256 = 0x20,
    INT_VECTOR_SPACING_512 = 0x40

} INT_VECTOR_SPACING;

typedef enum {

    INT_SHADOW_REGISTER_0 = 0x00,
    INT_SHADOW_REGISTER_1 = 0x01,
    INT_SHADOW_REGISTER_2 = 0x02,
    INT_SHADOW_REGISTER_3 = 0x03,
    INT_SHADOW_REGISTER_4 = 0x04,
    INT_SHADOW_REGISTER_5 = 0x05,
    INT_SHADOW_REGISTER_6 = 0x06,
    INT_SHADOW_REGISTER_7 = 0x07

} INT_SHADOW_REGISTER;

PLIB_INLINE SFR_TYPE* _INT_INT_EXT_INT0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_PROXIMITY_TIMER_ENABLE_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_SINGLE_MULTI_VECTOR_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_VECTOR_BASE_ADDRESS_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTCON;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_SHADOW_SET_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &PRISS;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_PRIORITY_SHADOW_REGISTER_SELECT_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &PRISS;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_LATEST_INT_VECTOR_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTSTAT;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_LATEST_INT_PRIORITY_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &INTSTAT;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_FLAG_STATUS_0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IFS0;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_FLAG_STATUS_2_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IFS0;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_FLAG_STATUS_1_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IFS1;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_ENABLE_CONTROL_0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IEC0;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_ENABLE_CONTROL_1_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IEC1;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_INT_PRIORITY_CONTROL_0_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &IPC0;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _INT_VECTOR_ADDRESS_OFFSET_SET_VREG(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return &OFF000;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_EXT_INT0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_INT0EP_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PROXIMITY_TIMER_ENABLE_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_TPC_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SINGLE_MULTI_VECTOR_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_BASE_ADDRESS_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SHADOW_SET_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _PRISS_SS0_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PRIORITY_SHADOW_REGISTER_SELECT_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _PRISS_PRI1SS_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_VECTOR_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SIRQ_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_PRIORITY_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SRIPL_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_CTIF_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_2_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_IC4EIF_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_1_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS1_T7IF_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC0_CTIE_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_1_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC1_T7IE_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_PRIORITY_CONTROL_0_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IPC0_CTIS_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_ADDRESS_OFFSET_SET_MASK(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _OFF000_VOFF_MASK;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_EXT_INT0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_INT0EP_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PROXIMITY_TIMER_ENABLE_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_TPC_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SINGLE_MULTI_VECTOR_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_BASE_ADDRESS_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SHADOW_SET_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _PRISS_SS0_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PRIORITY_SHADOW_REGISTER_SELECT_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _PRISS_PRI1SS_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_VECTOR_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SIRQ_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_PRIORITY_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SRIPL_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_CTIF_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_2_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_IC4EIF_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_1_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS1_T7IF_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC0_CTIE_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_1_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC1_T7IE_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_PRIORITY_CONTROL_0_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IPC0_CTIS_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_ADDRESS_OFFSET_SET_POS(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _OFF000_VOFF_POSITION;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_EXT_INT0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_INT0EP_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PROXIMITY_TIMER_ENABLE_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_TPC_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SINGLE_MULTI_VECTOR_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_BASE_ADDRESS_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTCON_MVEC_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_SHADOW_SET_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _PRISS_SS0_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_PRIORITY_SHADOW_REGISTER_SELECT_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _PRISS_PRI1SS_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_VECTOR_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SIRQ_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_LATEST_INT_PRIORITY_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _INTSTAT_SRIPL_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_CTIF_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_2_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS0_IC4EIF_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_FLAG_STATUS_1_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IFS1_T7IF_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC0_CTIE_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_ENABLE_CONTROL_1_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IEC1_T7IE_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_INT_PRIORITY_CONTROL_0_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _IPC0_CTIS_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _INT_VECTOR_ADDRESS_OFFSET_SET_LEN(INT_MODULE_ID i)
{
    switch (i) {
        case INT_ID_0 :
            return _OFF000_VOFF_LENGTH;
        case INT_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

/* Section 2 - Feature variant inclusion */

#define PLIB_TEMPLATE PLIB_INLINE
#include "../templates/int_SingleVectorShadowSet_Default.h"
#include "../templates/int_VectorSelect_Default.h"
#include "../templates/int_ProximityTimerEnable_Default.h"
#include "../templates/int_ProximityTimerControl_Default.h"
#include "../templates/int_ExternalINTEdgeSelect_Default.h"
#include "../templates/int_INTCPUPriority_Default.h"
#include "../templates/int_INTCPUVector_Default.h"
#include "../templates/int_SourceFlag_Default.h"
#include "../templates/int_SourceControl_Default.h"
#include "../templates/int_VectorPriority_Default.h"
#include "../templates/int_CPUCurrentPriorityLevel_Default.h"
#include "../templates/int_EnableControl_PIC32.h"
#include "../templates/int_ShadowRegisterAssign_Default.h"
#include "../templates/int_VariableOffset_Default.h"
#include "../templates/int_SoftwareNMI_Unsupported.h"

/* Section 3 - PLIB dispatch function definitions */

PLIB_INLINE_API bool PLIB_INT_ExistsSingleVectorShadowSet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSingleVectorShadowSet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SingleVectorShadowSetDisable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SingleVectorShadowSetDisable_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SingleVectorShadowSetEnable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SingleVectorShadowSetEnable_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsVectorSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsVectorSelect_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_MultiVectorSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_MultiVectorSelect_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SingleVectorSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SingleVectorSelect_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsProximityTimerEnable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsProximityTimerEnable_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_ProximityTimerEnable(INT_MODULE_ID index, INT_PRIORITY_LEVEL priority)
{
    switch (index) {
        case INT_ID_0 :
            INT_ProximityTimerEnable_Default(index, priority);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_ProximityTimerDisable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_ProximityTimerDisable_Default(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsProximityTimerControl(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsProximityTimerControl_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_ProximityTimerSet(INT_MODULE_ID index, uint32_t timerreloadvalue)
{
    switch (index) {
        case INT_ID_0 :
            INT_ProximityTimerSet_Default(index, timerreloadvalue);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API uint32_t PLIB_INT_ProximityTimerGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ProximityTimerGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (uint32_t)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsExternalINTEdgeSelect(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsExternalINTEdgeSelect_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_ExternalRisingEdgeSelect(INT_MODULE_ID index, INT_EXTERNAL_SOURCES source)
{
    switch (index) {
        case INT_ID_0 :
            INT_ExternalRisingEdgeSelect_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_ExternalFallingEdgeSelect(INT_MODULE_ID index, INT_EXTERNAL_SOURCES source)
{
    switch (index) {
        case INT_ID_0 :
            INT_ExternalFallingEdgeSelect_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsINTCPUPriority(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsINTCPUPriority_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API INT_PRIORITY_LEVEL PLIB_INT_PriorityGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_PriorityGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_PRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsINTCPUVector(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsINTCPUVector_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API INT_VECTOR PLIB_INT_VectorGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VectorGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_VECTOR)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsSourceFlag(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSourceFlag_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_SourceFlagGet(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            return INT_SourceFlagGet_Default(index, source);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceFlagSet(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceFlagSet_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceFlagClear(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceFlagClear_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsSourceControl(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSourceControl_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceEnable(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceEnable_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_SourceDisable(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            INT_SourceDisable_Default(index, source);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_SourceIsEnabled(INT_MODULE_ID index, INT_SOURCE source)
{
    switch (index) {
        case INT_ID_0 :
            return INT_SourceIsEnabled_Default(index, source);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsVectorPriority(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsVectorPriority_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_VectorPrioritySet(INT_MODULE_ID index, INT_VECTOR vector, INT_PRIORITY_LEVEL priority)
{
    switch (index) {
        case INT_ID_0 :
            INT_VectorPrioritySet_Default(index, vector, priority);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_PRIORITY_LEVEL PLIB_INT_VectorPriorityGet(INT_MODULE_ID index, INT_VECTOR vector)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VectorPriorityGet_Default(index, vector);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_PRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API void PLIB_INT_VectorSubPrioritySet(INT_MODULE_ID index, INT_VECTOR vector, INT_SUBPRIORITY_LEVEL subPriority)
{
    switch (index) {
        case INT_ID_0 :
            INT_VectorSubPrioritySet_Default(index, vector, subPriority);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_SUBPRIORITY_LEVEL PLIB_INT_VectorSubPriorityGet(INT_MODULE_ID index, INT_VECTOR vector)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VectorSubPriorityGet_Default(index, vector);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_SUBPRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsCPUCurrentPriorityLevel(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsCPUCurrentPriorityLevel_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API INT_PRIORITY_LEVEL PLIB_INT_CPUCurrentPriorityLevelGet(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_CPUCurrentPriorityLevelGet_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_PRIORITY_LEVEL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsEnableControl(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsEnableControl_PIC32(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_Enable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_Enable_PIC32(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_INT_Disable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_Disable_PIC32(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_INT_IsEnabled(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_IsEnabled_PIC32(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_SetState(INT_MODULE_ID index, INT_STATE_GLOBAL interrupt_state)
{
    switch (index) {
        case INT_ID_0 :
            INT_SetState_PIC32(index, interrupt_state);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_STATE_GLOBAL PLIB_INT_GetStateAndDisable(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_GetStateAndDisable_PIC32(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_STATE_GLOBAL)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsShadowRegisterAssign(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsShadowRegisterAssign_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_ShadowRegisterAssign(INT_MODULE_ID index, INT_PRIORITY_LEVEL priority, INT_SHADOW_REGISTER shadowRegister)
{
    switch (index) {
        case INT_ID_0 :
            INT_ShadowRegisterAssign_Default(index, priority, shadowRegister);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API INT_SHADOW_REGISTER PLIB_INT_ShadowRegisterGet(INT_MODULE_ID index, INT_PRIORITY_LEVEL priority)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ShadowRegisterGet_Default(index, priority);
        case INT_NUMBER_OF_MODULES :
        default :
            return (INT_SHADOW_REGISTER)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsVariableOffset(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsVariableOffset_Default(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_INT_VariableVectorOffsetSet(INT_MODULE_ID index, INT_VECTOR vector, uint32_t offset)
{
    switch (index) {
        case INT_ID_0 :
            INT_VariableVectorOffsetSet_Default(index, vector, offset);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API uint32_t PLIB_INT_VariableVectorOffsetGet(INT_MODULE_ID index, INT_VECTOR vector)
{
    switch (index) {
        case INT_ID_0 :
            return INT_VariableVectorOffsetGet_Default(index, vector);
        case INT_NUMBER_OF_MODULES :
        default :
            return (uint32_t)0;
    }
}

PLIB_INLINE_API bool PLIB_INT_ExistsSoftwareNMI(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            return INT_ExistsSoftwareNMI_Unsupported(index);
        case INT_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void _PLIB_UNSUPPORTED PLIB_INT_SoftwareNMITrigger(INT_MODULE_ID index)
{
    switch (index) {
        case INT_ID_0 :
            INT_SoftwareNMITrigger_Unsupported(index);
            break;
        case INT_NUMBER_OF_MODULES :
        default :
            break;
    }
}

#endif