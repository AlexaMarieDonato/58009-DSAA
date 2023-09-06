#include <iostream>
using namespace std;
int main()
	{
		int num[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int i;
		int n = 10;
		int sum = 0;

		for (i=0; i<n; i++)
			{
				cout<<"num["<<i<<"]="<<num[i];
				sum +=num[i];
			}
		cout<<"The sum is: "<<sum;
		return 0;
	}
