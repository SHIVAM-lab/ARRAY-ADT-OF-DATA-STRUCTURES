#include<bits/stdc++.h>
#include<vector>
using namespace std;
void find(vector<int>A){
    vector<int>B,C;
    int a=*min_element(A.begin(),A.end());
    for (int i = 0; i < n; i++){
        if (a==A[i])
        break;
   }
   for(int j=0;j < i;j++)
   B.push_back(A[i]);
   int b=*max_element(B.begin(),B.end());
   for(int j=i+1; j < A.size(); j++)
   C.push_back(A[i]);
   int c=*max_element(C.begin(),C.end());
   int s=0;
  


    
}
int main(){
    vector<int>A;
    int z,n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0 ;i < n; i++){
        cin>>z;
    A.push_back(z);
    }
    find(A);
    return 0;
}