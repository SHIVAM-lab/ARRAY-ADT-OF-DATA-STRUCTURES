#include<bits/stdc++.h>
#include<vector>
using namespace std;
void findmax(vector<int>A){
  vector<int>max,min;
  if(A[0]>A[1])
  max.push_back(A[0]);
  else
  min.push_back(A[0]);
   if(A[A.size()-1]>A[A.size()-2])
  max.push_back(A[0]);
  else
  min.push_back(A[0]);
  for (int i = 1; i < A.size()-1; i++){
      if (A[i]< A[i-1] && A[i] < A[i+1])
      max.push_back(A[i]);
     if(A[i] > A[i-1] && A[i] > A[i+1])
     min.push_back(A[i]);
  }
  int s=0,a;
for (int i = 0; i < max.size(); i++){
  a=max[i] - min[i];
  s=s+a;
}

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
    findmax(A);
    return 0;
}