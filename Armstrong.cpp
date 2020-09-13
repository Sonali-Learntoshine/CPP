#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,dup,sum=0,rem;
    printf("\n\n\n\t********************************************");
    printf("\n\t\tEnter the number to check: ");
    scanf("%d",&num);
    dup=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(sum==dup)
        printf("\n\t\tNumber is armstrong\n\n");
    else
        printf("\n\t\tNumber isn't armstrong\n\n");
    printf("\n\t*********************************************");
}
