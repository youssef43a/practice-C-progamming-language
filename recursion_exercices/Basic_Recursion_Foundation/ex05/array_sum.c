#include <stdio.h>

int array_sum(int array[], int size)
{
        if(size == 0)
                return 0;
        return array[size - 1] + array_sum(array, size - 1);
}
//how does it works
/*
arr_sum({1,2,3}, 3) = 3 + 2 + 1 + 0 = 6
*/

int main()
{
        int arr[] = {1,2,4,5,3};
        printf("sum = %d\n", array_sum(arr, 4));
        printf("sum = %d\n", array_sum(arr, 0));
        printf("sum = %d\n", array_sum(arr, 5));
        return 0;
}