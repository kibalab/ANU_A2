#include <stdio.h>
#include <string.h>

int main()
{
	char character = 'A';
	char characterArray[6] = {'H', 'e', 'l', 'l', 'o'};
	char string[6] = "Hello"; // Can put in (length-1) character (last index is NULL point)
	char string2[] = "Hello, World!"; 
	printf("%s\n", string);
	printf("%s\n", characterArray);
	printf("%s\n", string+1); // from *string + 1
	strcpy(string2,"Love");
	printf("%s\n", string2);
	strcpy(string, string2);
	printf("%s\n", string);
	return 0;
}
