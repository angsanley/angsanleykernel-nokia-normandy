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
	{ 0xb41b91f8, "device_remove_file" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x6e913bb, "class_destroy" },
	{ 0x42b9605e, "device_destroy" },
	{ 0xe4e2ebba, "device_create_file" },
	{ 0x467205be, "device_create" },
	{ 0xf3557540, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xb81960ca, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x832a1ccd, "oem_rapi_client_streaming_function" },
	{ 0xaddc91ec, "oem_rapi_client_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

