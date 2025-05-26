#include <stdio.h>

int string_length(char *str)
{
        if(*str == '\0')
                return 0;
        return 1 + string_length(str + 1);
}

int main()
{
        printf("%d\n", string_length("hello"));
}
