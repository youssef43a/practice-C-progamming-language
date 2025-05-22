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

int is_valid_par(char *str, int size)
{
        int i = 0;
        int is_valide = 0;
        while(str[i])
        {
                if(str[i] == '(')
                        is_valide++;
                else
                        is_valide--;
                if(is_valide < 0)
                        return 0;
                i++;
        }
        return (is_valide == 0 && i == size * 2);
}

void ft_print_parentheses_cas_2(char *str, int size, int index)
{
        if(size * 2 == index)
        {
                str[index] = '\0';
                if(is_valid_par(str, size))
                {
                        ft_putstr(str);
                        write(1, ", ", 2);
                }

                return ;
        }

        str[index] = '(';
        ft_print_parentheses_cas_2(str, size, index + 1);

        str[index] = ')';
        ft_print_parentheses_cas_2(str, size, index + 1);

}


void ft_generate_parentheses(int n)
{
        int arr_size = n * 2 + 1;

        char arr[arr_size];

        ft_print_parentheses_cas_2(arr, n, 0);
}

int main()
{
        ft_generate_parentheses(3);
}