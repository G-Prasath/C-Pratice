#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len = 5;

    // (1) Half Prymid *

    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // (2) Half Prymid Number

    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", j+1 );
    //     }
    //     printf("\n");
    // }

    // (3) Half Alphabets

    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c ", (char) 65 + i);
    //     }
    //     printf("\n");
    // }

    // (4) Inverted Prymid

    // for (int i = 0; i < len; i++)
    // {
    //     for (int j = len; j > i; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // (5) Inverted Prymid

    // for (int i = len; i > 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("%d ", j+1);
    //     }
    //     printf("\n");
    // }

    // (6) full Prymid

    // for (int i = 1; i <= len; i++)
    // {
    //     for (int j = 1; j <= len - i; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= (2 * i - 1); k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }



    // (7) full Prymid

    // for (int i = 1; i <= len; i++)
    // {
    //     // Space Printing
    //     for (int j = 1; j <= len - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     // Assending Order
    //     for (int k = 0; k <= i-1; k++)
    //     {
    //         printf("%d", k+1);
    //     }
    //     // Decending Order
    //     for (int l = i-1; l >= 0; l--)
    //     {
    //         printf("%d", l+1);
    //     }
    //     printf("\n");
    // }

    // (8) Full Prymid Reverse

    for (int i = len; i >= 1; i--)
    {
        for (int j = len ; j > i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (i*2); k++)
        {
            printf("*");
        }


        
        printf("\n");
    }
    
}
