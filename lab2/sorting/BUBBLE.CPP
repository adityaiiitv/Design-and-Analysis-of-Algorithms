#include<iostream>
using namespace std;
int main()
{
int a[20],n,c,d,i,swap,steps=0;
cout<<"\nEnter no of elements in A ";
cin>>n;
for(i=0;i<n;i++)
{
	cout<<"\nEnter no ";
	cin>>a[i];
}
cout<<"\n\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];

	 for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {steps++;
      if (a[d] > a[d+1]) /* For decreasing order use < */
      {	steps+=3	;
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }
    }
  }
cout<<"\n\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];
cout<<"\n total no of steps :"<<steps;
return 0;
}
