#include<stdlib.h>
#include<stdio.h>

struct stack{
 int top;
 int capacity;
 int* arr;
};
struct arr* createstack(int cap);
int isfull(struct stack* ptr);
int isempty(struct stack* ptr);
int push(struct stack* ptr,int value);
int pop(struct stack* ptr);
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
    cout<<"Stack is empty"<<endl;
    return 1;
    }
    else
    return -1;
}
int isempty(struct stack* ptr){
    if (ptr->top == -1)
    {
       cout<<"Stack is empty"<<endl;
       return 1; 
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
        return 0;
    }
    
}
int push(struct stack* ptr,int value){
    if (ptr->top == ptr->capacity-1)
    {
        cout<<"Stack is full"<<endl;
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
        cout<<"stack is empty"<<endl;
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
        cout<<"Enter the number"<<endl
        cin>>item;
        push(stack,item);
        break;
    case 2:
    item=pop(stack);
    if (item == -1)
    cout<<"stack is empty"<<endll
    else 
    cout<<item<<endl;
    break;
    default:
    exit(0);
    }
    
}