#include<stdio.h>
#include<string.h>
int main()
{
        char str[50];
        int vowelCount=0,consonantCount=0;
        printf("Enter string to find number of even and odd character\n");
        gets(str);
        for(int i=0;str[i];i++)
        {
                if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
                {

                        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                        {
                                vowelCount++;
                        }
                        else
                        {
                                consonantCount++;
                        }
                }
        }
        printf("Number of vowel=%d\n",vowelCount);
        printf("Number of consonant=%d\n",consonantCount);
}