//27-07-24 Mansi Thanvi
//project- Simple Calculator
#include<iostream>
using namespace std;

int main()
{
	char op; //for operator
	float n1, n2;
	
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	
	cout<<"What operation would you like to perform? Type a operator accordingly: +, -, x, / ";
	cin>>op;
	
	switch(op)
	{
		case '+':
			cout<< n1 << " + "<< n2 << " = " << n1 + n2;
			break;
		
		case '-':
			cout<< n1 << " - "<< n2 << " = " << n1 - n2;
			break;
			
		case 'x':
			cout<< n1 << " x "<< n2 << " = " << n1 * n2;
			break;
			
		case '/':
			cout<< n1 << " / "<< n2 << " = " << n1 / n2;
			break;
			
		default:
			cout<<"Invalid operator. ";
			break;
	}
	
	return 0;
}
