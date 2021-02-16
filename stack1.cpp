#include<bits/stdc++.h>
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
 int main(){
     int choice,item;
    str arraystack *stack;
    stack=createstack(4);
while (1)
{
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"Enter the number\n";
    cin>>item;
    push(stack,item);
    break;
    case 2:
    item=pop(stack);
    if(item==-1)
    cout<<"Stack is empty"<<endl;
    else
    cout<<"Popped value is"<<item<<endl;
    break;
    case 3:
    exit(0);
   }
   
}
}

