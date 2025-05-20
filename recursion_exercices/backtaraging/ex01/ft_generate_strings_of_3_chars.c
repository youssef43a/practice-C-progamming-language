#include <unistd.h>

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


void ft_generate(char *str, int size, int index)
{
        char c;

        if(index == size)
        {
                str[index] = '\0';
                ft_putstr(str);
                return ;
        }
        c = 'a';
        while(c <= 'c')
        {
                str[index] = c;
                ft_generate(str, size, index + 1);
                c++;
        }
}

void ft_generate_strings_of_3_chars()
{
        char arr[3];
        ft_generate(arr, 3, 0);
}

int main()
{
        ft_generate_strings_of_3_chars();
}