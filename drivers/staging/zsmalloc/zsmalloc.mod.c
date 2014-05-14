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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb41318e8, "_raw_spin_unlock" },
	{ 0x9af585f0, "mem_map" },
	{ 0xf19e9355, "cpu_online_mask" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xe4c80097, "cacheid" },
	{ 0x46bf5d3e, "__alloc_pages_nodemask" },
	{ 0x60506751, "unmap_kernel_range_noflush" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe7a14fab, "kmap_atomic" },
	{ 0xa883deff, "map_vm_area" },
	{ 0x5f754e5a, "memset" },
	{ 0xfd1c661c, "free_vm_area" },
	{ 0x27e1a049, "printk" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0xdd1c1f84, "alloc_vm_area" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe352a4ca, "contig_page_data" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0xe5f72aa6, "__free_pages" },
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x517a1ba4, "cpu_tlb" },
	{ 0x1f07fbb5, "__raw_spin_lock_init" },
	{ 0x2226332d, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x5cf18c85, "cpu_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x1db7dc40, "pgprot_kernel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

