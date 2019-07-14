#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void traverse();
int main()
{
    int ch,item;
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Traverse\n");
        printf("5.Quit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter element: ");
                   scanf("%d",&item);
                   push(item);//push(item)-->insert element into the stack
                   break;
            case 2:item=pop();//pop()-->remove element from stack
                   if(item==0)
                    printf("Stack is underflow\n");
                   else
                    printf("Popped element is %d \n",item);
                   break;
           case 3:peek();//return top element
                  break;
           case 4:traverse();//Display stack elements
                  break;
           case 5:exit(0);
                  break;
           default:printf("Invalid input\n");
        }
    }
}
void push(int element)
{
    if(isFull())
        printf("Stack is overflow\n");
    else
    {
        top++;
        stack[top]=element;
        printf("%d is pushed\n",element);
    }
}
int isFull()
{
    if(top==CAPACITY-1)
        return 1;
    else
        return 0;
}
int pop()
{
    if(isEmpty())
       return 0;
    else
        return stack[top--];
}
int isEmpty()
{
    if(top==-1)
      return 1;
    else
        return 0;

}
void peek()
{
    if(isEmpty())
        printf("Stack is empty\n");
    else
        printf("The peek element is %d\n",stack[top]);
}
void traverse()
{
    if(isEmpty())
        printf("Stack is Empty\n");
    else
    {
       printf("Stack element is :\n");
       for(int i=top;i>=0;i--)
       {
           printf("%d\n",stack[i]);
       }
    }
}

