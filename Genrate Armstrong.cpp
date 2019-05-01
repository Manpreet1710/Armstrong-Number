
#include<iostream>
using namespace std;
int main()
{

	int num1, num2, i, n, rem, temp, count=0;
	//enter the interval (enter the two number)
	cout<<"Enter Starting Number : ";
	cin>>num1;
	cout<<"Enter Ending Number : ";
	cin>>num2;
	for(i=num1+1; i<num2; i++)
	{
		temp=i;
		n=0;
		while(temp!=0)
		{
			rem=temp%10;
			n = n + rem*rem*rem;
			temp=temp/10;
		}
		if(i==n)
		{
			cout<<i<<" ";
			count++;
		}
	}
	if(count==0)
	{
		cout<<"Armstrong number not found between the given interval";
	}
	return 0;
}
