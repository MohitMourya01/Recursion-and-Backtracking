#include<bits/stdc++.h>
using namespace std;
void printS(int ind,vector<int> &v,int s,int sum,int arr[],int n){
    if(ind==n){
        if(s==sum){
            for(auto it : v)
                cout<<it<< " ";
                cout<<endl; 

        }                        
            return;
        }

        // Pick or take
        v.push_back(arr[ind]);
        s+=arr[ind];
        printS(ind+1,v,s,sum,arr,n);
        s-=arr[ind];
        v.pop_back();

        // Not pick
        printS(ind+1,v,s,sum,arr,n);
    }

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> v;
    cout<<"All subsequences with sum =2-->"<<endl;
    printS(0,v,0,sum,arr,n);
    return 0;
}

