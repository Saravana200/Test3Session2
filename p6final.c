#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
    printf("enter the string\n");
    fgets(a,20,stdin);
}
int count_words(char *string)
{
    char *token=strtok(string," ");
    int count=0;
    while(token!=NULL)
    {
        count++;
        printf("%s ",token);
        token=strtok(NULL," ");
    }
    return count;
}
void output(char *string,int no_words)
{
    printf("is %d",no_words);
}
int main()
{
    char s[20];
    input_string(s);
    printf("the number of words in the string ");
    output(s,count_words(s));
}
