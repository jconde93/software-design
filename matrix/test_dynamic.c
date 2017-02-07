/* File: test_dynamic.c */

#include "matrix_dynamic.h"
#include "transpose.h"

int main()
{
    static T data[] = {1,2,3,4};
    matrix  a,b;
    a = create_initvals(2,2,data);
    b = create_empty(2,2);
    equate(&a,&b);
    printf("\n Matrix a:");
    matrix_print(a);
    printf("\n Matrix b:");
    matrix_print(b);
    printf("\n a+b:");
    matrix_print(add(a,b));
    printf("\n transposing a");
    matrix_print(transpose(a));
    printf("\n transposing a+b");
    matrix_print((transpose(add(a,b))));
}
