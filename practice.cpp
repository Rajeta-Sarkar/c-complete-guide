#include <stdio.h>
#include<iostream>
#include <string>
using namespace std;
int main() {

    int i = 4;
            string s='A';
            for (int j =0 ; j<26; j++){
                s.push_back('A'+j);
                
            }
           cout<<s<<" "<<endl;
    return 0;
    }