/**
  * Copyright (c) Georgia Institute of Technology
  *
  * Nathan V. Parrish (nvparrish@gatech.edu)
  */

#ifndef TDS_PROTO_0_H #ifndef TDS_PROTO_0_H
#define TDS_PROTO_0_H #ifndef TDS_PROTO_0_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs
#define LEDS_NUMBER 2

// Pin 18 is connected to SWO
#define LED_START   17
#define LED_0       17
#define LED_1       19
#define LED_STOP    19

#define LEDS_ACTIVE_STATE 1

#define LEDS_INV_MASK LEDS_MASK
#define LEDS_LIST {LED_0, LED_1}

#define BSP_LED_0   LED_0
#define BSP_LED_1   LED_1

#define BUTTONS_NUMBER 0

#define BUTTONS_LIST { }

#define RX_PIN_NUMBER   8
#define TX_PIN_NUMBER   6
//#define CTS_PIN_NUMBER
//#define RTS_PIN_NUMBER
#define HWFC            false   // Can't HWFC without CTS/RTS

#define SPIS_MISO_PIN   14      // SPI MISO signal
#define SPIS_MOSI_PIN   13      // SPI MOSI signal
#define SPIS_SCK_PIN    12      // SPI SCK signal
#define SPIS_CS_PIN     29      // SPI SS signal

#define SPIM_MISO_PIN   14      // SPI master MISO
#define SPIM_MOSI_PIN   13      // SPI master MOSI
#define SPIM_SCK_PIN    12      // SPI master SCK
#define SPIM_SS_PIN     29      // SPI master SS

// Pin mappings based on label names
#define A0_PIN          2
#define AIN0_PIN        2
#define A1_PIN          3
#define AIN1_PIN        3
#define A2_PIN          4
#define AIN2_PIN        4
#define A3_PIN          5
#define AIN3_PIN        5
#define A4_PIN          28      // Recommended use of A4 or A5 (P0.28, P0.29)
#define AIN4_PIN        28      //
#define A5_PIN          29      // for low drive, low frequency I/O only
#define AIN5_PIN        29      //

// These pins are labeled by numbers, so could easily be named directly
#define PIN_16          16
#define PIN_15          15
#define PIN_7           7
#define PIN_11          11
#define PIN_31          31
#define AIN7_PIN        31
#define PIN_30          30
#define AIN6_PIN        30
#define PIN_27          27

// SCL and SDA pins
#define SCL_PIN         26
#define SDA_PIN         25

// Pin names to match the Feather pinout
#define GPIOA0          2  // A0_PIN
#define GPIOA1          3  // A1_PIN
#define GPIOA2          4  // A2_PIN
#define GPIOA3          5  // A3_PIN
#define GPIOA4          28 // A4_PIN
#define GPIOA5          29 // A5_PIN
#define GPIOSCK         12 // SCK
#define GPIOMOSI        13 // MOSI
#define GPIOMISO        14 // MISO
#define GPIORX          8  // RX_PIN_NUMBER
#define GPIOTX          6  // TX_PIN_NUMBER

#define GPIO13          16 // PIN_16
#define GPIO12          15 // PIN_15
#define GPIO11          7  // PIN_7
#define GPIO10          11 // PIN_11
#define GPIO9           31 // PIN_31
#define GPIO6           30 // PIN_30
#define GPIO5           27 // PIN_27
#define GPIOSCL         26 // SCL_PIN
#define GPIOSDA         25 // SDA_PIN

#define NRF_CLOCK_LRCLKSRC  {.source        = NRF_CLOCK_LF_SRC_SYNTH, \
                            .rc_ctiv        = 0, \
                            .rc_temp_ctiv   = 0, \
                            .xtal_accuracy  = NRF_CLOCK_LF_XTAL_ACCURACY_250_PPM}

#ifdef __cplusplus
}
#endif

#endif
