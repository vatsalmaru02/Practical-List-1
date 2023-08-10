#include<iostream>
using namespace std;

int main()
{
	float principle,time,rate,si;
	
	cout<<"Enter the principale amount::";
	cin>>principle;
	
	cout<<"Enter the rate of interest::";
	cin>>rate;
	
	cout<<"Enter the time in Years::";
	cin>>time;
	
	si=(principle*rate*time)/100;
	
	cout<<"The Simple Interest is::"<<si<<endl;
	
	return 0;
}
