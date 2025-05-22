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

void ft_generate(char *arr, int size, int index)
{
        if(size == index)
        {
                arr[index] = '\0';
                ft_putstr(arr);
                return ;
        }

        char c = 'a';
        while(c <= 'z')
        {
                arr[index] = c;
                ft_generate(arr, size, index + 1);
                c++;
        }
}

void ft_generate_all_lowercase(int size)
{
        char arr[size + 1];
        ft_generate(arr, size, 0);
}

int main()
{
        ft_generate_all_lowercase(4);
}