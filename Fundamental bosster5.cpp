#include<iostream>
using namespace std;
main()
{
	int n[100],a[100],size;
	
	cout<<"Enter size=";
	cin>>size;
	cout<<"Enter valur=";
	
	for(int i=0;i<size;i++)
	{
		cin>>n[i];
		a[i]=n[i]*n[i]*n[i];
	}
	for(int i=0;i<size;i++)
	{
		//a[i]=n[i];
		cout<<a[i]<<endl;
	}
}
