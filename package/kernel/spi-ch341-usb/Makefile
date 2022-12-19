include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=spi-ch341-usb
PKG_RELEASE:=1

include $(INCLUDE_DIR)/package.mk

define KernelPackage/spi-ch341-usb
  SUBMENU:=SPI Support
  TITLE:=Driver for ch341
  DEPENDS:=@GPIO_SUPPORT +kmod-spi-gpio +kmod-spi-dev +kmod-usb-core @!LINUX_4_19
  FILES:=$(PKG_BUILD_DIR)/spi-ch341-usb.ko
  KCONFIG:=
endef

define KernelPackage/spi-ch341-usb/description
 Kernel module for ch341 driver
endef

EXTRA_KCONFIG:= \
	CONFIG_SPI_CH341_USB=m

EXTRA_CFLAGS:= \
	$(patsubst CONFIG_%, -DCONFIG_%=1, $(patsubst %=m,%,$(filter %=m,$(EXTRA_KCONFIG)))) \
	$(patsubst CONFIG_%, -DCONFIG_%=1, $(patsubst %=y,%,$(filter %=y,$(EXTRA_KCONFIG)))) \

MAKE_OPTS:= \
	$(KERNEL_MAKE_FLAGS) \
	SUBDIRS="$(PKG_BUILD_DIR)" \
	EXTRA_CFLAGS="$(EXTRA_CFLAGS)" \
	$(EXTRA_KCONFIG)

define Build/Compile
	$(MAKE) -C "$(LINUX_DIR)" \
		$(MAKE_OPTS) \
		modules
endef

$(eval $(call KernelPackage,spi-ch341-usb))
