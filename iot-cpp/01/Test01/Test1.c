#include <stdio.h>
int n = 3.14;
int main() {

    //char arr[]= "hong";
    char arr[] ="hong";
    char *arr1 = "hong";

    /*printf("%c\n", arr[0]);
    printf("%c\n", arr[1]);
    printf("%c\n", arr[2]);
    printf("%c\n", arr[3]);
    printf("%c\n", arr[4]);*/

    printf("%p\n", arr);
    printf("%p\n", &arr1);
    printf("%p\n", *arr1);





    return 0;
}