#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c,count=2,steps=0;	
	cout<<"\n enter the term upto which fibonacci series should be generated: ";
	cin>>n;
	while(count!=n)
	{
		c=a+b;
		a=b;
		b=c;
		count++;
		steps++;	// STEPS++ FOR ENTERING THE WHILE LOOP
	}
	cout<<" steps: "<<steps<<"\n";
	cout<<" nth term: "<<c<<"\n";
	return 0;
}
