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

int ft_is_not_repeat(char *str,  char c, int index)
{
        int i = 0;

        if(index == 0)
                return 1;
        while(i < index)
        {
                if(str[i] == c)
                        return 0;
                i++;
        }
        return 1;
}

void ft_print_number_without_repeat(char *str, int size, int index, int *is_first)
{
        if(index == size)
        {
                str[index] = '\0';
                if(!(*is_first))
                        write(1, ", ", 2);
                ft_putstr(str);
                *is_first = 0;
        }
        char c = '0';
        while(c <= '9')
        {
                if(ft_is_not_repeat(str, c, index))
                {
                        str[index] = c;
                        ft_print_number_without_repeat(str, size, index + 1, is_first);
                }
                c++;
        }
}

void ft_generate_number_without_repeat(int n)
{
        
        char arr[n + 1];
        int is_first = 1;

        ft_print_number_without_repeat(arr, n, 0, &is_first);
}

int main()
{
        ft_generate_number_without_repeat(2);
}