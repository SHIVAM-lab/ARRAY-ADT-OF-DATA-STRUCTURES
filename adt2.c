#include<stdio.h>
#include<stdlib.h>
//To create an array abstract data type for the array
struct adt
{
    int capacity;
    int lastindex;
    int *arr;
};
 // To declare all the functions
struct adt* createarr(int capacity);
int getitem(struct adt* ptr,int index);
int setitem(struct adt* ptr,int index,int value);
int count(struct adt* ptr);
int modify(struct adt* ptr,int index,int newvalue);
int edit(struct adt* ptr,int index);
int frequency(struct adt* ptr, int value);
int sort(struct adt* ptr);
int search(struct adt* ptr,int value);
 //and all functions are defined
struct adt* createarr(int capacity){
    struct adt *ptr;
    ptr=(struct adt*)malloc(sizeof(struct adt));//struct memory allocation
    ptr->capacity=capacity;
    ptr->lastindex=-1;
    ptr->arr = (int*)malloc(ptr->capacity*sizeof(int));
    return ptr;
}
// To show the item at given index
int getitem(struct adt* ptr,int index){
    if (index > ptr->lastindex || index < 0)
    return -1;
    else 
    return ptr->arr[index];
}
// To set the value at given index
int setitem(struct adt* ptr,int index,int value){
    int j;
    if (index > ptr->lastindex+1)
    {
        printf("Invalid index\n");
        return -1;
    }
   if (index == ptr->capacity || index < 0 )
    {
      printf("Invalid index\n");
      return -1;
    }
   if (index == ptr->lastindex+1)
    {
      ptr->lastindex = ptr->lastindex+1;
      ptr->arr[index]=value;
      return 1;
    }
    if (index < ptr->lastindex)
  {
      ptr->lastindex = ptr->lastindex+1;
       j = ptr->lastindex;
       while (j != index)
       {
           ptr->arr[j]=ptr->arr[j-1];
           j--;
       }
       ptr->arr[index]=value;
       return 1;
      
  }
  
}
// To change the value at given index

int modify( struct adt* ptr,int index,int newvalue){
    if (index > ptr->lastindex || index < 0){
        return -1;
    }
   else{
       ptr->arr[index]=newvalue;
       return 1;
   }
}
// To count the number of elements present in the array
int count(struct adt* ptr){
    return ptr->lastindex+1;
}
// To remove the element at given index
int edit(struct adt* ptr,int index){
   int j;
   if (index > ptr->lastindex || index < 0 )
   {
    return -1;
   }
   if (index == ptr->lastindex)
   {
       ptr->lastindex = ptr->lastindex-1;
       return 1;
   }
   if (index < ptr->lastindex)
   {
       j = index;
       while (j != ptr->lastindex)
       {
           ptr->arr[j]=ptr->arr[j+1];
           j++;
       }
        ptr->lastindex = ptr->lastindex-1;
        return 1;
       
   }
   
}
// To search the number of times the item has occured
int frequency(struct adt* ptr, int value){
    int c1=0;
    if (ptr->lastindex == -1)
    {
          printf("No data available in the memory\n");
           return 0;
    }
    else
        for (int i = 0; i < ptr->lastindex; i++){
        if (ptr->arr[i] == value)
        c1++;
    }
    return c1;
}
// To search the item present or not
int search(struct adt* ptr,int value){
  for (int  i = 0; i <= ptr->lastindex; i++)
  {
      if (ptr->arr[i] == value)
      return 1;
  }
  return -1;
}
// To sort an array in non decreasing order
int sort(struct adt* ptr){
       int i,j,a;    
       // By using bubble sort
   for (i = 0; i <= ptr->lastindex; ++i) 
        {
 
            for (j = i + 1; j <= ptr->lastindex; ++j)
            {
 
                if (ptr->arr[i] > ptr->arr[j]) 
                {
 
                    a = ptr->arr[i];
                    ptr->arr[i] = ptr->arr[j];
                    ptr->arr[j] = a;
 
                }
 
            }

        }        
       return 1;
}

int main(){
    struct adt* arr;
    arr=createarr(5);
    int s= frequency(arr,10);
   printf("%d\n",s);
    for (int i = 0; i < count(arr); i++)
    {
        printf("%d\n ",getitem(arr,i));
    }
    return 0;
    
}


