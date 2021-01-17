/**
  *********************************************************************
  * 文件名 KF32LS_Config.h
  * 作  者  ChipON_AE/FAE_Group
  * 版  本  V2.6
  * 日  期  2019-11-16
  * 描  述  KF32L系列外设配置
  *
  *********************************************************************
  */

#ifndef _KF32LS_Config_H_
#define _KF32LS_Config_H_

#include "__Kungfu32_chipmodel_define.h"
/* 型号定义 */
#ifdef KF32LS200FQS
	#define KF32LS200
#elif defined KF32LS200GQS
    #define KF32LS200
#elif defined KF32LS200IQS
	#define KF32LS200
#elif defined KF32LS200IQT
	#define KF32LS200
#elif defined KF32LS200KQT
	#define KF32LS200
#elif defined KF32LS200KQV
	#define KF32LS200
#elif defined KF32LS200MQV
	#define KF32LS200
#endif
#if defined KF32LS200KQT
	#define LS200_UASART_EX
#elif defined KF32LS200KQV
	#define LS200_UASART_EX
#elif defined KF32LS200MQV
	#define LS200_UASART_EX
#endif


#ifdef KF32LS201GQT
	#define KF32LS201
#elif defined KF32LS201IQT
	#define KF32LS201
#elif defined KF32LS201IQV
	#define KF32LS201
#endif
#if defined KF32LS201IQV
	#define LS201_UASART_EX
#endif

#ifdef KF32LS100GQS
	#define KF32LS100
#elif defined KF32LS100IQS
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
#if defined KF32LS100KQT
	#define LS100_UASART_EX
#elif defined KF32LS100MQT
	#define LS100_UASART_EX
#elif defined KF32LS100IQV
	#define LS100_UASART7_EX
#elif defined KF32LS100KQV
	#define LS100_UASART7_EX
#elif defined KF32LS100MQV
	#define LS100_UASART7_EX
#endif


#ifdef KF32LS500GQT
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
#if defined KF32LS500KQT
	#define LS500_UASART_EX
#elif defined KF32LS500MQT
	#define LS500_UASART_EX
#elif defined KF32LS500KQV
	#define LS500_UASART_EX
#elif defined KF32LS500MQV
	#define LS500_UASART_EX
#endif



/* 外设资源 */
#ifdef KF32LS200
    /* ADC */
	#define KF32LS_Periph_adc
	#define KF32LS_Periph_adc0
    /* CFGL */
    #define KF32LS_Periph_cfgl
	/* AES */
	#define KF32LS_Periph_aes
	/* CRC */
	#define KF32LS_Periph_crc
	/* DMA */
	#define KF32LS_Periph_dma
	#define KF32LS_Periph_dma0
	#define KF32LS_Periph_dma1
	/* I2C */
    #define KF32LS_Periph_i2c
    #define KF32LS_Periph_i2c0
	#define KF32LS_Periph_i2c1
	/* LCD */
	#define KF32LS_Periph_lcd
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
#ifdef LS200_UASART_EX
	#define KF32LS_Periph_usart3
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
	#define KF32LS_Periph_usart7
#endif //LS200_UASART_EX


#ifdef KF32LS201
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
	/* LCD */
	#define KF32LS_Periph_lcd
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
#endif //KF32LS201
#ifdef LS201_UASART_EX
	#define KF32LS_Periph_usart3
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
	#define KF32LS_Periph_usart7
#endif //LS201_UASART_EX

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
	/* CAN */
	#define KF32LS_Periph_can
	#define KF32LS_Periph_can1
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
	/* LCD */
	#define KF32LS_Periph_lcd
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
    /* USB */
	#define KF32LS_Periph_usb
#endif
#ifdef LS500_UASART_EX
	#define KF32LS_Periph_usart3
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
	#define KF32LS_Periph_usart7
#endif //LS500_UASART_EX


/* 外设资源 */
#ifdef KF32LS100
    /* ADC */
	#define KF32LS_Periph_adc
	#define KF32LS_Periph_adc0
    /* CFGL */
    #define KF32LS_Periph_cfgl
	/* AES */
	#define KF32LS_Periph_aes
	/* CRC */
	#define KF32LS_Periph_crc
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
	#define KF32LS_Periph_usart2
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
#ifdef LS100_UASART_EX
	#define KF32LS_Periph_usart3
	#define KF32LS_Periph_usart4
	#define KF32LS_Periph_usart5
	#define KF32LS_Periph_usart6
#endif //LS100_UASART_EX
#ifdef LS100_UASART7_EX
	#define KF32LS_Periph_usart7
#endif //LS100_UASART7_EX

#endif /* _KF32LS_Config_H */
