/*
 *	Git is a distributed version control system.
 *	Git is free software.
 *	Git tracks changes.
 *	Git tracks changes of file.
 *	Modify for test.
 *	Creating a new branch dev and feature1.
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>


static int __init hello_init (void)
{
    printk("I bear a charmed life.\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk("Out, out, brief candle!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("linshiqing");
MODULE_DESCRIPTION("A Hello,World Module");
