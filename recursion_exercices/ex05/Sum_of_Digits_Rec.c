#include <stdio.h>

int ft_sum_of_digits_rec(int nb)
{
        if(nb < 10)
                return nb;
        return nb % 10 + ft_sum_of_digits_rec(nb / 10);
}

int main()
{
        int nb;
        printf("Input any number to find sum of digits: ");
        scanf("%d", &nb);
        printf("The Sum of digits of %d = %d", nb, ft_sum_of_digits_rec(nb));

        return 0;
}