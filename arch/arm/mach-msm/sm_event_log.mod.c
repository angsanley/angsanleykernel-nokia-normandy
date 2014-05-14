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
	{ 0xb2b914ca, "sm_event_unregister" },
	{ 0x9af585f0, "mem_map" },
	{ 0x43bac36e, "init_mm" },
	{ 0xd53cd7b5, "membank0_size" },
	{ 0x46ce1a07, "membank1_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bdc1b37, "sm_event_register" },
	{ 0x18d8fe66, "__init_waitqueue_head" },
	{ 0x328a05f1, "strncpy" },
	{ 0xdc129188, "send_modem_logaddr" },
	{ 0xb46871c1, "page_address" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc57d2b10, "g_track_irq_buf" },
	{ 0x38800b0f, "g_track_index" },
	{ 0x5be96d1e, "msm_batt_get_batt_voltage" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0xcd11e130, "__wake_up" },
	{ 0x3109b751, "cpu_clock" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x9d669763, "memcpy" },
	{ 0x675b24bc, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xa4c0d492, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x73f8beb, "smd_rpc_get_sym" },
	{ 0xb81960ca, "snprintf" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

