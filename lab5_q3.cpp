#include<iostream>
using namespace std;

int main(){
	//declare the variable
	int a;
	cout << "write the number" << endl;
	//store the variable
	cin >> a; 
	//print the result
	if (a==0) 
	{
	cout << "The number is equal to zero" ;
	}
		else if(a>0)
		{
		cout << "The number is positive" ;
		} 
		else 
		{
		cout << "The number is negative" ;
		}
// terminating program
return 0;

}
