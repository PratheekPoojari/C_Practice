#include <stdio.h>
#include <string.h>

int main()
{
    // string length
    
    char name[] = "Pratheek";
    int len = strlen(name);
    printf("The length of %s is: %d\n", name, len);

    // string copy
    
    char dest[50];
    strcpy(dest, "hello");
    printf("%s\n", dest);

    // string concatanation
    
    char greet[50] = "Hello,";
    strcat(greet, "Pratheek"); // greet = "Hello, Pratheek"
    printf("%s\n", greet);
    
    /* string comparision - '0' if equal; -ve if str 1 comes before str2;
    +ve if str1 comes after str 2 
    strcmp(str1, str2, n) - compares until the first n characters*/

    char str1[10] = "Hey,";
    char str2[10] = "there";
    if(strcmp(str1, str2) == 0)
    {
        printf("%s = %s\n", str1, str2);
    }
    else
    {
        strcat(str1, str2);
        printf("%s\n", str1);
    }

    /*strchr(str, ch) - finds the first occurence of a character in the string,
    and returns a pointer to it. NULL if the character isn't found. */

    char *pos = strchr("hello world", 'w');
    printf("%p\n", pos);

    /* fgets - to read a line with spaces. keeps the \n character at the end of the line,
    which adds to the length of the character/sentence. */

    char sentence[100];
    printf("Enter a sentence with spaces:\n");
    fgets(sentence, sizeof(sentence), stdin);
    printf("The sentence input by the user is: %s\n", sentence);

    return 0;
}
