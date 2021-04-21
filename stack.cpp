#include<iostream>
#include<string>
#include<stack>
using namespace std;
void usingstack(string s){
stack<string> st;
cout<<s.length()<<endl;
for(int i=0; i<s.length(); i++)
cout<<s[i]<<" ";
}
int main(){
    string s = "hey";
    usingstack(s);
    return 0;
}