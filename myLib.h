#ifndef MYLIB_H
	#define MYLIB_H
	// Start Functions Declaration
	size_t strlenS (const char *str);
	char *strcatS (char *dest, const char *src);
	int strcmpS (const char *lhs, const char *rhs);
	char *strcpyS (char* destination, char* source);
	char *strchrS (const char *str, int c);
	char *strstrS (const char *s1, const char *s2);
	char *strtokS (char *str, const char *delims);
	char *strncpyS (char *dest, const char *src, size_t n);
	char *strncatS (char *dest, const char *src, size_t n);
	int strncmpS (const char *str1, const char *str2, size_t n);
	char *strrevS (char *str);
	size_t strspnS (const char *str1, const char *str2);
	// End Functions Declaration
#endif





