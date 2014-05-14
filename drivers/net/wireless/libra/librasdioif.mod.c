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
	{ 0x18e9d817, "sdio_writeb" },
	{ 0xe73d4496, "sdio_readb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x98cc564a, "regulator_set_voltage" },
	{ 0xbc6f8f82, "mmc_detect_change" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7e9de2be, "dev_set_drvdata" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x7dd9f5a3, "sdio_writesb" },
	{ 0x6bde9983, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x56795bcb, "sdio_claim_irq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xae55b149, "crypto_ahash_digest" },
	{ 0x3441c3d6, "gpio_set_value_cansleep" },
	{ 0x3975c173, "crypto_alloc_ablkcipher" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x27e1a049, "printk" },
	{ 0x7ce7cb9a, "regulator_bulk_get" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x9f0217be, "sdio_readsb" },
	{ 0xc4d90d7a, "sdio_unregister_driver" },
	{ 0xe322c438, "sdio_set_host_pm_flags" },
	{ 0x89e3cfc7, "sdio_release_irq" },
	{ 0x3bdde464, "crypto_destroy_tfm" },
	{ 0x5f474c2d, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0xe796b5af, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc3eafe2d, "pmapp_vreg_lpm_pincntrl_vote" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa3570b67, "pmapp_clock_vote" },
	{ 0x40fc8612, "sdio_register_driver" },
	{ 0x44090aa5, "sdio_memcpy_fromio" },
	{ 0x3b2dda51, "sdio_claim_host" },
	{ 0xe77243cd, "dev_get_drvdata" },
	{ 0x246fed6d, "sdio_set_block_size" },
	{ 0x1decfd05, "sdio_disable_func" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0x6b7b12f7, "sdio_release_host" },
	{ 0xb9e02298, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "86E14E6B44B72C0454C8E91");
