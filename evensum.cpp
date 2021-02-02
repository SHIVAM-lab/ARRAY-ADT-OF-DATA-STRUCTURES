#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int add(int x){
    if(x==1)
    return 1;
    else
    return x+add(x-1);
}
int main(){
    int n;
    cin>>n;
    int s=add(n);
    cout<<"Sum is:"<<2*s<<endl;
     return 0;
}