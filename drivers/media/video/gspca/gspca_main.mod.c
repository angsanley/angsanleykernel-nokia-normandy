#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59a02dd5, "module_layout" },
	{ 0x99eb3df0, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7e9de2be, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x4d542cd0, "usb_kill_urb" },
	{ 0x5f7c810e, "__video_register_device" },
	{ 0xb956544e, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x18d8fe66, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x4d4c31ee, "mutex_lock_interruptible" },
	{ 0x693bbb73, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xa37d846a, "video_unregister_device" },
	{ 0xc42538af, "usb_set_interface" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x81ec42ee, "mutex_lock" },
	{ 0x6d5d4369, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe7ff7c64, "vm_insert_page" },
	{ 0xa094f75, "module_put" },
	{ 0x79421dcc, "usb_submit_urb" },
	{ 0x80163e3c, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x7c0e0146, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x711c29ef, "usb_clear_halt" },
	{ 0xaaf5f5bf, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x759129f4, "kmem_cache_alloc_trace" },
	{ 0xcd11e130, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x219295a4, "input_unregister_device" },
	{ 0xa4c0d492, "prepare_to_wait" },
	{ 0x675b24bc, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x45c21a47, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdce257ed, "vmalloc_to_page" },
	{ 0x4d93afe, "usb_alloc_coherent" },
	{ 0xe77243cd, "dev_get_drvdata" },
	{ 0x7dc47446, "usb_free_urb" },
	{ 0x2d87049b, "video_ioctl2" },
	{ 0xb0151a2c, "try_module_get" },
	{ 0xb3a7cf3f, "usb_alloc_urb" },
	{ 0x4cdb3178, "ns_to_timeval" },
	{ 0x5e8e4fbb, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFBCF4BD2374601FE6CCFCE");
