SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_spi

QUANTUM_PAINTER_ENABLE = yes
QUANTUM_PAINTER_DRIVERS += st7789_spi
QUANTUM_PAINTER_LVGL_INTEGRATION = yes

SRC += lvgl_helpers.c \
	   display.c


# # VIA_ENABLE = yes
JOYSTICK_TRIGGER_ENABLE = yes

# 打开震动
HAPTIC_ENABLE = yes
# HAPTIC_DRIVER += DRV2605L
HAPTIC_DRIVER += SOLENOID
# 打开音频效果
AUDIO_ENABLE = yes
AUDIO_DRIVER = pwm_hardware
