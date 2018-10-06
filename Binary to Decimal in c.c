//C programme to convert Binary to Decimal
#include<stdio.h>
int main()
{   int rem,x,i=0,dec=0,mul;
    printf("Enter the number\n");
    scanf("%d",&x);
while(x>0)
{
    rem=x%10;
    mul=rem*pow(2,i);
    dec=dec+mul;
    x=x/10;
    i++;
}
   printf("Decimal number is : %d",dec);
   return 0;
}
