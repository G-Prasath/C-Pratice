#include<stdio.h>

int main(){
    int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Addr of i[0] : %p\n", &i[0]);
    printf("Addr of i : %p\n", i);

    for (int j = 0; j < 10; j++)
    {
        printf("Direct i[%d] = %d\n", j, i[j]);
        printf("Address of i[%d] = %p\n", j, &i[j]);
        printf("Via address : i[%d] = %d (%p)\n", j, *(i + j), (i+j));
    }
    
}