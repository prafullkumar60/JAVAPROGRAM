#include<stdio.h>
#include<string.h>
int main()
{
        char str[50],ch;
        int i,j,cnt=0,charCount=0;
        printf("Enter string to count maximum character\n");
        gets(str);
        for(i=0;str[i];i++)
        {
                j=i;
                while(str[j])
                {
                        if(str[i]==str[j])
                        {
                                cnt++;
                        }
                        j++;
                }
                if(cnt>charCount)
                {
                        charCount=cnt;
                        ch=str[i];
                }
                cnt=0;
        }
        printf("The Highest frequency of character %c\n",ch);
        printf("appears number of times :%d\n",charCount);
}