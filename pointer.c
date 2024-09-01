#include <stdio.h>
int ss = 40;
int foo();

int main()
{
    int v = 10;
    int *j = &v;

    printf("Value of V : %d\n", v);
    printf("Address of V : %p\n", &v);
    printf("\n");

    printf("Values of Variable J: %p\n", j);
    printf("Refered value of Variable *J: %d\n", *j);
    printf("Address of Variable &J: %p\n", &j);
    printf("\n");

    printf("Global Variable ss : %d\n", ss);
    printf("Global Address of ss : %p\n\n", &ss);

    foo();

    // int *m = &ss;
    // printf("*m reference address : %d\n", *m);
    // *m = 100;
    // printf("*m reference address : %d\n", *m);

    // int *e = &ss + 0x1; 
    // printf("*modify foo function Value : %d\n", *e);
    // *e = 50;
    // printf("*modify foo function Value : %d\n", *e);

    // foo();



    return 0;
}

int foo(){
    static int s = 20;
    int k = s * 30 + ss; 
    printf("foo function values k : %d\n", k);
    printf("foo function Address of values k : %p\n", &k);
    printf("foo function values s : %d\n", s);
    printf("foo function Address of values s : %p\n\n", &s);

}
