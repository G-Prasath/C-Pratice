#include <stdio.h>

int foo(){
    int j = 10;
    static int i = 0;
    i = i + j;
    return i;
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("foo() : %d\n", foo());
    }
    
}