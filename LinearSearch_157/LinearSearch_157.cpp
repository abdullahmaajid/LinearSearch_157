#include <iostream>
using namespace std;

int arr[20];																					// Array to be searched
int n;																							// Number of element in the array
int i;																							// Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\n Array should have minimum 1 amd maximum 20 element. \n\n";
	}

	// Accept array elements
	cout << "\n-------------------\n";
	cout << " Enter array element \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int comparison;																				// Number of Comparisons

	do
	{
		// Accept the number to eb searched
		cout << "\n Enter element array  you want tp search : ";								// Langkah 1
		int item;
		cin >> item;

			comparison = 0;
			for (i = 0; i < n; i++)																// Langkah 2,3,4	
			{
				comparison++;
				if (arr[i] == item)																// Lnagkah 5 a found
				{
					cout << "\n" << item << " Found at position " << (i + 1) << endl;
					break;
				}
			}

			if (i == n)																			// Langkah 5 b not found
				cout << "\n" << item << " Not found in the array \n";
			cout << "\n Number of comparisons : " << comparison << endl;

			cout << "\n Continue sear (y/n); ";
			cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}


#include <iostream> 
#include <algorithm>

using namespace std;

int main() {

	// Masukkan Jumlah Array yang telah ditentukan

	//5+7+1+2+20-20+10+2+3+5
	int jed = 30;
	int arr[jed];

	// Mengisi array dengan angka secara otomatis
	for (int i = 0; i < jed; i++) {
		arr[i] = i;
	}

	//INPUT//

	// Meminta input angka yang ingin dicari
	int x;
	cout << "Masukkan angka yang ingin dicari: ";
	cin >> x;

	//ALGORITHM//

	// Melakukan binary search

	//lowerbond = abdullah
	//upperbond = maajid

	int abdullah = 0;
	int maajid = jed - 1;
	while (abdullah <= maajid) {
		int mid = (abdullah + maajid) / 2;


		if (arr[mid] == x) {
			cout << "Angka ditemukan pada indeks ke-" << mid << endl;
			return 0;
		}
		else if (x < arr[mid]) {
			maajid = mid - 1;
		}
		else {
			abdullah = mid + 1;
		}
	}

	cout << "Angka tidak ditemukan dalam array" << endl;
	return 0;
}