#include <stdio.h>


int a=1;
int g_c;

int main() {


    int b;


    static int c;

    const int d = 1;
    char arr[20] = "hi";
    char* parr = "hong";

    printf("global a: %p\n", &a);
    printf("global c: %p\n", &g_c);
    printf("local b: %p\n", &b);
    printf("static c: %p\n", &c);
    printf("const d: %p\n", &d);

    printf("array: %p\n", arr);
    printf("parr: %p\n", &parr);








    return 0;
}