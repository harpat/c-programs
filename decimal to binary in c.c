//C programme to convert decimal to binary
#include<stdio.h>
int main()
{   int rem,i,x,b[10],count;
    printf("Enter the number\n");
    scanf("%d",&x);

    for(i=0;x!=1;i++)
    {
        rem=x%2;
        b[i]=rem;
        x=x/2;
        if(x==1)
        {
            b[i+1]=x;
            count=(i+1);
            break;
        }
    }
    printf("Binary is :");
for(i=count;i>=0;i--)
{
    printf(" %d ",b[i]);
}

}
