#include<bits/stdc++.h>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
     char *q;
     int i,n;
     cin>>n;
     q=(char*)calloc(n,sizeof(char));
     fflush(stdin);
     gets(q);
     int l;
     for (l = 0; *(q+l) != 0; l++);
      cout<<l;
     free(q);
     return 0;
}