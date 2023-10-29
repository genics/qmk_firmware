# # 打开官方摇杆功能
# JOYSTICK_ENABLE = yes

# 打开震动
HAPTIC_ENABLE = yes
# HAPTIC_DRIVER = drv2605l
HAPTIC_DRIVER = solenoid
# 打开音频
AUDIO_ENABLE = yes
AUDIO_DRIVER = pwm_hardware
# 打开刷机按键
BOOTMAGIC_ENABLE = yes

# 加入zhaqian设置
ENCODER_MAP_ENABLE = yes
RADIAL_CONTROLLER_ENABLE = yes
RGB_MATRIX_CUSTOM_KB = yes
RGB_MATRIX_CONTROL_ENABLE = yes
UNDERGLOW_RGB_MATRIX_ENABLE = yes
RGB_INDICATORS_ENABLE = yes
RGB_INDICATORS = dynamic
OPENRGB_ENABLE = yes
SIGNALRGB_ENABLE = yes
VIA_ENABLE = yes
VIA_CUSTOM_KEYCODE_ENABLE = yes
VIA_CUSTOM_CONTROL_ENABLE = yes
MAGIC_SETTINGS_ENABLE = yes
AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE = yes
DYNAMIC_TAP_DANCE_ENABLE = yes
COMBO_ENABLE = yes
DYNAMIC_COMBOS_ENABLE = yes
AUTO_SWITCH_LAYERS_ENABLE = yes
# 摇杆功能如果右边是编码器，关掉它重新生成固件，烧录右边，
JOYSTICK_TRIGGER_ENABLE = yes

# 加入oled显示屏
# OLED_ENABLE = no
# OLED_DRIVER = SSD1306
# OLED_TRANSPORT = i2c

POINTING_DEVICE_ENABLE = yes
# POINTING_DEVICE_DRIVER = cirque_pinnacle_spi
POINTING_DEVICE_DRIVER = pmw3360

