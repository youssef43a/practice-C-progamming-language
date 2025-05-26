#include <stdio.h>

int is_palindrome(char *str, int start, int end)
{
        if(start >= end)
                return 1;
        if(str[start] == str[end])
                return is_palindrome(str, start + 1, end - 1);
        else return 0;
}

int main()
{
        char str1[] = "racecar";
        char str2[] = "hello";
        char str3[] = "a";
        printf("%d\n", is_palindrome(str1, 0, 6));
        printf("%d\n", is_palindrome(str2, 0, 4));
        printf("%d\n", is_palindrome(str3, 0, 0));
}