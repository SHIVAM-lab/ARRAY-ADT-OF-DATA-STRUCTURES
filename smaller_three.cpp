#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
//To find the greatest number among three numbers
int smallest(int x,int y,int z){
    if(x<y){
        if(x<z)
        return x;
        else
        return z;
    }
    else{
        if (y<z)
        return y;
        else
        return z;
        
    }
}
int main(){
    int a,b,c,g;
    cin>>a>>b>>c;
    g=smallest(a,b,c);
    cout<<g<<endl;
return 0;
}