#include<stdio.h>
#include<string.h>


int stringlength(char *c){
    int count = 0;

    while (1)
    {
        if(*(c + count) != 0){
            printf("String Length : %c\n", *(c + count++));
        }else{
            break;
        }
    }
        


    return count;
}


int main(){
    char s[11] = "Hello\0world";
    for (int i = 0; i < 15; i++)
    {
        printf("[%d] => %c => %d\n", i, s[i], s[i]);
    }

    printf("String length S : %ld\n", stringlength(s));
    
}