#include<iostream>
using namespace std;

int main(){
	//declare the variables
	int a, b, c;

	//write three num(s)
	cout << "write three num(s)" << endl;
	// store the variables
	cin >> a >> b >> c;
	//print the results
	if (a > b && b>c)
		{
		cout << a << " is the greatest number"<< endl;
		}
	else if(a < b && b> c)
		{
		cout << b << " is the greatest number"<<endl;
		}
	else 
		{
		cout << c << " is the greatest number" ;
		}
	// terminating program
return 0;

}
