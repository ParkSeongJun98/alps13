#define <iostream>
#define <cstdio>
using namespace std;

int main(void)
{
	double a,b;
	double max;
	cout<<"�μ� �Է�: ";
	cin>>a>>b;
	max=a+b;
	if(max<b+a)max=b+a;
	if(max<a-b)max=a-b;
	if(max<b-a)max=b-a;
	if(max<a*b)max=a*b;
	if(max<b*a)max=b*a;
	if(max<a/b)max=a/b;
	if(max<b/a)max=b/a;
	printf("%.6f",max);
	
}