#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "board.h"

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/* HDMI_DDC_SDA (number AF22), HDMI_DDC_SDA */
/* Routed pin properties */
#define PINCTRL_HOG_P1_63_PERIPHERAL                                        HDMI   /*!< Peripheral name */
#define PINCTRL_HOG_P1_63_SIGNAL                                        hdmi_sda   /*!< Signal name */
#define PINCTRL_HOG_P1_63_PIN_NAME                                  HDMI_DDC_SDA   /*!< Routed pin name */
#define PINCTRL_HOG_P1_63_LABEL                                   "HDMI_DDC_SDA"   /*!< Label */
#define PINCTRL_HOG_P1_63_NAME                                           "P1_63"   /*!< Identifier */

/* HDMI_DDC_SCL (number AC22), HDMI_DDC_SCL */
/* Routed pin properties */
#define PINCTRL_HOG_P1_70_PERIPHERAL                                        HDMI   /*!< Peripheral name */
#define PINCTRL_HOG_P1_70_SIGNAL                                        hdmi_scl   /*!< Signal name */
#define PINCTRL_HOG_P1_70_PIN_NAME                                  HDMI_DDC_SCL   /*!< Routed pin name */
#define PINCTRL_HOG_P1_70_LABEL                                   "HDMI_DDC_SCL"   /*!< Label */
#define PINCTRL_HOG_P1_70_NAME                                           "P1_70"   /*!< Identifier */

/* HDMI_HPD (number AE22), HDMI_HPD */
/* Routed pin properties */
#define PINCTRL_HOG_P1_92_PERIPHERAL                                        HDMI   /*!< Peripheral name */
#define PINCTRL_HOG_P1_92_SIGNAL                                        hdmi_hpd   /*!< Signal name */
#define PINCTRL_HOG_P1_92_PIN_NAME                                      HDMI_HPD   /*!< Routed pin name */
#define PINCTRL_HOG_P1_92_LABEL                                       "HDMI_HPD"   /*!< Label */
#define PINCTRL_HOG_P1_92_NAME                                           "P1_92"   /*!< Identifier */

/* HDMI_CEC (number AD22), HDMI_CEC */
/* Routed pin properties */
#define PINCTRL_HOG_P1_85_PERIPHERAL                                        HDMI   /*!< Peripheral name */
#define PINCTRL_HOG_P1_85_SIGNAL                                        hdmi_cec   /*!< Signal name */
#define PINCTRL_HOG_P1_85_PIN_NAME                                      HDMI_CEC   /*!< Routed pin name */
#define PINCTRL_HOG_P1_85_LABEL                                       "HDMI_CEC"   /*!< Label */
#define PINCTRL_HOG_P1_85_NAME                                           "P1_85"   /*!< Identifier */

/* SAI1_MCLK (number AE12), DEPA */
/* Routed pin properties */
#define PINCTRL_HOG_P2_52_PERIPHERAL                                       GPIO4   /*!< Peripheral name */
#define PINCTRL_HOG_P2_52_SIGNAL                                         gpio_io   /*!< Signal name */
#define PINCTRL_HOG_P2_52_CHANNEL                                             20   /*!< Signal channel */
#define PINCTRL_HOG_P2_52_PIN_NAME                                     SAI1_MCLK   /*!< Routed pin name */
#define PINCTRL_HOG_P2_52_LABEL                                           "DEPA"   /*!< Label */
#define PINCTRL_HOG_P2_52_NAME                                           "P2_52"   /*!< Identifier */
#define PINCTRL_HOG_P2_52_DIRECTION                           kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_HOG_P2_52_GPIO                                             GPIO4   /*!< GPIO peripheral base pointer */
#define PINCTRL_HOG_P2_52_GPIO_PIN                                           20U   /*!< GPIO pin number */
#define PINCTRL_HOG_P2_52_GPIO_PIN_MASK                              (1U << 20U)   /*!< GPIO pin mask */

/* SAI2_RXFS (number AH17), DEPB */
/* Routed pin properties */
#define PINCTRL_HOG_P2_88_PERIPHERAL                                       GPIO4   /*!< Peripheral name */
#define PINCTRL_HOG_P2_88_SIGNAL                                         gpio_io   /*!< Signal name */
#define PINCTRL_HOG_P2_88_CHANNEL                                             21   /*!< Signal channel */
#define PINCTRL_HOG_P2_88_PIN_NAME                                     SAI2_RXFS   /*!< Routed pin name */
#define PINCTRL_HOG_P2_88_LABEL                                           "DEPB"   /*!< Label */
#define PINCTRL_HOG_P2_88_NAME                                           "P2_88"   /*!< Identifier */
#define PINCTRL_HOG_P2_88_DIRECTION                           kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_HOG_P2_88_GPIO                                             GPIO4   /*!< GPIO peripheral base pointer */
#define PINCTRL_HOG_P2_88_GPIO_PIN                                           21U   /*!< GPIO pin number */
#define PINCTRL_HOG_P2_88_GPIO_PIN_MASK                              (1U << 21U)   /*!< GPIO pin mask */

/* SAI1_TXD0 (number AJ11), DIG */
/* Routed pin properties */
#define PINCTRL_HOG_P2_60_PERIPHERAL                                       GPIO4   /*!< Peripheral name */
#define PINCTRL_HOG_P2_60_SIGNAL                                         gpio_io   /*!< Signal name */
#define PINCTRL_HOG_P2_60_CHANNEL                                             12   /*!< Signal channel */
#define PINCTRL_HOG_P2_60_PIN_NAME                                     SAI1_TXD0   /*!< Routed pin name */
#define PINCTRL_HOG_P2_60_LABEL                                            "DIG"   /*!< Label */
#define PINCTRL_HOG_P2_60_NAME                                           "P2_60"   /*!< Identifier */
#define PINCTRL_HOG_P2_60_DIRECTION                           kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_HOG_P2_60_GPIO                                             GPIO4   /*!< GPIO peripheral base pointer */
#define PINCTRL_HOG_P2_60_GPIO_PIN                                           12U   /*!< GPIO pin number */
#define PINCTRL_HOG_P2_60_GPIO_PIN_MASK                              (1U << 12U)   /*!< GPIO pin mask */

/* SAI1_TXD7 (number AJ13), ROT */
/* Routed pin properties */
#define PINCTRL_HOG_P1_60_PERIPHERAL                                       GPIO4   /*!< Peripheral name */
#define PINCTRL_HOG_P1_60_SIGNAL                                         gpio_io   /*!< Signal name */
#define PINCTRL_HOG_P1_60_CHANNEL                                             19   /*!< Signal channel */
#define PINCTRL_HOG_P1_60_PIN_NAME                                     SAI1_TXD7   /*!< Routed pin name */
#define PINCTRL_HOG_P1_60_LABEL                                            "ROT"   /*!< Label */
#define PINCTRL_HOG_P1_60_NAME                                           "P1_60"   /*!< Identifier */
#define PINCTRL_HOG_P1_60_DIRECTION                           kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_HOG_P1_60_GPIO                                             GPIO4   /*!< GPIO peripheral base pointer */
#define PINCTRL_HOG_P1_60_GPIO_PIN                                           19U   /*!< GPIO pin number */
#define PINCTRL_HOG_P1_60_GPIO_PIN_MASK                              (1U << 19U)   /*!< GPIO pin mask */

/* SAI5_RXC (number AD14), FLT */
/* Routed pin properties */
#define PINCTRL_HOG_P1_89_PERIPHERAL                                       GPIO3   /*!< Peripheral name */
#define PINCTRL_HOG_P1_89_SIGNAL                                         gpio_io   /*!< Signal name */
#define PINCTRL_HOG_P1_89_CHANNEL                                             20   /*!< Signal channel */
#define PINCTRL_HOG_P1_89_PIN_NAME                                      SAI5_RXC   /*!< Routed pin name */
#define PINCTRL_HOG_P1_89_LABEL                                            "FLT"   /*!< Label */
#define PINCTRL_HOG_P1_89_NAME                                           "P1_89"   /*!< Identifier */
#define PINCTRL_HOG_P1_89_DIRECTION                           kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_HOG_P1_89_GPIO                                             GPIO3   /*!< GPIO peripheral base pointer */
#define PINCTRL_HOG_P1_89_GPIO_PIN                                           20U   /*!< GPIO pin number */
#define PINCTRL_HOG_P1_89_GPIO_PIN_MASK                              (1U << 20U)   /*!< GPIO pin mask */

/* SPDIF_EXT_CLK (number AC18), DIM */
/* Routed pin properties */
#define PINCTRL_BACKLIGHT_P1_77_PERIPHERAL                                  PWM1   /*!< Peripheral name */
#define PINCTRL_BACKLIGHT_P1_77_SIGNAL                                   pwm_out   /*!< Signal name */
#define PINCTRL_BACKLIGHT_P1_77_PIN_NAME                           SPDIF_EXT_CLK   /*!< Routed pin name */
#define PINCTRL_BACKLIGHT_P1_77_LABEL                                      "DIM"   /*!< Label */
#define PINCTRL_BACKLIGHT_P1_77_NAME                                     "P1_77"   /*!< Identifier */

/* I2C4_SCL (number AF8), MISO */
/* Routed pin properties */
#define PINCTRL_ADC_P2_90_PERIPHERAL                                      ECSPI2   /*!< Peripheral name */
#define PINCTRL_ADC_P2_90_SIGNAL                                      ecspi_miso   /*!< Signal name */
#define PINCTRL_ADC_P2_90_PIN_NAME                                      I2C4_SCL   /*!< Routed pin name */
#define PINCTRL_ADC_P2_90_LABEL                                           "MISO"   /*!< Label */
#define PINCTRL_ADC_P2_90_NAME                                           "P2_90"   /*!< Identifier */

/* I2C3_SDA (number AJ6), MOSI */
/* Routed pin properties */
#define PINCTRL_ADC_P1_91_PERIPHERAL                                      ECSPI2   /*!< Peripheral name */
#define PINCTRL_ADC_P1_91_SIGNAL                                      ecspi_mosi   /*!< Signal name */
#define PINCTRL_ADC_P1_91_PIN_NAME                                      I2C3_SDA   /*!< Routed pin name */
#define PINCTRL_ADC_P1_91_LABEL                                           "MOSI"   /*!< Label */
#define PINCTRL_ADC_P1_91_NAME                                           "P1_91"   /*!< Identifier */

/* I2C3_SCL (number AJ7), SCLK */
/* Routed pin properties */
#define PINCTRL_ADC_P1_94_PERIPHERAL                                      ECSPI2   /*!< Peripheral name */
#define PINCTRL_ADC_P1_94_SIGNAL                                      ecspi_sclk   /*!< Signal name */
#define PINCTRL_ADC_P1_94_PIN_NAME                                      I2C3_SCL   /*!< Routed pin name */
#define PINCTRL_ADC_P1_94_LABEL                                           "SCLK"   /*!< Label */
#define PINCTRL_ADC_P1_94_NAME                                           "P1_94"   /*!< Identifier */

/* ECSPI2_SS0 (number AJ22), CS */
/* Routed pin properties */
#define PINCTRL_ADC_P2_91_PERIPHERAL                                      ECSPI2   /*!< Peripheral name */
#define PINCTRL_ADC_P2_91_SIGNAL                                        ecspi_ss   /*!< Signal name */
#define PINCTRL_ADC_P2_91_CHANNEL                                              0   /*!< Signal channel */
#define PINCTRL_ADC_P2_91_PIN_NAME                                    ECSPI2_SS0   /*!< Routed pin name */
#define PINCTRL_ADC_P2_91_LABEL                                             "CS"   /*!< Label */
#define PINCTRL_ADC_P2_91_NAME                                           "P2_91"   /*!< Identifier */

/* SAI3_RXD (number AF18), BAT_CE */
/* Routed pin properties */
#define PINCTRL_ADC_P1_28_PERIPHERAL                                       GPIO4   /*!< Peripheral name */
#define PINCTRL_ADC_P1_28_SIGNAL                                         gpio_io   /*!< Signal name */
#define PINCTRL_ADC_P1_28_CHANNEL                                             30   /*!< Signal channel */
#define PINCTRL_ADC_P1_28_PIN_NAME                                      SAI3_RXD   /*!< Routed pin name */
#define PINCTRL_ADC_P1_28_LABEL                                         "BAT_CE"   /*!< Label */
#define PINCTRL_ADC_P1_28_NAME                                           "P1_28"   /*!< Identifier */
#define PINCTRL_ADC_P1_28_DIRECTION                           kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_ADC_P1_28_GPIO                                             GPIO4   /*!< GPIO peripheral base pointer */
#define PINCTRL_ADC_P1_28_GPIO_PIN                                           30U   /*!< GPIO pin number */
#define PINCTRL_ADC_P1_28_GPIO_PIN_MASK                              (1U << 30U)   /*!< GPIO pin mask */

/* SD1_CLK (coord W28), MDIO_CLK */
/* Routed pin properties */
#define PINCTRL_FEC_P2_68_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_68_SIGNAL                                        enet_mdc   /*!< Signal name */
#define PINCTRL_FEC_P2_68_PIN_NAME                                       SD1_CLK   /*!< Routed pin name */
#define PINCTRL_FEC_P2_68_LABEL                                       "MDIO_CLK"   /*!< Label */
#define PINCTRL_FEC_P2_68_NAME                                           "P2_68"   /*!< Identifier */

/* SD1_CMD (coord W29), MDIO_DATA */
/* Routed pin properties */
#define PINCTRL_FEC_P2_70_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_70_SIGNAL                                       enet_mdio   /*!< Signal name */
#define PINCTRL_FEC_P2_70_PIN_NAME                                       SD1_CMD   /*!< Routed pin name */
#define PINCTRL_FEC_P2_70_LABEL                                      "MDIO_DATA"   /*!< Label */
#define PINCTRL_FEC_P2_70_NAME                                           "P2_70"   /*!< Identifier */

/* SD1_DATA2 (coord V29), RGMII1_RXD0 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_41_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_41_SIGNAL                                   enet_rgmii_rd   /*!< Signal name */
#define PINCTRL_FEC_P2_41_CHANNEL                                              0   /*!< Signal channel */
#define PINCTRL_FEC_P2_41_PIN_NAME                                     SD1_DATA2   /*!< Routed pin name */
#define PINCTRL_FEC_P2_41_LABEL                                    "RGMII1_RXD0"   /*!< Label */
#define PINCTRL_FEC_P2_41_NAME                                           "P2_41"   /*!< Identifier */

/* SD1_DATA3 (coord V28), RGMII1_RXD1 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_43_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_43_SIGNAL                                   enet_rgmii_rd   /*!< Signal name */
#define PINCTRL_FEC_P2_43_CHANNEL                                              1   /*!< Signal channel */
#define PINCTRL_FEC_P2_43_PIN_NAME                                     SD1_DATA3   /*!< Routed pin name */
#define PINCTRL_FEC_P2_43_LABEL                                    "RGMII1_RXD1"   /*!< Label */
#define PINCTRL_FEC_P2_43_NAME                                           "P2_43"   /*!< Identifier */

/* SAI1_RXD6 (number AH10), RGMII1_RXD2 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_45_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_45_SIGNAL                                   enet_rgmii_rd   /*!< Signal name */
#define PINCTRL_FEC_P2_45_CHANNEL                                              2   /*!< Signal channel */
#define PINCTRL_FEC_P2_45_PIN_NAME                                     SAI1_RXD6   /*!< Routed pin name */
#define PINCTRL_FEC_P2_45_LABEL                                    "RGMII1_RXD2"   /*!< Label */
#define PINCTRL_FEC_P2_45_NAME                                           "P2_45"   /*!< Identifier */

/* SAI1_RXD7 (number AH12), RGMII1_RXD3 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_47_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_47_SIGNAL                                   enet_rgmii_rd   /*!< Signal name */
#define PINCTRL_FEC_P2_47_CHANNEL                                              3   /*!< Signal channel */
#define PINCTRL_FEC_P2_47_PIN_NAME                                     SAI1_RXD7   /*!< Routed pin name */
#define PINCTRL_FEC_P2_47_LABEL                                    "RGMII1_RXD3"   /*!< Label */
#define PINCTRL_FEC_P2_47_NAME                                           "P2_47"   /*!< Identifier */

/* SAI1_TXFS (number AF12), RGMII1_RXCTL */
/* Routed pin properties */
#define PINCTRL_FEC_P2_53_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_53_SIGNAL                               enet_rgmii_rx_ctl   /*!< Signal name */
#define PINCTRL_FEC_P2_53_PIN_NAME                                     SAI1_TXFS   /*!< Routed pin name */
#define PINCTRL_FEC_P2_53_LABEL                                   "RGMII1_RXCTL"   /*!< Label */
#define PINCTRL_FEC_P2_53_NAME                                           "P2_53"   /*!< Identifier */

/* SAI1_TXC (number AJ12), RGMII1_RXC */
/* Routed pin properties */
#define PINCTRL_FEC_P2_55_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_55_SIGNAL                                  enet_rgmii_rxc   /*!< Signal name */
#define PINCTRL_FEC_P2_55_PIN_NAME                                      SAI1_TXC   /*!< Routed pin name */
#define PINCTRL_FEC_P2_55_LABEL                                     "RGMII1_RXC"   /*!< Label */
#define PINCTRL_FEC_P2_55_NAME                                           "P2_55"   /*!< Identifier */

/* SD1_DATA1 (coord Y28), RGMII1_TXD0 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_59_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_59_SIGNAL                                   enet_rgmii_td   /*!< Signal name */
#define PINCTRL_FEC_P2_59_CHANNEL                                              0   /*!< Signal channel */
#define PINCTRL_FEC_P2_59_PIN_NAME                                     SD1_DATA1   /*!< Routed pin name */
#define PINCTRL_FEC_P2_59_LABEL                                    "RGMII1_TXD0"   /*!< Label */
#define PINCTRL_FEC_P2_59_NAME                                           "P2_59"   /*!< Identifier */

/* SD1_DATA0 (coord Y29), RGMII1_TXD1 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_61_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_61_SIGNAL                                   enet_rgmii_td   /*!< Signal name */
#define PINCTRL_FEC_P2_61_CHANNEL                                              1   /*!< Signal channel */
#define PINCTRL_FEC_P2_61_PIN_NAME                                     SD1_DATA0   /*!< Routed pin name */
#define PINCTRL_FEC_P2_61_LABEL                                    "RGMII1_TXD1"   /*!< Label */
#define PINCTRL_FEC_P2_61_NAME                                           "P2_61"   /*!< Identifier */

/* SAI1_TXD2 (number AH11), RGMII1_TXD2 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_63_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_63_SIGNAL                                   enet_rgmii_td   /*!< Signal name */
#define PINCTRL_FEC_P2_63_CHANNEL                                              2   /*!< Signal channel */
#define PINCTRL_FEC_P2_63_PIN_NAME                                     SAI1_TXD2   /*!< Routed pin name */
#define PINCTRL_FEC_P2_63_LABEL                                    "RGMII1_TXD2"   /*!< Label */
#define PINCTRL_FEC_P2_63_NAME                                           "P2_63"   /*!< Identifier */

/* SAI1_TXD3 (number AD12), RGMII1_TXD3 */
/* Routed pin properties */
#define PINCTRL_FEC_P2_65_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_65_SIGNAL                                   enet_rgmii_td   /*!< Signal name */
#define PINCTRL_FEC_P2_65_CHANNEL                                              3   /*!< Signal channel */
#define PINCTRL_FEC_P2_65_PIN_NAME                                     SAI1_TXD3   /*!< Routed pin name */
#define PINCTRL_FEC_P2_65_LABEL                                    "RGMII1_TXD3"   /*!< Label */
#define PINCTRL_FEC_P2_65_NAME                                           "P2_65"   /*!< Identifier */

/* SAI1_TXD4 (number AH13), RGMII1_TXCTL */
/* Routed pin properties */
#define PINCTRL_FEC_P2_67_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_67_SIGNAL                               enet_rgmii_tx_ctl   /*!< Signal name */
#define PINCTRL_FEC_P2_67_PIN_NAME                                     SAI1_TXD4   /*!< Routed pin name */
#define PINCTRL_FEC_P2_67_LABEL                                   "RGMII1_TXCTL"   /*!< Label */
#define PINCTRL_FEC_P2_67_NAME                                           "P2_67"   /*!< Identifier */

/* SAI1_TXD5 (number AH14), RGMII1_TXC */
/* Routed pin properties */
#define PINCTRL_FEC_P2_69_PERIPHERAL                                       ENET1   /*!< Peripheral name */
#define PINCTRL_FEC_P2_69_SIGNAL                                  enet_rgmii_txc   /*!< Signal name */
#define PINCTRL_FEC_P2_69_PIN_NAME                                     SAI1_TXD5   /*!< Routed pin name */
#define PINCTRL_FEC_P2_69_LABEL                                     "RGMII1_TXC"   /*!< Label */
#define PINCTRL_FEC_P2_69_NAME                                           "P2_69"   /*!< Identifier */

/* SD2_WP (number AC26), ETH1_RESET */
/* Routed pin properties */
#define PINCTRL_FEC_P2_49_PERIPHERAL                                       GPIO2   /*!< Peripheral name */
#define PINCTRL_FEC_P2_49_SIGNAL                                         gpio_io   /*!< Signal name */
#define PINCTRL_FEC_P2_49_CHANNEL                                             20   /*!< Signal channel */
#define PINCTRL_FEC_P2_49_PIN_NAME                                        SD2_WP   /*!< Routed pin name */
#define PINCTRL_FEC_P2_49_LABEL                                     "ETH1_RESET"   /*!< Label */
#define PINCTRL_FEC_P2_49_NAME                                           "P2_49"   /*!< Identifier */
#define PINCTRL_FEC_P2_49_DIRECTION                          kGPIO_DigitalOutput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_FEC_P2_49_GPIO                                             GPIO2   /*!< GPIO peripheral base pointer */
#define PINCTRL_FEC_P2_49_GPIO_PIN                                           20U   /*!< GPIO pin number */
#define PINCTRL_FEC_P2_49_GPIO_PIN_MASK                              (1U << 20U)   /*!< GPIO pin mask */

/* SAI2_TXC (number AH15), CAN1_RX */
/* Routed pin properties */
#define PINCTRL_FLEXCAN1_P1_51_PERIPHERAL                               FLEXCAN1   /*!< Peripheral name */
#define PINCTRL_FLEXCAN1_P1_51_SIGNAL                                     can_rx   /*!< Signal name */
#define PINCTRL_FLEXCAN1_P1_51_PIN_NAME                                 SAI2_TXC   /*!< Routed pin name */
#define PINCTRL_FLEXCAN1_P1_51_LABEL                                   "CAN1_RX"   /*!< Label */
#define PINCTRL_FLEXCAN1_P1_51_NAME                                      "P1_51"   /*!< Identifier */

/* SPDIF_TX (number AE18), USB2_OVC */
/* Routed pin properties */
#define PINCTRL_FLEXCAN1_P1_81_PERIPHERAL                               FLEXCAN1   /*!< Peripheral name */
#define PINCTRL_FLEXCAN1_P1_81_SIGNAL                                     can_tx   /*!< Signal name */
#define PINCTRL_FLEXCAN1_P1_81_PIN_NAME                                 SPDIF_TX   /*!< Routed pin name */
#define PINCTRL_FLEXCAN1_P1_81_LABEL                                  "USB2_OVC"   /*!< Label */
#define PINCTRL_FLEXCAN1_P1_81_NAME                                      "P1_81"   /*!< Identifier */

/* SAI2_MCLK (number AJ15), CAN2_RX */
/* Routed pin properties */
#define PINCTRL_FLEXCAN2_P1_49_PERIPHERAL                               FLEXCAN2   /*!< Peripheral name */
#define PINCTRL_FLEXCAN2_P1_49_SIGNAL                                     can_rx   /*!< Signal name */
#define PINCTRL_FLEXCAN2_P1_49_PIN_NAME                                SAI2_MCLK   /*!< Routed pin name */
#define PINCTRL_FLEXCAN2_P1_49_LABEL                                   "CAN2_RX"   /*!< Label */
#define PINCTRL_FLEXCAN2_P1_49_NAME                                      "P1_49"   /*!< Identifier */

/* SAI2_TXD0 (number AH16), CAN2_TX */
/* Routed pin properties */
#define PINCTRL_FLEXCAN2_P1_33_PERIPHERAL                               FLEXCAN2   /*!< Peripheral name */
#define PINCTRL_FLEXCAN2_P1_33_SIGNAL                                     can_tx   /*!< Signal name */
#define PINCTRL_FLEXCAN2_P1_33_PIN_NAME                                SAI2_TXD0   /*!< Routed pin name */
#define PINCTRL_FLEXCAN2_P1_33_LABEL                                   "CAN2_TX"   /*!< Label */
#define PINCTRL_FLEXCAN2_P1_33_NAME                                      "P1_33"   /*!< Identifier */

/* GPIO1_IO12 (coord A5), N/A */
/* Routed pin properties */
#define PINCTRL_GPIO_LED_InternalPowerLED_PERIPHERAL                     GPIO1   /*!< Peripheral name */
#define PINCTRL_GPIO_LED_InternalPowerLED_SIGNAL                       gpio_io   /*!< Signal name */
#define PINCTRL_GPIO_LED_InternalPowerLED_CHANNEL                           12   /*!< Signal channel */
#define PINCTRL_GPIO_LED_InternalPowerLED_PIN_NAME                  GPIO1_IO12   /*!< Routed pin name */
#define PINCTRL_GPIO_LED_InternalPowerLED_LABEL                          "N/A"   /*!< Label */
#define PINCTRL_GPIO_LED_InternalPowerLED_NAME            "Internal Power LED"   /*!< Identifier */

/* Symbols to be used with GPIO driver */
#define PINCTRL_GPIO_LED_InternalPowerLED_GPIO                           GPIO1   /*!< GPIO peripheral base pointer */
#define PINCTRL_GPIO_LED_InternalPowerLED_GPIO_PIN                         12U   /*!< GPIO pin number */
#define PINCTRL_GPIO_LED_InternalPowerLED_GPIO_PIN_MASK            (1U << 12U)   /*!< GPIO pin mask */

/* DRAM_AC00 (coord J6), N/A */
/* Routed pin properties */
#define PINCTRL_LPDDR4_InternalLPDDR4_PERIPHERAL                           DRAM   /*!< Peripheral name */
#define PINCTRL_LPDDR4_InternalLPDDR4_SIGNAL                            dram_ac   /*!< Signal name */
#define PINCTRL_LPDDR4_InternalLPDDR4_CHANNEL                                00   /*!< Signal channel */
#define PINCTRL_LPDDR4_InternalLPDDR4_PIN_NAME                        DRAM_AC00   /*!< Routed pin name */
#define PINCTRL_LPDDR4_InternalLPDDR4_LABEL                               "N/A"   /*!< Label */
#define PINCTRL_LPDDR4_InternalLPDDR4_NAME                    "Internal LPDDR4"   /*!< Identifier */

/* EARC_AUX (number AH23), N/A */
/* Routed pin properties */
#define PINCTRL_EARC_NotroutedtoP1P2_PERIPHERAL                        EARC   /*!< Peripheral name */
#define PINCTRL_EARC_NotroutedtoP1P2_SIGNAL                        earc_aux   /*!< Signal name */
#define PINCTRL_EARC_NotroutedtoP1P2_PIN_NAME                      EARC_AUX   /*!< Routed pin name */
#define PINCTRL_EARC_NotroutedtoP1P2_LABEL                            "N/A"   /*!< Label */
#define PINCTRL_EARC_NotroutedtoP1P2_NAME            "Not routed to P1, P2"   /*!< Identifier */

/* EARC_N_HPD (number AH22), EARC_N_HPD */
/* Routed pin properties */
#define PINCTRL_EARC_P1_35_PERIPHERAL                                       EARC   /*!< Peripheral name */
#define PINCTRL_EARC_P1_35_SIGNAL                                     earc_n_hpd   /*!< Signal name */
#define PINCTRL_EARC_P1_35_PIN_NAME                                   EARC_N_HPD   /*!< Routed pin name */
#define PINCTRL_EARC_P1_35_LABEL                                    "EARC_N_HPD"   /*!< Label */
#define PINCTRL_EARC_P1_35_NAME                                          "P1_35"   /*!< Identifier */

/* EARC_P_UTIL (number AJ23), EARC_P_UTIL */
/* Routed pin properties */
#define PINCTRL_EARC_P1_37_PERIPHERAL                                       EARC   /*!< Peripheral name */
#define PINCTRL_EARC_P1_37_SIGNAL                                    earc_p_util   /*!< Signal name */
#define PINCTRL_EARC_P1_37_PIN_NAME                                  EARC_P_UTIL   /*!< Routed pin name */
#define PINCTRL_EARC_P1_37_LABEL                                   "EARC_P_UTIL"   /*!< Label */
#define PINCTRL_EARC_P1_37_NAME                                          "P1_37"   /*!< Identifier */

/* HDMI_TX0_N (number AJ25), HDMI_TX0N */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_31_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_31_SIGNAL                                     hdmi_tx0_n   /*!< Signal name */
#define PINCTRL_HDMI_P1_31_PIN_NAME                                   HDMI_TX0_N   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_31_LABEL                                     "HDMI_TX0N"   /*!< Label */
#define PINCTRL_HDMI_P1_31_NAME                                          "P1_31"   /*!< Identifier */

/* HDMI_TX0_P (number AH25), HDMI_TX0P */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_29_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_29_SIGNAL                                     hdmi_tx0_p   /*!< Signal name */
#define PINCTRL_HDMI_P1_29_PIN_NAME                                   HDMI_TX0_P   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_29_LABEL                                     "HDMI_TX0P"   /*!< Label */
#define PINCTRL_HDMI_P1_29_NAME                                          "P1_29"   /*!< Identifier */

/* HDMI_TX1_N (number AJ26), HDMI_TX1N */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_41_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_41_SIGNAL                                     hdmi_tx1_n   /*!< Signal name */
#define PINCTRL_HDMI_P1_41_PIN_NAME                                   HDMI_TX1_N   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_41_LABEL                                     "HDMI_TX1N"   /*!< Label */
#define PINCTRL_HDMI_P1_41_NAME                                          "P1_41"   /*!< Identifier */

/* HDMI_TX1_P (number AH26), HDMI_TX1P */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_39_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_39_SIGNAL                                     hdmi_tx1_p   /*!< Signal name */
#define PINCTRL_HDMI_P1_39_PIN_NAME                                   HDMI_TX1_P   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_39_LABEL                                     "HDMI_TX1P"   /*!< Label */
#define PINCTRL_HDMI_P1_39_NAME                                          "P1_39"   /*!< Identifier */

/* HDMI_TX2_N (number AJ27), HDMI_TX2N */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_47_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_47_SIGNAL                                     hdmi_tx2_n   /*!< Signal name */
#define PINCTRL_HDMI_P1_47_PIN_NAME                                   HDMI_TX2_N   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_47_LABEL                                     "HDMI_TX2N"   /*!< Label */
#define PINCTRL_HDMI_P1_47_NAME                                          "P1_47"   /*!< Identifier */

/* HDMI_TX2_P (number AH27), HDMI_TX2P */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_45_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_45_SIGNAL                                     hdmi_tx2_p   /*!< Signal name */
#define PINCTRL_HDMI_P1_45_PIN_NAME                                   HDMI_TX2_P   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_45_LABEL                                     "HDMI_TX2P"   /*!< Label */
#define PINCTRL_HDMI_P1_45_NAME                                          "P1_45"   /*!< Identifier */

/* HDMI_TXC_N (number AJ24), HDMI_TXCN */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_25_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_25_SIGNAL                                     hdmi_txc_n   /*!< Signal name */
#define PINCTRL_HDMI_P1_25_PIN_NAME                                   HDMI_TXC_N   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_25_LABEL                                     "HDMI_TXCN"   /*!< Label */
#define PINCTRL_HDMI_P1_25_NAME                                          "P1_25"   /*!< Identifier */

/* HDMI_TXC_P (number AH24), HDMI_TXCP */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_23_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_23_SIGNAL                                     hdmi_txc_p   /*!< Signal name */
#define PINCTRL_HDMI_P1_23_PIN_NAME                                   HDMI_TXC_P   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_23_LABEL                                     "HDMI_TXCP"   /*!< Label */
#define PINCTRL_HDMI_P1_23_NAME                                          "P1_23"   /*!< Identifier */

/* HDMI_CEC (number AD22), HDMI_CEC */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_85_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_85_SIGNAL                                       hdmi_cec   /*!< Signal name */
#define PINCTRL_HDMI_P1_85_PIN_NAME                                     HDMI_CEC   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_85_LABEL                                      "HDMI_CEC"   /*!< Label */
#define PINCTRL_HDMI_P1_85_NAME                                          "P1_85"   /*!< Identifier */

/* HDMI_DDC_SCL (number AC22), HDMI_DDC_SCL */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_70_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_70_SIGNAL                                       hdmi_scl   /*!< Signal name */
#define PINCTRL_HDMI_P1_70_PIN_NAME                                 HDMI_DDC_SCL   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_70_LABEL                                  "HDMI_DDC_SCL"   /*!< Label */
#define PINCTRL_HDMI_P1_70_NAME                                          "P1_70"   /*!< Identifier */

/* HDMI_DDC_SDA (number AF22), HDMI_DDC_SDA */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_63_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_63_SIGNAL                                       hdmi_sda   /*!< Signal name */
#define PINCTRL_HDMI_P1_63_PIN_NAME                                 HDMI_DDC_SDA   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_63_LABEL                                  "HDMI_DDC_SDA"   /*!< Label */
#define PINCTRL_HDMI_P1_63_NAME                                          "P1_63"   /*!< Identifier */

/* HDMI_HPD (number AE22), HDMI_HPD */
/* Routed pin properties */
#define PINCTRL_HDMI_P1_92_PERIPHERAL                                       HDMI   /*!< Peripheral name */
#define PINCTRL_HDMI_P1_92_SIGNAL                                       hdmi_hpd   /*!< Signal name */
#define PINCTRL_HDMI_P1_92_PIN_NAME                                     HDMI_HPD   /*!< Routed pin name */
#define PINCTRL_HDMI_P1_92_LABEL                                      "HDMI_HPD"   /*!< Label */
#define PINCTRL_HDMI_P1_92_NAME                                          "P1_92"   /*!< Identifier */

/* I2C1_SCL (number AC8), N/A */
/* Routed pin properties */
#define PINCTRL_I2C1_InternalPMIC_PERIPHERAL                               I2C1   /*!< Peripheral name */
#define PINCTRL_I2C1_InternalPMIC_SIGNAL                                i2c_scl   /*!< Signal name */
#define PINCTRL_I2C1_InternalPMIC_PIN_NAME                             I2C1_SCL   /*!< Routed pin name */
#define PINCTRL_I2C1_InternalPMIC_LABEL                                   "N/A"   /*!< Label */
#define PINCTRL_I2C1_InternalPMIC_NAME                          "Internal PMIC"   /*!< Identifier */

/* I2C2_SCL (number AH6), AUD_SDA */
/* Routed pin properties */
#define PINCTRL_I2C2_P1_99_PERIPHERAL                                       I2C2   /*!< Peripheral name */
#define PINCTRL_I2C2_P1_99_SIGNAL                                        i2c_scl   /*!< Signal name */
#define PINCTRL_I2C2_P1_99_PIN_NAME                                     I2C2_SCL   /*!< Routed pin name */
#define PINCTRL_I2C2_P1_99_LABEL                                       "AUD_SDA"   /*!< Label */
#define PINCTRL_I2C2_P1_99_NAME                                          "P1_99"   /*!< Identifier */

/* I2C2_SDA (number AE8), AUD_SDL */
/* Routed pin properties */
#define PINCTRL_I2C2_P1_97_PERIPHERAL                                       I2C2   /*!< Peripheral name */
#define PINCTRL_I2C2_P1_97_SIGNAL                                        i2c_sda   /*!< Signal name */
#define PINCTRL_I2C2_P1_97_PIN_NAME                                     I2C2_SDA   /*!< Routed pin name */
#define PINCTRL_I2C2_P1_97_LABEL                                       "AUD_SDL"   /*!< Label */
#define PINCTRL_I2C2_P1_97_NAME                                          "P1_97"   /*!< Identifier */

/* SAI5_RXD0 (number AE16), I2C5_SCL */
/* Routed pin properties */
#define PINCTRL_I2C5_P1_100_PERIPHERAL                                      I2C5   /*!< Peripheral name */
#define PINCTRL_I2C5_P1_100_SIGNAL                                       i2c_scl   /*!< Signal name */
#define PINCTRL_I2C5_P1_100_PIN_NAME                                   SAI5_RXD0   /*!< Routed pin name */
#define PINCTRL_I2C5_P1_100_LABEL                                     "I2C5_SCL"   /*!< Label */
#define PINCTRL_I2C5_P1_100_NAME                                        "P1_100"   /*!< Identifier */

/* SAI5_MCLK (number AF14), I2C5_SDA */
/* Routed pin properties */
#define PINCTRL_I2C5_P1_96_PERIPHERAL                                       I2C5   /*!< Peripheral name */
#define PINCTRL_I2C5_P1_96_SIGNAL                                        i2c_sda   /*!< Signal name */
#define PINCTRL_I2C5_P1_96_PIN_NAME                                    SAI5_MCLK   /*!< Routed pin name */
#define PINCTRL_I2C5_P1_96_LABEL                                      "I2C5_SDA"   /*!< Label */
#define PINCTRL_I2C5_P1_96_NAME                                          "P1_96"   /*!< Identifier */

/* LVDS0_CLK_N (coord G28), LVDS_CLK_N */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_82_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_82_SIGNAL                                    lvds_clk_n   /*!< Signal name */
#define PINCTRL_LVDS0_P1_82_PIN_NAME                                 LVDS0_CLK_N   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_82_LABEL                                   "LVDS_CLK_N"   /*!< Label */
#define PINCTRL_LVDS0_P1_82_NAME                                         "P1_82"   /*!< Identifier */

/* LVDS0_CLK_P (coord F29), LVDS_CLK_P */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_80_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_80_SIGNAL                                    lvds_clk_p   /*!< Signal name */
#define PINCTRL_LVDS0_P1_80_PIN_NAME                                 LVDS0_CLK_P   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_80_LABEL                                   "LVDS_CLK_P"   /*!< Label */
#define PINCTRL_LVDS0_P1_80_NAME                                         "P1_80"   /*!< Identifier */

/* LVDS0_D0_N (coord E28), LVDS_D0_N */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_44_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_44_SIGNAL                                     lvds_d0_n   /*!< Signal name */
#define PINCTRL_LVDS0_P1_44_PIN_NAME                                  LVDS0_D0_N   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_44_LABEL                                    "LVDS_D0_N"   /*!< Label */
#define PINCTRL_LVDS0_P1_44_NAME                                         "P1_44"   /*!< Identifier */

/* LVDS0_D0_P (coord D29), LVDS_D0_P */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_42_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_42_SIGNAL                                     lvds_d0_p   /*!< Signal name */
#define PINCTRL_LVDS0_P1_42_PIN_NAME                                  LVDS0_D0_P   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_42_LABEL                                    "LVDS_D0_P"   /*!< Label */
#define PINCTRL_LVDS0_P1_42_NAME                                         "P1_42"   /*!< Identifier */

/* LVDS0_D1_N (coord F28), LVDS_D1_N */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_48_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_48_SIGNAL                                     lvds_d1_n   /*!< Signal name */
#define PINCTRL_LVDS0_P1_48_PIN_NAME                                  LVDS0_D1_N   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_48_LABEL                                    "LVDS_D1_N"   /*!< Label */
#define PINCTRL_LVDS0_P1_48_NAME                                         "P1_48"   /*!< Identifier */

/* LVDS0_D1_P (coord E29), LVDS_D1_P */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_46_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_46_SIGNAL                                     lvds_d1_p   /*!< Signal name */
#define PINCTRL_LVDS0_P1_46_PIN_NAME                                  LVDS0_D1_P   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_46_LABEL                                    "LVDS_D1_P"   /*!< Label */
#define PINCTRL_LVDS0_P1_46_NAME                                         "P1_46"   /*!< Identifier */

/* LVDS0_D2_N (coord H28), LVDS_D2_N */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_52_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_52_SIGNAL                                     lvds_d2_n   /*!< Signal name */
#define PINCTRL_LVDS0_P1_52_PIN_NAME                                  LVDS0_D2_N   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_52_LABEL                                    "LVDS_D2_N"   /*!< Label */
#define PINCTRL_LVDS0_P1_52_NAME                                         "P1_52"   /*!< Identifier */

/* LVDS0_D2_P (coord G29), LVDS_D2_P */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_50_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_50_SIGNAL                                     lvds_d2_p   /*!< Signal name */
#define PINCTRL_LVDS0_P1_50_PIN_NAME                                  LVDS0_D2_P   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_50_LABEL                                    "LVDS_D2_P"   /*!< Label */
#define PINCTRL_LVDS0_P1_50_NAME                                         "P1_50"   /*!< Identifier */

/* LVDS0_D3_N (coord J28), LVDS_D3_N */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_58_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_58_SIGNAL                                     lvds_d3_n   /*!< Signal name */
#define PINCTRL_LVDS0_P1_58_PIN_NAME                                  LVDS0_D3_N   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_58_LABEL                                    "LVDS_D3_N"   /*!< Label */
#define PINCTRL_LVDS0_P1_58_NAME                                         "P1_58"   /*!< Identifier */

/* LVDS0_D3_P (coord H29), LVDS_D3_P */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_56_PERIPHERAL                                     LVDS0   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_56_SIGNAL                                     lvds_d3_p   /*!< Signal name */
#define PINCTRL_LVDS0_P1_56_PIN_NAME                                  LVDS0_D3_P   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_56_LABEL                                    "LVDS_D3_P"   /*!< Label */
#define PINCTRL_LVDS0_P1_56_NAME                                         "P1_56"   /*!< Identifier */

/* SAI5_RXFS (number AC14), EN_LCD */
/* Routed pin properties */
#define PINCTRL_LVDS0_P1_87_PERIPHERAL                                     GPIO3   /*!< Peripheral name */
#define PINCTRL_LVDS0_P1_87_SIGNAL                                       gpio_io   /*!< Signal name */
#define PINCTRL_LVDS0_P1_87_CHANNEL                                           19   /*!< Signal channel */
#define PINCTRL_LVDS0_P1_87_PIN_NAME                                   SAI5_RXFS   /*!< Routed pin name */
#define PINCTRL_LVDS0_P1_87_LABEL                                       "EN_LCD"   /*!< Label */
#define PINCTRL_LVDS0_P1_87_NAME                                         "P1_87"   /*!< Identifier */
#define PINCTRL_LVDS0_P1_87_DIRECTION                        kGPIO_DigitalOutput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_LVDS0_P1_87_GPIO                                           GPIO3   /*!< GPIO peripheral base pointer */
#define PINCTRL_LVDS0_P1_87_GPIO_PIN                                         19U   /*!< GPIO pin number */
#define PINCTRL_LVDS0_P1_87_GPIO_PIN_MASK                            (1U << 19U)   /*!< GPIO pin mask */

/* GPIO1_IO03 (coord D6), N/A */
/* Routed pin properties */
#define PINCTRL_PMIC_InternalPMIC_PERIPHERAL                              GPIO1   /*!< Peripheral name */
#define PINCTRL_PMIC_InternalPMIC_SIGNAL                                gpio_io   /*!< Signal name */
#define PINCTRL_PMIC_InternalPMIC_CHANNEL                                    03   /*!< Signal channel */
#define PINCTRL_PMIC_InternalPMIC_PIN_NAME                           GPIO1_IO03   /*!< Routed pin name */
#define PINCTRL_PMIC_InternalPMIC_LABEL                                   "N/A"   /*!< Label */
#define PINCTRL_PMIC_InternalPMIC_NAME                          "Internal PMIC"   /*!< Identifier */

/* Symbols to be used with GPIO driver */
#define PINCTRL_PMIC_InternalPMIC_GPIO                                    GPIO1   /*!< GPIO peripheral base pointer */
#define PINCTRL_PMIC_InternalPMIC_GPIO_PIN                                   3U   /*!< GPIO pin number */
#define PINCTRL_PMIC_InternalPMIC_GPIO_PIN_MASK                      (1U << 3U)   /*!< GPIO pin mask */

/* NAND_ALE (coord N25), N/A */
/* Routed pin properties */
#define PINCTRL_FLEXSPI0_OptionalQSPIFlash_PERIPHERAL                     QSPI   /*!< Peripheral name */
#define PINCTRL_FLEXSPI0_OptionalQSPIFlash_SIGNAL                  qspi_a_sclk   /*!< Signal name */
#define PINCTRL_FLEXSPI0_OptionalQSPIFlash_PIN_NAME                   NAND_ALE   /*!< Routed pin name */
#define PINCTRL_FLEXSPI0_OptionalQSPIFlash_LABEL                         "N/A"   /*!< Label */
#define PINCTRL_FLEXSPI0_OptionalQSPIFlash_NAME          "Optional QSPI Flash"   /*!< Identifier */

/* NAND_DQS (coord R26), N/A */
/* Routed pin properties */
#define PINCTRL_FLEXSPI0_NotroutedtoP1P2_PERIPHERAL                    QSPI   /*!< Peripheral name */
#define PINCTRL_FLEXSPI0_NotroutedtoP1P2_SIGNAL                  qspi_a_dqs   /*!< Signal name */
#define PINCTRL_FLEXSPI0_NotroutedtoP1P2_PIN_NAME                  NAND_DQS   /*!< Routed pin name */
#define PINCTRL_FLEXSPI0_NotroutedtoP1P2_LABEL                        "N/A"   /*!< Label */
#define PINCTRL_FLEXSPI0_NotroutedtoP1P2_NAME        "Not routed to P1, P2"   /*!< Identifier */

/* SAI3_TXC (number AH19), AUD_BCLK */
/* Routed pin properties */
#define PINCTRL_SAI3_AUDIO_P1_36_PERIPHERAL                                 SAI3   /*!< Peripheral name */
#define PINCTRL_SAI3_AUDIO_P1_36_SIGNAL                              sai_tx_bclk   /*!< Signal name */
#define PINCTRL_SAI3_AUDIO_P1_36_PIN_NAME                               SAI3_TXC   /*!< Routed pin name */
#define PINCTRL_SAI3_AUDIO_P1_36_LABEL                                "AUD_BCLK"   /*!< Label */
#define PINCTRL_SAI3_AUDIO_P1_36_NAME                                    "P1_36"   /*!< Identifier */

/* SAI3_TXD (number AH18), AUD_DIN */
/* Routed pin properties */
#define PINCTRL_SAI3_AUDIO_P1_26_PERIPHERAL                                 SAI3   /*!< Peripheral name */
#define PINCTRL_SAI3_AUDIO_P1_26_SIGNAL                              sai_tx_data   /*!< Signal name */
#define PINCTRL_SAI3_AUDIO_P1_26_CHANNEL                                       0   /*!< Signal channel */
#define PINCTRL_SAI3_AUDIO_P1_26_PIN_NAME                               SAI3_TXD   /*!< Routed pin name */
#define PINCTRL_SAI3_AUDIO_P1_26_LABEL                                 "AUD_DIN"   /*!< Label */
#define PINCTRL_SAI3_AUDIO_P1_26_NAME                                    "P1_26"   /*!< Identifier */

/* SAI3_MCLK (number AJ20), AUD_MCLK */
/* Routed pin properties */
#define PINCTRL_SAI3_AUDIO_P1_30_PERIPHERAL                                 SAI3   /*!< Peripheral name */
#define PINCTRL_SAI3_AUDIO_P1_30_SIGNAL                                 sai_mclk   /*!< Signal name */
#define PINCTRL_SAI3_AUDIO_P1_30_PIN_NAME                              SAI3_MCLK   /*!< Routed pin name */
#define PINCTRL_SAI3_AUDIO_P1_30_LABEL                                "AUD_MCLK"   /*!< Label */
#define PINCTRL_SAI3_AUDIO_P1_30_NAME                                    "P1_30"   /*!< Identifier */

/* SAI3_TXFS (number AC16), AUD_TXFS */
/* Routed pin properties */
#define PINCTRL_SAI3_AUDIO_P1_38_PERIPHERAL                                 SAI3   /*!< Peripheral name */
#define PINCTRL_SAI3_AUDIO_P1_38_SIGNAL                              sai_tx_sync   /*!< Signal name */
#define PINCTRL_SAI3_AUDIO_P1_38_PIN_NAME                              SAI3_TXFS   /*!< Routed pin name */
#define PINCTRL_SAI3_AUDIO_P1_38_LABEL                                "AUD_TXFS"   /*!< Label */
#define PINCTRL_SAI3_AUDIO_P1_38_NAME                                    "P1_38"   /*!< Identifier */

/* SAI3_RXC (number AJ18), MIC_CLK */
/* Routed pin properties */
#define PINCTRL_SAI5_MIC_P1_32_PERIPHERAL                                    PDM   /*!< Peripheral name */
#define PINCTRL_SAI5_MIC_P1_32_SIGNAL                                    pdm_clk   /*!< Signal name */
#define PINCTRL_SAI5_MIC_P1_32_PIN_NAME                                 SAI3_RXC   /*!< Routed pin name */
#define PINCTRL_SAI5_MIC_P1_32_LABEL                                   "MIC_CLK"   /*!< Label */
#define PINCTRL_SAI5_MIC_P1_32_NAME                                      "P1_32"   /*!< Identifier */

/* SAI3_RXFS (number AJ19), MIC_DATA */
/* Routed pin properties */
#define PINCTRL_SAI5_MIC_P1_34_PERIPHERAL                                    PDM   /*!< Peripheral name */
#define PINCTRL_SAI5_MIC_P1_34_SIGNAL                             pdm_bit_stream   /*!< Signal name */
#define PINCTRL_SAI5_MIC_P1_34_CHANNEL                                         0   /*!< Signal channel */
#define PINCTRL_SAI5_MIC_P1_34_PIN_NAME                                SAI3_RXFS   /*!< Routed pin name */
#define PINCTRL_SAI5_MIC_P1_34_LABEL                                  "MIC_DATA"   /*!< Label */
#define PINCTRL_SAI5_MIC_P1_34_NAME                                      "P1_34"   /*!< Identifier */

/* ONOFF (coord G22), PWR_SW */
/* Routed pin properties */
#define PINCTRL_SNVS_P2_64_PERIPHERAL                                       SNVS   /*!< Peripheral name */
#define PINCTRL_SNVS_P2_64_SIGNAL                                     snvs_onoff   /*!< Signal name */
#define PINCTRL_SNVS_P2_64_PIN_NAME                                        ONOFF   /*!< Routed pin name */
#define PINCTRL_SNVS_P2_64_LABEL                                        "PWR_SW"   /*!< Label */
#define PINCTRL_SNVS_P2_64_NAME                                          "P2_64"   /*!< Identifier */

/* PMIC_ON_REQ (coord F22), PMIC_STBY_R */
/* Routed pin properties */
#define PINCTRL_SNVS_P1_68_PERIPHERAL                                       SNVS   /*!< Peripheral name */
#define PINCTRL_SNVS_P1_68_SIGNAL                               snvs_pmic_on_req   /*!< Signal name */
#define PINCTRL_SNVS_P1_68_PIN_NAME                                  PMIC_ON_REQ   /*!< Routed pin name */
#define PINCTRL_SNVS_P1_68_LABEL                                   "PMIC_STBY_R"   /*!< Label */
#define PINCTRL_SNVS_P1_68_NAME                                          "P1_68"   /*!< Identifier */

/* POR_B (coord J29), POR_B */
/* Routed pin properties */
#define PINCTRL_SNVS_P2_66_PERIPHERAL                                       SNVS   /*!< Peripheral name */
#define PINCTRL_SNVS_P2_66_SIGNAL                                     snvs_por_b   /*!< Signal name */
#define PINCTRL_SNVS_P2_66_PIN_NAME                                        POR_B   /*!< Routed pin name */
#define PINCTRL_SNVS_P2_66_LABEL                                         "POR_B"   /*!< Label */
#define PINCTRL_SNVS_P2_66_NAME                                          "P2_66"   /*!< Identifier */

/* RTC_XTALI (coord J25), N/A */
/* Routed pin properties */
#define PINCTRL_SNVS_NotroutedtoP1P2_PERIPHERAL                        SNVS   /*!< Peripheral name */
#define PINCTRL_SNVS_NotroutedtoP1P2_SIGNAL                        snvs_rtc   /*!< Signal name */
#define PINCTRL_SNVS_NotroutedtoP1P2_PIN_NAME                     RTC_XTALI   /*!< Routed pin name */
#define PINCTRL_SNVS_NotroutedtoP1P2_LABEL                            "N/A"   /*!< Label */
#define PINCTRL_SNVS_NotroutedtoP1P2_NAME            "Not routed to P1, P2"   /*!< Identifier */

/* GPIO1_IO02 (coord B6), N/A */
/* Routed pin properties */
#define PINCTRL_WDOG_InternalWatchdog_PERIPHERAL                          WDOG1   /*!< Peripheral name */
#define PINCTRL_WDOG_InternalWatchdog_SIGNAL                        wdog_wdog_b   /*!< Signal name */
#define PINCTRL_WDOG_InternalWatchdog_PIN_NAME                       GPIO1_IO02   /*!< Routed pin name */
#define PINCTRL_WDOG_InternalWatchdog_LABEL                               "N/A"   /*!< Label */
#define PINCTRL_WDOG_InternalWatchdog_NAME                  "Internal Watchdog"   /*!< Identifier */

/* SAI2_RXC (number AJ16), UART1_RX */
/* Routed pin properties */
#define PINCTRL_UART1_485_P1_53_PERIPHERAL                                 UART1   /*!< Peripheral name */
#define PINCTRL_UART1_485_P1_53_SIGNAL                                   uart_rx   /*!< Signal name */
#define PINCTRL_UART1_485_P1_53_PIN_NAME                                SAI2_RXC   /*!< Routed pin name */
#define PINCTRL_UART1_485_P1_53_LABEL                                 "UART1_RX"   /*!< Label */
#define PINCTRL_UART1_485_P1_53_NAME                                     "P1_53"   /*!< Identifier */

/* UART1_TXD (number AJ3), UART1_TX */
/* Routed pin properties */
#define PINCTRL_UART1_485_P1_72_PERIPHERAL                                 UART1   /*!< Peripheral name */
#define PINCTRL_UART1_485_P1_72_SIGNAL                                   uart_tx   /*!< Signal name */
#define PINCTRL_UART1_485_P1_72_PIN_NAME                               UART1_TXD   /*!< Routed pin name */
#define PINCTRL_UART1_485_P1_72_LABEL                                 "UART1_TX"   /*!< Label */
#define PINCTRL_UART1_485_P1_72_NAME                                     "P1_72"   /*!< Identifier */

/* SAI2_TXFS (number AJ17), 485_DE_1 */
/* Routed pin properties */
#define PINCTRL_UART1_485_P2_76_PERIPHERAL                                 UART1   /*!< Peripheral name */
#define PINCTRL_UART1_485_P2_76_SIGNAL                                uart_rts_b   /*!< Signal name */
#define PINCTRL_UART1_485_P2_76_PIN_NAME                               SAI2_TXFS   /*!< Routed pin name */
#define PINCTRL_UART1_485_P2_76_LABEL                                 "485_DE_1"   /*!< Label */
#define PINCTRL_UART1_485_P2_76_NAME                                     "P2_76"   /*!< Identifier */

/* UART2_RXD (number AF6), UART2_RX */
/* Routed pin properties */
#define PINCTRL_UART2_GNSS1_P1_76_PERIPHERAL                               UART2   /*!< Peripheral name */
#define PINCTRL_UART2_GNSS1_P1_76_SIGNAL                                 uart_rx   /*!< Signal name */
#define PINCTRL_UART2_GNSS1_P1_76_PIN_NAME                             UART2_RXD   /*!< Routed pin name */
#define PINCTRL_UART2_GNSS1_P1_76_LABEL                               "UART2_RX"   /*!< Label */
#define PINCTRL_UART2_GNSS1_P1_76_NAME                                   "P1_76"   /*!< Identifier */

/* UART2_TXD (number AH4), UART2_TX */
/* Routed pin properties */
#define PINCTRL_UART2_GNSS1_P1_74_PERIPHERAL                               UART2   /*!< Peripheral name */
#define PINCTRL_UART2_GNSS1_P1_74_SIGNAL                                 uart_tx   /*!< Signal name */
#define PINCTRL_UART2_GNSS1_P1_74_PIN_NAME                             UART2_TXD   /*!< Routed pin name */
#define PINCTRL_UART2_GNSS1_P1_74_LABEL                               "UART2_TX"   /*!< Label */
#define PINCTRL_UART2_GNSS1_P1_74_NAME                                   "P1_74"   /*!< Identifier */

/* UART3_RXD (number AE6), UART3_RX */
/* Routed pin properties */
#define PINCTRL_UART3_GNSS2_P1_21_PERIPHERAL                               UART3   /*!< Peripheral name */
#define PINCTRL_UART3_GNSS2_P1_21_SIGNAL                                 uart_rx   /*!< Signal name */
#define PINCTRL_UART3_GNSS2_P1_21_PIN_NAME                             UART3_RXD   /*!< Routed pin name */
#define PINCTRL_UART3_GNSS2_P1_21_LABEL                               "UART3_RX"   /*!< Label */
#define PINCTRL_UART3_GNSS2_P1_21_NAME                                   "P1_21"   /*!< Identifier */

/* UART3_TXD (number AJ4), UART3_TX */
/* Routed pin properties */
#define PINCTRL_UART3_GNSS2_P1_61_PERIPHERAL                               UART3   /*!< Peripheral name */
#define PINCTRL_UART3_GNSS2_P1_61_SIGNAL                                 uart_tx   /*!< Signal name */
#define PINCTRL_UART3_GNSS2_P1_61_PIN_NAME                             UART3_TXD   /*!< Routed pin name */
#define PINCTRL_UART3_GNSS2_P1_61_LABEL                               "UART3_TX"   /*!< Label */
#define PINCTRL_UART3_GNSS2_P1_61_NAME                                   "P1_61"   /*!< Identifier */

/* ECSPI2_SCLK (number AH21), UART4_RX */
/* Routed pin properties */
#define PINCTRL_UART4_485_P2_93_PERIPHERAL                                 UART4   /*!< Peripheral name */
#define PINCTRL_UART4_485_P2_93_SIGNAL                                   uart_rx   /*!< Signal name */
#define PINCTRL_UART4_485_P2_93_PIN_NAME                             ECSPI2_SCLK   /*!< Routed pin name */
#define PINCTRL_UART4_485_P2_93_LABEL                                 "UART4_RX"   /*!< Label */
#define PINCTRL_UART4_485_P2_93_NAME                                     "P2_93"   /*!< Identifier */

/* ECSPI2_MOSI (number AJ21), UART4_TX */
/* Routed pin properties */
#define PINCTRL_UART4_485_P2_95_PERIPHERAL                                 UART4   /*!< Peripheral name */
#define PINCTRL_UART4_485_P2_95_SIGNAL                                   uart_tx   /*!< Signal name */
#define PINCTRL_UART4_485_P2_95_PIN_NAME                             ECSPI2_MOSI   /*!< Routed pin name */
#define PINCTRL_UART4_485_P2_95_LABEL                                 "UART4_TX"   /*!< Label */
#define PINCTRL_UART4_485_P2_95_NAME                                     "P2_95"   /*!< Identifier */

/* ECSPI2_MISO (number AH20), 485_DE_2 */
/* Routed pin properties */
#define PINCTRL_UART4_485_P2_89_PERIPHERAL                                 UART4   /*!< Peripheral name */
#define PINCTRL_UART4_485_P2_89_SIGNAL                                uart_rts_b   /*!< Signal name */
#define PINCTRL_UART4_485_P2_89_PIN_NAME                             ECSPI2_MISO   /*!< Routed pin name */
#define PINCTRL_UART4_485_P2_89_LABEL                                 "485_DE_2"   /*!< Label */
#define PINCTRL_UART4_485_P2_89_NAME                                     "P2_89"   /*!< Identifier */

/* GPIO1_IO14 (coord A4), N/A */
/* Routed pin properties */
#define PINCTRL_USB1_VBUS_InternalMisc_PERIPHERAL                         GPIO1   /*!< Peripheral name */
#define PINCTRL_USB1_VBUS_InternalMisc_SIGNAL                           gpio_io   /*!< Signal name */
#define PINCTRL_USB1_VBUS_InternalMisc_CHANNEL                               14   /*!< Signal channel */
#define PINCTRL_USB1_VBUS_InternalMisc_PIN_NAME                      GPIO1_IO14   /*!< Routed pin name */
#define PINCTRL_USB1_VBUS_InternalMisc_LABEL                              "N/A"   /*!< Label */
#define PINCTRL_USB1_VBUS_InternalMisc_NAME                     "Internal Misc"   /*!< Identifier */

/* Symbols to be used with GPIO driver */
#define PINCTRL_USB1_VBUS_InternalMisc_GPIO                               GPIO1   /*!< GPIO peripheral base pointer */
#define PINCTRL_USB1_VBUS_InternalMisc_GPIO_PIN                             14U   /*!< GPIO pin number */
#define PINCTRL_USB1_VBUS_InternalMisc_GPIO_PIN_MASK                (1U << 14U)   /*!< GPIO pin mask */

/* SD2_CLK (number AB29), SD_CLK */
/* Routed pin properties */
#define PINCTRL_USDHC2_P2_96_PERIPHERAL                                   USDHC2   /*!< Peripheral name */
#define PINCTRL_USDHC2_P2_96_SIGNAL                                    usdhc_clk   /*!< Signal name */
#define PINCTRL_USDHC2_P2_96_PIN_NAME                                    SD2_CLK   /*!< Routed pin name */
#define PINCTRL_USDHC2_P2_96_LABEL                                      "SD_CLK"   /*!< Label */
#define PINCTRL_USDHC2_P2_96_NAME                                        "P2_96"   /*!< Identifier */

/* SD2_CMD (number AB28), SD_CMD */
/* Routed pin properties */
#define PINCTRL_USDHC2_P2_100_PERIPHERAL                                  USDHC2   /*!< Peripheral name */
#define PINCTRL_USDHC2_P2_100_SIGNAL                                   usdhc_cmd   /*!< Signal name */
#define PINCTRL_USDHC2_P2_100_PIN_NAME                                   SD2_CMD   /*!< Routed pin name */
#define PINCTRL_USDHC2_P2_100_LABEL                                     "SD_CMD"   /*!< Label */
#define PINCTRL_USDHC2_P2_100_NAME                                      "P2_100"   /*!< Identifier */

/* SD2_DATA0 (number AC28), SD_DAT0 */
/* Routed pin properties */
#define PINCTRL_USDHC2_P2_97_PERIPHERAL                                   USDHC2   /*!< Peripheral name */
#define PINCTRL_USDHC2_P2_97_SIGNAL                                   usdhc_data   /*!< Signal name */
#define PINCTRL_USDHC2_P2_97_CHANNEL                                           0   /*!< Signal channel */
#define PINCTRL_USDHC2_P2_97_PIN_NAME                                  SD2_DATA0   /*!< Routed pin name */
#define PINCTRL_USDHC2_P2_97_LABEL                                     "SD_DAT0"   /*!< Label */
#define PINCTRL_USDHC2_P2_97_NAME                                        "P2_97"   /*!< Identifier */

/* SD2_DATA1 (number AC29), SD_DAT1 */
/* Routed pin properties */
#define PINCTRL_USDHC2_P2_99_PERIPHERAL                                   USDHC2   /*!< Peripheral name */
#define PINCTRL_USDHC2_P2_99_SIGNAL                                   usdhc_data   /*!< Signal name */
#define PINCTRL_USDHC2_P2_99_CHANNEL                                           1   /*!< Signal channel */
#define PINCTRL_USDHC2_P2_99_PIN_NAME                                  SD2_DATA1   /*!< Routed pin name */
#define PINCTRL_USDHC2_P2_99_LABEL                                     "SD_DAT1"   /*!< Label */
#define PINCTRL_USDHC2_P2_99_NAME                                        "P2_99"   /*!< Identifier */

/* SD2_DATA2 (number AA26), SD_DAT2 */
/* Routed pin properties */
#define PINCTRL_USDHC2_P2_94_PERIPHERAL                                   USDHC2   /*!< Peripheral name */
#define PINCTRL_USDHC2_P2_94_SIGNAL                                   usdhc_data   /*!< Signal name */
#define PINCTRL_USDHC2_P2_94_CHANNEL                                           2   /*!< Signal channel */
#define PINCTRL_USDHC2_P2_94_PIN_NAME                                  SD2_DATA2   /*!< Routed pin name */
#define PINCTRL_USDHC2_P2_94_LABEL                                     "SD_DAT2"   /*!< Label */
#define PINCTRL_USDHC2_P2_94_NAME                                        "P2_94"   /*!< Identifier */

/* SD2_DATA3 (number AA25), SD_DAT3 */
/* Routed pin properties */
#define PINCTRL_USDHC2_P2_98_PERIPHERAL                                   USDHC2   /*!< Peripheral name */
#define PINCTRL_USDHC2_P2_98_SIGNAL                                   usdhc_data   /*!< Signal name */
#define PINCTRL_USDHC2_P2_98_CHANNEL                                           3   /*!< Signal channel */
#define PINCTRL_USDHC2_P2_98_PIN_NAME                                  SD2_DATA3   /*!< Routed pin name */
#define PINCTRL_USDHC2_P2_98_LABEL                                     "SD_DAT3"   /*!< Label */
#define PINCTRL_USDHC2_P2_98_NAME                                        "P2_98"   /*!< Identifier */

/* SD2_RESET_B (number AD28), SD_POW */
/* Routed pin properties */
#define PINCTRL_USDHC2_P2_51_PERIPHERAL                                   USDHC2   /*!< Peripheral name */
#define PINCTRL_USDHC2_P2_51_SIGNAL                                usdhc_reset_b   /*!< Signal name */
#define PINCTRL_USDHC2_P2_51_PIN_NAME                                SD2_RESET_B   /*!< Routed pin name */
#define PINCTRL_USDHC2_P2_51_LABEL                                      "SD_POW"   /*!< Label */
#define PINCTRL_USDHC2_P2_51_NAME                                        "P2_51"   /*!< Identifier */

/* NAND_CE1_B (coord T29), N/A */
/* Routed pin properties */
#define PINCTRL_USDHC3_InternaleMMC_PERIPHERAL                           USDHC3   /*!< Peripheral name */
#define PINCTRL_USDHC3_InternaleMMC_SIGNAL                         usdhc_strobe   /*!< Signal name */
#define PINCTRL_USDHC3_InternaleMMC_PIN_NAME                         NAND_CE1_B   /*!< Routed pin name */
#define PINCTRL_USDHC3_InternaleMMC_LABEL                                 "N/A"   /*!< Label */
#define PINCTRL_USDHC3_InternaleMMC_NAME                        "Internal eMMC"   /*!< Identifier */

/* USB1_D_N (coord E10), USB1_D- */
/* Routed pin properties */
#define PINCTRL_USB1_P1_14_PERIPHERAL                                       USB1   /*!< Peripheral name */
#define PINCTRL_USB1_P1_14_SIGNAL                                        usb_d_n   /*!< Signal name */
#define PINCTRL_USB1_P1_14_PIN_NAME                                     USB1_D_N   /*!< Routed pin name */
#define PINCTRL_USB1_P1_14_LABEL                                       "USB1_D-"   /*!< Label */
#define PINCTRL_USB1_P1_14_NAME                                          "P1_14"   /*!< Identifier */

/* USB1_D_P (coord D10), USB1_D+ */
/* Routed pin properties */
#define PINCTRL_USB1_P1_12_PERIPHERAL                                       USB1   /*!< Peripheral name */
#define PINCTRL_USB1_P1_12_SIGNAL                                        usb_d_p   /*!< Signal name */
#define PINCTRL_USB1_P1_12_PIN_NAME                                     USB1_D_P   /*!< Routed pin name */
#define PINCTRL_USB1_P1_12_LABEL                                       "USB1_D+"   /*!< Label */
#define PINCTRL_USB1_P1_12_NAME                                          "P1_12"   /*!< Identifier */

/* USB1_VBUS (coord A11), USB1_PWR */
/* Routed pin properties */
#define PINCTRL_USB1_P1_24_PERIPHERAL                                       USB1   /*!< Peripheral name */
#define PINCTRL_USB1_P1_24_SIGNAL                                       usb_vbus   /*!< Signal name */
#define PINCTRL_USB1_P1_24_PIN_NAME                                    USB1_VBUS   /*!< Routed pin name */
#define PINCTRL_USB1_P1_24_LABEL                                      "USB1_PWR"   /*!< Label */
#define PINCTRL_USB1_P1_24_NAME                                          "P1_24"   /*!< Identifier */

/* GPIO1_IO00 (coord A7), USB1_DRV */
/* Routed pin properties */
#define PINCTRL_USB1_P1_59_PERIPHERAL                                      GPIO1   /*!< Peripheral name */
#define PINCTRL_USB1_P1_59_SIGNAL                                        gpio_io   /*!< Signal name */
#define PINCTRL_USB1_P1_59_CHANNEL                                            00   /*!< Signal channel */
#define PINCTRL_USB1_P1_59_PIN_NAME                                   GPIO1_IO00   /*!< Routed pin name */
#define PINCTRL_USB1_P1_59_LABEL                                      "USB1_DRV"   /*!< Label */
#define PINCTRL_USB1_P1_59_NAME                                          "P1_59"   /*!< Identifier */
#define PINCTRL_USB1_P1_59_DIRECTION                         kGPIO_DigitalOutput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_USB1_P1_59_GPIO                                            GPIO1   /*!< GPIO peripheral base pointer */
#define PINCTRL_USB1_P1_59_GPIO_PIN                                           0U   /*!< GPIO pin number */
#define PINCTRL_USB1_P1_59_GPIO_PIN_MASK                              (1U << 0U)   /*!< GPIO pin mask */

/* USB2_D_N (coord E14), USB2_D_N */
/* Routed pin properties */
#define PINCTRL_USB2_P1_05_PERIPHERAL                                       USB2   /*!< Peripheral name */
#define PINCTRL_USB2_P1_05_SIGNAL                                        usb_d_n   /*!< Signal name */
#define PINCTRL_USB2_P1_05_PIN_NAME                                     USB2_D_N   /*!< Routed pin name */
#define PINCTRL_USB2_P1_05_LABEL                                      "USB2_D_N"   /*!< Label */
#define PINCTRL_USB2_P1_05_NAME                                          "P1_05"   /*!< Identifier */

/* USB2_D_P (coord D14), USB2_D_P */
/* Routed pin properties */
#define PINCTRL_USB2_P1_03_PERIPHERAL                                       USB2   /*!< Peripheral name */
#define PINCTRL_USB2_P1_03_SIGNAL                                        usb_d_p   /*!< Signal name */
#define PINCTRL_USB2_P1_03_PIN_NAME                                     USB2_D_P   /*!< Routed pin name */
#define PINCTRL_USB2_P1_03_LABEL                                      "USB2_D_P"   /*!< Label */
#define PINCTRL_USB2_P1_03_NAME                                          "P1_03"   /*!< Identifier */

/* USB2_RX_N (coord B12), USB2_RX_N */
/* Routed pin properties */
#define PINCTRL_USB2_P1_09_PERIPHERAL                                       USB2   /*!< Peripheral name */
#define PINCTRL_USB2_P1_09_SIGNAL                                       usb_rx_n   /*!< Signal name */
#define PINCTRL_USB2_P1_09_PIN_NAME                                    USB2_RX_N   /*!< Routed pin name */
#define PINCTRL_USB2_P1_09_LABEL                                     "USB2_RX_N"   /*!< Label */
#define PINCTRL_USB2_P1_09_NAME                                          "P1_09"   /*!< Identifier */

/* USB2_RX_P (coord A12), USB2_RX_P */
/* Routed pin properties */
#define PINCTRL_USB2_P1_07_PERIPHERAL                                       USB2   /*!< Peripheral name */
#define PINCTRL_USB2_P1_07_SIGNAL                                       usb_rx_p   /*!< Signal name */
#define PINCTRL_USB2_P1_07_PIN_NAME                                    USB2_RX_P   /*!< Routed pin name */
#define PINCTRL_USB2_P1_07_LABEL                                     "USB2_RX_P"   /*!< Label */
#define PINCTRL_USB2_P1_07_NAME                                          "P1_07"   /*!< Identifier */

/* USB2_TX_P (coord A13), USB2_TX_P */
/* Routed pin properties */
#define PINCTRL_USB2_P1_13_PERIPHERAL                                       USB2   /*!< Peripheral name */
#define PINCTRL_USB2_P1_13_SIGNAL                                       usb_tx_p   /*!< Signal name */
#define PINCTRL_USB2_P1_13_PIN_NAME                                    USB2_TX_P   /*!< Routed pin name */
#define PINCTRL_USB2_P1_13_LABEL                                     "USB2_TX_P"   /*!< Label */
#define PINCTRL_USB2_P1_13_NAME                                          "P1_13"   /*!< Identifier */

/* USB2_TX_N (coord B13), USB2_TX_N */
/* Routed pin properties */
#define PINCTRL_USB2_P1_15_PERIPHERAL                                       USB2   /*!< Peripheral name */
#define PINCTRL_USB2_P1_15_SIGNAL                                       usb_tx_n   /*!< Signal name */
#define PINCTRL_USB2_P1_15_PIN_NAME                                    USB2_TX_N   /*!< Routed pin name */
#define PINCTRL_USB2_P1_15_LABEL                                     "USB2_TX_N"   /*!< Label */
#define PINCTRL_USB2_P1_15_NAME                                          "P1_15"   /*!< Identifier */

/* UART1_RXD (number AD6), USB2_DRV */
/* Routed pin properties */
#define PINCTRL_USB2_P1_19_PERIPHERAL                                      GPIO5   /*!< Peripheral name */
#define PINCTRL_USB2_P1_19_SIGNAL                                        gpio_io   /*!< Signal name */
#define PINCTRL_USB2_P1_19_CHANNEL                                            22   /*!< Signal channel */
#define PINCTRL_USB2_P1_19_PIN_NAME                                    UART1_RXD   /*!< Routed pin name */
#define PINCTRL_USB2_P1_19_LABEL                                      "USB2_DRV"   /*!< Label */
#define PINCTRL_USB2_P1_19_NAME                                          "P1_19"   /*!< Identifier */
#define PINCTRL_USB2_P1_19_DIRECTION                          kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_USB2_P1_19_GPIO                                            GPIO5   /*!< GPIO peripheral base pointer */
#define PINCTRL_USB2_P1_19_GPIO_PIN                                          22U   /*!< GPIO pin number */
#define PINCTRL_USB2_P1_19_GPIO_PIN_MASK                             (1U << 22U)   /*!< GPIO pin mask */

/* SPDIF_RX (number AD18), USB2_OVC */
/* Routed pin properties */
#define PINCTRL_USB2_P1_79_PERIPHERAL                                      GPIO5   /*!< Peripheral name */
#define PINCTRL_USB2_P1_79_SIGNAL                                        gpio_io   /*!< Signal name */
#define PINCTRL_USB2_P1_79_CHANNEL                                            04   /*!< Signal channel */
#define PINCTRL_USB2_P1_79_PIN_NAME                                     SPDIF_RX   /*!< Routed pin name */
#define PINCTRL_USB2_P1_79_LABEL                                      "USB2_OVC"   /*!< Label */
#define PINCTRL_USB2_P1_79_NAME                                          "P1_79"   /*!< Identifier */
#define PINCTRL_USB2_P1_79_DIRECTION                          kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_USB2_P1_79_GPIO                                            GPIO5   /*!< GPIO peripheral base pointer */
#define PINCTRL_USB2_P1_79_GPIO_PIN                                           4U   /*!< GPIO pin number */
#define PINCTRL_USB2_P1_79_GPIO_PIN_MASK                              (1U << 4U)   /*!< GPIO pin mask */

/* USB2_VBUS (coord D12), USB2_VBUS */
/* Routed pin properties */
#define PINCTRL_USB2_P1_01_PERIPHERAL                                       USB2   /*!< Peripheral name */
#define PINCTRL_USB2_P1_01_SIGNAL                                       usb_vbus   /*!< Signal name */
#define PINCTRL_USB2_P1_01_PIN_NAME                                    USB2_VBUS   /*!< Routed pin name */
#define PINCTRL_USB2_P1_01_LABEL                                     "USB2_VBUS"   /*!< Label */
#define PINCTRL_USB2_P1_01_NAME                                          "P1_01"   /*!< Identifier */

/* GPIO1_IO01 (coord E8), BAT_INT */
/* Routed pin properties */
#define PINCTRL_BAT_IC_P1_98_PERIPHERAL                                    GPIO1   /*!< Peripheral name */
#define PINCTRL_BAT_IC_P1_98_SIGNAL                                      gpio_io   /*!< Signal name */
#define PINCTRL_BAT_IC_P1_98_CHANNEL                                          01   /*!< Signal channel */
#define PINCTRL_BAT_IC_P1_98_PIN_NAME                                 GPIO1_IO01   /*!< Routed pin name */
#define PINCTRL_BAT_IC_P1_98_LABEL                                     "BAT_INT"   /*!< Label */
#define PINCTRL_BAT_IC_P1_98_NAME                                        "P1_98"   /*!< Identifier */
#define PINCTRL_BAT_IC_P1_98_DIRECTION                        kGPIO_DigitalInput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_BAT_IC_P1_98_GPIO                                          GPIO1   /*!< GPIO peripheral base pointer */
#define PINCTRL_BAT_IC_P1_98_GPIO_PIN                                         1U   /*!< GPIO pin number */
#define PINCTRL_BAT_IC_P1_98_GPIO_PIN_MASK                            (1U << 1U)   /*!< GPIO pin mask */

/* SD1_RESET_B (coord W25), BAT_CE */
/* Routed pin properties */
#define PINCTRL_BAT_IC_P2_62_PERIPHERAL                                    GPIO2   /*!< Peripheral name */
#define PINCTRL_BAT_IC_P2_62_SIGNAL                                      gpio_io   /*!< Signal name */
#define PINCTRL_BAT_IC_P2_62_CHANNEL                                          10   /*!< Signal channel */
#define PINCTRL_BAT_IC_P2_62_PIN_NAME                                SD1_RESET_B   /*!< Routed pin name */
#define PINCTRL_BAT_IC_P2_62_LABEL                                      "BAT_CE"   /*!< Label */
#define PINCTRL_BAT_IC_P2_62_NAME                                        "P2_62"   /*!< Identifier */
#define PINCTRL_BAT_IC_P2_62_DIRECTION                       kGPIO_DigitalOutput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_BAT_IC_P2_62_GPIO                                          GPIO2   /*!< GPIO peripheral base pointer */
#define PINCTRL_BAT_IC_P2_62_GPIO_PIN                                        10U   /*!< GPIO pin number */
#define PINCTRL_BAT_IC_P2_62_GPIO_PIN_MASK                           (1U << 10U)   /*!< GPIO pin mask */

/* UART4_RXD (number AJ5), BAT_SCL */
/* Routed pin properties */
#define PINCTRL_BAT_IC_P1_84_PERIPHERAL                                     I2C6   /*!< Peripheral name */
#define PINCTRL_BAT_IC_P1_84_SIGNAL                                      i2c_scl   /*!< Signal name */
#define PINCTRL_BAT_IC_P1_84_PIN_NAME                                  UART4_RXD   /*!< Routed pin name */
#define PINCTRL_BAT_IC_P1_84_LABEL                                     "BAT_SCL"   /*!< Label */
#define PINCTRL_BAT_IC_P1_84_NAME                                        "P1_84"   /*!< Identifier */

/* UART4_TXD (number AH5), BAT_SDA */
/* Routed pin properties */
#define PINCTRL_BAT_IC_P1_86_PERIPHERAL                                     I2C6   /*!< Peripheral name */
#define PINCTRL_BAT_IC_P1_86_SIGNAL                                      i2c_sda   /*!< Signal name */
#define PINCTRL_BAT_IC_P1_86_PIN_NAME                                  UART4_TXD   /*!< Routed pin name */
#define PINCTRL_BAT_IC_P1_86_LABEL                                     "BAT_SDA"   /*!< Label */
#define PINCTRL_BAT_IC_P1_86_NAME                                        "P1_86"   /*!< Identifier */

/* SD2_CD_B (number AD29), PD\RST */
/* Routed pin properties */
#define PINCTRL_FRAM_P2_92_PERIPHERAL                                      GPIO2   /*!< Peripheral name */
#define PINCTRL_FRAM_P2_92_SIGNAL                                        gpio_io   /*!< Signal name */
#define PINCTRL_FRAM_P2_92_CHANNEL                                            12   /*!< Signal channel */
#define PINCTRL_FRAM_P2_92_PIN_NAME                                     SD2_CD_B   /*!< Routed pin name */
#define PINCTRL_FRAM_P2_92_LABEL                                       "PD\\RST"   /*!< Label */
#define PINCTRL_FRAM_P2_92_NAME                                          "P2_92"   /*!< Identifier */
#define PINCTRL_FRAM_P2_92_DIRECTION                         kGPIO_DigitalOutput   /*!< Direction */

/* Symbols to be used with GPIO driver */
#define PINCTRL_FRAM_P2_92_GPIO                                            GPIO2   /*!< GPIO peripheral base pointer */
#define PINCTRL_FRAM_P2_92_GPIO_PIN                                          12U   /*!< GPIO pin number */
#define PINCTRL_FRAM_P2_92_GPIO_PIN_MASK                             (1U << 12U)   /*!< GPIO pin mask */

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_hog(void);                                    /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_backlight(void);                              /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_adc(void);                                    /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_fec(void);                                    /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_flexcan1(void);                               /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_flexcan2(void);                               /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_gpio_led(void);                               /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_lpddr4(void);                                 /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_earc(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_hdmi(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_i2c1(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_i2c2(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_i2c5(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
//void pinctrl_jtag(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_lvds0(void);                                  /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_pmic(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_flexspi0(void);                               /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_sai3_audio(void);                             /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_sai5_mic(void);                               /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_snvs(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_wdog(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_uart1_485(void);                              /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_uart2_gnss1(void);                            /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_uart3_gnss2(void);                            /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_uart4_485(void);                              /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_usb1_vbus(void);                              /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_usdhc2(void);                                 /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_usdhc3(void);                                 /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_usb1(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_usb2(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_bat_ic(void);                                 /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_eqos(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void pinctrl_fram(void);                                   /*!< Function assigned for the core: Cortex-A53[a53_0] */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
