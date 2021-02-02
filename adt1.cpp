#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct adt
{
    int capacity;
    int lastindex;
    int *ptr;
};
struct adt* createarr(int capaity){
   struct adt *arr;
   arr=(struct adt*)malloc(struct adt);//Array formation using malloc
   arr->capacity=capaity;
   arr->lastindex=-1;
   arr->ptr=(int*)malloc(arr->capacity*sizeof(int));
   return (arr);
}
int getitem(int index,struct adt* arr){
    if(arr->lastindex<index){
    cout<<"Invalid Index"<<endl;
    return -1;
    }
    else{
        return(arr->ptr[index]);
    }
}
int putitem(int index,struct adt* arr){
    if(arr->capacity<index-1){
    cout<<"Invalid index"<<endl;
    return -1;
    }
    elseif(arr->lastindex > index){
     arr->ptr=ptr[index];
    } 
    else{
       arr->ptr=ptr[index];
    }
}
int moditem(int index,struct adt* arr){
        if(index>arr->lastindex)
        return -1;
        else
        return arr->ptr=ptr[index];
}
int count(struct adt*arr){
    return (arr->lastindex+1);
}
int delete(struct adt* arr,int index){
    if(arr->lastindex>index){
        return -1;
    }
    elseif(arr->lastindex=index){
         arr->ptr=ptr[void];
         return 1;
    }
    else{
        arr->ptr=arr[void];
          for(int i=index;i<=arr->lastindex;i++){
          arr->ptr[i]=arr->ptr[i+1];
          }
        return 1;
    }

}
