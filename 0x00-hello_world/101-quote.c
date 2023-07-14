#include <unistd.h>

/**
* main - The entry point of the program
*
* Return: returns an error code of 1
*/

int main(void)
{	char qt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, qt, 59);
	return (1);
}
