#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int l,int r){
    if(l>=r/2) return ;
    swap(a[l],a[r-l-1]);
    reverse(a,l+1,r);
}

int main(){
    int a[5]={0,1,2,3,4};
    int n=5;
    reverse(a,0,n);
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}