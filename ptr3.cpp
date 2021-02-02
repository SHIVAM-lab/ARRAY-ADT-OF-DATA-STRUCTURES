#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main(){
    int *p,i,n;
    cin>>n;
    p=(int*)calloc(n,sizeof(int));
    for ( i = 0; i < n; i++)
    {
        cin>>*p+i<<endl;
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<*(p+i)<<endl;
    }
    
    free(p);
    return 0;
}