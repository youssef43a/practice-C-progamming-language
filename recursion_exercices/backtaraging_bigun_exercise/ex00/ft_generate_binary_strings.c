#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
        int i = 0;
        while(str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
        write(1, "\n", 1);
}

void ft_generate_all_binary(char *binary_str, int nb, int index)
{
        if(index == nb)
        {
                binary_str[nb] = '\0';
                ft_putstr(binary_str);
                return ;
        }
        binary_str[index] = '0';
        ft_generate_all_binary(binary_str, nb, index + 1);
        binary_str[index] = '1';
        ft_generate_all_binary(binary_str, nb, index + 1);


}


void ft_generate_binary_strings(int n)//2
{
        char *binary_str = (char *)malloc(sizeof(char) * n + 1);
        ft_generate_all_binary(binary_str, n, 0);
        free(binary_str);
}

int main()
{
        ft_generate_binary_strings(4);
}