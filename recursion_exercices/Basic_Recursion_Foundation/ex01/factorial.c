#include <stdio.h>

int factorial(int n)
{
        if(n < 0)
                return 0;
        if(n == 0 || n == 1)
                return 1;
        return n *factorial(n - 1);
}

int main()
{
        printf("%d\n",  factorial(5));
        printf("%d\n",  factorial(1));
        printf("%d\n",  factorial(1));
        printf("%d\n",  factorial(-5));
}