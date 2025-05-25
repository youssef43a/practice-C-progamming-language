#include <stdio.h>

int fibonacci(int n)
{
        if (n < 0)
                return - 1;
        if (n == 0)
                return 0;
        if (n == 1)
                return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
}
//how its work
/*(
fib(3) = 1 + 1; = 2
fib(2) = 1 + 0;

)*/
int main()
{
        printf("%d\n", fibonacci(3));
        printf("%d\n", fibonacci(1));
        printf("%d\n", fibonacci(6));
        printf("%d\n", fibonacci(-1));
        printf("%d\n", fibonacci(5));
}