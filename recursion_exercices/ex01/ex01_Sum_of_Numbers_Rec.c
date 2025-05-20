#include <stdio.h>

int Sum_of_Numbers_Rec(int nb)
{

        if(nb == 0) return 0;
        return nb + Sum_of_Numbers_Rec(nb - 1);
}

int main()
{
        int sum = 0;
        int nb;
        printf("Input the last number of the range starting from 1 : ");
        scanf("%d", &nb);
        sum = Sum_of_Numbers_Rec(nb);
        printf("The sum of numbers from 1 to %d :\n %d", nb, sum);

        return 0;
}