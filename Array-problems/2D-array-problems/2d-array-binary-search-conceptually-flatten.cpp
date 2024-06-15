#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int> > matrix;

    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            int value;
            cin >> value;
            temp.push_back(value);
        }
        matrix.emplace_back(temp);
    }

    int key;
    cin >> key;

    int low = 0, high = row * col - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int calculatedRow = mid / col;
        int calculatedCol = mid % col;

        if (matrix[calculatedRow][calculatedCol] == key)
        {
            cout << 1 << endl;
            return 0;
        }
        else if (matrix[calculatedRow][calculatedCol] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;
}
// Time Complexity: O(log(row * col))
