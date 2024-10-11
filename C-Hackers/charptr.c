#include <stdio.h>
#include <string.h>

void replacing(char *subject, char target, char replace)
{
    for (int i = 0;; i++)
    {
        // Pointer Logics

        // if (*(subject + i) == target)
        // {
        //     *(subject + i) = replace;
        // }
        // if (*(subject + i) == '\0')
        // {
        //     break;
        // }

        // Array Logics

        if (subject[i] == target)
        {
            subject[i] = replace;
        }
        if (subject[i] == '\0')
        {
            break;
        }
    }
}

int main()
{
    // Array are pointer and pointers are array both are same

    // Not need for & for scanf symbol becaus a is array declartion
    // char a[10];
    // scanf("%s", a);

    // Need for & symbol becauses not array for b
    // int b;
    // scanf("%d", &b);

    // Examples
    char subject[] = "Hello World";

    // Print address of H
    printf("Print Address of H : %p\n", subject);
    printf("Print Address of H : %p\n", &subject[0]);

    // printf("----------- Array Format --------------\n");
    // for(int i=0; i<strlen(subject); i++){
    //     printf("Values Subject[%d] : %c\n", i, subject[i]);
    //     printf("Address of Value Subject[%d] : %p\n", i, &subject[i]);
    // }

    // printf("----------- Pointer Format --------------\n");
    // for(int i=0; i<strlen(subject); i++){
    //     printf("Values Subject[%d] : %c\n", i, *(subject + i));
    //     printf("Address of Value Subject[%d] : %p\n", i, subject + i);
    // }

    replacing(subject, 'l', 'x');

    printf("After Replacing : %s\n", subject);
}