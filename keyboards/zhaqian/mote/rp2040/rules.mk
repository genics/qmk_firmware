WS2812_DRIVER = vendor
SERIAL_DRIVER = vendor

KEYBOARD_SHARED_EP = yes
LTO_ENABLE = yes

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# POINTING_DEVICE_ENABLE = yes
# POINTING_DEVICE_DRIVER = cirque_pinnacle_spi
# CIRQUE_PINNACLE_DIAMETER_MM = 40
# CIRQUE_PINNACLE_POSITION_MODE = CIRQUE_PINNACLE_RELATIVE_MODE
# CIRQUE_PINNACLE_SPI_CS_PIN = POINTING_DEVICE_CS_PIN


SPLIT_KEYBOARD = yes
# 打开震动
HAPTIC_ENABLE = yes
# HAPTIC_DRIVER += DRV2605L
HAPTIC_DRIVER += SOLENOID




