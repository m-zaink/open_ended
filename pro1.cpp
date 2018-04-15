#include <iostream>
#include <stdlib>
#include <stdio>
using namespace std;
/*Generic sorts:Selection sort,Bubble sort,Insertion sort*/
template <class T>
class sorting
{
	T n;
	T a[n];
	public:
	void get_item()
	{
		cout<<"\n Enter the numbers of elements in array:"<<endl;
		cin>>n;
		cout<<"\n Enter the array elements:"<<endl;
		for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
	}


	void selction_sort()
	{
		T temp;
	
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
				}
		}
	}

	void buble_sort()
	{
		T temp;
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
				{
					if(a[j]>a[j+1])
						{
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
				}
		}
	}
	
	void insertion_sort()
	{
		T temp;
		int j;
	
		for(int i=1;i<n;i++)
		{
			tmp=a[i];
			j=i-1;
			while(tmp<a[j])
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=tmp;
		}
	}
	void display()
	{
		for(int i=0;i<n;i++)
			{
				cout<<a[i]<<endl;
			}

	}

};	
	
	

