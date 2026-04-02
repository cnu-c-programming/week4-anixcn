#include <stdio.h>

void my_print(char type, void* x) {
    if (type == 'C') {
        char a = *(char*)x;
        printf("%c\n", a); 
    }

    if (type == 'D') {
        int b = *(int*)x;
        printf("%d\n", b);
    }

    if (type == 'S') {
        char* c = (char*)x;
        printf("%s\n", c);
    }
}

int main() {
    int a = 0x61;
    char b = 'b';
    char* c = "hello world";

    my_print('C', &b); 
    my_print('D', &a);  
    my_print('S', c);   
    my_print('C', c);   

    return 0;
}
