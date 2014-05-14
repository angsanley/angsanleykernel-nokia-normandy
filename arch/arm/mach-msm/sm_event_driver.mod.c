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
	{ 0xafb57abf, "cdev_add" },
	{ 0x6e93e56b, "cdev_init" },
	{ 0xf8ffe447, "debugfs_create_file" },
	{ 0x467205be, "device_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x27e1a049, "printk" },
	{ 0xf3557540, "__class_create" },
	{ 0x6e913bb, "class_destroy" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x42b9605e, "device_destroy" },
	{ 0x13295811, "debugfs_remove" },
	{ 0x7da34834, "cdev_del" },
	{ 0x9d876d14, "sm_sprint_info" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc9e5cb39, "sm_get_event_mask" },
	{ 0x4d201cf3, "sm_set_event_mask" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x58ec8125, "sm_get_event_and_data" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xb956544e, "mutex_unlock" },
	{ 0x81ec42ee, "mutex_lock" },
	{ 0x99eb3df0, "kmalloc_caches" },
	{ 0x693bbb73, "__mutex_init" },
	{ 0x759129f4, "kmem_cache_alloc_trace" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

