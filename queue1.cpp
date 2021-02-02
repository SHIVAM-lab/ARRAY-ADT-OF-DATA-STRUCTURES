#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
class queue{
    private:
    struct node{
        int data;
        node *next;
        }*front,*prev;
        public:
        //All the functions are declared below.
  void insert(int data);
  void remove(int data);
  int getfirst();
  int count(); 
  int isempty(); 
  void display();
  //constructor
  queue(){
      front=nullptr;
      prev=nullptr;
       }  

void insert(int data){
    node *n=new node;
    n->data=data;
    n->next=nullptr;
    if (prev==nullptr){
      front=prev=n;
    }
    else{
        prev->next=n;
        prev=n;
    }
    
}
int remove(){
    if (front==nullptr){
        return 0;
    }
    if (front==prev){
       delete front;
       front=prev=nullptr;
       return 1;
    }
    node *r;
    r=front;
    front=front->next;
    delete(r);
    return 1;
}
int getfirst(){
    if (front==nullptr){
       cout<<"List is empty"<<endl;
       return -1;
    }
    else
    return front->data;
}
int count(){
    if (front==nullptr){
        cout<<"List is empty"<<endl;
        return 0;
    }
    if (front==prev){
        return 1;
    }
    else{
        node*t=front;
        int c=1;
        while (t!=nullptr){
            c++;
            t=t->next;
        }
        return c;
    }
}
int isempty(){
    if (front==prev){
        return 1;
    }
    else{
        return 0;
    }
    
}
void display(){
    if (isempty()){
         cout<<"List is empty"<<endl;
    }
    else{
        node*t=front;
        while (t!=prev){
            cout<<t->data<<" "<<endl;
            t=t->next;
        }
        
    }
    
}
};
int main(){
    queue list;
    list.insert(10);
    list.insert(20);
    list.display();
}
