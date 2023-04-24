#include<iostream>
using namespace std;
void print_name(int count,int n){
   
    if(count>n) return;
    cout<<"Mohit"<<endl;
    
    print_name(count+1,n);
}
// TC-->O(n),SC-->O(n)
int main(){
   int n;
   cin>>n;
   print_name(1,n);
}