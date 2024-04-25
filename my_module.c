#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Wojciech Gajda");
MODULE_DESCRIPTION("A simple Linux driver");
MODULE_VERSION("0.1");

static int __init my_module_init(void) {
    printk(KERN_INFO "Hello, world!\n");
    return 0;
}

static void __exit my_module_exit(void) {
    printk(KERN_INFO "Goodbye, world!\n");
}

module_init(my_module_init);
module_exit(my_module_exit);