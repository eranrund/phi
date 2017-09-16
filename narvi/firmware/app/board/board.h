#ifndef BOARD_H
#define BOARD_H

/*
 * Board identifier.
 */
#define BOARD_PHI_NARVI
#define BOARD_NAME                  "PHI Narvi"

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F427xx

/*
 * IO pins assignments.
 */
#define GPIOA_I2S_CKIN                0U
#define GPIOA_PIN1             1U
#define GPIOA_USER_LED              2U
#define GPIOA_PIN3                3U
#define GPIOA_PIN4             4U
#define GPIOA_TIM2_ETR                  5U
#define GPIOA_PIN6                6U
#define GPIOA_CTRL_ROT1_A               7U
#define GPIOA_PIN8              8U
#define GPIOA_PIN9               9U
#define GPIOA_PIN10               10U
#define GPIOA_PIN11                11U
#define GPIOA_PIN12                12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_TP_INT                15U

#define GPIOB_ROT2_SW                0U
#define GPIOB_ROT2_A                1U
#define GPIOB_ROT2_B                 2U
#define GPIOB_SWO                   3U
#define GPIOB_PIN4                  4U
#define GPIOB_PIN5            5U
#define GPIOB_PIN6             6U
#define GPIOB_PIN7                  7U
#define GPIOB_PIN8                8U
#define GPIOB_PIN9                9U
#define GPIOB_PIN10                10U
#define GPIOB_PIN11                11U
#define GPIOB_OTG_HS_ID             12U
#define GPIOB_OTG_HS_VBUS           13U
#define GPIOB_OTG_HS_DM             14U
#define GPIOB_OTG_HS_DP             15U

#define GPIOC_PIN0             0U
#define GPIOC_PIN1          1U
#define GPIOC_PIN2           2U
#define GPIOC_PIN3                  3U
#define GPIOC_CTRL_ROT1_B            4U
#define GPIOC_CTRL_ROT1_SW             5U
#define GPIOC_MIDI_OUT             6U
#define GPIOC_MIDI_IN                7U
#define GPIOC_PIN8                  8U
#define GPIOC_I2S_CKIN              9U
#define GPIOC_SPI3_CLK                10U
#define GPIOC_SPI3_MISO                 11U
#define GPIOC_SPI3_MOSI                 12U
#define GPIOC_PIN13                 13U
#define GPIOC_OSC32_IN              14U
#define GPIOC_OSC32_OUT             15U

#define GPIOD_CAN_RX                0U
#define GPIOD_CAN_TX                1U
#define GPIOD_PIN2                  2U
#define GPIOD_FLASH_CS                3U
#define GPIOD_DAC_CS                  4U
#define GPIOD_UART_TX                  5U
#define GPIOD_UART_RX                6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8               8U
#define GPIOD_PIN9               9U
#define GPIOD_PIN10               10U
#define GPIOD_PIN11                11U
#define GPIOD_PIN12               12U
#define GPIOD_PIN13               13U
#define GPIOD_PIN14                14U
#define GPIOD_PIN15                15U

#define GPIOE_PIN0              0U
#define GPIOE_PIN1              1U
#define GPIOE_SAI_MCK                  2U
#define GPIOE_SAI_SD_A                  3U
#define GPIOE_SAI_LRCK                  4U
#define GPIOE_SAI_BCK                  5U
#define GPIOE_SAI_SD_B                  6U
#define GPIOE_CTRL_LCD_D0                7U
#define GPIOE_CTRL_LCD_D1                8U
#define GPIOE_CTRL_LCD_D2                9U
#define GPIOE_CTRL_LCD_D3                10U
#define GPIOE_CTRL_LCD_D4                11U
#define GPIOE_SPI4_CLK                12U
#define GPIOE_SPI4_MISO               13U
#define GPIOE_SPI4_MOSI               14U
#define GPIOE_PIN15               15U

#define GPIOF_PIN0                0U
#define GPIOF_PIN1                1U
#define GPIOF_PIN2                2U
#define GPIOF_PIN3                3U
#define GPIOF_PIN4                4U
#define GPIOF_PIN5                5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7               7U
#define GPIOF_PIN8             8U
#define GPIOF_PIN9             9U
#define GPIOF_PIN10                10U
#define GPIOF_PIN11            11U
#define GPIOF_PIN12                12U
#define GPIOF_PIN13                13U
#define GPIOF_PIN14                14U
#define GPIOF_PIN15                15U

#define GPIOG_PIN0               0U
#define GPIOG_PIN1               1U
#define GPIOG_PIN2                  2U
#define GPIOG_PIN3                  3U
#define GPIOG_PIN4               4U
#define GPIOG_PIN5               5U
#define GPIOG_PIN6                6U
#define GPIOG_PIN7               7U
#define GPIOG_PIN8             8U
#define GPIOG_PIN9                  9U
#define GPIOG_PIN10                10U
#define GPIOG_PIN11                11U
#define GPIOG_PIN12                12U
#define GPIOG_PIN13            13U
#define GPIOG_PIN14              14U
#define GPIOG_PIN15            15U

#define GPIOH_OSC_IN                0U
#define GPIOH_OSC_OUT               1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U
#define GPIOH_PIN4                  4U
#define GPIOH_PIN5                  5U
#define GPIOH_PIN6                  6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_PIN10                 10U
#define GPIOH_PIN11                 11U
#define GPIOH_PIN12                 12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U

#define GPIOI_PIN0                  0U
#define GPIOI_PIN1                  1U
#define GPIOI_PIN2                  2U
#define GPIOI_PIN3                  3U
#define GPIOI_PIN4                  4U
#define GPIOI_PIN5                  5U
#define GPIOI_PIN6                  6U
#define GPIOI_PIN7                  7U
#define GPIOI_PIN8                  8U
#define GPIOI_PIN9                  9U
#define GPIOI_PIN10                 10U
#define GPIOI_PIN11                 11U
#define GPIOI_PIN12                 12U
#define GPIOI_PIN13                 13U
#define GPIOI_PIN14                 14U
#define GPIOI_PIN15                 15U


/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - BUTTON                    (input floating).
 * PA1  - MEMS_INT1                 (input floating).
 * PA2  - MEMS_INT2                 (input floating).
 * PA3  - LCD_B5                    (alternate 14).
 * PA4  - LCD_VSYNC                 (alternate 14).
 * PA5  - PIN5                      (input pullup).
 * PA6  - LCD_G2                    (alternate 14).
 * PA7  - ACP_RST                   (input pullup).
 * PA8  - I2C3_SCL                  (alternate 4).
 * PA9  - UART_TX                   (alternate 7).
 * PA10 - UART_RX                   (alternate 7).
 * PA11 - LCD_R4                    (alternate 14).
 * PA12 - LCD_R5                    (alternate 14).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - TP_INT                    (input floating).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_I2S_CKIN) |         \
                                     PIN_MODE_INPUT(GPIOA_PIN1) |      \
                                     PIN_MODE_OUTPUT(GPIOA_USER_LED) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN3) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN4) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_TIM2_ETR) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN6) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_CTRL_ROT1_A) |        \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN8) |   \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN9) |    \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN10) |    \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN11) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN12) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_INPUT(GPIOA_TP_INT))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_I2S_CKIN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN1) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USER_LED) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN3) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN4) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_TIM2_ETR) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CTRL_ROT1_A) |    \
                                     PIN_OTYPE_OPENDRAIN(GPIOA_PIN8) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN9) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN10) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN11) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN12) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_TP_INT))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOA_I2S_CKIN) |     \
                                     PIN_OSPEED_VERYLOW(GPIOA_PIN1) |  \
                                     PIN_OSPEED_VERYLOW(GPIOA_USER_LED) |  \
                                     PIN_OSPEED_HIGH(GPIOA_PIN3) |        \
                                     PIN_OSPEED_HIGH(GPIOA_PIN4) |     \
                                     PIN_OSPEED_HIGH(GPIOA_TIM2_ETR) |       \
                                     PIN_OSPEED_HIGH(GPIOA_PIN6) |        \
                                     PIN_OSPEED_HIGH(GPIOA_CTRL_ROT1_A) |    \
                                     PIN_OSPEED_HIGH(GPIOA_PIN8) |      \
                                     PIN_OSPEED_VERYLOW(GPIOA_PIN9) |    \
                                     PIN_OSPEED_VERYLOW(GPIOA_PIN10) |    \
                                     PIN_OSPEED_HIGH(GPIOA_PIN11) |        \
                                     PIN_OSPEED_HIGH(GPIOA_PIN12) |        \
                                     PIN_OSPEED_HIGH(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_VERYLOW(GPIOA_TP_INT))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_I2S_CKIN) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN1) |  \
                                     PIN_PUPDR_PULLUP(GPIOA_USER_LED) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN3) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN4) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_TIM2_ETR) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN6) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_CTRL_ROT1_A) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN8) |   \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN9) |      \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN10) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN11) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN12) |     \
                                     PIN_PUPDR_PULLUP(GPIOA_SWDIO) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_TP_INT))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_I2S_CKIN) |           \
                                     PIN_ODR_HIGH(GPIOA_PIN1) |        \
                                     PIN_ODR_HIGH(GPIOA_USER_LED) |        \
                                     PIN_ODR_HIGH(GPIOA_PIN3) |           \
                                     PIN_ODR_HIGH(GPIOA_PIN4) |        \
                                     PIN_ODR_HIGH(GPIOA_TIM2_ETR) |             \
                                     PIN_ODR_HIGH(GPIOA_PIN6) |           \
                                     PIN_ODR_HIGH(GPIOA_CTRL_ROT1_A) |          \
                                     PIN_ODR_HIGH(GPIOA_PIN8) |         \
                                     PIN_ODR_HIGH(GPIOA_PIN9) |          \
                                     PIN_ODR_HIGH(GPIOA_PIN10) |          \
                                     PIN_ODR_HIGH(GPIOA_PIN11) |           \
                                     PIN_ODR_HIGH(GPIOA_PIN12) |           \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_HIGH(GPIOA_TP_INT))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_I2S_CKIN, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_PIN1, 0U) |     \
                                     PIN_AFIO_AF(GPIOA_USER_LED, 0U) |     \
                                     PIN_AFIO_AF(GPIOA_PIN3, 14U) |       \
                                     PIN_AFIO_AF(GPIOA_PIN4, 14U) |    \
                                     PIN_AFIO_AF(GPIOA_TIM2_ETR, 1U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN6, 5U) |       \
                                     PIN_AFIO_AF(GPIOA_CTRL_ROT1_A, 5U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 4U) |      \
                                     PIN_AFIO_AF(GPIOA_PIN9, 7U) |       \
                                     PIN_AFIO_AF(GPIOA_PIN10, 7U) |       \
                                     PIN_AFIO_AF(GPIOA_PIN11, 14U) |       \
                                     PIN_AFIO_AF(GPIOA_PIN12, 14U) |       \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_TP_INT, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - LCD_R3                    (alternate 14).
 * PB1  - LCD_R6                    (alternate 14).
 * PB2  - BOOT1                     (input pullup).
 * PB3  - SWO                       (alternate 0).
 * PB4  - PIN4                      (input pullup).
 * PB5  - FMC_SDCKE1                (alternate 12).
 * PB6  - FMC_SDNE1                 (alternate 12).
 * PB7  - PIN7                      (input pullup).
 * PB8  - LCD_B6                    (alternate 14).
 * PB9  - LCD_B7                    (alternate 14).
 * PB10 - LCD_G4                    (alternate 14).
 * PB11 - LCD_G5                    (alternate 14).
 * PB12 - OTG_HS_ID                 (alternate 12).
 * PB13 - OTG_HS_VBUS               (input pulldown).
 * PB14 - OTG_HS_DM                 (alternate 12).
 * PB15 - OTG_HS_DP                 (alternate 12).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_ALTERNATE(GPIOB_ROT2_SW) |     \
                                     PIN_MODE_ALTERNATE(GPIOB_ROT2_A) |     \
                                     PIN_MODE_INPUT(GPIOB_ROT2_B) |          \
                                     PIN_MODE_ALTERNATE(GPIOB_SWO) |        \
                                     PIN_MODE_INPUT(GPIOB_PIN4) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_PIN5) | \
                                     PIN_MODE_ALTERNATE(GPIOB_PIN6) |  \
                                     PIN_MODE_INPUT(GPIOB_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_PIN8) |     \
                                     PIN_MODE_ALTERNATE(GPIOB_PIN9) |     \
                                     PIN_MODE_ALTERNATE(GPIOB_PIN10) |     \
                                     PIN_MODE_OUTPUT(GPIOB_PIN11) |     \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_ID) |  \
                                     PIN_MODE_INPUT(GPIOB_OTG_HS_VBUS) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_DM) |  \
                                     PIN_MODE_ALTERNATE(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_ROT2_SW) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ROT2_A) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ROT2_B) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SWO) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN5) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN6) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN8) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN9) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN10) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN11) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_ID) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_VBUS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_DM) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_ROT2_SW) |        \
                                     PIN_OSPEED_HIGH(GPIOB_ROT2_A) |        \
                                     PIN_OSPEED_HIGH(GPIOB_ROT2_B) |         \
                                     PIN_OSPEED_HIGH(GPIOB_SWO) |           \
                                     PIN_OSPEED_VERYLOW(GPIOB_PIN4) |       \
                                     PIN_OSPEED_HIGH(GPIOB_PIN5) |    \
                                     PIN_OSPEED_HIGH(GPIOB_PIN6) |     \
                                     PIN_OSPEED_VERYLOW(GPIOB_PIN7) |       \
                                     PIN_OSPEED_HIGH(GPIOB_PIN8) |        \
                                     PIN_OSPEED_HIGH(GPIOB_PIN9) |        \
                                     PIN_OSPEED_HIGH(GPIOB_PIN10) |        \
                                     PIN_OSPEED_HIGH(GPIOB_PIN11) |        \
                                     PIN_OSPEED_HIGH(GPIOB_OTG_HS_ID) |     \
                                     PIN_OSPEED_VERYLOW(GPIOB_OTG_HS_VBUS) |\
                                     PIN_OSPEED_HIGH(GPIOB_OTG_HS_DM) |     \
                                     PIN_OSPEED_HIGH(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_ROT2_SW) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_ROT2_A) |     \
                                     PIN_PUPDR_PULLUP(GPIOB_ROT2_B) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_SWO) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN4) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN5) | \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN6) |  \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN8) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN9) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN10) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN11) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_ID) |  \
                                     PIN_PUPDR_PULLDOWN(GPIOB_OTG_HS_VBUS) |\
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_DM) |  \
                                     PIN_PUPDR_FLOATING(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_ROT2_SW) |           \
                                     PIN_ODR_HIGH(GPIOB_ROT2_A) |           \
                                     PIN_ODR_HIGH(GPIOB_ROT2_B) |            \
                                     PIN_ODR_HIGH(GPIOB_SWO) |              \
                                     PIN_ODR_HIGH(GPIOB_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN5) |       \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |        \
                                     PIN_ODR_HIGH(GPIOB_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN8) |           \
                                     PIN_ODR_HIGH(GPIOB_PIN9) |           \
                                     PIN_ODR_HIGH(GPIOB_PIN10) |           \
                                     PIN_ODR_HIGH(GPIOB_PIN11) |           \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_ID) |        \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_VBUS) |      \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_DM) |        \
                                     PIN_ODR_HIGH(GPIOB_OTG_HS_DP))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_ROT2_SW, 14U) |       \
                                     PIN_AFIO_AF(GPIOB_ROT2_A, 14U) |       \
                                     PIN_AFIO_AF(GPIOB_ROT2_B, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_SWO, 5U) |           \
                                     PIN_AFIO_AF(GPIOB_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN5, 12U) |   \
                                     PIN_AFIO_AF(GPIOB_PIN6, 12U) |    \
                                     PIN_AFIO_AF(GPIOB_PIN7, 0U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_PIN8, 14U) |       \
                                     PIN_AFIO_AF(GPIOB_PIN9, 14U) |       \
                                     PIN_AFIO_AF(GPIOB_PIN10, 5U) |       \
                                     PIN_AFIO_AF(GPIOB_PIN11, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_ID, 12U) |    \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_VBUS, 0U) |   \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_DM, 12U) |    \
                                     PIN_AFIO_AF(GPIOB_OTG_HS_DP, 12U))

/*
 * GPIOC setup:
 *
 * PC0  - FMC_SDNWE                 (alternate 12).
 * PC1  - SPI5_MEMS_CS              (output pushpull maximum).
 * PC2  - SPI5_LCD_CS               (output pushpull maximum).
 * PC3  - PIN3                      (input pullup).
 * PC4  - OTG_HS_PSO                (output pushpull maximum).
 * PC5  - OTG_HS_OC                 (input floating).
 * PC6  - LCD_HSYNC                 (alternate 14).
 * PC7  - LCD_G6                    (alternate 14).
 * PC8  - PIN8                      (input pullup).
 * PC9  - I2C3_SDA                  (alternate 4).
 * PC10 - LCD_R2                    (alternate 14).
 * PC11 - PIN11                     (input pullup).
 * PC12 - PIN12                     (input pullup).
 * PC13 - PIN13                     (input pullup).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ALTERNATE(GPIOC_PIN0) |  \
                                     PIN_MODE_OUTPUT(GPIOC_PIN1) |  \
                                     PIN_MODE_ALTERNATE(GPIOC_PIN2) |   \
                                     PIN_MODE_ALTERNATE(GPIOC_PIN3) |           \
                                     PIN_MODE_OUTPUT(GPIOC_CTRL_ROT1_B) |    \
                                     PIN_MODE_INPUT(GPIOC_CTRL_ROT1_SW) |      \
                                     PIN_MODE_ALTERNATE(GPIOC_MIDI_OUT) |  \
                                     PIN_MODE_ALTERNATE(GPIOC_MIDI_IN) |     \
                                     PIN_MODE_OUTPUT(GPIOC_PIN8) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_I2S_CKIN) |   \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI3_CLK) |     \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI3_MISO) |          \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI3_MOSI) |          \
                                     PIN_MODE_OUTPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |       \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_PIN0) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_CTRL_ROT1_B) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_CTRL_ROT1_SW) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_MIDI_OUT) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_MIDI_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOC_I2S_CKIN) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI3_CLK) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI3_MISO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI3_MOSI) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_HIGH(GPIOC_PIN0) |     \
                                     PIN_OSPEED_HIGH(GPIOC_PIN1) |  \
                                     PIN_OSPEED_HIGH(GPIOC_PIN2) |   \
                                     PIN_OSPEED_HIGH(GPIOC_PIN3) |       \
                                     PIN_OSPEED_HIGH(GPIOC_CTRL_ROT1_B) |    \
                                     PIN_OSPEED_HIGH(GPIOC_CTRL_ROT1_SW) |     \
                                     PIN_OSPEED_HIGH(GPIOC_MIDI_OUT) |     \
                                     PIN_OSPEED_HIGH(GPIOC_MIDI_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOC_PIN8) |       \
                                     PIN_OSPEED_HIGH(GPIOC_I2S_CKIN) |      \
                                     PIN_OSPEED_HIGH(GPIOC_SPI3_CLK) |        \
                                     PIN_OSPEED_HIGH(GPIOC_SPI3_MISO) |      \
                                     PIN_OSPEED_HIGH(GPIOC_SPI3_MOSI) |      \
                                     PIN_OSPEED_HIGH(GPIOC_PIN13) |      \
                                     PIN_OSPEED_HIGH(GPIOC_OSC32_IN) |      \
                                     PIN_OSPEED_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_PIN0) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN1) |\
                                     PIN_PUPDR_FLOATING(GPIOC_PIN2) |\
                                     PIN_PUPDR_FLOATING(GPIOC_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_CTRL_ROT1_B) | \
                                     PIN_PUPDR_FLOATING(GPIOC_CTRL_ROT1_SW) |  \
                                     PIN_PUPDR_PULLUP(GPIOC_MIDI_OUT) |  \
                                     PIN_PUPDR_PULLUP(GPIOC_MIDI_IN) |     \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_I2S_CKIN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI3_CLK) |     \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI3_MISO) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI3_MOSI) |        \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_IN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_OUT))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PIN0) |        \
                                     PIN_ODR_HIGH(GPIOC_PIN1) |     \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |      \
                                     PIN_ODR_HIGH(GPIOC_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOC_CTRL_ROT1_B) |       \
                                     PIN_ODR_HIGH(GPIOC_CTRL_ROT1_SW) |        \
                                     PIN_ODR_HIGH(GPIOC_MIDI_OUT) |        \
                                     PIN_ODR_HIGH(GPIOC_MIDI_IN) |           \
                                     PIN_ODR_HIGH(GPIOC_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOC_I2S_CKIN) |         \
                                     PIN_ODR_HIGH(GPIOC_SPI3_CLK) |           \
                                     PIN_ODR_HIGH(GPIOC_SPI3_MISO) |            \
                                     PIN_ODR_HIGH(GPIOC_SPI3_MOSI) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_OSC32_IN) |         \
                                     PIN_ODR_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_PIN0, 12U) |    \
                                     PIN_AFIO_AF(GPIOC_PIN1, 0U) |  \
                                     PIN_AFIO_AF(GPIOC_PIN2, 5U) |   \
                                     PIN_AFIO_AF(GPIOC_PIN3, 5U) |          \
                                     PIN_AFIO_AF(GPIOC_CTRL_ROT1_B, 0U) |    \
                                     PIN_AFIO_AF(GPIOC_CTRL_ROT1_SW, 0U) |     \
                                     PIN_AFIO_AF(GPIOC_MIDI_OUT, 8U) |    \
                                     PIN_AFIO_AF(GPIOC_MIDI_IN, 8U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_I2S_CKIN, 4U) |      \
                                     PIN_AFIO_AF(GPIOC_SPI3_CLK, 6U) |       \
                                     PIN_AFIO_AF(GPIOC_SPI3_MISO, 6U) |         \
                                     PIN_AFIO_AF(GPIOC_SPI3_MOSI, 6U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - FMC_D2                    (alternate 12).
 * PD1  - FMC_D3                    (alternate 12).
 * PD2  - PIN2                      (input pullup).
 * PD3  - LCD_G7                    (alternate 14).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - LCD_B2                    (alternate 14).
 * PD7  - PIN7                      (input pullup).
 * PD8  - FMC_D13                   (alternate 12).
 * PD9  - FMC_D14                   (alternate 12).
 * PD10 - FMC_D15                   (alternate 12).
 * PD11 - LCD_TE                    (input floating).
 * PD12 - LCD_RDX                   (output pushpull maximum).
 * PD13 - LCD_WRX                   (output pushpull maximum).
 * PD14 - FMC_D0                    (alternate 12).
 * PD15 - FMC_D1                    (alternate 12).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ALTERNATE(GPIOD_CAN_RX) |     \
                                     PIN_MODE_ALTERNATE(GPIOD_CAN_TX) |     \
                                     PIN_MODE_INPUT(GPIOD_PIN2) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_FLASH_CS) |     \
                                     PIN_MODE_OUTPUT(GPIOD_DAC_CS) |           \
                                     PIN_MODE_OUTPUT(GPIOD_UART_TX) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_UART_RX) |     \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_PIN8) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_PIN9) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_PIN10) |    \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |         \
                                     PIN_MODE_OUTPUT(GPIOD_PIN12) |       \
                                     PIN_MODE_OUTPUT(GPIOD_PIN13) |       \
                                     PIN_MODE_ALTERNATE(GPIOD_PIN14) |     \
                                     PIN_MODE_ALTERNATE(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_CAN_RX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_CAN_TX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FLASH_CS) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_DAC_CS) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_UART_TX) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_UART_RX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_CAN_RX) |        \
                                     PIN_OSPEED_HIGH(GPIOD_CAN_TX) |        \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN2) |       \
                                     PIN_OSPEED_HIGH(GPIOD_FLASH_CS) |        \
                                     PIN_OSPEED_VERYLOW(GPIOD_DAC_CS) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_UART_TX) |       \
                                     PIN_OSPEED_HIGH(GPIOD_UART_RX) |        \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN7) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN8) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN9) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN10) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN11) |        \
                                     PIN_OSPEED_HIGH(GPIOD_PIN12) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN13) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN14) |        \
                                     PIN_OSPEED_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_CAN_RX) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_CAN_TX) |     \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_FLASH_CS) |     \
                                     PIN_PUPDR_PULLUP(GPIOD_DAC_CS) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_UART_TX) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_UART_RX) |     \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN8) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN9) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN10) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN11) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN12) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN13) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN14) |     \
                                     PIN_PUPDR_FLOATING(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_CAN_RX) |           \
                                     PIN_ODR_HIGH(GPIOD_CAN_TX) |           \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_FLASH_CS) |           \
                                     PIN_ODR_HIGH(GPIOD_DAC_CS) |             \
                                     PIN_ODR_HIGH(GPIOD_UART_TX) |             \
                                     PIN_ODR_HIGH(GPIOD_UART_RX) |           \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |           \
                                     PIN_ODR_HIGH(GPIOD_PIN12) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN13) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN14) |           \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_CAN_RX, 12U) |       \
                                     PIN_AFIO_AF(GPIOD_CAN_TX, 12U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_FLASH_CS, 14U) |       \
                                     PIN_AFIO_AF(GPIOD_DAC_CS, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_UART_TX, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_UART_RX, 14U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_PIN9, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_PIN10, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |        \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN14, 12U) |       \
                                     PIN_AFIO_AF(GPIOD_PIN15, 12U))

/*
 * GPIOE setup:
 *
 * PE0  - FMC_NBL0                  (alternate 12).
 * PE1  - FMC_NBL1                  (alternate 12).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input pullup).
 * PE5  - PIN5                      (input pullup).
 * PE6  - PIN6                      (input pullup).
 * PE7  - FMC_D4                    (alternate 12).
 * PE8  - FMC_D5                    (alternate 12).
 * PE9  - FMC_D6                    (alternate 12).
 * PE10 - FMC_D7                    (alternate 12).
 * PE11 - FMC_D8                    (alternate 12).
 * PE12 - FMC_D9                    (alternate 12).
 * PE13 - FMC_D10                   (alternate 12).
 * PE14 - FMC_D11                   (alternate 12).
 * PE15 - FMC_D12                   (alternate 12).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_ALTERNATE(GPIOE_PIN0) |   \
                                     PIN_MODE_ALTERNATE(GPIOE_PIN1) |   \
                                     PIN_MODE_INPUT(GPIOE_SAI_MCK) |           \
                                     PIN_MODE_INPUT(GPIOE_SAI_SD_A) |           \
                                     PIN_MODE_INPUT(GPIOE_SAI_LRCK) |           \
                                     PIN_MODE_INPUT(GPIOE_SAI_BCK) |           \
                                     PIN_MODE_INPUT(GPIOE_SAI_SD_B) |           \
                                     PIN_MODE_ALTERNATE(GPIOE_CTRL_LCD_D0) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_CTRL_LCD_D1) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_CTRL_LCD_D2) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_CTRL_LCD_D3) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_CTRL_LCD_D4) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_SPI4_CLK) |     \
                                     PIN_MODE_ALTERNATE(GPIOE_SPI4_MISO) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_SPI4_MOSI) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SAI_MCK) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SAI_SD_A) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SAI_LRCK) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SAI_BCK) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SAI_SD_B) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CTRL_LCD_D0) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CTRL_LCD_D1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CTRL_LCD_D2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CTRL_LCD_D3) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_CTRL_LCD_D4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SPI4_CLK) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SPI4_MISO) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SPI4_MOSI) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_HIGH(GPIOE_PIN0) |      \
                                     PIN_OSPEED_HIGH(GPIOE_PIN1) |      \
                                     PIN_OSPEED_VERYLOW(GPIOE_SAI_MCK) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_SAI_SD_A) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_SAI_LRCK) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_SAI_BCK) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_SAI_SD_B) |       \
                                     PIN_OSPEED_HIGH(GPIOE_CTRL_LCD_D0) |        \
                                     PIN_OSPEED_HIGH(GPIOE_CTRL_LCD_D1) |        \
                                     PIN_OSPEED_HIGH(GPIOE_CTRL_LCD_D2) |        \
                                     PIN_OSPEED_HIGH(GPIOE_CTRL_LCD_D3) |        \
                                     PIN_OSPEED_HIGH(GPIOE_CTRL_LCD_D4) |        \
                                     PIN_OSPEED_HIGH(GPIOE_SPI4_CLK) |        \
                                     PIN_OSPEED_HIGH(GPIOE_SPI4_MISO) |       \
                                     PIN_OSPEED_HIGH(GPIOE_SPI4_MOSI) |       \
                                     PIN_OSPEED_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_PIN0) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN1) |   \
                                     PIN_PUPDR_PULLUP(GPIOE_SAI_MCK) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_SAI_SD_A) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_SAI_LRCK) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_SAI_BCK) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_SAI_SD_B) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_CTRL_LCD_D0) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_CTRL_LCD_D1) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_CTRL_LCD_D2) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_CTRL_LCD_D3) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_CTRL_LCD_D4) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_SPI4_CLK) |     \
                                     PIN_PUPDR_FLOATING(GPIOE_SPI4_MISO) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_SPI4_MOSI) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |         \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |         \
                                     PIN_ODR_HIGH(GPIOE_SAI_MCK) |             \
                                     PIN_ODR_HIGH(GPIOE_SAI_SD_A) |             \
                                     PIN_ODR_HIGH(GPIOE_SAI_LRCK) |             \
                                     PIN_ODR_HIGH(GPIOE_SAI_BCK) |             \
                                     PIN_ODR_HIGH(GPIOE_SAI_SD_B) |             \
                                     PIN_ODR_HIGH(GPIOE_CTRL_LCD_D0) |           \
                                     PIN_ODR_HIGH(GPIOE_CTRL_LCD_D1) |           \
                                     PIN_ODR_HIGH(GPIOE_CTRL_LCD_D2) |           \
                                     PIN_ODR_HIGH(GPIOE_CTRL_LCD_D3) |           \
                                     PIN_ODR_HIGH(GPIOE_CTRL_LCD_D4) |           \
                                     PIN_ODR_HIGH(GPIOE_SPI4_CLK) |           \
                                     PIN_ODR_HIGH(GPIOE_SPI4_MISO) |          \
                                     PIN_ODR_HIGH(GPIOE_SPI4_MOSI) |          \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 12U) |     \
                                     PIN_AFIO_AF(GPIOE_PIN1, 12U) |     \
                                     PIN_AFIO_AF(GPIOE_SAI_MCK, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_SAI_SD_A, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_SAI_LRCK, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_SAI_BCK, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_SAI_SD_B, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_CTRL_LCD_D0, 12U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_CTRL_LCD_D1, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_CTRL_LCD_D2, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_CTRL_LCD_D3, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_CTRL_LCD_D4, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_SPI4_CLK, 12U) |       \
                                     PIN_AFIO_AF(GPIOE_SPI4_MISO, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_SPI4_MOSI, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_PIN15, 12U))

/*
 * GPIOF setup:
 *
 * PF0  - FMC_A0                    (alternate 12).
 * PF1  - FMC_A1                    (alternate 12).
 * PF2  - FMC_A2                    (alternate 12).
 * PF3  - FMC_A3                    (alternate 12).
 * PF4  - FMC_A4                    (alternate 12).
 * PF5  - FMC_A5                    (alternate 12).
 * PF6  - PIN6                      (input pullup).
 * PF7  - LCD_DCX                   (alternate 5).
 * PF8  - SPI5_MISO                 (alternate 5).
 * PF9  - SPI5_MOSI                 (alternate 5).
 * PF10 - LCD_DE                    (alternate 14).
 * PF11 - FMC_SDNRAS                (alternate 12).
 * PF12 - FMC_A6                    (alternate 12).
 * PF13 - FMC_A7                    (alternate 12).
 * PF14 - FMC_A8                    (alternate 12).
 * PF15 - FMC_A9                    (alternate 12).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_ALTERNATE(GPIOF_PIN0) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN1) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN2) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN3) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN4) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN5) |     \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN7) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN8) |  \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN9) |  \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN10) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN11) | \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN12) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN13) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN14) |     \
                                     PIN_MODE_ALTERNATE(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_HIGH(GPIOF_PIN0) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN1) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN2) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN3) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN4) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN5) |        \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN6) |       \
                                     PIN_OSPEED_HIGH(GPIOF_PIN7) |       \
                                     PIN_OSPEED_HIGH(GPIOF_PIN8) |     \
                                     PIN_OSPEED_HIGH(GPIOF_PIN9) |     \
                                     PIN_OSPEED_HIGH(GPIOF_PIN10) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN11) |    \
                                     PIN_OSPEED_HIGH(GPIOF_PIN12) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN13) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN14) |        \
                                     PIN_OSPEED_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_PIN0) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN1) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN2) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN3) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN4) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN5) |     \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN7) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN8) |  \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN9) |  \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN10) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN11) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN12) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN13) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN14) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN1) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |          \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |        \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |        \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |       \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |           \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN1, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN2, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN3, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN4, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN5, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN7, 5U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 5U) |     \
                                     PIN_AFIO_AF(GPIOF_PIN9, 5U) |     \
                                     PIN_AFIO_AF(GPIOF_PIN10, 14U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN11, 12U) |   \
                                     PIN_AFIO_AF(GPIOF_PIN12, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN13, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN14, 12U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN15, 12U))

/*
 * GPIOG setup:
 *
 * PG0  - FMC_A10                   (alternate 12).
 * PG1  - FMC_A11                   (alternate 12).
 * PG2  - PIN2                      (input pullup).
 * PG3  - PIN3                      (input pullup).
 * PG4  - FMC_BA0                   (alternate 12).
 * PG5  - FMC_BA1                   (alternate 12).
 * PG6  - LCD_R7                    (alternate 14).
 * PG7  - LCD_CLK                   (alternate 14).
 * PG8  - FMC_SDCLK                 (alternate 12).
 * PG9  - PIN9                      (input pullup).
 * PG10 - LCD_G3                    (alternate 14).
 * PG11 - LCD_B3                    (alternate 14).
 * PG12 - LCD_B4                    (alternate 14).
 * PG13 - LED3_GREEN                (output pushpull maximum).
 * PG14 - LED4_RED                  (output pushpull maximum).
 * PG15 - FMC_SDNCAS                (alternate 12).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_ALTERNATE(GPIOG_PIN0) |    \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN1) |    \
                                     PIN_MODE_INPUT(GPIOG_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN3) |           \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN4) |    \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN5) |    \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN6) |     \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN7) |    \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN8) |  \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN10) |     \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN11) |     \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN12) |     \
                                     PIN_MODE_OUTPUT(GPIOG_PIN13) |    \
                                     PIN_MODE_OUTPUT(GPIOG_PIN14) |      \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN5) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) | \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_HIGH(GPIOG_PIN0) |       \
                                     PIN_OSPEED_HIGH(GPIOG_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN3) |       \
                                     PIN_OSPEED_HIGH(GPIOG_PIN4) |       \
                                     PIN_OSPEED_HIGH(GPIOG_PIN5) |       \
                                     PIN_OSPEED_HIGH(GPIOG_PIN6) |        \
                                     PIN_OSPEED_HIGH(GPIOG_PIN7) |       \
                                     PIN_OSPEED_HIGH(GPIOG_PIN8) |     \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN9) |       \
                                     PIN_OSPEED_HIGH(GPIOG_PIN10) |        \
                                     PIN_OSPEED_HIGH(GPIOG_PIN11) |        \
                                     PIN_OSPEED_HIGH(GPIOG_PIN12) |        \
                                     PIN_OSPEED_HIGH(GPIOG_PIN13) |    \
                                     PIN_OSPEED_HIGH(GPIOG_PIN14) |      \
                                     PIN_OSPEED_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_PIN0) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN1) |    \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN4) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN5) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN6) |     \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN7) |    \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN8) |  \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN10) |     \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN11) |     \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN12) |     \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN13) | \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN14) |   \
                                     PIN_PUPDR_FLOATING(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |          \
                                     PIN_ODR_HIGH(GPIOG_PIN1) |          \
                                     PIN_ODR_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN4) |          \
                                     PIN_ODR_HIGH(GPIOG_PIN5) |          \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |           \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |          \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |        \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |           \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |           \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |           \
                                     PIN_ODR_LOW(GPIOG_PIN13) |        \
                                     PIN_ODR_LOW(GPIOG_PIN14) |          \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_PIN1, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN4, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_PIN5, 12U) |      \
                                     PIN_AFIO_AF(GPIOG_PIN6, 14U) |       \
                                     PIN_AFIO_AF(GPIOG_PIN7, 14U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 12U) |    \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN10, 14U) |       \
                                     PIN_AFIO_AF(GPIOG_PIN11, 14U) |       \
                                     PIN_AFIO_AF(GPIOG_PIN12, 14U) |       \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0U) |    \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0U) |      \
                                     PIN_AFIO_AF(GPIOG_PIN15, 12U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 * PH4  - PIN4                      (input pullup).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - PIN11                     (input pullup).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_HIGH(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input pullup).
 * PI1  - PIN1                      (input pullup).
 * PI2  - PIN2                      (input pullup).
 * PI3  - PIN3                      (input pullup).
 * PI4  - PIN4                      (input pullup).
 * PI5  - PIN5                      (input pullup).
 * PI6  - PIN6                      (input pullup).
 * PI7  - PIN7                      (input pullup).
 * PI8  - PIN8                      (input pullup).
 * PI9  - PIN9                      (input pullup).
 * PI10 - PIN10                     (input pullup).
 * PI11 - PIN11                     (input pullup).
 * PI12 - PIN12                     (input pullup).
 * PI13 - PIN13                     (input pullup).
 * PI14 - PIN14                     (input pullup).
 * PI15 - PIN15                     (input pullup).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOI_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLUP(GPIOI_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0U))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0U))


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
