#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct arraystack
{
    int top;
    int capacity;
    int *array;
};
struct arraystack* createstack(int cap)
{
    struct arraystack *stack;
    stack=malloc(sizeof(struct arraystack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return(stack);
}
int isfull(struct arraystack* stack){
    if(stack->top == stack->capacity-1)
    return (1);
    else
    return  (0);
}
int isempty(struct arraystack *struct){
     if (stack->top == -1)
     return (1);
     else
     return  (0);
}
void push(struct arraystack *stack,int item){
    if(!isfull(stack))
    {
        stack->top++;
        item=stack->array[stack->top];
    }
}
int pop(struct arraystack *stack)
{
    int item;
    if(!isempty(stack)){
    item=stack->array[stack->top];
    stack->top--;
    return (item);
    }
    else
    return (-1);
}
 main(){
     int choice,item;
    str arraystack *stack;
    stack=createstack(4);
while (1)
{
    printf("1.Push"\n);
     printf("2.Pop\n");
    printf("3.Exit\n");
    printf("Enter your choice"\n);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("Enter the number\n");
    scanf("%d",&item);
    push(stack,item);
    break;
    case 2:
    item=pop(stack);
    if(item==-1)
    printf("Stack is empty\n");
    else
    printf("Popped value is" item);
    break;
    case 3:
    exit(0);
   }
   
}
}
