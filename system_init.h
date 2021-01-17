/**
  ********************************************************************
  * �ļ���  system_init.h
  * ��  ��   ChipON_AE/FAE_Group
  * ��  ��  V2.61
  * ��  ��  2018-3-15
  * ��  ��  ���ļ��ṩ������������ͷ�ļ���ϵͳʱ��������صĺ궨�塣
  *
  *********************************************************************
*/
#ifndef _SYSTEM_INIT_H_
#define _SYSTEM_INIT_H_

#include <string.h>
#include <stdint.h>

#include "KF32LS_BASIC.h"
#include "kf32ls_basic_adc.h"
#include "kf32ls_basic_aes.h"
#include "kf32ls_basic_bkp.h"
#include "kf32ls_basic_can.h"
#include "kf32ls_basic_cfgl.h"
#include "kf32ls_basic_crc.h"
#include "kf32ls_basic_dma.h"
#include "kf32ls_basic_flash.h"
#include "kf32ls_basic_gpio.h"
#include "kf32ls_basic_i2c.h"
#include "kf32ls_basic_int.h"
#include "kf32ls_basic_iwdt.h"
#include "kf32ls_basic_led.h"
#include "kf32ls_basic_lcd.h"
#include "kf32ls_basic_osc.h"
#include "kf32ls_basic_pclk.h"
#include "kf32ls_basic_pm.h"
#include "kf32ls_basic_qei.h"
#include "kf32ls_basic_rst.h"
#include "kf32ls_basic_rtc.h"
#include "kf32ls_basic_spi.h"
#include "kf32ls_basic_sysctl.h"
#include "kf32ls_basic_systick.h"
#include "kf32ls_basic_tim.h"
#include "kf32ls_basic_usart.h"
#include "kf32ls_basic_usb.h"
#include "kf32ls_basic_wwdt.h"


/* ϵͳʱ��ѡ�� */
#ifndef SYSCLK_FREQ_HSE
	#define SYSCLK_FREQ_HSI         //�ڲ���Ƶ
#endif

/* ϵͳʱ��ѡ�� */
#ifdef KF32LS500
#define SYSCLK_FREQ_48MHz	48000000
#endif
#ifdef KF32LS100
#define SYSCLK_FREQ_48MHz	48000000
#endif
#ifdef KF32LS200
#define SYSCLK_FREQ_48MHz	48000000
#endif
#ifdef KF32LS201
#define SYSCLK_FREQ_48MHz	48000000
#endif
#ifdef KF32LS520
#define SYSCLK_FREQ_48MHz	48000000
#endif

static void SetSysClock(void);
void SystemInit(void);
void systick_delay_init();
void systick_delay_us(unsigned int nus);
void systick_delay_ms(unsigned int mus);
#endif /* SYS_H_ */
