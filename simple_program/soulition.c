// #include "header.h"
#include <stdlib.h>

int ft_read_number_of_student() {
        int i = 0;
        int nb;
        char str_nbr[4];

        write(1, "how many student you want?", 26);
        while(i < 3) {
                read(1, &str_nbr[i], 1);
                if(i == 3 || (str_nbr[i] <= '0' && str_nbr[i] >= '9'))
                        break;
                i++;
        }
        str_nbr[i] = '\0';
        i = 0;
        while(str_nbr[i] != '\0')
        {
                write(1, &str_nbr[i], 1);
                i++;
        }
        // nb = ft_mini_atoi(str_nbr);
}

int main() {
        int number_of_student;

        number_of_student = ft_read_number_of_student();
        return EXIT_SUCCESS;
}