#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 int sum(int x){
   if(x=1)
   return x;
   else
   return x+sum(x-1);
}

int main(){
cout<<"Enter the numbers upto which the sum of numbers is to be calculated"<<endl;
int n;
cin>>n;
int s=sum(n);
cout<<"Sum is"<<s<<endl;
}