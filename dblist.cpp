#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
struct node{
    struct node *prev;
    int info;
    struct node *next;
};
//All functions are declared below
void insertstart(struct node**s,int data);
void insertlast(struct node**s,int data);
void insertcurrent(struct node**s,int currentdata,int data);
struct node* search(int currentdata,struct node**s);
void editiem(struct node**s,int currentdata,int data);
void deletestart(struct node**s);
void deleteend(struct node**s);
void deleteend(struct node**s);
void deletecurrent(struct node**s,int data);
//main function is defined here
int main(){
    int data;
    cin>>data;
   struct node*start =nullptr;
   
}
//All the functions are defined below
struct node* search(int currentdata,struct node**s){
    struct node*p;
    p=*s;
    if (*s==nullptr){
    cout<<"List is empty"<<endl;
    return nullptr;
    }
    else{
    while (p!= nullptr){
        if (p->info == currentdata){
        return p;
        p=p->next;
        }
        else
        return nullptr;
    }
}
}
void insertstart(struct node**s,int data){
 struct node*p;
 p=(struct node*)malloc(sizeof(struct node));
 p->info=data;
 p->next=*s;
 p->prev=nullptr;
   *s=p;
}
void insertlast(struct node**s, int data){
 struct node*p;
 p=(struct node*)malloc(sizeof(struct node));
 p->next=*s;
 while (p->next!=nullptr)
   p=p->next;
   p->prev=p;
   p->info=data;
   p->next=nullptr;
}
void insertcurrent(struct node**s,int currentdata,int data){
 struct node *a,*p=search(struct node**s,int currentdata);
 if (p==nullptr)
 cout<<"No such value exists"<<endl;
 else{
  a->next=p->next;
  a->prev=p;
  a->info=data;
  if (p->next!=nullptr)
  a->next->prev=a;
  p->next=a;
  }
 
}
void editiem(struct node**s,int currentdata,int data){
 struct node *p=search(struct node**s,int currentdata);
 if (p==nullptr)
 cout<<"No such value exists"<<endl;
 else{
    p->info=data;
    cout<<"Value has been changed"<<endl;
 }
}
void deletestart(struct node**s){
 if (*s==nullptr)
 cout<<"List is empty"<<endl;
 else{
     struct node*p;
     *s=p;
     *s=*s->next;
     *s->prev=nullptr;
     free(p);
 }
}
void deleteend(struct node**s){
  if (*s==nullptr)
  cout<<"List is empty"<<endl;
  else{
  struct node*p=*s;
  while (p->next!=nullptr)
      p=p->next;
      p->prev->next=nullptr;
      free(p);
   }
}
void deletecurrent(struct node**s,int data){
 struct node *p=search(struct node**s,int data);
 if (p==nullptr)
 cout<<"No such value exists"<<endl;
 else{
     p->prev->next=p->next;
     free(p);
 }
}
