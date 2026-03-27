#include <stdio.h>
#include <string.h>

int main() {
	char a[64] = "Hello";
	char b[64] = "Hello";
	char c[128];

	size_t len(const char* a)
	printf("length of a: %d\n", len);

	char* strcpy(char* a, const char* c)
	printf("a: %s, c: %s\n", a, c);

	printf("c: %s\n", c);

	printf("strcmp(%s, %s) = %d\n", a, a, int strcmp(const char* a, const char* a));
	printf("strcmp(%s, %s) = %d\n", a, c, int strcmp(const char* a, const char* c));
	
	return 0;
}
