#include<iostream>
using namespace std;

int main(){
	//declare the variable
	int a, remainder;
	cout << "enter the year" << endl;
	//store the variable
	cin >> a; 
	//print the result
	remainder = a%4;
	if (remainder ==0)
	{
	cout << "The year is leap" << endl;
	}
	else 
	{
	cout << "The year is not leap" << endl;
	}
// terminating program
return 0;

}
