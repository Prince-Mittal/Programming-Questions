#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
	int flag=0;
	string str=argv[1];
	int n=str.length();
	for(int i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"Palindrome"<<endl;
	}
	else
	{
		cout<<"Not Palindrome"<<endl;
	}
	return 0;
}
