#include <stdio.h>
#include <string.h>

char *numToLetter(int num);

void main()
{
    int num;
    char res[100];

    printf("Enter a number: ");
    scanf("%d", &num);
    strcpy(res, numToLetter(num));

    printf("%s", res);
}

char *numToLetter(int num)
{
    int i=0, j;
    char *letters[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    static char str[100];

    //extracting numbers
    int singleNum[50], rem, len=0;
    while(num!=0)
    {
        rem = num%10;
        singleNum[i] = rem;
        num = num/10;
        i++;
        len++;
    }

    for(j=(len-1); j>=0; j--)
    {
        for(i=0; i<10; i++)
        {
            if(singleNum[j]==i)
            {
                strcat(str, letters[i]);
            }
        }
        strcat(str, " ");
    }

    return str;
}