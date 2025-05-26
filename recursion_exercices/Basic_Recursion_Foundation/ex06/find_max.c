#include <stdio.h>

int find_max(int array[], int size)
{
        int max;

        if(size < 1)
        {
                printf("empty array or negetve size\n");
                return 0;
        }
        if(size == 1)
                return array[0];
        max = find_max(array, size - 1);

        if(max < array[size - 1])
                max = array[size - 1];
        return max;

}


int main()
{
        int arr[] = {19,46,32,115,87};
        printf("max = %d\n", find_max(arr, 5));
        return 0;
}