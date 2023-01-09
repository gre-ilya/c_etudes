#include <stdio.h>

int countSpaces(char* str)
{
	if (*str == '\0')
		return 0;
	if (*str == ' ')
		return countSpaces(++str) + 1;
	return countSpaces(++str);
}

int main(int argc, char** argv)
{
	printf("%d\n", countSpaces(argv[1]));
}
