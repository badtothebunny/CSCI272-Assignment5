//This project obtains complex numbers from the user and manipulates them.
//Programmed by Badtothebunny 
#include <iostream>
#include <iomanip>
#include <string>
#include "Complex.h"
using namespace std;
int main(int argc, char** argv) {
	Complex num,val,ans;
	string inp;//Operations the user enters will be char type for if statements.
	cout<<"Welcome. This program is a complex number calculator."<<endl;
	while (inp != "!")
	{
		cout<<"Please enter two complex numbers."<<endl;
		num.getComplex();
		val.getComplex();
		cout<<"Enter operation:(! terminates)"<<endl;
		cin>>inp;
		if (inp == "+")//for addition
			(num+val).displayComplex();
		else if (inp == "-")//for subtraction
			(num-val).displayComplex();
		else if (inp == "*" || inp == "x")//For multiplication
		//User might type x instead of *, so I account for that
			(num*val).displayComplex();
		else if (inp == "/") //For division
			(num/val).displayComplex();
		else if (inp == "==")
			if (num == val)
				cout<<"They are equal.";
			else 
				cout<<"They are not equal.";
		cout<<endl;
	}
	cout<<"Thank you for using this program."<<endl;
	return 0;
}

