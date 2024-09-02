#include <stdio.h>

int main()
{
    char a[6] = "Hello";
    char b[6] = "wor\0ld";
    char c[5];



    printf("Enter  C Value : ");
    scanf("%s", c);
    printf(" A : %s @ %p\n", a, a);
    printf(" B : %s @ %p\n", b, b);
    printf(" C : %s @ %p\n", c, c);

    if (c)
    {
        printf("Access Granted");
    }
    else{
        printf("Access Denied");
    }
    
}