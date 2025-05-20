#include <stdio.h>


int fib_series_rec(int nb)
{
        if(nb == 0)
                return 0;
        if(nb == 1 || nb == 2)
                return 1;
        return fib_series_rec(nb - 1) + fib_series_rec(nb - 2);
}

void ft_print_fib_series(int nb)
{
        int i = 1;
        while(i <= nb)
        {
                printf("%d ", fib_series_rec(i));
                i++;
        }
}

int main()
{
        int nb;
        printf("Input number of terms for the Series (< 20) : ");
        scanf("%d", &nb);

        printf("Input number of terms for the Series (< 20) :");
        ft_print_fib_series(nb);
}