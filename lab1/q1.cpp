#include<iostream>
using namespace std;
int main()
{
	int a,b,c,steps=3;	// STEPS + = 3 DUE TO 2 COMPARISONS IN IF AND 1 AT WHILE
	cout<<"\n enter two numbers for finding GCD: \n";
	cin>>a>>b;
	if(a > 0 && b > 0)
	{
	while(c!=0)
	{	steps+=3;	// STEPS + = 3 DUE TO 3 COMPARISONS(2 AT IF AND 1 AT WHILE)
		if(a>=b)
		{
			c=a%b;
			a=b;
			b=c;
			steps++;	// STEPS++ FOR ENTERING THE IF BELOW
			if(c==0)
			{
				cout<<"\n gcd is:" << a;
			}
		}
		if(a<b)
		{
			c=b%a;
			b=a;
			a=c;
			steps++;	// STEPS++ FOR ENTERING THE IF BELOW
			if(c==0)
			{
				cout<<"\n gcd is:" << b;
			}
		}
	}
	}
	cout<<"\n total steps : "<<steps<<"\n";
	return 0;
}

