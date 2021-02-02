#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
    int i,*p,n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    p=(int*)calloc(n,sizeof(int));
    cout<<"Enter the elements"<<endl;
    for ( i = 0; i < n; i++)
    cin>>*(p+i);
    int a,b;
    cout<<"Enter the item u want to search"<<endl;
    cin>>a;
    for ( i = 0; i < n; i++)
    {
        if (*(p+i)==a)
        {
            b=1;
            break;
        }
        
    }
    if (b==1)
    cout<<"Item is present at"<<(p+i)<<"th position";
    else
    cout<<"Not present";
    free(p);
    return 0;
    
}