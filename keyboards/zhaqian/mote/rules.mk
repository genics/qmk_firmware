SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor


QUANTUM_PAINTER_ENABLE = yes
QUANTUM_PAINTER_DRIVERS += st7789_spi
QUANTUM_PAINTER_LVGL_INTEGRATION = yes

SRC += lvgl_helpers.c \
	   display.c

# 摇杆驱动
# POINTING_DEVICE_DRIVER = analog_joystick
