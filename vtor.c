/*
 * vtor.c
 *
 *  Created on: Jul 30, 2015
 *      Author: Randy Marsh
 */


void __attribute__((naked))
vtor(unsigned long addr)
{

	__asm("    ldr     r1,=0xE000ED08\n"
		  "    str	   r0,[r1]\n"
		  "    ldr     sp,[r0]\n"
		  "    ldr     r0,[r0,#4]\n"
		  "	   bx 	   r0\n"
          :  : "r" (addr) : "memory", "r0", "r1");

}
