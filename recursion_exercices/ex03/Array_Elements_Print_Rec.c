#include <stdio.h>
#include <stdlib.h>

void ft_fill_array_of_int(int *arr, int size)
{
        int i = 0;
        printf("Input %d elements in the array :\n", size);
        while(i < size)
        {
                printf("element - %d: ", i);
                scanf("%d", &arr[i]);
                i++;
        }
}

void ft_print_array_elements_rec(int *arr, int size)
{
        if(size == 0)
                return ;
        ft_print_array_elements_rec(arr, size - 1);
        printf("%d ", arr[size - 1]);
}

int main()
{
        int nb;
        int *arr;
        printf("Input the number of elements to be stored in the array: ");
        scanf("%d", &nb);
        arr = (int*)malloc(nb * sizeof(int));
        ft_fill_array_of_int(arr, nb);
        printf("The elements in the array are : ");
        ft_print_array_elements_rec(arr, nb);

}