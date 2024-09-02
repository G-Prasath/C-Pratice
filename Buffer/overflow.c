#include <stdio.h>

int main()
{
    char a[2], b[2], c[2], d[2];

    printf("Enter Value of A :");
    scanf("%s\n", a);
    printf("Value of A is : %s @ %p\n", a, a);
    printf("[Before Scanf] : Value of B is : %s @ %p\n", b,b);


    printf("Enter Value of B :");
    scanf("%s", b);
    printf("[After Scanf] : Value of B is : %s @ %p\n", b,b);
    printf("[Before Scanf] : Value of C is : %s @ %p\n", c,c);



    printf("Enter Value of C :");
    scanf("%s", c);
    printf("[After Scanf] : Value of C is : %s @ %p\n", c,c);
    printf("[Before Scanf] : Value of D is : %s @ %p\n\n", d,d);



    printf("Enter Value of D :");
    scanf("%s", d);
    printf("[After Scanf] : Value of D is : %s @ %p\n\n", d,d);



    printf("Value of A is : %s\n", a);
    printf("Value of B is : %s\n", b);
    printf("Value of C is : %s\n", c);
    printf("Value of D is : %s\n", d);

}