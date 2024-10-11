#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check_auth(char *password){

    int auth_flag = 0;
    char password_buffer[16];

    printf("[Before] => i : %d @ %p\n", auth_flag, &auth_flag);
    printf("[Before] =>  password Buffer : %s @ %p\n", password_buffer, &password_buffer);

    strcpy(password_buffer, password);

    if(strcmp(password_buffer, "brilling") == 0)
        auth_flag = 1;
    if(strcmp(password_buffer, "outgrab") == 0)
        auth_flag = 1;


    printf("[After] => i : %d @ %p\n", auth_flag, &auth_flag);
    printf("[After] => password Buffer : %s @ %p\n", password_buffer, &password_buffer);
    
    return auth_flag;
}

int main(int argc, char *argv[]){

    // int i;
    // printf("Count : %d\n", argc);
    // for (i = 0; i < argc; i++)
    // {
    //     printf("#%d : %p\n", i, *argv[i]);
    // }
    


    if(argc < 2){
        printf("Usage : %s <Password>\n", argv[0]);
        exit(0);
    }

    int val = check_auth(argv[1]);

    if(val != 0){
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Access Granted");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }else{
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf(" Access Denied. ");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }
}
