#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node*next;
};
//all functions are declared below
struct node*creatlist(struct node *last);
void display(struct node *last);
struct node* addtoempty(struct node *last,int data);
struct node* addbeg(struct node *last,int data);
struct node* addend(struct node *last,int data);
struct node* addafter(struct node *last,int data);
struct node* del(struct node *last,int currentdata,int data);
//all functions are defined below

void display(struct node *last){
    struct node *p;
    p=last->next;
       do{
        cout<<p->data<<" ";
        p=p->next;
       }while (p!=last->next);
}
struct node* creatlist(struct node *last){
    struct node *p;
    
}
struct node* addbeg(struct node *last,int data){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    if (last->next==nullptr)
    cout<<"List is empty"<<endl;
    else{
        p->data=data;
        p->next=last->next;
        last->next=p;
    }
    return last;
}
struct node* addend(struct node *last,int data){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=last->next;
    last->next=p;
    last=p;
    return last;
}
struct node* addafter(struct node*last,int currentdata,int data){
   struct node*p,*q;
   if (last->next==nullptr)
    cout<<"List is empty"<<endl; 
    p=last;
        do
        {
            if (p->data==currentdata){
            struct node *q=(struct node*)malloc(sizeof(struct node));
            q->data=data;
            q->next=p->next;
            p->next=q;
            if (p==last)
            return last;
        }
        p=p->next;    
         }while (p!=last);
         return last;
}
struct node* addtoempty(struct node *last,int data){
 struct node *n=(struct node*)malloc(sizeof(struct node));
 n->data=data;
 last=n;
 last->next=last;
 return last;
}
struct node* del(struct node *last,int currentdata,int data){
    struct node*p,*q;
   if (last->next==nullptr)
    cout<<"List is empty"<<endl; 
    p=last;
        do
        {
            if (p->data==currentdata){
            q=p;
            q->next=p->next;
            free(p);
            if (p==last)
            return last;
        }
        p=p->next;    
         }while (p!=last);
         return last;
}