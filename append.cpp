#include <iostream>
using namespace std;
int main()
	{
		int num[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int i;
		int n = 10;
		int x;

		for (i=0; i<n; i++)
			{
				cout<<num[i]<<endl;
			}
		cout<<"Number to add: ";
		cin>>x;
		system("cls");
		for (i=0; i<n; i++)
			{
				cout<<num[i]<<endl;
			}
		cout<<x<<endl;
		return 0;
	}
