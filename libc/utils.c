void memcpy(char *src, char *dest, int nbytes) {
	int i;
	for(i = 0; i < nbytes; i++) {
		*(dest + i) = *(src + i);
	}
}

void itoa(int n, char str[]) {
	int i, sign;
	if ((sign = n) < 0) n = -n;
	i = 0;
	do {
		str[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if(sign < 0) str[i++] = '-';
	str[i] = '\0';
}

int memcmp(char s1, char s2) {
	if(s1 == s2) return 0;
	else return 1;
}
