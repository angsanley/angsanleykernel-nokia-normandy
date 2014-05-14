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
	{ 0x1705e131, "single_release" },
	{ 0x6917f98c, "seq_read" },
	{ 0xb08868dc, "seq_lseek" },
	{ 0x8402501f, "mmc_unregister_driver" },
	{ 0x6edb79e, "mmc_register_driver" },
	{ 0xdcf27790, "event_mask" },
	{ 0x1424f59, "sg_copy_to_buffer" },
	{ 0x8371daff, "sg_copy_from_buffer" },
	{ 0x7a6226da, "__sm_add_event" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x66b2a859, "nr_free_buffer_pages" },
	{ 0xd53cd7b5, "membank0_size" },
	{ 0x46ce1a07, "membank1_start" },
	{ 0x9af585f0, "mem_map" },
	{ 0xd5152710, "sg_next" },
	{ 0xb46871c1, "page_address" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xac708dfb, "mmc_start_req" },
	{ 0xf587dd54, "_dev_info" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0x9ea41f14, "mmc_set_blocklen" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0x24ba3f7c, "mmc_can_trim" },
	{ 0xd54f6583, "mmc_wait_for_req" },
	{ 0xc2283a01, "mmc_erase" },
	{ 0x2e36bb1a, "mmc_can_erase" },
	{ 0x13295811, "debugfs_remove" },
	{ 0x1ec656ad, "dev_err" },
	{ 0xf8ffe447, "debugfs_create_file" },
	{ 0xe352a4ca, "contig_page_data" },
	{ 0xf5a067da, "mmc_release_host" },
	{ 0x3c9aaf7d, "__mmc_claim_host" },
	{ 0x46bf5d3e, "__alloc_pages_nodemask" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5f72aa6, "__free_pages" },
	{ 0xe6da44a, "set_normalized_timespec" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x99eb3df0, "kmalloc_caches" },
	{ 0x759129f4, "kmem_cache_alloc_trace" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x27e1a049, "printk" },
	{ 0xa9f37d0f, "mmc_wait_for_cmd" },
	{ 0x5f754e5a, "memset" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xdecdcafc, "mmc_set_data_timeout" },
	{ 0x82b79ad, "mmc_can_reset" },
	{ 0x9c4cd5c9, "mmc_hw_reset_check" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb956544e, "mutex_unlock" },
	{ 0xe7cc26dd, "seq_printf" },
	{ 0x81ec42ee, "mutex_lock" },
	{ 0x4acfca34, "single_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

