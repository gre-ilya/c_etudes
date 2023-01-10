#include <stdio.h>

/*
 * Finds substring substr in string str and returns a pointer to string
 * beginning. Returns NULL if substr not found.
*/
const char* findSubstring(const char* str, const char* substr)
{
	const char* substr_ptr = substr;
	int len = 0;
	while (*str != '\0') {
		if (*str++ == *substr_ptr) {
			substr_ptr++;
			len++;
		} else {
			substr_ptr = substr;
			len = 0;
		}
		if (*substr_ptr == '\0') {
			return str - len;
		}
	}
	return NULL;
}

/*
 * Prints arguments with substr argv[1]
*/
int main(int argc, char** argv)
{
	for (int i = 2; i < argc; i++) {
		if(findSubstring(argv[i], argv[1])) {
			printf("%s\n", argv[i]);
		}
	}
		
}
