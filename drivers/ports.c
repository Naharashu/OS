#include "ports.h"
#include "driver/screen.h"

void outb(short port, char val) {
	asm volatile ("outb %1, %0" : : "dN" (port), "a" (val));
}

char inb(short port) { 
	unsigned char ret; 
	asm volatile("inb %1, %0" : "=a" (ret) : "dN" (port));
	return ret
}

void remap_pic() {
	outb(0x20, 0x11);
	outb(0xa0, 0x11);
	outb(0x21, 32);
	outb(0xa1, 40);
	outb(0x21, 4);
	outb(0xa1, 2);
	outb(0x21, 1);
	outb(0xa1, 1);
	outb(0x21, 0);
	outb(0xa1, 0);
}

void interrupt_handler(int i) {
	kprint("interrupt recieved ");
	printi(i);
	println();
}
