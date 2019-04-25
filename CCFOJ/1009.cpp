#include<iostream>
using namespace std;
int a,b;
int main()
{
	cin>>a>>b;
	if(a+b<10)cout<<"water";else
	if(a+b>=10&&a>b)cout<<"tree";else
	if(a+b>=10&&a<=b)cout<<"tea";
	return 0;
}
