#include <stdio.h>
#include  "myLib.h" // That Contain All The Functions That Exit in <string.h>
#include <string.h>

int main() {
	// Test strlenS Function
	char hello[] = "HelloWorld";
	printf("\nlength = %ld\n", strlenS(hello));
	// Test strcatS() Function
	char word1[20] = "A";
	char word2[6] = "A";
	char *word = strcatS(word1, word2);
	for (int i = 0; word[i] != '\0'; i++) printf("%c", word[i]);
	printf("\n");
	// Test strcmpS() Function
	char str1[20] = "W";
	char str2[60] = "W";
	printf("\nCompare = %d\n", strcmpS(str1, str2));
	printf("\nCompare = %d\n", strcmp(str1, str2));
	// Test strcpyS()
	char string1[20] = "C programming";
	char string2[2];
	strcpyS(string2, string1);
  	puts(string2);
	printf("\n%s\n", string2);
	// Test strchr()
	const char link[] = "https://www.github.com";
	char ch = 'b';
	char *ret;
	ret = strchrS(link, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	// Test strstrS()
	char str_test[] = "geeksforGEEKS";
	char f[] = "forGEEKS";
	char *p_tr = strstrS(str_test, f);
	printf("\nThe String Is : |%s|\n", p_tr);
	// Test  strtok()
	
	return 0;
}














