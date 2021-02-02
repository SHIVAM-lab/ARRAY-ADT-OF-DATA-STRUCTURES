#include<bits/stdc++.h>
#include<vector>
using namespace std;
void leader(vector<int>A){
 vector<int>B;
 B.push_back(A[A.size()-1]);
 for (int i = A.size()-2; i >=0 ; i--){
    if(A[i]>B[B.size()-1])
    B.push_back(A[i]);
 }
 for (int i = 0; i < B.size(); i++){
    cout<<B[i]<<" ";
 }

}
int main(){
 vector<int>A;
 int z,a;
 cout<<"Enter the size"<<endl;
 cin>>z;
 for (int i = 0; i < z; i++){
    cin>>a;
 A.push_back(a);
 }
 leader(A);
 return 0;
 }