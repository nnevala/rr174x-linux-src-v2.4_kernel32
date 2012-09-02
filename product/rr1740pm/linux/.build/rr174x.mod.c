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
	{ 0x8e49f4de, "module_layout" },
	{ 0x8bf7d1b0, "per_cpu__current_task" },
	{ 0xecf43c07, "kmalloc_caches" },
	{ 0x60449d42, "pci_bus_read_config_byte" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x6307fc98, "del_timer" },
	{ 0x4ec7b977, "scsi_add_host_with_dma" },
	{ 0xbb783d89, "scsi_remove_device" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa28e76e6, "schedule_work" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x45d11c43, "down_interruptible" },
	{ 0x3fec048f, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x88cfd52, "mutex_unlock" },
	{ 0x59bfd1b2, "pci_bus_write_config_word" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4feccfe1, "pci_set_master" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0xde0bdcff, "memset" },
	{ 0x38f89d42, "pci_set_dma_mask" },
	{ 0x9ced38aa, "down_trylock" },
	{ 0xea147363, "printk" },
	{ 0xecde1418, "_spin_lock_irq" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xbe499d81, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x988863e1, "scsi_scan_host" },
	{ 0x74be5608, "pci_bus_write_config_dword" },
	{ 0xc5fb3dd6, "mutex_lock" },
	{ 0x6dcaeb88, "per_cpu__kernel_stack" },
	{ 0x748caf40, "down" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xa5808bbf, "tasklet_init" },
	{ 0x46085e4f, "add_timer" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0x79ad224b, "tasklet_kill" },
	{ 0x3980aac1, "unregister_reboot_notifier" },
	{ 0x32a5d712, "scsi_device_put" },
	{ 0xf51ae235, "touch_nmi_watchdog" },
	{ 0x596903e5, "kmem_cache_alloc" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x8deed0f5, "blkdev_put" },
	{ 0xb8f6bc42, "scsi_add_device" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x4c6223ea, "pci_bus_read_config_word" },
	{ 0x1cc6719a, "register_reboot_notifier" },
	{ 0xebda04e6, "pci_bus_read_config_dword" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xa9fafcb2, "scsi_device_lookup" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2f9877ca, "scsi_register" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x35b0650f, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x9c46574a, "pci_bus_write_config_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0xc09acf5c, "scsi_dma_unmap" },
	{ 0x236c8c64, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x3f1899f1, "up" },
	{ 0x7f77b6df, "scsi_unregister" },
	{ 0x56e0e7db, "pci_get_device" },
	{ 0xbd3505f8, "scsi_remove_host" },
	{ 0x9edbecae, "snprintf" },
	{ 0xbdc984d5, "bdget" },
	{ 0x6abd84b8, "blkdev_get" },
	{ 0x86d64aa8, "pci_enable_device" },
	{ 0x945bc6a7, "copy_from_user" },
	{ 0x954cbb26, "vsprintf" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xdf0ac4a2, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
