#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>a;
   int n,z;
   cin>>n;
   for (int  i = 1; i <= n; i++)
   {
       z=(2*i-1);
       a.push_back(z);
   }
   int sum=accumulate(a.begin(),a.end(),0);
   cout<<"Sum is:"<<sum<<endl;
}