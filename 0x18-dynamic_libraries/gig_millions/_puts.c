#include <unistd.h>
#include <string.h>

int puts(const char *str)
{
	str = "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n";
	write(1, str, strlen(str));

	return (0);
}

int printf(const char *format, ...)
{
	(void) *format;
	return (0);
}
