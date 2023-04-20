#include<iostream>
using namespace std;
int main()
{
	char n[100];
	cout<<"Enter string=";
	cin>>n;
	
	for(int i=0;n[i]!='\0';i++)
	{
		if(n[i]>='A'&& n[i]<='Z')
		{
			n[i]=n[i]+32;
		}
		else if(n[i]>='a'&&n[i]<='z')
		{
			n[i]=n[i]-32;
		}
		
	}
	cout<<"Toggle case="<<n;
   return 0;	
}
