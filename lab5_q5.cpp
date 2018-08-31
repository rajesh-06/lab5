#include<iostream>
using namespace std;

int main(){
	//declare the variable
	int a, remainder;
	cout << "write the number" << endl;
	//store the variable
	cin >> a; 
	//print the result
	remainder = a%2;
	if (remainder ==0)
	{
	cout << "The number is even" << endl;
	}
	else 
	{
	cout << "The number is odd" << endl;
	}
// terminating program
return 0;

}
