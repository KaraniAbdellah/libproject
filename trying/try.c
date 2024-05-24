#include <stdio.h>
#include <math.h>
#include "try.h"

#define MAX 5
#define x86 // define x86 without this does not define
#ifdef x86
	#define NUMBER 100
#else
	#define NUMBER 200
#endif
#undef x86


// Example
#ifdef __GNUC__
	#define COMPILER "The Compiler Exit"
#else 
	#define COMPLIER "The Compiler Does not Exit"	
#endif

// Example
#define NBR 10
#ifndef NBR 
	#error "Can Continue Without This Number"
#endif


int main() {
	int array[MAX];
	for (int i = 0; i < MAX; i++) {
		sayHello();
	}
	printf("\nNUMBER : %d\n", NUMBER);
	printf("\nHint: %s\n", COMPILER);
	printf("\nLine Number Of This Code Is %d\n", __LINE__);
	printf("\nDATE : %s\n", __DATE__);
	return 0;
}










