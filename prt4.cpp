#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main(){
    int *p,n,i,o=0,e=0;
    cin>>n;
    p=(int*)calloc(n,sizeof(int));
    for ( i = 0; i < n; i++)
    {
        cin>>(p+i);
        if (*(p+i)%2==0)
        e=e+*(p+i);
        else
        o=o+*(p+i);
    }
    free(p)
    return 0;
    
}