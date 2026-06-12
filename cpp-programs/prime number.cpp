#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int i,n;
	bool flag=0;
	cout<<"Please enter any number:";
	cin>>n;
	if(n==1)
	{
		cout<<"1 is neither prime nor composite "<<endl;
		cout<<"Enter any number other than 1"<<endl;
		exit(1);
	}
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout<<"Composite number "<<endl;
	}
	else 
	{
		cout<<"Prime number"<<endl;
	}
}
