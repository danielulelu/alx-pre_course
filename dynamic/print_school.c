#include <stdio.h>

/**
 * print_school - prints "Holberton"
 *
 * Return: nothinh
 */
void print_school(void)
{       
        char str[] = "Holberton";
        
        str[2] = 's';
        printf("%s\n", str);
}       
/**
 * main - concept introduction
 *
 * Return: 0
 */
int main(void)
{       
        print_school();
	return (0);
}
