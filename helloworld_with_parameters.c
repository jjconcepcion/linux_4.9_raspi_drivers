/*
 * helloworld_with_params.c
 *
 *  Created on: Aug 6, 2019
 *      Author: Jan Joseph Concepcion
 */
#include <linux/module.h>

static int num = 5;

/* S_IRUG0: everyone can read the sysfs entry */
module_param(num, int, S_IRUGO);

static int __init hello_init(void)
{
    pr_info("parameter num = %d.\n", num);
    return 0;
}

static void __exit hello_exit(void)
{
    pr_info("Hello world exit\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jan Joseph Concepcion <jconcep2@mail.sfsu.edu>");
MODULE_DESCRIPTION("This is a module that accepts parameters");
