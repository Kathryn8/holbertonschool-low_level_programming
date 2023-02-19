#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char quote[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19";
	syscall(SYS_write, 1, quote, sizeof(quote));
	return (1);
}
