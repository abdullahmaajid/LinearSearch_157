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
	LinearSearch();
	input();
	
}