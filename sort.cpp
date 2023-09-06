#include <iostream>
using namespace std;
int main()
	{
		int num[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int i;
		int n = 10;
		cout<<"The original array is: "<<endl;
		for (i=0; i<n; i++)
			{
				cout<<num[i]<<endl;
			}
		cout<<"The reversed array is: "<<endl;
		for (i=(10-1); i>=0; i--)
			{
				cout<<num[i]<<endl;
			}
		return 0;
	}
