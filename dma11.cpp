#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main(){
    int n,i;
    char *q;
    cout<<"Enter the size of the string"<<endl;
    cin>>n;
    q=(char*)calloc(n,sizeof(char));
    cout<<"Enter the elements of the string"<<endl;
    for ( i = 0; i < n; i++)
    cin>>*(q+i);
    for ( i = 0; i < n; i++)
    cout<<*(q+i);
    free(q);
    return 0;
}