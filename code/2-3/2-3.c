#include <stdio.h>
#include <string.h>

int main() {
    char a[64] = "Hello";
    char b[64] = "Hello";
    char c[128];

    int len = strlen(a); 
    printf("length of a: %d\n", len);

    strcpy(c, a); 
    printf("a: %s, c: %s\n", a, c);

    printf("c: %s\n", c);

    printf("strcmp(%s, %s) = %d\n", a, a, strcmp(a, a));
    printf("strcmp(%s, %s) = %d\n", a, c, strcmp(a, c));
    
    return 0;
}
