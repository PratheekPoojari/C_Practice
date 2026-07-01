#include <stdio.h>
#include <string.h>

int count_vowels(char str[])
{
    int i, sum = 0;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            sum += 1;
        }
    }
    return sum;
}

int main()
{
    int i;
    printf("Type in a sentence with spaces.\n");
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);
    printf("The sentence input by user is: %s\n", sentence);

    int init_len = strlen(sentence);
    for(i=0; i<init_len; i++)
    {
        if( sentence[i] == '\n')
        {
            sentence[i] = '\0';
        }
    }
    int len = strlen(sentence);
    printf("The length of sentence input is: %d\n", len);

    int count = count_vowels(sentence);
    printf("The total number of vowels in the given sentence is: %d\n", count);

    if(strcmp(sentence, "Claude") == 0)
    {
        printf("Match found.\n");
    }
    else
    {
        printf("No match found in the input.\n");
    }

    return 0;

}
