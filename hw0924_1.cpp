#include<iostream>
using namespace std;

int gcd(int x,int y)
{
	int a,b,r=1;
	if(x>=y)
	{
	a=x;
	b=y;
	}
	else
	{
		a=y;
		b=x;
	}

	while(r>0)
	{
	r=a%b;
	a=b;
	b=r;
	}

	return a;
}

int main()
{
    int x,y;
	cout<<"Enter two positive integers:";
	cin>>x>>y;
	cout<<"Their gcd is:"<<gcd(x,y)<<endl;
	system("PAUSE");
	return 0;
}