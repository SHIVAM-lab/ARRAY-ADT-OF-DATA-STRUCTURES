#include<bits/stdc++.h>
#include<cstdlib>
struct queue{
    int capacity;
    int front;
    int rear;
    int *arr;
};
//function declaration
struct queue*createqueue(int cap);
int isemptyqueue(struct queue*s);
int isfullqueue(struct queue*s);
void doublequeue(struct queue*s);
int queuecapacity(struct queue*s);
void halfqueue(struct queue*s);
void enqueue(struct queue*s,int data);
void dequeue(struct queue*s);
struct queue* deletequeue(struct queue*s);
//function defination
struct queue*createqueue(int cap){
    struct queue*p=(struct queue*)malloc(sizeof(struct queue));
    p->capacity=cap;
    p->arr=(int*)malloc(sizeof(p->capacity*int));
    p->front=-1;
    p->rear=-1;
    return p;
}
int isemptyqueue(struct queue*s){
   if (s->front==-1)
   {
       return 1;
   }
   else
   {
       return 0;
   }
   
   
}
int isfullqueue(struct queue*s){
 if (s->rear==s->capacity-1 && s->front=0)
     return 1;
 else if(s->front==s->rear+1)
    return 1;
 else
    return 0;
}
void doublequeue(struct queue*s){
    int i,j;
    s->capacity=2*s->capacity;
    int*p=(int*)malloc(sizeof(int*s->capacity))
    for ( i = s->front;j=0; i!= s->rear;j++){
        p[j]=s[i];
        if (i==s->capacity/2-1 && i!=s->rear )
          i=0;
          else
          i++;
          
    }
    free(s->arr);
    s->arr=p;
    s->front=0;
    s->rear=s->capacity/2-1;
}
int queuecapacity(struct queue*s){
 return s->capacity;
}
void halfqueue(struct queue*s){
    int i,j;
    int l=s->capacity/2;
    int*p=(int*)malloc(sizeof(int*s->capacity/2));
    for ( i = 0,j=s->front; i < l; i++)
    {
        p[i]=s->arr[j];
        if (j==s->capacity-1)
            j=0;
        else
            j++;
    }
   
    free(s->arr);
    s->arr=p;
    s->capacity=l;
    s->front=0;
    s->front=s->capacity-1;
}
void enqueue(struct queue*s,int data){
    if (isfullqueue(s)){
      doublequeue(s);
       s->rear++;
     s->arr[s->rear]=data;
     }
   else if(isemptyqueue(s)){
      s->arr[0]=data;
      s->front=0;
      s->rear=0;
   }
   else if(s->capacity<0){
     printf("Invalid capacity");
   }
   else{
    s->rear++;
   s->arr[s->rear]=data;
   }
     
}
void dequeue(struct queue*s){
    int i,size=0;
  if (isemptyqueue(s))
  printf("underflow\n");
  else if (s->front==s->rear)
  {
      s->front=s->rear=-1;
  }
  else if (s->front=s->capacity-1)
  {
      s->front=0;
  }
 else{
      s->front=s->front-1;
 }
      if (s->front>-1){
    for ( i = s->front && i!=s->rear){
      size++;
      if (i==s->capacity)
      i=0;
      else
          i++;
     }
  size++;
  
  if(size==s->capacity/2)
      halfqueue(s);
  }
}
struct queue* deletequeue(struct queue*s){
 free(s->arr);
 free(s);
 return NULL;
}
