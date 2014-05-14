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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59a02dd5, "module_layout" },
	{ 0x99eb3df0, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2ccc553c, "zs_map_object" },
	{ 0xb3504551, "alloc_disk" },
	{ 0x52391498, "blk_cleanup_queue" },
	{ 0x106ba9b8, "up_read" },
	{ 0xf8cd6f5e, "blk_queue_io_opt" },
	{ 0xb41318e8, "_raw_spin_unlock" },
	{ 0xd0fd4669, "zs_destroy_pool" },
	{ 0xcf870f61, "zs_get_total_size_bytes" },
	{ 0x8959befe, "zs_malloc" },
	{ 0x8d2da82, "blk_queue_io_min" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x981c2dfa, "sysfs_remove_group" },
	{ 0x46bf5d3e, "__alloc_pages_nodemask" },
	{ 0x3ac9a491, "down_read" },
	{ 0xa76ac1a9, "fsync_bdev" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xef9f1938, "zs_free" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe7a14fab, "kmap_atomic" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x8e2d2471, "blk_alloc_queue" },
	{ 0x27e1a049, "printk" },
	{ 0x32d09b63, "sysfs_create_group" },
	{ 0xb486bbb1, "del_gendisk" },
	{ 0x665ccf8f, "kunmap" },
	{ 0x8a5919ae, "zs_create_pool" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc7691ea, "up_write" },
	{ 0x4eeeab8b, "down_write" },
	{ 0xe352a4ca, "contig_page_data" },
	{ 0xc7198abf, "bio_endio" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe5f72aa6, "__free_pages" },
	{ 0x75fdcaa8, "kmap" },
	{ 0x8d09dead, "blk_queue_make_request" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xc1b84c05, "blk_queue_physical_block_size" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x18aec466, "put_disk" },
	{ 0x5ac15bae, "kstrtou16" },
	{ 0x1f07fbb5, "__raw_spin_lock_init" },
	{ 0x759129f4, "kmem_cache_alloc_trace" },
	{ 0x2226332d, "_raw_spin_lock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4845c423, "param_array_ops" },
	{ 0x1af89af6, "add_disk" },
	{ 0x56b63670, "lzo1x_1_compress" },
	{ 0xf30fda27, "lzo1x_decompress_safe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd8eda41c, "blk_queue_logical_block_size" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xb8b45304, "bdget_disk" },
	{ 0xcff8e636, "bdput" },
	{ 0xb8b61f41, "zs_unmap_object" },
	{ 0xb5306693, "__init_rwsem" },
	{ 0xe81d35dd, "flush_dcache_page" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zsmalloc";

