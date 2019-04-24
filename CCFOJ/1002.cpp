#include<bits/stdc++.h>
using namespace std;
double z,s,a,b,c;
int main()
{
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	printf("%.4lf",sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
