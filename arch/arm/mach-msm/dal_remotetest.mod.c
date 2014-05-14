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
	{ 0xbb9c03e1, "simple_attr_release" },
	{ 0x22db72e8, "simple_attr_write" },
	{ 0x3e62acaf, "simple_attr_read" },
	{ 0xc64777ec, "generic_file_llseek" },
	{ 0x13295811, "debugfs_remove" },
	{ 0xf8ffe447, "debugfs_create_file" },
	{ 0xea006b6, "debugfs_create_dir" },
	{ 0x761c56d4, "daldevice_detach" },
	{ 0xe7762f43, "dalrpc_dealloc_event" },
	{ 0x70aa963c, "dalrpc_dealloc_cb" },
	{ 0xc53e266c, "dalrpc_event_wait_multiple" },
	{ 0xe44f14a0, "dalrpc_alloc_cb" },
	{ 0x4be03be9, "dalrpc_alloc_event" },
	{ 0x1efc531b, "dalrpc_fcn_15" },
	{ 0xc88874f3, "dalrpc_fcn_14" },
	{ 0x4f181659, "dalrpc_fcn_13" },
	{ 0x499e9b7d, "dalrpc_fcn_12" },
	{ 0xd37a4b00, "dalrpc_fcn_11" },
	{ 0xf50891c, "dalrpc_fcn_10" },
	{ 0x24c5f51a, "dalrpc_fcn_9" },
	{ 0xbc4b09d5, "dalrpc_fcn_8" },
	{ 0x67c6f92a, "dalrpc_fcn_7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4100119f, "dalrpc_fcn_6" },
	{ 0x4ef799d1, "dalrpc_fcn_5" },
	{ 0xfa143be3, "dalrpc_fcn_4" },
	{ 0x2bf4bec, "dalrpc_fcn_3" },
	{ 0x8bb4a281, "dalrpc_fcn_2" },
	{ 0xd451c0be, "dalrpc_fcn_1" },
	{ 0xf64712fb, "dalrpc_fcn_0" },
	{ 0x27e1a049, "printk" },
	{ 0x726a05f3, "daldevice_attach" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1969cfee, "simple_attr_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D80624DB8D39DB3F42B54C9");
