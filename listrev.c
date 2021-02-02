#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
};
struct node *start=NULL;
struct node* createnode(){
    struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 return n;
}
void insertnode(){
    struct node *temp,*t;
    temp=createnode();
    printf("Enter number\n");
    scanf("%d",&temp->info);
    if (start==NULL)
    start=temp;
    else          //insertion at the end
    {
        t=start;
        while (t->link!=NULL)
        t=t->link;
        t->link=temp;
    }
}
void deletenode(){
    struct node *r;
    if (start==NULL)
     printf("List is empty\n");
     else
     {
         r=start;
         start=start->link;
         free(r);
     }
}
void view(){
 struct node*t;
 if (start==NULL)
 printf("List is empty");
 else
 {
     t=start;
     while (t!= NULL)
     {
      printf("%d",&t->info); 
      t=t->link; 
     }
     
 }
 
}
int menu(){
    int ch;
    printf("\n 1 insert");
    printf("\n 2 deletenode");
    printf("\n 3 view");
    printf("\n 4 exit");
    scanf("%d",&ch);
    return ch;
}
int main(){
    switch (menu())
    {
    case 1:
        insertnode();
        break;
        case 2:
        deletenode();
        break;
        case 3:
        view();
        break;
    case 4:
    exit(0);
      default:
      printf("Invalid entry");
        
    }

}
struct node* reverse(){
    struct node *t1,*t2;
    t1=t2=NULL;
    while (start!=NULL)
    {
       t2=start->link;
       start->link=t1; //assigns address of the previous node
       t1=start;   
       start=t2;  //starts points the t2 
    }
    return t1;
}