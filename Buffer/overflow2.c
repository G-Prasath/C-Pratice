#include <stdio.h>

int main()
{
    int j = 0;
    char a[6] = "Hello";
    char b[5] = "wor\0";
    char c[10] = "sb";
    




    printf("Enter  C Value : ");
    scanf("%s", c);
    printf(" A : %s @ %p\n", a, a);
    printf(" B : %s @ %p\n", b, b);
    printf(" C : %s @ %p\n", c, c);
    printf(" J : %d @ %p\n", j, &j);

    if (j)
    {
        printf("Access Granted\n");
    }
    else{
        printf("Access Denied\n");
    }
}
