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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x806e575f, "kmem_cache_destroy" },
	{ 0x4f1939c7, "per_cpu__current_task" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x387a103b, "register_sysctl_table" },
	{ 0x7ca65271, "single_open" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x25ec1b28, "strlen" },
	{ 0x5b43af61, "dm_get_device" },
	{ 0x92168ecd, "dm_io" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc1d878fa, "single_release" },
	{ 0xd691cba2, "malloc_sizes" },
	{ 0xa1cea0b8, "proc_dointvec" },
	{ 0xe0ce9d5e, "dm_table_get_mode" },
	{ 0x973873ab, "_spin_lock" },
	{ 0xa28e76e6, "schedule_work" },
	{ 0x77e93f6f, "seq_printf" },
	{ 0x1a6d6e4f, "remove_proc_entry" },
	{ 0x35d5b27b, "dm_kcopyd_client_destroy" },
	{ 0xff708fd3, "mempool_destroy" },
	{ 0x8b7fe311, "kmemdup" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x9598d229, "dm_register_target" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xa1a0ce34, "dm_kcopyd_copy" },
	{ 0xb72ec8a3, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfcaa04a0, "out_of_line_wait_on_bit_lock" },
	{ 0x45ddfc6, "dm_io_client_destroy" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x17db04ba, "__blkdev_driver_ioctl" },
	{ 0xde0bdcff, "memset" },
	{ 0xed113e22, "proc_mkdir" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xe52592a, "panic" },
	{ 0x6664e62d, "dm_unregister_target" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0x5b27bcec, "sysctl_intvec" },
	{ 0x6dcaeb88, "per_cpu__kernel_stack" },
	{ 0x521445b, "list_del" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x9ca95a0e, "sort" },
	{ 0x4c75ad64, "bio_endio" },
	{ 0x61651be, "strcat" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x9f984513, "strrchr" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0xffd35acd, "__free_pages" },
	{ 0x6466a1e6, "mempool_alloc" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x32e36503, "unregister_sysctl_table" },
	{ 0x340e0ae, "schedule_delayed_work" },
	{ 0x1000e51, "schedule" },
	{ 0xc934d34e, "dm_kcopyd_client_create" },
	{ 0xf8b30e93, "mempool_create" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x6d6b15ff, "create_proc_entry" },
	{ 0x2044fa9e, "kmem_cache_alloc_trace" },
	{ 0xa56f1315, "mempool_free" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xe4a639f8, "kmem_cache_create" },
	{ 0x642e54ac, "__wake_up" },
	{ 0xc0c91be8, "dm_io_client_create" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x5ca8e4f6, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0xe24050c7, "scnprintf" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0x995f3c13, "dm_put_device" },
	{ 0x3302b500, "copy_from_user" },
	{ 0x760a0f4f, "yield" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "D5404C8F9D07B5DBFC716E3");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 6,
};
