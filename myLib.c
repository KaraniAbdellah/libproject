#include <stdio.h>
#include "myLib.h"

/*
strlen() strcat() strcmp() strcpy() strchr()
strstr() strtok() strncpy() strncat() strncmp()
*/

// Start The Fucntions Implementation

/**
 * @brief Calculates the length of a string.
 *
 * @param str Pointer to the string whose length will be calculated.
 * 
 * @return The number of characters in the string, excluding the null-terminator.
 */

size_t strlenS(const char *str) {
	size_t len = 0;
	while (str[len] != '\0') len++;
	return len;
}


/**
 * @brief Cat a string to another string
 *
 * This function adds the content of the `src` to `dest`.
 *
 * @param dest Pointer to the destination string.
 * @param src Pointer to the source string.
 * 
 * @return Pointer to the destination string `dest`.
 */

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


/**
 * @brief Compare two strings.
 *
 * This function compares the two strings `lhs` and `rhs` character by character.
 *
 * @param lhs The first string to be compared.
 * @param rhs The second string to be compared.
 * 
 * @return An integer indicating the result of the comparison:
 *         - A value less than 0 if `lhs` is less than `rhs`.
 *         - 0 if `lhs` is equal to `rhs`.
 *         - A value greater than 0 if `lhs` is greater than `rhs`.
 */

int strcmpS(const char *lhs, const char *rhs) {
	int i = 0;
	while (lhs[i] != '\0' || rhs[i] != '\0') {
		if (lhs[i] == rhs[i]) i++;
		else return (int) lhs[i] - rhs[i];
	}
	return 0;
}


/**
 * @brief Copies a source string to a destination string.
 *
 * @param destination Pointer to the destination array.
 * @param source Pointer to the source string.
 *
 * @return Pointer to the destination string.
 */

char *strcpyS(char* destination, char* source) {
	int i;	
	for (i = 0; source[i] != '\0'; i++) {
		destination[i] = source[i];
	}
	destination[i] = '\0';	
	return destination;
}


/**
 * @brief Searches for the first occurrence
 *
 * @param str − This is the C string to be scanned.
 * @param c − This is the character to be searched in str.
 *
 * @return A Pointer to the first occurrence of the character c in the string str,
		  	or NULL if the character is not found.
 */

char *strchrS(const char *str, int c) {
	for (; *str != '\0'; str++) {
		if ((int) *str == c) {
			return (char *) str;
		}
	}
	return NULL;
}


/**
 * @brief Finds the first occurrence of the string s2 in the string s1.
 *
 * @param s1: This is the main string to be examined.
 * @param s2: This is the sub-string to be searched in string.
 *
 * @return A Pointer to the first occurrence of the character c in the string str,
		  	or NULL if the character is not found.
 */


char *strstrS (const char *s1, const char *s2) {
	if (s1 == NULL || s2 == NULL) return NULL;
	if (*s2 == '\0') return (char *) s1;
	for (; *s1 != '\0'; s1++) {
		if (*s2 == *s1) {
			const char *temp1 = (char *) s1; 
			const char *temp2 = (char *) s2;
			while (*temp1 != '\0' && *temp1 == *temp2) {
				temp1++; temp2++;
			}
			if (*temp1 == '\0') return (char *) s1;
			s1 = temp1;
		}
	}
	return NULL;
}


/**
 * @brief Splits str[] according to given delimiters.
 *
 * @param str: It is the pointer to the string to be tokenized.
 * @param delims: It is a string containing all delimiters.
 *
 * @return A Pointer to the first token encountered in the string.
		  	 NULL when there are no more tokens.
 */

char *strtokS (char *str, const char *delims) {
	
}

















// end The Functions Implementation
