#include<cstdio>
#include<cmath>
using namespace std;
double r,x,p,y;
int main()
{
	scanf("%lf%lf%lf",&r,&x,&p);
	y=x*pow((100+r)/100,p);
	printf("%.2lf",y);
	return 0;
}
