/*
 * File: hello.c
 * Purpose: To demonstrate a simple kernel module.
 */
#include <linux/kernel.h> /* for KERN INFO */
#include <linux/module.h> /* for all kernel modules */

int init_module(void)
{
  printk(KERN_INFO "Hello , from Marc Burt!\n");
  return 0;
}

void cleanup_module(void)
{
  printk(KERN_INFO "Goodbye , from Marc Burt!\n");
  return;
}