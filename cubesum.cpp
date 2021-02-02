#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int sum(int x){
   int s;
   if(x==1)
     return 1;
     el
     return x*x*x+sum(x-1);
}
int main(){
    int n;
    cin>>n;
    int s=sum(n);
     cout<<"Sum is:"<<s<<endl;
    return 0;
}