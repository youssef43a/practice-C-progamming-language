#include <unistd.h>

void print_2_digit(int nb)
{
        char c;
        if(nb < 10)
        {
                c = nb + '0';
                write(1, &c, 1);
        }
        else if(nb <= 99)
        {
                c = nb / 10 + '0';
                write(1, &c, 1);
                c = nb % 10 + '0';
                write(1, &c, 1);
        }
}

void print_50_first_number_rec(int nb)
{
        if(nb == 0)
                return ;
        print_50_first_number_rec(nb - 1);
        print_2_digit(nb);
        write(1, " ", 1);
}

int main()
{
        write(1, " The natural numbers are : ", 27);
        print_50_first_number_rec(50);

        return 0;
}