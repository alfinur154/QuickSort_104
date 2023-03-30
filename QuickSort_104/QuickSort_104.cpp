#include <iostream>
using namespace std;
using namespace

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	}
	cout << "\n____________________" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n____________________" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
	}	cin >> arr[i];
}	



