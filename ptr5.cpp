#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main(){
    int *p,i,n;
    cin>>n;
    p=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    cin>>*(p+i);
    for ( i = 0; i < n; i++)
    {
        if (*(p_i)<*(p+i+1))
        {
           
        }
        else
        {
            int t;
            t=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=t;
            
        }
        
        
    }
    
    free(p);
    return 0;
    
}