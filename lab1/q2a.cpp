#include<iostream>
using namespace std;
int main()
{	int size;
	cout<<"enter the size of the array: ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{arr[i]=i;}	
	// smallest
	int n=1,key=arr[0],pos=0,steps=0;
	while(n!=size-1)
	{	steps+=2;	// STEPS + = 2 DUE TO IF AND WHILE LOOP
		if(key<arr[n])
		{key=arr[n];pos=n;}
		n++;
	}
	cout<<"\n so for the smallest element no of steps: "<<steps;
	// largest
	n=1;
	key=arr[0],pos=0,steps=0;
	
	while(n!=size-1)
	{	steps+=2;	// STEPS + = 2 DUE TO IF AND WHILE LOOP
		if(key>arr[n])
		{key=arr[n];pos=n;}
		n++;
	}
	cout<<"\n so for the largest element no of steps: "<<steps;
	return 0;
}
