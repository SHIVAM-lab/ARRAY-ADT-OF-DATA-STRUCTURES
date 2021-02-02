#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node* createnode(){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void push(struct node**s,int data){
 struct node*n=createnode();
 if (n!=nullptr){
 n->info=data;
 n->next=*s;
 *s=n;
 }
}
int peak(struct node**s){
    if (*s==nullptr){
    cout<<"List is empty"<<endl;
    return -1;
    }
    else
    return (*s)->info;
}
int pop(struct node**s){
    int item;
 struct node*p;
 if (*s==nullptr){
    cout<<"List is empty"<<endl;
    return(-1);
 }
 else{
     
     item=(*s)->info;
     p=*s;
     *s=p->next;
     free(p);
     return item;
 }
 

}
void removestack(struct node**s){
   while (*s!=nullptr)
   pop(s);
}
int main(){
    struct  node *stack;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
   cout<<pop(&stack)<<endl;
   cout<<peak(&stack)<<endl;
   removestack(&stack);
}