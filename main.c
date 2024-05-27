#include <stdio.h>
#include  "myLib.h" // That Contain All The Functions That Exit in <string.h>
#include <string.h>

int main() {
	// Test strlenS Function
	char hello[] = "HelloWorld";
	printf("\nlength = %ld\n", strlenS(hello));
	// Test strcatS Function
	char word1[20] = "A";
	char word2[6] = "A";
	char *word = strcatS(word1, word2);
	for (int i = 0; word[i] != '\0'; i++) printf("%c", word[i]);
	printf("\n");
	// Test strcmp Function
	char str1[20] = "W";
	char str2[60] = "W";
	printf("\nCompare = %d\n", strcmpS(str1, str2));
	printf("\nCompare = %d\n", strcmp(str1, str2));
	return 0;
}


