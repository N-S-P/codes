#include<iostream>
using namespace std;
int n,a,b,c;
int main()
{
	cin>>n;
	a=n/100;
	b=n%100/10;
	c=n%10;
	if(a*a*a+b*b*b+c*c*c==n)
	cout<<"YES";else cout<<"NO";
	return 0;
}
