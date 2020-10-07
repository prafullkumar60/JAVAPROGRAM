#include<stdio.h>
#include<stdlib.h>
int main()
{
        int data,bit,choice,bitposn,cnt1=0,cnt2=0,right,left;
        printf("Enter any data\n");
        scanf("%d",&data);
        printf("Binary value is :");
        for(bit=31;bit>=0;bit--)
        {
                printf("%d",(data>>bit)&1);
        }
        printf("\n");
        while(1)
        {
                printf("1.set the bit\n2.Complement the bit\n3.clear the bit\n4.status of bit\n5.Number of set bit\n6.Number of clear bit\n7.set all bit\n8.clear all bit\n9.reverse the bit\n10.Count clear bit pairs\n11.Count set bit pairs\n12.Reverse 2 byte in an integer\n13.exit\n");
                printf("Enter your choice\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:printf("Enter bit position to set\n");
                               scanf("%d",&bitposn);
                               if(bitposn>32||bitposn<0)
                               {
                                       printf("Invalid bit:try again\n");
                                       break;
			       }
                               else if(data&(1<<bitposn))
                               {
                                       printf("Bit is already set\n");
                               }
                               else
                               {
                                       data=data|(1<<bitposn);
                                       printf("%d position is set in given data\n",bitposn);
                                       for(bit=31;bit>=0;bit--)
                                       {
                                               printf("%d",(data>>bit)&1);
                                       }
                                       printf("\n");
                               }
                               break;
                        case 2:printf("Enter bit position to complement\n");
                               scanf("%d",&bitposn);
                               if(bitposn>32||bitposn<0)
                               {
                                       printf("Invalid bit:try again\n");
                                       break;
                               }
                               data=data^(1<<bitposn);
                               printf("%d position is complement in given data\n",bitposn);
                               for(bit=31;bit>=0;bit--)
                               {
                                       printf("%d",(data>>bit)&1);
                               }
                               printf("\n");
                               break;
                        case 3:printf("Enter bit position to clear\n");
                               scanf("%d",&bitposn);
                               if(bitposn>32||bitposn<0)
                               {
                                       printf("Invalid bit:try again\n");
                                       break;
                               }
                               if(((data>>bitposn)&1)==0)
                               {
                                       printf("%d position is all ready clear in given data\n",bitposn);
                               }
                               else
                               {
                                       data=data & ~(1<<bitposn);
                                       printf("%d position is clear in given data\n",bitposn);
                                       for(bit=31;bit>=0;bit--)
                                       {
                                               printf("%d",(data>>bit)&1);
                                       }
                                       printf("\n");
                               }
                               break;
                        case 4:printf("Enter bit position to know status of bit\n");
                               scanf("%d",&bitposn);
                               if(bitposn>32||bitposn<0)
                               {
                                       printf("Invalid bit:try again\n");
                                       break;
                               }
                               if(((data>>bitposn)&1)==1)
                                       printf("%d bit is set\n",bitposn);
                               else
                                       printf("%d bit is clear\n",bitposn);
                               for(bit=31;bit>=0;bit--)
                               {
                                       printf("%d",(data>>bit)&1);
                               }
                               printf("\n");
                               break;
                        case 5:for(bit=31;bit>=0;bit--)
                               {
                                       if(((data>>bit)&1)==1)
                                       {
                                               cnt1++;
                                       }
                               }
                               printf("Number of set bit is %d\n",cnt1);
                               cnt1=0;
                               for(bit=31;bit>=0;bit--)
                               {
                                       printf("%d",(data>>bit)&1);
                               }
                               printf("\n");
                               break;
                        case 6:for(bit=31;bit>=0;bit--)
                               {
                                       if(((data>>bit)&1)==0)
                                       {
                                               cnt2++;
                                       }
                               }
                               printf("Number of clear bit is %d\n",cnt2);
                               cnt2=0;
                               for(bit=31;bit>=0;bit--)
                               {
                                       printf("%d",(data>>bit)&1);
                               }
                               printf("\n");
                               break;
                        case 7:data=data|0xffffffff;
                               printf("All bits are set\n");
                               for(bit=31;bit>=0;bit--)
                               {
                                       printf("%d",(data>>bit)&1);
                               }
                               printf("\n");
                               break;
                        case 8:data=data & 0x00000000;
                               printf("All bits are clear\n");
                               for(bit=31;bit>=0;bit--)
                               {
                                       printf("%d",(data>>bit)&1);
                               }
                               printf("\n");
                               break;
                        case 9:for(left=31,right=0;left>right;left--,right++)
                               {
                                       if(((data>>left)&1)!=((data>>right)&1))
                                       {
                                               data^=(1<<right);
                                               data^=(1<<left);
                                       }
                               }
                               printf("Reverse bits are:\n");
                               for(bit=31;bit>=0;bit--)
                               {
                                       printf("%d",(data>>bit)&1);
                               }
                               printf("\n");
                               break;
                        case 10:for(bit=31;bit>0;bit--)
                                {
                                        if((((data>>bit)&1)==0) && (((data>>(bit-1))&1)==0))
                                        {
                                                cnt1++;
                                                bit--;
                                        }
                                }
                                printf("Clear bit pairs is %d\n",cnt1);
                                cnt1=0;
                                for(bit=31;bit>=0;bit--)
                                {
                                        printf("%d",(data>>bit)&1);
                                }
                                printf("\n");
                                break;
                        case 11:for(bit=31;bit>0;bit--)
                                {
                                        if((((data>>bit)&1)==1) && (((data>>(bit-1))&1)==1))
                                        {
                                                cnt2++;
                                                bit--;
                                        }
                                }
                                printf("Set bit pairs is %d\n",cnt2);
                                cnt2=0;
                                for(bit=31;bit>=0;bit--)
                                {
                                        printf("%d",(data>>bit)&1);
                                }
                                printf("\n");
                                break;
                        case 12:data=(((data & 0x0000FFFF)<<16) | ((data & 0xFFFF0000)>>16));
                                printf("2 Bytes are swapped\n");
                                for(bit=31;bit>=0;bit--)
                                {
                                        printf("%d",(data>>bit)&1);
                                }
                                printf("\n");
                                break;
                        case 13:exit(0);
                        default:printf("Invalid choice\n");
                }
        }
}