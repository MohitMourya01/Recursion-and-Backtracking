#include<bits/stdc++.h>
using namespace std;
int printCount(int ind,int s,int sum,int arr[],int n){
    if(ind==n){
      if(s==sum){
        // condition matched 
        return 1;
      }
      // condition not matched
      else return 0;
    }
    s+=arr[ind];
    int l=printCount(ind+1,s,sum,arr,n);
    
    s-=arr[ind];
    int r=printCount(ind+1,s,sum,arr,n);
    return l+r;

}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    cout<< printCount(0,0,sum,arr,n)<<endl;
    return 0;
}