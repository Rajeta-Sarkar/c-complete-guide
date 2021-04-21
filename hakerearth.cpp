#include <iostream>

using namespace std;

void isnum (int n){
	 	if( n == 1)
		cout<<"one\n";
		else if( n == 2)
		cout<<"two\n";
		else if( n == 3)
		cout<<"three\n";
		else if( n == 4)
		cout<<"four\n";
		else if( n == 5)
		cout<<"five\n";
		else if( n == 6)
		cout<<"six\n";
		else if( n == 7)
		cout<<"seven\n";
		else if( n == 8)
		cout<<"eight\n";
		else if( n == 9)
		cout<<"nine\n";
}

int main()
{
    int num;
    cin >> num;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (num>=1 && num<=9){
        isnum(num);
    } 
    else{
        cout<<"Greater than 9";
    }

    // Write Your Code Here

    return 0;
}
