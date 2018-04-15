#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "master.h"

using namespace std;

template <class T>
void Linear_search(T *a, T element, int n)
{
	int z=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]== element)
			{
				z=1;
				cout<<"\n Element found at position = "<<i+1<<"\n\n";
			}
		else
		if(z!=1)
			{
				z=0;
			}
	}
	if(z==0)
	cout<<"\n Element not found in the list\n\n";
}

template <class T>
void Binary_search(T *a, T element, int n)
{
	int begin=0,end=n-1;
	int mid=begin+end/2;
	while((a[mid]!=element) && (n>0))
	{
		if(element>a[mid])
		begin=mid;
		else
		end=mid;
		mid=(begin+end)/2;
		n--;
	}

	if(a[mid]==element)
	cout<<"\n Element found at position = "<<mid+1<<"\n\n";
	else
	cout<<"\n Element not found in the list\n\n";

}
