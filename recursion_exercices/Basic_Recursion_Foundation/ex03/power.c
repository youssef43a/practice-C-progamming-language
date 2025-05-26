#include <stdio.h>

int power(int base, int exp)
{
        if(exp == 0)
                return 1;
        if(exp < 0)
                return 0;
        if(exp == 1)
                return base;
        return base * power(base, exp - 1);
}
//how it work
/*
pwer(2, 2) = power(2, 1)
2 * pwer(2, 1) = 2 * 2 = 4

*/
int main()
{
        printf("%d\n", power(2, 2));
        printf("%d\n", power(2, 0));
        printf("%d\n", power(2, -2));
        printf("%d\n", power(3, 4));
        printf("%d\n", power(5, 1));
}
