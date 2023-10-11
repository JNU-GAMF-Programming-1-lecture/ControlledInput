#include <iostream>

using namespace std;

int main()
{
	int x;
	do
	{
		cout << "Enter an odd number: ";
		cin >> x;
	} while (x%2==0);
	return 0;
}