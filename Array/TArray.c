#include <stdio.h>
#include <string.h>

int print_array(int endlen, int arr[][endlen])
{

    for (int i = 0; i < sizeof(arr); i++)
    {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++)
        {
            // printf("Print_array() : arr i => [%d] j => [%d] = %d @ %p\n", i, j, arr[i][j], &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int init_array(int endlen, int init_val, int arr[][endlen])
{
    for (int i = 0; i < sizeof(arr); i++)
    {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++)
        {
            arr[i][j] = init_val;
        }
    }
}

int main()
{

    int arr[][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8}
    };

    // for (int i = 0; i < 6; i++)
    // {
    //    for (int j = 0; j < sizeof(arr[0])/sizeof(int); j++)
    //    {
    //     printf("Main() : arr i => [%d] j => [%d] = %d @ %p\n", i, j, arr[i][j], &arr[i][j]);
    //    }
    // }

    print_array(8, arr);
    init_array(8, 0, arr);
    print_array(8, arr);
}