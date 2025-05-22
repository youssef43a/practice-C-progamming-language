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

void ft_print_ternary_strings(char *str, int size, int index, int *is_first)
{
        if(size == index)
        {
                str[index] = '\0';
                if(!(*is_first))
                        write(1, ", ", 2);
                ft_putstr(str);
                *is_first = 0;
                return ;
        }

        char c = '0';
        while(c <= '2')
        {
                str[index] = c;
                ft_print_ternary_strings(str, size, index + 1, is_first);
                c++;
        }
}

void ft_generate_ternary_strings(int n)
{
        char arr[n + 1];
        int is_first = 1;

        ft_print_ternary_strings(arr, n, 0, &is_first);
}

int main()
{
        ft_generate_ternary_strings(2);
}