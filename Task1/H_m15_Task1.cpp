
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 4;
    int mas[SIZE][SIZE]{};
    int num;
    int num_a;
    for (int i = 0; i < SIZE; i++)
    {
        for(int j = 0;j < SIZE;j++)
        {
            if (j == 0)//For the first number of each array
            {
                cout << "Press num: ";
                cin >> num;
                mas[i][j] = num;
            }
            if (j >= 1)
            {
                num_a = mas[i][0] * 2;//For the second number of each array
                mas[i][j] = num_a;
            }
            if (j >= 2)
            {
                num_a = mas[i][j - 1] * 2;//For the third+ number of each array
                mas[i][j] = num_a;
            }
        }
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}
