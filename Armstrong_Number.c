//CHECKING OF ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
void main()
{
   int a;
   printf("Enter a number to check whether armstrong or not ");
   scanf("%d",&a);
   int count=0,j=0;
   while(a!=0)
   {
    a=a/10;
    count=count+1;
   }
   int sum=0,rem=0,exp=0;
   for(int j=1;j<=count;j++)
   {
      rem=a%10;
      exp=pow(rem,count);
      sum=sum+exp;
   }
   if(sum==a)
   {
      printf("\n It is an Armstrong number ");
   }
   else
   {
      printf("\n It is not an Armstrong number ");
   }
}