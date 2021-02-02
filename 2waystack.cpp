#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
class stack{
    private :
    int capacity;
    int top_left;
    int top_right;
    int *ptr;
    public:
    stack(int cap){
        capacity=cap;
        top_left=-1;
        top_right=capacity;
        ptr=new int(capacity);
    }
 void pushleft(int data);
 void pushright(int data);
 int popleft();
 int popright();
 int isemptyleft();
 int isemptyright();
 int isfull();
 int peakleft();
 int peakright();
 ~stack(){
     delete[]ptr;
 }
};
int stack:: isfull(){
 if (top_left+1 == top_right)
 return 1;
 else
 return 0;
}
int stack::isemptyright(){
    if (top_right == capacity){
        return 1;
    }
    else{
        return 0;
    }
    
}
int stack::isemptyleft(){
    if (top_left == 0){
        return 1;
    }
    else{
        return 0;
    }
    
}

int stack::peakleft(){
    if (isemptyleft())
    {
        cout<<"stack is empty"<<endl;
        return 0;
    }
    else
    return ptr[top_left];
}
int stack::peakright(){
    if (isemptyright())
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else
    return ptr[capacity];
}

int stack::popright(){
    if (isemptyright())
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else{
         return ptr[top_right];
         top_right++;
     }
}
void stack::pushleft(int data){
    if (isfull())
    {
      cout<<"stack is full"<<endl;
    }
    else{
      top_left++;
      ptr[top_left]=data;
    }
    
}

void stack::pushright(int data){
    if (isfull())
    {
      cout<<"stack is full"<<endl;
    }
    else{
      top_right--;
      ptr[top_right]=data;
    }
    
}

