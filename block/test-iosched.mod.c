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
	{ 0xb41318e8, "_raw_spin_unlock" },
	{ 0xea006b6, "debugfs_create_dir" },
	{ 0xe9684a64, "bio_alloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xcdd24c05, "blk_put_request" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xfad83f98, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0x67833b3b, "__blk_run_queue" },
	{ 0x18d8fe66, "__init_waitqueue_head" },
	{ 0x4006cfaa, "debugfs_create_u32" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xd6b2097, "init_request_from_bio" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x65f42dc4, "elv_unregister" },
	{ 0xe7b1bede, "elv_dispatch_sort" },
	{ 0x8834396c, "mod_timer" },
	{ 0xfe7b0eb8, "bio_put" },
	{ 0x4b349434, "elv_register" },
	{ 0x28f1222e, "blk_rq_map_kern" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x1f07fbb5, "__raw_spin_lock_init" },
	{ 0x759129f4, "kmem_cache_alloc_trace" },
	{ 0x2226332d, "_raw_spin_lock" },
	{ 0xcd11e130, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa4c0d492, "prepare_to_wait" },
	{ 0x675b24bc, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3901b103, "blk_get_request" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

