#include<iostream>
using namespace std;

int main(){
	//declare the variable
	char a; 
	//Enter the character
	cout << "Enter the character" << endl;
	//store the variables 
	cin>> a;
	// print the result
	if (64<a && a<91 || 96<a && a<123)
	{
	cout << "The character is an Alphabet";
	}
	else if(47<a && a<58)
		{
		cout << "The character is a Digit";
		}
		else
		{
		cout << "The character is special character"<< endl;
		} 
	
// terminating program
return 0;

}
