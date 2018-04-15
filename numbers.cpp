#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "master.h"

using namespace std;


void Numbers::readnum()
{
    cout<<"\n Enter a valid number:"<<endl;
    cin>>num;
}

bool Numbers::checkarmstrong(int n)
{
	int temp,sum=0,digit;

	temp=n;
	while(temp>0)
	{
		digit=temp%10;
		sum=sum+(digit*digit*digit);
		temp=temp/10;
	}
	if(num==sum)
		return true;
	else
		return false;
}
bool Numbers::checkpalindrome(int n)
{
	int temp,rev=0,d;
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;

	}
	if(temp==rev)
		return true;
	else
		return false;

}
int Numbers::find_sum_of_digits(int n)
{
	int d,sum=0;
	while(n!=0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	return sum;
}
int Numbers::print_reverse_of_number(int n)
{
	int rev=0;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n=n/10;

	}
	return rev;
}
bool Numbers::checkprime(int n)
{
	int  i;
	bool isPrime = true;
	for(i = 2; i <= n / 2; ++i)
	  {
	      if(n % i == 0)
	      {
	          isPrime = false;
	          break;
	      }
	  }
	  return isPrime;
}
bool Numbers::checkperfect(int n)
{
	int i=1,sum=0;
	while(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
	}

	if(sum==n)
		return true;
	else
		return false;
}
bool Numbers::checkeven(int n)
{
	int i;
	i=n%2;
	if(i==0)
		return true;
	else
		return false;
}
bool Numbers::checkamicable(int a,int b)
{
    int s=0,i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    if(s==b)
    {
        s=0;
        for(i=1;i<b;i++)
        {
            if(b%i==0)
            {
                s=s+i;
            }
        }
        if(s==a)
            return true;
        else
            return true;
    }
}
