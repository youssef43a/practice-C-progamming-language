/* I creat a program using read and write system call function
 to ask you to enter your name it chauld be less than 
20 caracter and it print the name that you enter 
*/

#include <unistd.h>

int main() {
        char buff[20];
        int number_of_buffer;
        write(1, "enter your name: ", 17);
        number_of_buffer = read(0, buff, 20);
        buff[number_of_buffer - 1] = '\0';
        write(1, "\nyour name is: ", 15);
        int i = 0;
        while(buff[i] != '\0') {
                write(1, &buff[i], 1);
                i++;
        }


        return 0;
} 
