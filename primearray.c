#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     int i,a,b,c,d,k[10],n,sum=0,count=0;
     printf("enter the size of the array : \n");
     scanf("%d",&n);
     printf("enter the elements of the array :\n");
     for(int i =0;i<n;i++)
     {
         scanf("%d",&k[i]);

     }
     for( i =0;i<n;i++)
     {
         sum += k[i];
     }
     for( i = 1 ; i<=sum/2; i++)
     {
          if( sum % i == 0)
          {
               count ++;
          }
     }
     if (count == 1)
     {
          printf("the sum is a prime number: \n");

     }
     else
     {
         printf("the sum is not a prime number : \n");

     }
     return 0;
}
