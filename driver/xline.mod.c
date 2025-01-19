#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa810cb28, "usb_alloc_urb" },
	{ 0x44b5ab63, "usb_free_urb" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x9923b63c, "usb_alloc_coherent" },
	{ 0xa6dcc152, "seq_release" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa4e5832c, "class_destroy" },
	{ 0x48f600d0, "usb_register_driver" },
	{ 0xcf2a6966, "up" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe67c066d, "seq_lseek" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x3107c752, "proc_create_data" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x2b1719fa, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x5c5781c2, "usb_submit_urb" },
	{ 0xf4f53d7f, "usb_free_coherent" },
	{ 0xfbe72bcf, "device_create" },
	{ 0x3fa498ad, "class_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x52e02d0c, "usb_control_msg" },
	{ 0x5f37eeba, "usb_set_interface" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x951c6f79, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1a69a9b1, "usb_unlink_urb" },
	{ 0x1f955396, "seq_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xde81aa90, "__register_chrdev" },
	{ 0xb86bb5ac, "device_destroy" },
	{ 0x49f6cfe3, "remove_proc_entry" },
	{ 0x6b93e122, "usb_kill_urb" },
	{ 0x404ea81a, "seq_printf" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x726340e0, "kmalloc_trace" },
	{ 0xc73bf268, "single_open" },
	{ 0x9a631eb1, "kmalloc_caches" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x67a35d9, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FB6p3FC5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FC9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB6p3FCEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C64D7382527A5819AF0CBB2");
