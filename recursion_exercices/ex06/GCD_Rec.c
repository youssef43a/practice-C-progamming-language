#include <stdio.h>

int ft_gcd_rec(int a, int b)
{
        if(b == 0)
                return a;
        return ft_gcd_rec(b, a % b);

}

/*
the algorithem that i use

if a == 48 && b == 18 this is the explication:

gcd(48, 18) = gcd(18, 48 % 18) = gcd(18, 12)
gcd(18, 12) = gcd(12, 18 % 12) = gcd(12, 6)
gcd(12, 6) = gcd(6, 12 % 6) = gcd(6, 0)
gcd(6, 0) = 6

*/
int main()
{
        int nb1, nb2;

        printf("Input 1st number: ");
        scanf("%d", &nb1);
        printf("Input 2nd number: ");
        scanf("%d", &nb2);

        printf("The GCD of %d and %d is: %d", nb1, nb2, ft_gcd_rec(nb1, nb2));
}