#include<iostream>
using namespace std;
int main()
{
	//Inverted pattern number
	/*int n,i,j;
	cout<<"Enter any number:";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}*/
	//0-1 pattern
	/*int n,i,j;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				cout<<"1 ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}*/
	//parallelogram pattern
	/*int i,j,n;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}*/
	//Number pattern
	/*int i,j,n;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}*/
	//palindromic pattern
	/*int i,j,k,n;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j;
			if(j==1)
			{
				for(k=2;k<=i;k++)
				{
					cout<<k;
				}
			}
		}
		cout<<endl;
	}*/
	//Rhombus pattern 
	/*int i,j,k,n;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
			if(j==1)
			{
				for(k=2;k<=i;k++)
				{
					cout<<"*";
				}
			}
		}
		cout<<endl;
	}
	for(i=n;i>=1;i--)
	{
		for(j=n-i;j>=1;j--)
		{
			cout<<" ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<"*";
			if(j==1)
			{
				for(k=2;k<=i;k++)
				{
					cout<<"*";
				}
			}
		}
		cout<<endl;
	}*/
	//Zig Zag pattern
	int i,j,n;
	cout<<"Enter any number:";
	cin>>n;
	for(i=1;i<=n/3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i+j)%4==0)
			{
				cout<<"*";
			}
			else if(i==2&&j%4==0)
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
