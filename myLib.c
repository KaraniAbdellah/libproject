#include <stdio.h>
#include "myLib.h"

/*
strlen() strcat() strcmp() strcpy() strchr()
strstr() strtok() strncpy() strncat() strncmp()
*/

// Start The Fucntions Implementation

size_t strlenS(const char *str) {
	size_t len = 0;
	while (str[len] != '\0') len++;
	return len;
}


char *strcatS(char *dest, const char *src) {
	char *ptr = dest;
	int dest_size = strlenS(dest);
	int src_size = strlenS(src);
	for (int i = dest_size; i < dest_size + src_size; i++) {
		dest[i] = src[i - dest_size];
	}
	dest[dest_size + src_size] = '\0';
	return ptr;
}


int strcmpS(const char *lhs, const char *rhs) {
	int i = 0;
	while (lhs[i] != '\0' || rhs[i] != '\0') {
		if (lhs[i] == rhs[i]) i++;
		else return (int) lhs[i] - rhs[i];
	}
	return 0;
}

























// end The Functions Implementation
