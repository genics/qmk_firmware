# MCU name
MCU = STM32F103
MCU_LDSCRIPT = STM32F103x8_uf2
FIRMWARE_FORMAT = uf2
BOARD = STM32_F103_STM32DUINO

# Bootloader selection
BOOTLOADER = custom
# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no

EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash

LTO_ENABLE = yes

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
SRC += uf2_boot.c
