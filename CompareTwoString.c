#include<string.h>
int main()
{
        char str1[50];
        char str2[50];
        int i,j;
        printf("Enter first string\n");
        gets(str1);
        printf("Enter second string\n");
        gets(str2);
        printf("length1=%ld\n",strlen(str1));
        printf("length2=%ld\n",strlen(str2));
        if(strlen(str1)==strlen(str2))
        {
                for(i=0,j=0;str1[i];i++,j++)
                {
                        if(str1[i]==str2[j])
                                continue;
                        else
                                break;
                }
                printf("i=%d\n",i);
                if(i==strlen(str1))
                        printf("Given string lenth are equal and string are also equal\n");
                else
                        printf("Given string lenth are equal but string are not equal\n");
        }
        else
        {
                printf("Given string length is not equal so string are also not same\n");
        }
}