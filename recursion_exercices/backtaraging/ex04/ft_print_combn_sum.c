#include <unistd.h>

void ft_putstr(char *str)
{
        int i;

        i = 0;
        while(str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
}

int is_str_eqaul_target(char *str, int target)
{
        int i = 0;
        int sum = 0;

        while(str[i])
        {
                sum += str[i] - '0';
                i++;
        }
        return (sum == target);
}

int is_befor_digit_less(char *str, char c, int index)
{
        if(index == 0)
                return 1;

        return (str[index - 1] < c);
}

void ft_generat_combn_sum(char *str, int size, int target, int index)
{
        static int is_first = 1;
        if(index == size)
        {
                str[index] = '\0';
                if(is_str_eqaul_target(str, target))
                {
                        if(!is_first)
                                write(1, ", ", 2);
                        ft_putstr(str);
                        is_first = 0;
                }
                return ;
        }

        char c = '0';
        while(c <= '9')
        {
                if(is_befor_digit_less(str, c, index))
                {
                        str[index] = c;
                        ft_generat_combn_sum(str, size, target, index + 1);
                }
                c++;
        }
}

void ft_print_combn_sum(int nb, int target)
{
        char arr[nb + 1];

        if(nb <= 0 || nb > 10)
                return ;
        ft_generat_combn_sum(arr, nb, target, 0);
}

int main()
{
        ft_print_combn_sum(4, 10);
}