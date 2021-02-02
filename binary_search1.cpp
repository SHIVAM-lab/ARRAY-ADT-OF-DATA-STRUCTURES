#include<bits/stdc++.h>
#include<vector>
using namespace std;
int binarysearch(vector<int> A,int l,int h, int x){
 if(l > h)
   return -1;
 int mid=l+(h-l)/2;
 if(A[mid]==x)
  return mid;
  if(A[mid] < x)
    return binarysearch(A,mid+1,h,x);
    else
     return binarysearch(A,l,mid-1,x);
}
 int main(){
     int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>A;
    cout<<"Enter the elements of the vector"<<endl;
    int z;
    while(n!=0){
        cin>>z;
        A.push_back(z);
        n--;
    }
    cout<<"Enter the elements to be searched"<<endl;
    int x,l=0;
    cin>>x;
    int a=binarysearch(A,l,A.capacity()-1,x);
    if (a==-1)
    {
        cout<<"NO such element exists"<<endl;
    }
    else
    {
        cout<<"Element is "<<a<<endl;
    }
    
    
 }