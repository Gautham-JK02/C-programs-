#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     int a,b,c,d=0,counthash=0,countstar=0,l=0;
     char ch[10];
     printf("enter the string : \n");
     scanf("%s",&ch);
     l = strlen(ch);
     for(int i =0;i<l;i++)
     {
         if(ch[i]=='#')
            {
                counthash++;
            }
            else if(ch[i]=='*')

            {
                countstar++;
            }
            else
                return 0;
     }
     d = counthash - countstar;

     if(d > 0)
     {
          return d;
     }
     else if(d<0)
     {
         return -d;


     }
     else
        return 0;
}
