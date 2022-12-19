#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb440b5e, "module_layout" },
	{ 0xe72130a7, "param_ops_uint" },
	{ 0x3631d6fa, "usb_deregister" },
	{ 0x153a2c6f, "usb_register_driver" },
	{ 0xe475c173, "gpiod_export" },
	{ 0xc63eaf49, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xab6c9cdf, "kthread_create_on_node" },
	{ 0xdac4f38f, "gpiochip_add_data_with_key" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xef61be54, "irq_set_chip" },
	{ 0x463d8290, "__irq_alloc_descs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x64aabb0c, "spi_new_device" },
	{ 0xa320ceec, "spi_register_controller" },
	{ 0xd4b3bd87, "__spi_alloc_controller" },
	{ 0xbf13dcb9, "spi_busnum_to_master" },
	{ 0x6be7cdbe, "usb_alloc_urb" },
	{ 0x8bd65ff4, "kmem_cache_alloc_trace" },
	{ 0xc83492ef, "kmalloc_caches" },
	{ 0xd4f125f5, "usb_get_dev" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x52673010, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9bf9755, "usb_put_dev" },
	{ 0xc7e1e1ce, "usb_free_urb" },
	{ 0x27f2aeb4, "put_device" },
	{ 0x608183d7, "spi_unregister_controller" },
	{ 0x671521e, "spi_unregister_device" },
	{ 0x3318f664, "gpiochip_remove" },
	{ 0xfe990052, "gpio_free" },
	{ 0x372f3c1d, "wake_up_process" },
	{ 0xa5700515, "kthread_stop" },
	{ 0x2c65785, "spi_finalize_current_transfer" },
	{ 0x2ad31def, "usb_submit_urb" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xcb988f3a, "handle_simple_irq" },
	{ 0x72839fb4, "_dev_err" },
	{ 0xcf6cc643, "__dynamic_dev_dbg" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x69aae194, "gpiochip_get_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcd8ea4a2, "usb_bulk_msg" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xe2cf86c7, "_dev_info" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1A86p5512d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "69EC8B38CFEEB2DC785FAEF");
