#include "string.h"

int strcmp(char *f, char *s) {
	while(*f && (*f == *s)) {
		f++;
		s++;
	}
	return (unsigned char)*f - (unsigned char)*s;
}

int strlen(char *s) {
	int len;
	while(*s && *s != '0') {
		len += 1;
	}
	return len;
}
