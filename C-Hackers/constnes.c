#include <stdio.h>

int main()
{
    int a = 20;
    const int b = 30;

    // Cast Away for const int to int
    printf("Address of b : %p\n", &b);

    int *danger = (int *)(&b);
    printf("Address of b : %d\n", *danger);

    *danger = 100;
    printf("Address of b : %d\n", *danger);


    // Usual Way of Approach in type casting
    printf("Address of b : %p\n", &b);

    int danger = (int)(b); 
    printf("Address of b : %d\n", danger);

    danger = 100; 
    printf("Address of b : %d\n", danger);
}