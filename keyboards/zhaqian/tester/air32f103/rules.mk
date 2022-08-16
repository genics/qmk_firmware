MCU = AIR32F103
MCU_LDSCRIPT = AIR32F103xCuf2
FIRMWARE_FORMAT = uf2

BOOTLOADER = custom

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

KEYBOARD_SHARED_EP = yes
WS2812_DRIVER = pwm

SRC += uf2_boot.c


