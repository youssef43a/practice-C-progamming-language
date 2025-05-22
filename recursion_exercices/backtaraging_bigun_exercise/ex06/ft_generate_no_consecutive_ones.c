#include <unistd.h>

void ft_putstr(char *str)
{
        int i = 0;
        while(str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
}

void ft_print_no_consecutive_ones(char *str, int size, int index, int *is_first)
{
        if(index == size)
        {
                str[index] = '\0';
                if(!(*is_first))
                        write(1, ", ", 2);
                ft_putstr(str);
                *is_first = 0;
                return ;
        }

        str[index] = '0';
        ft_print_no_consecutive_ones(str, size, index + 1, is_first);

        if(index == 0 || str[index - 1] != '1')
        {
                str[index] = '1';
                ft_print_no_consecutive_ones(str, size, index + 1, is_first);
        }
}

void ft_generate_no_consecutive_ones(int n)
{
        char arr[n + 1];
        int is_first = 1;

        ft_print_no_consecutive_ones(arr, n, 0, &is_first);
}

int main()
{
        ft_generate_no_consecutive_ones(10);
}