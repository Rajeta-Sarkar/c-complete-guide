#include<iostream>
using namespace std;
int main() 
{   int cal=0;   
     int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	} 

    for(int i=0; i<n-1; i++){
        
        int val;
		for(int j=i+1; j<n ;j++){
			if(a[j] < a[i]){
                val=j+1;
                cout<<"val "<<val<<endl;

				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;

			}
            
		 }
         cal+= val-i+1;
    }
    for(int i=0;i<n; i++){
		cout<<a[i]<<" ";
        
	}cout<<cal;
    return 0;
}