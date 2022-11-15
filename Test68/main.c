#include <stdio.h>

int ispalindrome(char *str)
{

    int l;
    int i;

    for(l = 0; str[l] != '\0'; l++) {} // Check Length (Can solve with String.h header file)

    printf("\n");
    for(i = 0; i < l/2; i++)
    {
        printf("%c\n", str[i]);
        if(str[i] != str[l-i-1]) return 0;
    }

    return 1;

}

int main(void)
{
    char buffer[1024];


    gets(buffer);

    printf("[%s] is ", buffer);

    if (ispalindrome(buffer))

        puts("a palindrome");

    else

        puts("not a palindrome");

    return 0;

}
