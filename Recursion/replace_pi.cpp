//Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

#include<iostream>
using namespace std;
void rpi(char a[])
{
	if(a[0]=='\0')
	{
		return;
	}
	if(a[0]=='p' && a[1]=='i')
	{
		cout<<"3.14";
		rpi(a+2);
	}
	else
	{
		cout<<a[0];
		rpi(a+1);
	}
}
int main()
{
	char a[50];
	cin>>a;
	rpi(a);
}



//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void piprint(char a[])
//{
//	if(a[0] == '\0')
//	{
//		return;
//	}
//	else if(a[0]=='p' && a[1]=='i')
//	{
//		int size = strlen(a);
//		for(int i =size;i>=0;i--)
//		{
//			a[i+2]=a[i];
//		}
//		a[0]='3';
//		a[1]='.';
//		a[2]='1';
//		a[3]='4';
//	}
//	
//	piprint(a+1);
//}
//int main()
//{
//	char a[100];
//	cin>>a;
//	piprint(a);
//	cout<<a;
//	
//}
