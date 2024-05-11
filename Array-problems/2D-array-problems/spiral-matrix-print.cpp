// spiral matrix print
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int> > matrix;

    // take matrix input

    for (int i = 0; i < row; i++)
    {
        vector<int> temp;

        for (int j = 0; j < col; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    // create a result vector to store the spiral matrix

    vector<int> result;

    int top = 0, bottom = row - 1, left = 0, right = col - 1;
    int direction = 0;

    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                result.push_back(matrix[top][i]);
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        else if (direction == 3)
        {
            for (int i = bottom; i >= top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }

    // print the result vector using iterator

    for (int i : result)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

