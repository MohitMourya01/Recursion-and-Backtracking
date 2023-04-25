#include<bits/stdc++.h>
using namespace std;
// Concept using powerset;
void printF(int ind,vector<int> &v,int arr[],int n){
    if(ind==n){
        for(auto i:v){
            cout<< i<<" ";
        }
        if(v.size()==0){
            cout<<"{}"<<" ";
        }
        cout<<endl;
        return ;
    }
    // Take or pich the particular index in to the subsequence
    v.push_back(arr[ind]);
    printF(ind+1,v,arr,n);
    v.pop_back();

    // not pick or not take condition this element is not added to your subsequence
    printF(ind+1,v,arr,n);

    // We can also do the same to print it in reverse order take or not take concept
    // exchange the condition 
    // TC: 2^n * n(loop)
}
int main (){
    int arr[]={3,1,2};
    int n=3;
    vector<int> v;
    printF(0,v,arr,n);
    return 0;
}