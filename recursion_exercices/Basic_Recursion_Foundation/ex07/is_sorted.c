
#include <stdio.h>

int is_sorted(int arr[], int size)
{
        if(size == 1 || size == 0)
                return 1;
        if(arr[size - 1] >= arr[size - 2])
                return is_sorted(arr, size - 1);
        else
                return 0;
}

// int main()
// {
//         int arr1[] = {1,2,3,4,5,6};
//         int arr2[] = {1,2,3,44,5,6};
//         int arr3[] = {1,2,3,4,5,0};
//         int arr4[] = {11,2,3,4,5,6};
//         printf("%d\n", is_sorted(arr1, 6));
//         printf("%d\n", is_sorted(arr2, 6));
//         printf("%d\n", is_sorted(arr3, 6));
//         printf("%d\n", is_sorted(arr4, 2));
// }