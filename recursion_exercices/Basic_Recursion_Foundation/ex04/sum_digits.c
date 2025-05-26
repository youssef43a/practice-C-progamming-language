#include <stdio.h>

int sum_digits(int n)
{
        if(n < 0)
                n = -n;
        if(n < 10)
                return n;

        return (n % 10) + sum_digits(n / 10);
}
/*
how it's works
sum(1234) = 4 + sum(123) = 4 + 3 + sum(12) = 4 + 3 + 2 + 1 | sum 1 return 1
so sum(1234) = 10
*/
int main()
{
        printf("%d\n", sum_digits(1234));
        printf("%d\n", sum_digits(0));
        printf("%d\n", sum_digits(-456));
}