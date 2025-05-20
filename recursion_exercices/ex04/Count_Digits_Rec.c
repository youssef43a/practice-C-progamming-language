#include <stdio.h>
#include <unistd.h>

int ft_count_digits_rec(int nb)
{
        if(nb < 0)
                nb = -nb;
        if(nb < 10)
                return 1;
        return  1 + ft_count_digits_rec(nb / 10);
}

int main()
{
        int nb;
        printf("Input a number : ");
        scanf("%d", &nb);
        printf("The number of digits in the number is: %d", ft_count_digits_rec(nb));

        return 0;
}