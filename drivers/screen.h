#ifndef SCREEN_H
#define SCREEN_H

#define WBT 0x0F
#define BWT 0xf0
#define RBT 0x04
#define YBT 0x0E
#define BLBT 0x05
#define VGA_WH 80
#define VGA_HT 25
#define VGA 0xb8000
static volatile unsigned char * vidmem;

static int nextTextPos;
static int cline;

void screen_init();
void printi();
void sc(unsigned int col, unsigned int row);
unsigned short gc();
void cls();
unsigned int kprint(char *msg, unsigned int line);
unsigned int kprintf(char *msg, unsigned int line);
unsigned int kputc(unsigned char c, unsigned int line);
void scroll_up();
unsigned int kerror(char *msg, unsigned int line);
unsigned int kwarn(char *msg, unsigned int line);
unsigned int kinfo(char *msg, unsigned int line);

#endif
