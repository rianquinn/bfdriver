#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc0554ace, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x9b37e24b, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2270cd45, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x477e59a3, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x55181725, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0xe007de41, __VMLINUX_SYMBOL_STR(kallsyms_lookup_name) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x5072a3a3, __VMLINUX_SYMBOL_STR(cpu_tlbstate) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9cb986f2, __VMLINUX_SYMBOL_STR(vmalloc_base) },
	{ 0x672c5471, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x6d319f4d, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xfef51ab5, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B3B2C97098DA97EDFC68634");
