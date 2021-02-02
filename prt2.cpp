#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
int main(){
    int *p,n,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    p=(int*)calloc(n,sizeof(int));    //dma
     for(i=0;i<n;i++)
    cin>>*(p+i);
    for(i=0;i<n;i++)
    cout<<*(p+i)<<endl;
    p=(int*)malloc(n*sizeof(int));    //dma
    for(i=0;i<n;i++)
    cin>>*(p+i);
    for(i=0;i<n;i++)
    cout<<*(p+i)<<endl;
    int a;
    cin>>a;
    p=(int*)realloc(p,a);                   //dma
    for(i=0;i<na;i++)
    cin>>*(p+i);
    for(i=0;i<a;i++)
    cout<<*(p+i)<<endl;
    free(p);                          //dma
    return 0;
    }
    