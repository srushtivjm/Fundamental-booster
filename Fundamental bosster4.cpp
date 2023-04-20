#include<iostream>
using namespace std;
int main()
{
	char n;
	cout<<"Enter character=";
	cin>>n;
	
	if(n=='a'|| n=='e'||n=='i'||n=='o'||n=='u')
	{
		cout<<"Given charecter is vowel.";
	}
	else
	{
		cout<<"Given chatecter is consonant.";
	}
	return 0;
}
