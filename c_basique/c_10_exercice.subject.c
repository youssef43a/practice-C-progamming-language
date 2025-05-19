//we will work only with unistd.h and stdlib libarary
#include <unistd.h>
#include <stdlib.h>

char *read_age()
{
	int n;
	char c;
	int i = 0;
	char *age = (char *)malloc(4);
	if(!age)
	{
		write(2, "memory allocation failed\n", 31);
		return NULL;
	}
	write(1, "how old are you:(enter age betwen 0 to 100)\n", 45);
	while(n = read(0, &c, 1) == 1 && c >= '0' && c <= '9' && i < 3)
	{
		age[i++] = c;
	}
	age[i] = '\0';
	return age;
}

void print_string(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *read_name()
{
	char *name;
	char c;
	int  i = 0;
	int n;
	name = (char *)malloc(256);
	if(!name)
	{
		write(2, "memory allocation failed\n", 31);
		return NULL;
	}

	write(1, "what's your name: ", 18);
	while(n = read(0, &c, 1) == 1 && c != '\n')
	{
		name[i++] = c;//hhh error hna
	}

	name[i] = '\0';
	return name;
}

int main()
{
	char *age;
	char *name;

	name = read_name();

	age = read_age();

	write(1, "Hello ", 6);
	print_string(name);
	write(1, ", you are ",  10);
	print_string(age);
	write(1, " old.",  5);

	free(age);
	free(name);
}