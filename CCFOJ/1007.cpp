#include <cstdio>
#include <cmath>
using namespace std;
double a, b;
int main()
{
    scanf("%lf %lf", &a, &b);
    int chu = floor(a / b);
    printf("%.2lf", a - chu * b);
    return 0;
}
