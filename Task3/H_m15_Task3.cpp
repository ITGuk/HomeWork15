#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	int const SIZE = 6;
	int arr[SIZE][SIZE]{};
	int temp;
	int step;
	int vubir;
	cout << "Standart" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\t";
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	while (true)
	{
		cout << "\n\n\t\t1 - RIGHT | 2 - LEFT | 3 - DOWN | 4 - UP: ";
		cin >> vubir;
		cout << endl << endl;
		if (vubir == 1)
		{
			cout << "\t\tEnter the step: ";
			cin >> step;
			for (int i = step; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					temp = arr[j][0];
					for (int k = 0; k < SIZE; k++)
					{
						arr[j][k] = arr[j][k + 1];
					}
					arr[j][SIZE - 1] = temp;
				}
			}
		}

		if (vubir == 2)
		{
			cout << "\t\tEnter the step: ";
			cin >> step;
			for (int i = step; i > 0; i--)
			{
				for (int j = 0; j < SIZE; j++)
				{
					temp = arr[j][0];
					for (int k = 0; k < SIZE; k++)
					{
						arr[j][k] = arr[j][k + 1];
					}
					arr[j][SIZE - 1] = temp;
				}
			}
		}

		if (vubir == 3)
		{
			cout << "\t\tEnter the step: ";
			cin >> step;
			for (int i = step; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					temp = arr[0][j];
					for (int k = 0; k < SIZE; k++)
					{
						arr[k][j] = arr[k + 1][j];
					}
					arr[SIZE - 1][j] = temp;
				}
			}
		}

		if (vubir == 4)
		{
			cout << "\t\tEnter the step: ";
			cin >> step;
			for (int i = step; i > 0; i--)
			{
				for (int j = 0; j < SIZE; j++)
				{
					temp = arr[0][j];
					for (int k = 0; k < SIZE; k++)
					{
						arr[k][j] = arr[k + 1][j];
					}
					arr[SIZE - 1][j] = temp;
				}
			}
		}

		cout << "\n\n";

		cout << "Sorted" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << "\t";
			for (int j = 0; j < SIZE; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		break;
	}
}