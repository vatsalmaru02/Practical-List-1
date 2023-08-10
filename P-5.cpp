#include<iostream>
using namespace std;

int main()
{
	int num1,num2,temp;
	
	cout<<"Enter first number::";
	cin>>num1;
	
	cout<<"Enter second nmber::";
	cin>>num2;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"After Swapping::"<<endl;
	cout<<"First Number::"<<num1<<endl;
	cout<<"Second Number::"<<num2<<endl;
	
	return 0;
	
	
}
