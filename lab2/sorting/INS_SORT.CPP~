#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,temp,steps=0;
a[0]=-1;
cout<<"\nEnter no of elements in A ";
cin>>n;
for(i=1;i<=n;i++)
{
	cout<<"\nEnter no ";
	cin>>a[i];
}
cout<<"\n\n";
for(i=1;i<=n;i++)
cout<<" "<<a[i];

for(i=1;i<=n;i++)
{
	j=i-1;
	temp=a[i];
	steps++;
	while(temp<a[j])
	{	steps++;
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}
cout<<"\n\n";
for(i=1;i<=n;i++)
cout<<" "<<a[i];
cout<<"\n total no of steps: "<<steps;
return 0;
}
