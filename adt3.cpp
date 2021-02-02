#include<bits/stdc++.h>
#include<cstdlib>
#include<iostream>
using namespace std;
class adt{
  private:
  int capacity;
  int lastindex;
  int arr*;
  public:
  adt(){
      capacity=0;
      lastindex=-1;
      arr=NULL;
  }

 void createarr(int capacity);
 int getitem(int index);
 int setitem(int index,int value);
 int edititem(int index,int value);
 int countitem();
 int removeitem(int index);
 int searchitem(int value);
 void sortarr();
 friend ostream& operatoer<<(ostream&,adt);
 //destructor 
 ~adt(){
     delete []arr;
 }
 //copy constructor
 adt(adt &list){
  capacity=list.capacity;
  lastindex=list.lastindex;
  arr=new int[capacity];
  for (int i = 0; i < list.lastindex; i++)
    arr[i]=list.arr[i];
 }
};

void adt::createarr(int capacity){
  this->createarr=createarr;
  lastindex=-1;
  ptr=new int[capacity];
}
int adt:: getitem(int index){
   if (lastindex ==-1)
   {
    cout<<"List is empty";
    return -1;
   }
   if (index < 0 || index > lastindex)
   {
    cout<<"Invalid index"<<endl;
    return -1;
   }

   if (index  >= 0 || index < lastindex )  
   {
    return arr[index];
   }
}
int adt::setitem(int index,int value){
    if (index == capacity -1 || index == capacity +1 || index < 0)
    {
        cout<<"No space left"<<endl;
        return -1;
    }
    if (index > lastindex+1)
    {
        cout<<"Invalid index"<<endl;
        return 1;
    }
    
    if (index = lastindex + 1)
    { 
        lastindex++;
        arr[index]=value;
        return 1;
    }
    if (index <= lastindex)
    {
        lastindex=lastindex+1;
        int i = lastindex;
        while (i != index )
        {
            arr[i]=arr[i-1];
            i--;
        }
        arr[index] = value;        
        return 1;
    }
    
}
int adt::edititem(int index,int value){
    if (index > lastindex)
    {
        cout<<"Empty space"<<endl;
        return -1;
    }
    if (index > capacity || index  < 0)
    {
        cout<<"Invalid index"<<endl;
        return -1;
    }
    if (index <= lastindex)
    {
        arr[index]=value
        return 1;
    }
    
}
int adt::countitem(){
    return (lastindex+1);
}
int adt::removeitem(int index){
    if (index > lastindex || index < 0)
    {
        cout<<"Invalid index"<<endl;
        return -1;
    }
    else
    {
        if (index == lastindex)
        {
            lastindex--;
            return 1;
        }
        else
        {
            int i=lastindex;
            while (i != index)
            {
                arr[i-1]=arr[i];
                i--;
            }
            lastindex--;
                return 1;
        }
        
    }
    
}
int adt::searchitem(int value){
    if (lastindex == -1)
    {
        cout<<"Array is empty"<<endl;
        rerurn -1;
    }
    else
    {
        int c1=0
    for (int i = 0; i < lastindex+1; i++)
    {
        if(arr[i]=value)
        c1++;
        
    }
    return (c1);
    }
}
void adt::sortarr(){
    int i,r,a;
    for ( r = 0; r <= countitem(); r++)
    {
        for (i = 0; i <= countitem()-r; i++)
        {
            if (arr[i+1] < arr[i])
            {
                a = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=a;
            }
            
        }
        
    }
    
}
ostream& operatoer<<(ostream& dout,adt l){
 if (l.lastindex == -1)
    cout<<"List is empty"<<endl;
 for (int i = 0; i < l.countitem(); i++)
    cout<<" "<<l.getitem(i);
    return (dout);
}
int main(){
}
