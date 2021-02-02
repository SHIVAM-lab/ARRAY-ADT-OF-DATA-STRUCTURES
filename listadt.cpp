#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
class listadt{
 private:
  struct node{
      int info;
     node* next;
  };
   node* start;
    node* search(int data){
         node *t;
      if (start==nullptr)
      return nullptr;
      t=start;
      while (t!=nullptr)
      {
          if (t->info==data)
          return t;
          t=t->next;
     }
      return nullptr;
      
    }
  public:
    listadt(){
        start=nullptr;
    }
    void insertstart(int data);
    void insertlast(int data);
    void insertafter(int currentdata,int data);
    void view();
    void deletestart();
    void deleteend();
    void deletecurrent(int currentdata);
    void edititem(int currentdata,int data);
    int count();
    int getfirstitem();
    int getlastitem();
    int searchitem(int data);
    void listsort();
    ~listadt(){
        while (start!=nullptr)
        {
          deletestart();
        }
        
    }
    };
void listadt::insertstart(int data){
    node *n=new node;
    n->info=data;
    n->next=start;
    start=n;
}
void listadt::insertlast(int data){
    node *n=new node;
    n->info=data;
    n->next=nullptr;
    if (start==nullptr)
       start=n;
       else{
      node *t=start;
       while (t->next!=NULL)
       t=t->next;
       t->next=n;
    }
}
void listadt::insertafter(int currentdata,int data){
 node *p,*n=new node;
 p=search(currentdata);
 if (p==nullptr)
 cout<<"no such value exists"<<endl;
 else{
 n->info=data;
 n->next=p->next;
 p->next=n;
 }
}
void listadt::deletestart(){
    if (start==nullptr)
    cout<<"List is empty"<<endl;
    else{
    node *n=new node;
    n=start;
    start=start->next;
    free(n);
    }
}
void listadt::deleteend(){
    node *m=start,*n =start;
    if (start==NULL)
    cout<<"List is empty"<<endl;
    else{
        if (n->next==nullptr){
        free(n);
        start=nullptr;
        }
        else{
            do
            {
                m=n;
                n=n->next;
            } while (n->next!=nullptr);
            m->next=nullptr;
            delete(n);
        }
    }
}
void listadt::deletecurrent(int data){
   if (start==nullptr)
   cout<<"List is empty"<<endl;
   else{
       node *n;
       n=search(data);
       if (n==nullptr)
       cout<<"No such value exists"<<endl;
       if (n->next==nullptr)
       {
           start=nullptr;
           deleteend();
       }
       n=start;
       while (n->next!=nullptr)
       {
        n->info=n->next->info;
        n=n->next;
       }
       deleteend();
     }
}
void listadt::view(){
 struct node*t;
 if (start==NULL)
 printf("List is empty");
 else
 {
     t=start;
     while (t!= NULL)
     {
      cout<<t->info<<endl; 
      t=t->next; 
     }
     
 }
 
}
void listadt::edititem(int currentdata,int data){
  node *n=search(currentdata);
   if (n==nullptr)
   cout<<"No such value occurs"<<endl;
   else
   n->info=data;
       
}
int listadt::count(){
    int i=0;
    node *n=start;
    while (n!=nullptr){
    i++;
    n=n->next;
    }
    return i;
}
int listadt::getfirstitem(){
    if (start==nullptr){
        cout<<"List is empty"<<endl;
        return (-1);
    }
    else
    return start->info;
}
int listadt::getlastitem(){
    if (start==nullptr)
    {
        cout<<"List is empty"<<endl;
        return -1;
    }
    else{
        node*n=start;
        while (n->next!=nullptr)
        n=n->next;
        return n->info;
     }
    
}
int listadt::searchitem(int data){
    node*n;
    n=search(data);
    if (n==nullptr){
    cout<<"Element not exists"<<endl;
    return -1;
    }
    else{
        cout<<"Element exists"<<endl;
    return 1; 
    }   
}
void listadt::listsort(){
    node*n;
    int i;
    if (start==nullptr)
    cout<<"List is empty"<<endl;
    else{
    for ( int a = 1; a <= count()-1; a++){
        n=start;
    for ( int b = 0; b < count()-1-a; b++){
              if (n->info > n->next->info){
                  i=n->info;
                  n->info=n->next->info;
                  n->next->info=i;
              }
              n=n->next;
           }
        }  
    }
}
