ARCHS = armv7 arm64
SDK = iPhoneOS7.1
include theos/makefiles/common.mk

TWEAK_NAME = NoUpdateAll
NoUpdateAll_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
