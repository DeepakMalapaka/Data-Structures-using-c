#include<iostream>
using namespace std;
int main()
{
	//Both /n and endl play same roll
	
	//Rectangle pattern 
	/*int row,col;
	cin>>row>>col;
	int i,j;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}*/
	
	//Hollow rectangle
	/*int row,col;
	cin>>row>>col;
	int i,j;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(i==1 || i==row || j==1 || j==col)
			{
				cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}*/
	
	//Half pyramid
	/*int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}*/
	
	//Inverted pyramid
	/*int n;
	cin>>n;
	int i,j;
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}*/
	
	//Half pyramid after 180 degrees rotation
	/*int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				cout<<" ";
			}
			else 
			{
				cout<<"*";
			}
		}
		cout<<"\n";
	}*/
	
	//Full pyramid 
	/*int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				cout<<" ";
			}
			else 
			{
				cout<<" *";
			}
		}
		cout<<"\n";
	}*/
	
	//Half pyramid using numbers
	/*int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" "<<i;
		}
		cout<<"\n";
	}*/
	
	//Floyd's triangle
	/*int n;
	cin>>n;
	int i,j;
	int count=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" "<<count;
			count++;
		}
		cout<<"\n";
	}*/
	
	//Butterfly pyramid
	/*int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
    		cout<<"*";		
		}
		int space=2*n-2*i;
		for(j=1;j<=space;j++)
		{
    		cout<<" ";		
		}
		for(j=1;j<=i;j++)
		{
    		cout<<"*";		
		}
		cout<<"\n";
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
    		cout<<"*";		
		}
		int space=2*n-2*i;
		for(j=1;j<=space;j++)
		{
    		cout<<" ";		
		}
		for(j=1;j<=i;j++)
		{
    		cout<<"*";		
		}
		cout<<"\n";
	}*/
	return 0;
}
