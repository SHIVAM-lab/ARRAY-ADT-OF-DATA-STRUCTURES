#include<stdlib.h>
#include<stdio.h>

struct sta{
 int top;
 int capacity;
 int* arr;
};
//function declaration
{
 struct arr* createstack(int cap);
 int isfull(struct stack* ptr);
 int isempty(struct stack* ptr);
 int push(struct stack* ptr,int value);
 int pop(struct stack* ptr);
}
//function definition4
struct arr* createstack(int cap){
    struct stack* ptr;
    ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->capacity=cap;
    ptr->top=-1;
    ptr->arr =(int*)malloc(sizeof(ptr->capacity*int));
    return (ptr);
}
int isfull(struct stack* ptr){
   if (ptr->top == ptr->capacity-1)
     {
    printf("Stack is empty\n");
    return 1;
    }
    else
    return -1;
}
int isempty(struct stack* ptr){
    if (ptr->top == -1)
    {
       printf("Stack is empty\n");
       return 1; 
    }
    else
    {
        printf("Stack is not empty\n");
        return 0;
    }
    
}
int push(struct stack* ptr,int value){
    if (ptr->top == ptr->capacity-1)
    {
        printf("Stack is full\n");
        return 0;
    }
    else
    {
        ptr->top++;
        ptr->arr[top]=value;
        return 1;
    }
}
int pop(struct stack* ptr){
    if (!isempty(ptr))
    { 
        return ptr->arr[top];
        ptr->top--;
    }
    else {
        printf("stack is empty\n");
       return -1;
    }
    
}
int main(){
    struct stack *ptr;
    int choice,item;
    cin>>choice;
    switch (choice)
    {
    case 1:
        printf("Enter the number\n");
        cin>>item;
        push(stack,item);
        break;
    case 2:
    item=pop(stack);
    if (item == -1)
    printf("sta is empty\n");
    else 
    cout<<item<<endl;
    break;
    default:
    exit(0);
    }
    
}