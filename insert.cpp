#include <iostream>
using namespace std;
int main()
	{
		int num[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int i;
		int n = 10;
		int x;
		int pos;
		cout<<"The original array is: "<<endl;
		for (i=0; i<n; i++)
			{
				cout<<num[i]<<endl;
			}
		cout<<"Number to add: ";
		cin>>x;
		cout<<"Select position in the array: ";
		cin>>pos;
		
		for (i=10; i>=pos; i--)
			{
				num[i] = num[i-1];
			}
		num[i] = x;
		n++;
		cout<<"The new array is: "<<endl;
		for (i=0; i<n; i++)
			{
				cout<<num[i]<<endl;
			}
		return 0;
	}
