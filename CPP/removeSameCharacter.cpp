#include<iostream>
#include<string>

using namespace std;

int main(int argc,const char* argv[])
{
	string str1=argv[1];
	int n1=str1.length();
	string str2=argv[2];
	int n2=str2.length();
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(str1[i]==str2[j])
			{
				str1[i]=0;
			}
		}
	}
	cout<<str1<<endl;
	return 0;
}

