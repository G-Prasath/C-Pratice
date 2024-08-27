#include <stdio.h>
#include <string.h>

int foo(){
    printf("foo() : Called");
    static int i;

    char string[10];
    printf("Do you want to change value i : [yes]");
    scanf("%s", string);
    if(strcmp(string, "yes") == 0){
        printf("Enter Your i Value : ");
        scanf("%d", &i);
    }

    printf("foo() : Ending");
    return i;
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        printf("foo() : %d\n", foo());
    }
    
}