#include<stdio.h>

int Inc(int a){
    a = a + 1;
    return a;
}

void Dec(int *i){
    *i = *i - 1;
}

int main(){
    int a = 20, b = 30;
    int *p = &a;
    int *c = *(&p);
    p = &b;

    printf("Values of a : %d\n", a);
    printf("Address of a : %p\n", &a);

    printf("-------------------\n");

    printf("value of A via Ptr : %d\n", *p);
    printf("Alternate Printing : %d\n", *(&a));
    printf("value of P : %p\n", p);
    printf("Address of Pointer : %p\n", &p);

    printf("------ Increment ---------\n");

    printf("Inc of A : %d\n", Inc(a));
    printf("Alternate of Inc of A : %d\n", Inc(*p));

    printf("------ Decrement ---------\n");

    Dec(&a);
    printf("Dec of A : %d\n", a);
    Dec(p);
    printf("Alternate of Dec of A : %d\n", *p);

}