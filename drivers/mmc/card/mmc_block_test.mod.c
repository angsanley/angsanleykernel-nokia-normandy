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
	{ 0x37a0cba, "kfree" },
	{ 0xfa799e30, "test_iosched_unregister" },
	{ 0x99eb3df0, "kmalloc_caches" },
	{ 0xf0372292, "test_iosched_register" },
	{ 0x759129f4, "kmem_cache_alloc_trace" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf8ffe447, "debugfs_create_file" },
	{ 0x4006cfaa, "debugfs_create_u32" },
	{ 0xd98cd495, "test_iosched_get_debugfs_tests_root" },
	{ 0xb52c1bf5, "test_iosched_get_debugfs_utils_root" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x13295811, "debugfs_remove" },
	{ 0x7119a9a5, "test_iosched_add_unique_test_req" },
	{ 0xe94ec306, "test_iosched_add_wr_rd_test_req" },
	{ 0x3295bbb6, "mmc_blk_init_packed_statistics" },
	{ 0x37e74642, "get_jiffies_64" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x65043b59, "test_iosched_set_ignore_round" },
	{ 0x820c16d5, "print_mmc_packing_stats" },
	{ 0xb41318e8, "_raw_spin_unlock" },
	{ 0x2226332d, "_raw_spin_lock" },
	{ 0xf689c551, "mmc_blk_get_packed_statistics" },
	{ 0xf9a482f9, "msleep" },
	{ 0x31b3ec55, "test_iosched_start_test" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x76aa5377, "test_iosched_set_test_result" },
	{ 0xf95bc893, "test_iosched_get_req_queue" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";

