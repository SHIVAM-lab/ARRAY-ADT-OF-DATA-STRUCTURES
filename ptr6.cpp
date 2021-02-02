#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int sort(int x,int *arr){
int i,j;
for ( i = 0; i < x; i++)
{
    for ( j = i+1; j < x; j++)
    {
         if(*(arr+j)<*(arr+i))
        {
            int t=*(arr+i);
            *(arr+i)=*(arr+j);
            *(arr+j)=t;
        }
        
    }
    
}
return (*arr);

}
int main(){
int a,*p;
cin>>a;
p=(int*)malloc(a*sizeof(int));
for (int i = 0; i < a; i++)
cin>>*(p+i);
sort(a,*p);
free(p);
return 0;

}