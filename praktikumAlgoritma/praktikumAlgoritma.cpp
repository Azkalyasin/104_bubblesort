
#include <iostream>
using namespace std;

int a[20];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan banyak element pada array";
		cin >> n;
		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray ddapat mempunyai maksimal 20 element/n";
		}
	}

	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; 1 < n; i++) {
		cout << "Data ke" << (1 + 1) << ": ";
		cin >> a[i];
	}
}












int main()
{
    std::cout << "Hello World!\n";
}

