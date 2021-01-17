/**
  *********************************************************************
  * 文件名 KF32LS_Config.h
  * 作  者  ChipON_AE/FAE_Group
  * 版  本  V2.61
  * 日  期  2019-11-16
  * 描  述  KF32L系列外设配置
  *
  *********************************************************************
  */

#ifndef _KF32LS_Config_H_
#define _KF32LS_Config_H_

#include "__Kungfu32_chipmodel_define.h"
/* 型号定义 */
#ifdef KF32LS200FNP
	#define KF32LS200
#elif defined KF32LS200GNP
	#define KF32LS200
#elif defined KF32LS200INP
	#define KF32LS200
#elif defined KF32LS200KNP
	#define KF32LS200
#elif defined KF32LS200FNS
	#define KF32LS200
#elif defined KF32LS200GNS
	#define KF32LS200
#elif defined KF32LS200INS
	#define KF32LS200
#elif defined KF32LS200KNS
	#define KF32LS200
#elif defined KF32LS200MNS
	#define KF32LS200
#elif defined KF32LS200FQS
	#define KF32LS200
#elif defined KF32LS200GQS
    #define KF32LS200
#elif defined KF32LS200IQS
	#define KF32LS200
#elif defined KF32LS200KQS
	#define KF32LS200
#elif defined KF32LS200MQS
	#define KF32LS200
#elif defined KF32LS200GQT
	#define KF32LS200
#elif defined KF32LS200IQT
	#define KF32LS200
#elif defined KF32LS200KQT
	#define KF32LS200
#elif defined KF32LS200MQT
	#define KF32LS200
#elif defined KF32LS200KQV
	#define KF32LS200
#elif defined KF32LS200MQV
	#define KF32LS200
#endif
#if defined KF32LS200FNP || defined KF32LS200GNP || defined KF32LS200INP || \
	defined KF32LS200KNP
	#define LS200_SPI2_EX
#elif defined KF32LS200FNS || defined KF32LS200GNS || defined KF32LS200INS || \
	  defined KF32LS200KNS || defined KF32LS200MNS || defined KF32LS200FQS || \
	  defined KF32LS200GQS || defined KF32LS200IQS || defined KF32LS200KQS || \
	  defined KF32LS200MQS || defined KF32LS200GQT || defined KF32LS200IQT
	#define LS200_SPI1_EX
	#define LS200_USART3_EX
	#define LS200_LCD_EX
#elif defined KF32LS200KQT || defined KF32LS200MQT || defined KF32LS200KQV || \
	  defined KF32LS200MQV
	#define LS200_SPI1_EX
	#define LS200_USART3_EX
	#define LS200_USART4_7_EX
	#define LS200_LCD_EX
#endif


#ifdef KF32LS201GNP
	#define KF32LS201
#elif defined KF32LS201INP
	#define KF32LS201
#elif defined KF32LS201KNP
	#define KF32LS201
#elif defined KF32LS201GNS
	#define KF32LS201
#elif defined KF32LS201INS
	#define KF32LS201
#elif defined KF32LS201KNS
	#define KF32LS201
#elif defined KF32LS201MNS
	#define KF32LS201
#elif defined KF32LS201GQS
	#define KF32LS201
#elif defined KF32LS201IQS
	#define KF32LS201
#elif defined KF32LS201KQS
	#define KF32LS201
#elif defined KF32LS201MQS
	#define KF32LS201
#elif defined KF32LS201GQT
	#define KF32LS201
#elif defined KF32LS201IQT
	#define KF32LS201
#elif defined KF32LS201KQT
	#define KF32LS201
#elif defined KF32LS201MQT
	#define KF32LS201
#elif defined KF32LS201IQV
	#define KF32LS201
#elif defined KF32LS201KQV
	#define KF32LS201
#elif defined KF32LS201MQV
	#define KF32LS201
#endif
#if defined KF32LS201GNS || defined KF32LS201INS  || defined KF32LS201KNS || \
    defined KF32LS201MNS || defined KF32LS201GQS  || defined KF32LS201IQS || \
    defined KF32LS201KQS || defined KF32LS201MQS  || defined KF32LS201GQT || \
    defined KF32LS201IQT || defined KF32LS201KQT  || defined KF32LS201MQT
	#define LS201_USART2_EX
    #define LS201_LCD_EX
#elif defined  KF32LS201IQV || defined  KF32LS201KQV || defined  KF32LS201MQV
	#define LS201_USART2_EX
	#define LS201_USART4_7_EX
	#define LS201_LCD_EX
#endif


#ifdef KF32LS100INP
	#define KF32LS100
#elif defined KF32LS100KNP
	#define KF32LS100
#elif defined KF32LS100GNS
	#define KF32LS100
#elif defined KF32LS100INS
	#define KF32LS100
#elif defined KF32LS100KNS
	#define KF32LS100
#elif defined KF32LS100MNS
	#define KF32LS100
#elif defined KF32LS100GQS
	#define KF32LS100
#elif defined KF32LS100IQS
    #define KF32LS100
#elif defined KF32LS100KQS
    #define KF32LS100
#elif defined KF32LS100MQS
    #define KF32LS100
#elif defined KF32LS100GQT
	#define KF32LS100
#elif defined KF32LS100IQT
	#define KF32LS100
#elif defined KF32LS100KQT
	#define KF32LS100
#elif defined KF32LS100MQT
	#define KF32LS100
#elif defined KF32LS100IQV
	#define KF32LS100
#elif defined KF32LS100KQV
	#define KF32LS100
#elif defined KF32LS100MQV
	#define KF32LS100
#endif
#if defined KF32LS100INP || defined KF32LS100KNP
	#define LS100_SPI2_EX
#elif  defined KF32LS100GNS || defined KF32LS100INS || defined KF32LS100KNS || \
	   defined KF32LS100MNS || defined KF32LS100GQS || defined KF32LS100IQS || \
	   defined KF32LS100KQS || defined KF32LS100MQS || defined KF32LS100GQT || \
	   defined KF32LS100IQT
	#define LS100_USART2_EX
	#define LS100_SPI1_EX
#elif defined KF32LS100KQT  || defined KF32LS100MQT
	#define LS100_USART2_EX
	#define LS100_USART4_6_EX
	#define LS100_SPI1_EX
#elif defined KF32LS100IQV ||  defined KF32LS100KQV || defined KF32LS100MQV
	#define LS100_USART2_EX
	#define LS100_USART4_6_EX
	#define LS100_USART7_EX
	#define LS100_SPI1_EX
#endif


#ifdef KF32LS500GNP
	#define KF32LS500
#elif defined KF32LS500INP
    #define KF32LS500
#elif defined KF32LS500KNP
	#define KF32LS500
#elif defined KF32LS500GNS
	#define KF32LS500
#elif defined KF32LS500INS
	#define KF32LS500
#elif defined KF32LS500KNS
	#define KF32LS500
#elif defined KF32LS500MNS
	#define KF32LS500
#elif defined KF32LS500GQS
	#define KF32LS500
#elif defined KF32LS500IQS
	#define KF32LS500
#elif defined KF32LS500KQS
	#define KF32LS500
#elif defined KF32LS500MQS
	#define KF32LS500
#elif defined KF32LS500GQT
	#define KF32LS500
#elif defined KF32LS500IQT
	#define KF32LS500
#elif defined KF32LS500KQT
	#define KF32LS500
#elif defined KF32LS500MQT
	#define KF32LS500
#elif defined KF32LS500KQV
	#define KF32LS500
#elif defined KF32LS500MQV
	#define KF32LS500
#endif
#if defined KF32LS500GNS || defined KF32LS500INS || defined KF32LS500KNS ||  \
    defined KF32LS500MNS || defined KF32LS500GQS || defined KF32LS500IQS ||  \
    defined KF32LS500KQS || defined KF32LS500MQS || defined KF32LS500GQT ||  \
    defined KF32LS500IQT
	#define LS500_USART2_EX
	#define LS500_SPI1_EX
	#define LS500_LCD_EX
#elif defined KF32LS500GNP || defined KF32LS500INP || defined KF32LS500KNP
	#define LS500_SPI2_EX
#elif defined KF32LS500KQT || defined KF32LS500MQT || defined KF32LS500KQV || \
      defined KF32LS500MQV
	#define LS500_USART2_EX
	#define LS500_USART4_7_EX
	#define LS500_SPI1_EX
	#define LS500_LCD_EX
#endif
#if defined KF32LS500GQT || defined KF32LS500IQT || defined KF32LS500KQT || \
	defined KF32LS500MQT || defined KF32LS500KQV || defined KF32LS500MQV
	#define LS500_USB_EX
#endif


#ifdef KF32LS520GNP
	#define KF32LS520
#elif defined KF32LS520INP
    #define KF32LS520
#elif defined KF32LS520KNP
	#define KF32LS520
#elif defined KF32LS520GNS
	#define KF32LS520
#elif defined KF32LS520INS
	#define KF32LS520
#elif defined KF32LS520KNS
	#define KF32LS520
#elif defined KF32LS520MNS
	#define KF32LS520
#elif defined KF32LS520GQS
	#define KF32LS520
#elif defined KF32LS520IQS
	#define KF32LS520
#elif defined KF32LS520KQS
	#define KF32LS520
#elif defined KF32LS520MQS
	#define KF32LS520
#elif defined KF32LS520GQT
	#define KF32LS520
#elif defined KF32LS520IQT
	#define KF32LS520
#elif defined KF32LS520KQT
	#define KF32LS520
#elif defined KF32LS520MQT
	#define KF32LS520
#elif defined KF32LS520KQV
	#define KF32LS520
#elif defined KF32LS520MQV
	#define KF32LS520
#endif
#if defined KF32LS520GNS || defined KF32LS520INS || defined KF32LS520KNS ||  \
    defined KF32LS520MNS || defined KF32LS520GQS || defined KF32LS520IQS ||  \
    defined KF32LS520KQS || defined KF32LS520MQS || defined KF32LS520GQT ||  \
    defined KF32LS520IQT
	#define LS520_USART2_EX
	#define LS520_SPI1_EX
	#define LS520_LCD_EX
#elif defined KF32LS520GNP || defined KF32LS520INP || defined KF32LS520KNP
	#define LS520_SPI2_EX
	#define LS520_DAC0_EX
#elif defined KF32LS520KQT || defined KF32LS520MQT || defined KF32LS520KQV || \
      defined KF32LS520MQV
	#define LS520_USART2_EX
	#define LS520_USART4_7_EX
	#define LS520_SPI1_EX
	#define LS520_LCD_EX
#endif
#if defined KF32LS520GQT || defined KF32LS520IQT || defined KF32LS520KQT || \
	defined KF32LS520MQT || defined KF32LS520KQV || defined KF32LS520MQV
	#define LS520_USB_EX
	#define LS520_DAC0_EX
#endif



/* 外设资源 */
#ifdef KF32LS200
    /* ADC */
	#define KF32LS_Periph_adc
	#define KF32LS_Periph_adc0
    /* CMP */
	#define KF32LS_Periph_cmp
	/* CFGL */
    #define KF32LS_Periph_cfgl
	/* AES */
	#define KF32LS_Periph_aes
	/* DMA */
	#define KF32LS_Periph_dma
	#define KF32LS_Periph_dma0
	#define KF32LS_Periph_dma1
	/* I2C */
    #define KF32LS_Periph_i2c
    #define KF32LS_Periph_i2c0
	#define KF32LS_Periph_i2c1
	/* QEI */
	#define KF32LS_Periph_qei
	#define KF32LS_Periph_qei0
	/* SPI */
	#define KF32LS_Periph_spi
	#define KF32LS_Periph_spi0
    /* USART */
	#define KF32LS_Periph_usart
	#define KF32LS_Periph_usart0
	#define KF32LS_Periph_usart1
	#define KF32LS_Periph_usart2
	/* BTIME */
	#define KF32LS_Periph_btime14
	#define KF32LS_Periph_btime15
	/* GPTIME */
	#define KF32LS_Periph_gptime0
	#define KF32LS_Periph_gptime1
	#define KF32LS_Periph_gptime2
	#define KF32LS_Periph_gptime3
	#define KF32LS_Periph_gptime4
	/* ATIME */
	#define KF32LS_Periph_atime5_time6
	#define KF32LS_Periph_atime5
	#define KF32LS_Periph_atime6
#endif //KF32LS200
#ifdef LS200_USART3_EX
	#define KF32LS_Periph_usart3
#endif //LS200_USART3_EX
#ifdef LS200_USART4_7_EX
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
	#define KF32LS_Periph_usart7
#endif //LS200_USART4_7_EX
#ifdef LS200_LCD_EX
	#define KF32LS_Periph_lcd
#endif //LS200_LCD_EX
#ifdef LS200_SPI2_EX
	#define KF32LS_Periph_spi2
#endif //LS200_SPI2_EX
#ifdef LS200_SPI1_EX
	#define KF32LS_Periph_spi1
#endif //LS200_SPI1_EX

#ifdef KF32LS201
    /* ADC */
	#define KF32LS_Periph_adc
	#define KF32LS_Periph_adc0
    /* CFGL */
    #define KF32LS_Periph_cfgl
	/* AES */
	#define KF32LS_Periph_aes
    /* CMP */
	#define KF32LS_Periph_cmp
    /* CTOUC */
    #define KF32LS_Periph_ctouch
	/* DMA */
	#define KF32LS_Periph_dma
	#define KF32LS_Periph_dma0
	#define KF32LS_Periph_dma1
	/* I2C */
    #define KF32LS_Periph_i2c
    #define KF32LS_Periph_i2c0
	#define KF32LS_Periph_i2c1
	/* QEI */
	#define KF32LS_Periph_qei
	#define KF32LS_Periph_qei0
	/* SPI */
	#define KF32LS_Periph_spi
	#define KF32LS_Periph_spi0
	#define KF32LS_Periph_spi1
    /* USART */
	#define KF32LS_Periph_usart
	#define KF32LS_Periph_usart0
	#define KF32LS_Periph_usart1
	#define KF32LS_Periph_usart3
	/* BTIME */
	#define KF32LS_Periph_btime14
	#define KF32LS_Periph_btime15
	/* GPTIME */
	#define KF32LS_Periph_gptime0
	#define KF32LS_Periph_gptime1
	#define KF32LS_Periph_gptime2
	#define KF32LS_Periph_gptime3
	#define KF32LS_Periph_gptime4
	/* ATIME */
	#define KF32LS_Periph_atime5_time6
	#define KF32LS_Periph_atime5
	#define KF32LS_Periph_atime6
#endif //KF32LS201
#ifdef LS201_USART2_EX
	#define KF32LS_Periph_usart2
#endif //LS201_USART2_EX
#ifdef LS201_USART4_7_EX
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
	#define KF32LS_Periph_usart7
#endif //LS201_USART4_7_EX
#ifdef LS201_LCD_EX
	#define KF32LS_Periph_lcd
#endif //LS201_LCD_EX


#ifdef KF32LS520
	/* ADC */
	#define KF32LS_Periph_adc
	#define KF32LS_Periph_adc0
	/* DAC */
	#define KF32LS_Periph_dac
	#define KF32LS_Periph_dac1
    /* CFGL */
    #define KF32LS_Periph_cfgl
	/* AES */
	#define KF32LS_Periph_aes
	/* CRC */
	#define KF32LS_Periph_crc
	/* CAN */
	#define KF32LS_Periph_can
	#define KF32LS_Periph_can0
	/* CTOUCH */
	#define KF32LS_Periph_ctouch
	/* DMA */
	#define KF32LS_Periph_dma
	#define KF32LS_Periph_dma0
	#define KF32LS_Periph_dma1
	/* I2C */
    #define KF32LS_Periph_i2c
    #define KF32LS_Periph_i2c0
	#define KF32LS_Periph_i2c1
	/* OP */
	#define KF32LS_Periph_op
	/* CMP */
	#define KF32LS_Periph_cmp
	/* QEI */
	#define KF32LS_Periph_qei
	#define KF32LS_Periph_qei0
	/* SPI */
	#define KF32LS_Periph_spi
	#define KF32LS_Periph_spi0
    /* USART */
	#define KF32LS_Periph_usart
	#define KF32LS_Periph_usart0
	#define KF32LS_Periph_usart1
	#define KF32LS_Periph_usart3
	/* BTIME */
	#define KF32LS_Periph_btime14
	#define KF32LS_Periph_btime15
	/* GPTIME */
	#define KF32LS_Periph_gptime0
	#define KF32LS_Periph_gptime1
	#define KF32LS_Periph_gptime2
	#define KF32LS_Periph_gptime3
	#define KF32LS_Periph_gptime4
	/* ATIME */
	#define KF32LS_Periph_atime5_time6
	#define KF32LS_Periph_atime5
	#define KF32LS_Periph_atime6
#endif
#ifdef LS520_DAC0_EX
	#define KF32LS_Periph_dac0
#endif //LS500_USB_EX
#ifdef LS520_USART2_EX
	#define KF32LS_Periph_usart2
#endif //LS500_USART2_EX
#ifdef LS520_USART4_7_EX
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
	#define KF32LS_Periph_usart7
#endif //LS500_USART4_7_EX
#ifdef LS520_LCD_EX
	#define KF32LS_Periph_lcd
#endif //LS500_LCD_EX
#ifdef LS520_SPI1_EX
	#define KF32LS_Periph_spi1
#endif //LS500_SPI1_EX
#ifdef LS520_SPI2_EX
	#define KF32LS_Periph_spi2
#endif //LS500_SPI2_EX
#ifdef LS520_USB_EX
	#define KF32LS_Periph_usb
#endif //LS500_USB_EX


#ifdef KF32LS500
	/* ADC */
	#define KF32LS_Periph_adc
	#define KF32LS_Periph_adc0
    /* CFGL */
    #define KF32LS_Periph_cfgl
	/* AES */
	#define KF32LS_Periph_aes
	/* CRC */
	#define KF32LS_Periph_crc
	/* CMP */
	#define KF32LS_Periph_cmp
	/* CAN */
	#define KF32LS_Periph_can
	#define KF32LS_Periph_can0
	/* CTOUCH */
	#define KF32LS_Periph_ctouch
	/* DMA */
	#define KF32LS_Periph_dma
	#define KF32LS_Periph_dma0
	#define KF32LS_Periph_dma1
	/* I2C */
    #define KF32LS_Periph_i2c
    #define KF32LS_Periph_i2c0
	#define KF32LS_Periph_i2c1
	/* QEI */
	#define KF32LS_Periph_qei
	#define KF32LS_Periph_qei0
	/* SPI */
	#define KF32LS_Periph_spi
	#define KF32LS_Periph_spi0
    /* USART */
	#define KF32LS_Periph_usart
	#define KF32LS_Periph_usart0
	#define KF32LS_Periph_usart1
	#define KF32LS_Periph_usart3
	/* BTIME */
	#define KF32LS_Periph_btime14
	#define KF32LS_Periph_btime15
	/* GPTIME */
	#define KF32LS_Periph_gptime0
	#define KF32LS_Periph_gptime1
	#define KF32LS_Periph_gptime2
	#define KF32LS_Periph_gptime3
	#define KF32LS_Periph_gptime4
	/* ATIME */
	#define KF32LS_Periph_atime5_time6
	#define KF32LS_Periph_atime5
	#define KF32LS_Periph_atime6
#endif

#ifdef LS500_USART2_EX
	#define KF32LS_Periph_usart2
#endif //LS500_USART2_EX
#ifdef LS500_USART4_7_EX
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
	#define KF32LS_Periph_usart7
#endif //LS500_USART4_7_EX
#ifdef LS500_LCD_EX
	#define KF32LS_Periph_lcd
#endif //LS500_LCD_EX
#ifdef LS500_SPI1_EX
	#define KF32LS_Periph_spi1
#endif //LS500_SPI1_EX
#ifdef LS500_SPI2_EX
	#define KF32LS_Periph_spi2
#endif //LS500_SPI2_EX
#ifdef LS500_USB_EX
	#define KF32LS_Periph_usb
#endif //LS500_USB_EX
/* 外设资源 */
#ifdef KF32LS100
    /* ADC */
	#define KF32LS_Periph_adc
	#define KF32LS_Periph_adc0
    /* CFGL */
    #define KF32LS_Periph_cfgl
	/* AES */
	#define KF32LS_Periph_aes
	/* DMA */
	#define KF32LS_Periph_dma
	#define KF32LS_Periph_dma0
	#define KF32LS_Periph_dma1
	/* I2C */
    #define KF32LS_Periph_i2c
    #define KF32LS_Periph_i2c0
	#define KF32LS_Periph_i2c1
	/* QEI */
	#define KF32LS_Periph_qei
	#define KF32LS_Periph_qei0
	/* SPI */
	#define KF32LS_Periph_spi
	#define KF32LS_Periph_spi0
    /* USART */
	#define KF32LS_Periph_usart
	#define KF32LS_Periph_usart0
	#define KF32LS_Periph_usart1
	#define KF32LS_Periph_usart3
    /* CMP */
	#define KF32LS_Periph_cmp
	/* BTIME */
	#define KF32LS_Periph_btime14
	#define KF32LS_Periph_btime15
	/* GPTIME */
	#define KF32LS_Periph_gptime0
	#define KF32LS_Periph_gptime1
	#define KF32LS_Periph_gptime2
	#define KF32LS_Periph_gptime3
	#define KF32LS_Periph_gptime4
	/* ATIME */
	#define KF32LS_Periph_atime5_time6
	#define KF32LS_Periph_atime5
	#define KF32LS_Periph_atime6
#endif //KF32LS100
#ifdef LS100_SPI1_EX
	#define KF32LS_Periph_spi1
#endif //LS100_SPI1_EX
#ifdef LS100_SPI2_EX
	#define KF32LS_Periph_spi2
#endif //LS100_SPI2_EX
#ifdef LS100_USART2_EX
	#define KF32LS_Periph_usart2
#endif //LS100_USART2_EX
#ifdef LS100_USART4_6_EX
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
#endif //LS100_USART4_6_EX
#ifdef LS100_USART7_EX
	#define KF32LS_Periph_usart7
#endif //LS100_USART7_EX


#endif /* _KF32LS_Config_H */
