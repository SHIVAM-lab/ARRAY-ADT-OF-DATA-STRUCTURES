#include<bits/stdc++.h>
#include<vector>
using namespace std;
void rotate(vector<int>A,int d){
int s;
 for(int i=0;i<d;i++){
    s=A[0];
   for(int j=0;j<A.size()-1;j++){
    A[j]=A[j+1];
  }
  A[A.size()-1] = s;
}
 for (int i = 0; i < A.size(); i++)
 {
   cout<<A[i]<<endl;
 }
 

}

int main(){
 cout<<"Enter the size"<<endl;
 int n,z,d;
 vector<int>A;
 cin>>n;
 cout<<"Enter the numbers"<<endl;
 for(int i=1;i<=n;i++){
    cin>>z;
  A.push_back(z);
}
 cout<<"Enter the number of rotations"<<endl;
 cin>>d;
 rotate(A,d);
  return 0;
}