/*
 * Copyright (c) 2020 Cargomon Systems GmbH
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Silabs EFR32BMG22 MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef ZEPHYR_SOC_ARM_SILABS_EXX32_EFR32BG22_SOC_PINMAP_H_
#define ZEPHYR_SOC_ARM_SILABS_EXX32_EFR32BG22_SOC_PINMAP_H_

#include <em_gpio.h>

#ifdef CONFIG_LOG_BACKEND_SWO
#define PIN_SWO { gpioPortA, 3, gpioModePushPull, 1 }
#endif  /* CONFIG_LOG_BACKEND_SWO */

#endif  /* ZEPHYR_SOC_ARM_SILABS_EXX32_EFR32MG21_SOC_PINMAP_H_ */
