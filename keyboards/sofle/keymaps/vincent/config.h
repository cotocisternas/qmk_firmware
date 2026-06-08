// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TRI_LAYER_LOWER_LAYER 1
#define TRI_LAYER_UPPER_LAYER 2
#define TRI_LAYER_ADJUST_LAYER 3

// Forces the split code to explicitly detect the USB connection state
#define SPLIT_USB_DETECT

// Sets a timeout (in milliseconds) so it doesn't hang infinitely waiting for the host
#define SPLIT_USB_TIMEOUT 2000

// How often to poll during that timeout (in milliseconds)
#define SPLIT_USB_TIMEOUT_POLL 10

// Watchdog timer to reset the keyboard if the halves lose communication for some reason
#define SPLIT_WATCHDOG_ENABLE

// Timeout for the watchdog to trigger (in milliseconds)
#define SPLIT_WATCHDOG_TIMEOUT 3000

// --- RGB Configuration ---
#define RGB_DI_PIN D3          // Standard data pin for Sofle rev1

// Enable RGB animations you want to use (uncomment to save flash space if needed)
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_SNAKE

// --- OLED Configuration ---
#define OLED_TIMEOUT 30000 // Turn off screens after 30 seconds to prevent burn-in

// Store physical handedness in EEPROM so is_keyboard_left() is accurate regardless of which
// USB port is used. Flash each half once with avrdude-split-left / avrdude-split-right.
#define EE_HANDS
