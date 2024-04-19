#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];


    int indexArraySize = 1e6 + 1;
    int indexArr[indexArraySize]; // 10^6 + 1
    for (int i = 0; i < indexArraySize; i++)
        indexArr[i] = -1;

    int minIndex = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (indexArr[arr[i]] != -1)
            minIndex = min(minIndex, indexArr[arr[i]]);
        else
            indexArr[arr[i]] = i;
    }

    if (minIndex == INT_MAX)
        cout << "-1";
    else
        cout << minIndex;

    return 0;
}