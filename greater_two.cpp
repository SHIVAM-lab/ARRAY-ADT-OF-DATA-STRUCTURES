#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int greatest(int x,int y){
         if (x>y)
         return x;
         else
         return y;
         
}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=greatest(a,b);
    cout<<c<<endl;
}