#include "screen.h" 
#include "../libc/utils.h"
#include "ports.h"

void screen_init() {
	vidmem = (unsigned char*)VGA;
	nextTextPos = 0;
	cline = 0;
}

void kprint(char *msg) {
	if(cline == MROWS && (nextTextPos % (MCOLS * 2) == 0) {
		
	}
	while(*msg != '\0') {
		vidmem[nextTextPos] = *msg;
		vidmem[nextTextPos+1] = 15;
		nextTextPos += 2;
		msg++;
	}
}

void kprintln() {
	nextTextPos = ++cline * MCOLS * 2;
}

void printi(int n) { 
	char* d2s[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	if(n >= 0 && n <= 9) {
		print(d2s[n]);
	} else {
		int r = n % 10;
		int d = n / 10;
		printi(d);
		printi(r);
	}
}
