#include<bits/stdc++.h>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    int p,n1,c1=0,c2=0,b1;
    char *q;
    cin>>n1;
    q=(char*)calloc(n1,sizeof(char));
    fflush(stdin);
    for ( b1 = 0; b1< n1; b1++)
    cin>>*(q+b1);
    
    char a,e,i,o,u;
    int a1=0;
    while (*(q+a1)!='\0')
    {
        if (*(q+a1)=='a'|| *(q+a1)=='e' ||*(q+a1)=='i' ||*(q+a1)=='o' ||*(q+a1)=='u')
        c1++;
     else
        c2++;  
     a1++;

    }
    
    cout<<"Hence the number of vowels are"<<c1<<endl<<"And the number of consonants are"<<c2<<endl;
      free(q);
      return 0;
    
    
    
}
int modify(int index,int newvalue){
    struct adt* ptr;
    if (index < ptr->capacity)
    { 
        if (index > ptr->lastindex)
    return -1;
    else{
    if (index == ptr->lastindex){
        newvalue=ptr->arr[index];
        ptr->arr[index]=newvalue;
        return newvalue;
    }
    else
    {
       for (int i = index; i < ptr->lastindex ; i++)
       {
           int t=ptr->arr[i];
           ptr->arr[i]=t;
       }
       newvalue=ptr->arr[index];
        ptr->arr[index]=newvalue;
       return newvalue;
    }
  }
}
else 
return -1;
}

int remove(struct adt* ptr,int index){
    if (index < ptr->capacity){
    if (index > ptr->lastindex){
    cout<<"Invalid index"<<endl;
    return -1;
    }
    else if (index==ptr->lastindex)
    {
        int t=ptr->arr[index];
        ptr->arr[index]=t;
        ptr->lastindex=index-1;
        return 1;
    }
    else
    {
        for (int i = index; i < ptr->lastindex; i++)
        {
            ptr->arr[i]=ptr->arr[i+1];
            ptr->arr[i+1]=ptr->arr[i];
        }
        return 1;
        
    }
     
    }
    else 
    return -1;
}




setitem(arr,0,10);
    setitem(arr,1,20);
    setitem(arr,2,30);
    setitem(arr,3,14);
    setitem(arr,4,10);
    modify(arr,3,17);
    sort(arr);