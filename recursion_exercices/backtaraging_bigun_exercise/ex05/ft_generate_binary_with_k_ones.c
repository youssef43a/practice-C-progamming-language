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

int is_str_has_k_one(char *str, int k_one)
{
        int one = 0;
        int i = 0;
        while(str[i])
        {
                if(str[i] == '1')
                        one++;
                i++;
        }
        return (k_one == one);
}

void ft_print_binary_with_k_ones(char *str, int size, int k_one, int index, int *is_first)
{
        if(index == size)
        {
                str[index] = '\0';
                if(is_str_has_k_one(str, k_one))
                {
                        if(!(*is_first))
                                write(1, ", ", 2);
                        ft_putstr(str);
                        *is_first = 0;
                }
                return ;
        }

        str[index] = '0';
        ft_print_binary_with_k_ones(str, size, k_one, index + 1, is_first);

        str[index] = '1';
        ft_print_binary_with_k_ones(str, size, k_one, index + 1, is_first);

}

void ft_generate_binary_with_k_ones(int n, int k)
{
        char arr[n  +1];
        int is_first = 1;

        if (n <= 0 || n > 10)
                return ;

        ft_print_binary_with_k_ones(arr, n, k, 0, &is_first);
}

int main()
{
        ft_generate_binary_with_k_ones(3, 2);
}