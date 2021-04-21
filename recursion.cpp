#include<iostream>
using namespace std;
// check if the arry is sorted or not

int fibbo(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int ans = fibbo(n-1)+fibbo(n-2);
  
    return ans;
}
int main (){
    int n;      
    cin>>n;
    cout<<fibbo(n);
    return 0;
}