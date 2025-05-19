#include <unistd.h>

void ft_print_three_digit(int nb) {
        char arr[3];
        int i = 0;
        while(i < 3) {
                arr[i] = nb % 10 + 48;//this for convert singel digit to charcter and stock it in index of array
                nb /= 10;
                i++;
        }
        while(--i >= 0) {
                write(1, &arr[i], 1);
        }
}

void ft_print_triplets(void) {
        int i = 0;
        int j;
        int k;

        while(i <= 997) {
                j = i + 1;
                while(j <= 998) {
                        k = j + 1;
                        while(k < 999) {
                                ft_print_three_digit(i);
                                write(1, "-", 1);
                                ft_print_three_digit(j);
                                write(1, "-", 1);
                                ft_print_three_digit(k);
                                if(i != 997)
                                        write(1, ", ", 2);
                                k++;
                        }
                        j++;
                }
                i++;
        }
}

int main() {
        ft_print_triplets();
}