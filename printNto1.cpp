#include<iostream>
using namespace std;
void reverse(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    reverse(i-1,n);
}
int main(){
    int n;
    cin>>n;
    reverse(n,n);
}