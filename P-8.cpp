#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float principle,time,rate,ci;
	
	cout<<"Enter the priciple amount::";
	cin>>principle;
	
	cout<<"Enter the rate of Interest ::";
	cin>>rate;
	
	cout<<"Enter the time in years::";
	cin>>time;
	
	
	rate=rate/100;
	
	ci= principle*pow(1 + rate, time) - principle;

    cout << "Compound Interest: " <<ci<<endl;

    return 0;


}
