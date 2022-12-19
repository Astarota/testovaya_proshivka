include $(TOPDIR)/rules.mk

PKG_NAME:=ch341prog
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_BUILD_DIR := $(BUILD_DIR)/$(PKG_NAME)

PKG_FLAGS:=nonshared

include $(INCLUDE_DIR)/package.mk

define Package/ch341prog
  SECTION:=cuman
  CATEGORY:=Cuman
  TITLE:=Cuman Programmer Utilities
  MAINTAINER:=Kairat Almaz <kairatalmaz91@gmail.com>
  DEPENDS:=+libusb-1.0
endef

define Package/ch341prog/description
  Cuman Programmer Utilities.
#gcc -std=gnu99 -Wall ch341a.c main.c -o ch341prog  -lusb-1.0
endef

define Build/Configure
endef

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		CC="$(TARGET_CC)" \
		CFLAGS="$(TARGET_CFLAGS) -Wall" \
		LDFLAGS="$(TARGET_LDFLAGS)"
endef

define Package/ch341prog/install
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/ch341prog $(1)/usr/sbin
endef

$(eval $(call BuildPackage,ch341prog))
