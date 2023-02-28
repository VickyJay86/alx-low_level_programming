#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pswd[100];
	int a, Total, b;

	Total = 0;
	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		Total += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - Total) - '0' < 78)
		{
			b = 2772 - Total - '0';
			Total += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}


