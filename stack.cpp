#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 100

int stack[max],top=-1,n;

void push()
{
    int data;
    printf("\n\n\tData: ");
    scanf("%d", &data);
    if(top==max-1)
        printf("\n\tStack overflow");
    else
    {
        stack[++top]=data;
        printf("\n\tData inserted successfully\n...............................................");
    }
}

void pop()
{
    int data;
    if(top==-1)
        printf("\n\tStack underflow");
    else
    {
        data=stack[top];
        top--;
        printf("%d  popped successfully\n....................................");
    }
}

void display()
{
    if(top==-1)
        printf("\n\tStack is underflow");
    else
    {
        printf("\n\tStack elements are ");
        for(int i=0;i<=top;i++)
        {
            printf(": %d",stack[i]);
        }
        printf("\n...............................................");
    }
}

int main()
{
   int i;
   char choice;
   do
   {
       system("cls");
       printf("\n\t1->Push\n\t2->Pop\n\t3->Display\n\t4->Exit\n\n\tEnter ur choice: ");
       scanf("%d",&i);
       switch(i)
       {
           case 1:
               printf("Number of data to insert: ");
               scanf("%d",&n);
               printf("\n\n\tInsert:\n ");
               for(int i=0;i<n;i++)
                push();
               break;
           case 2:
              pop();
              break;
           case 3:
              display();
              break;
           case 4:
              break;
           default:
              printf("\n\tWrong choice........press any key to continue");
       }
       printf("\n\tDo u want to Continue (Y/N)");
       fflush(stdin);
       scanf("%c",&choice);
   }while(choice=='Y' || choice=='y');
   printf("\n\tthanks for visiting here\n\n\n\n\t\t");
}































