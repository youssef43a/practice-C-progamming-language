#include <unistd.h>

void ft_print_three_digite(int nb) {
        int i = 0;
        char arr[3];
        while(i < 3) {
                arr[i] = nb % 10 + 48;
                nb /= 10;
                i++;
        }
        while(--i >= 0) {
                write(1, &arr[i], 1);
        }
}

void ft_print_triples() {
        int i = 0;
        int j;
        int k;

        while(i <= 997) {
                j = i+1;
                while(j <= 998) {
                        k = j+1;
                        while(k <= 999) {
                                ft_print_three_digite(i);
                                write(1, "-", 1);
                                ft_print_three_digite(j);
                                write(1, "-", 1);
                                ft_print_three_digite(k);
                                write(1, "-", 1);
                                write(1, ", ", 2);
                                k++;
                        }
                        j++;
                }
                i++;
        }
}

int main() {
        ft_print_triples();
        return 0;
}