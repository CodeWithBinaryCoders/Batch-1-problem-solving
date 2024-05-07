#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int indexArraySize = 1e6 + 1;

    bool indexArr[indexArraySize]; // 10^6 + 1

    for (int i = 0; i < indexArraySize; i++)
        indexArr[i] = false;

    for (int i = 0; i < n; i++)
        if (arr[i] >= 0)
            indexArr[arr[i]] = true;

    for (int i = 0; i < indexArraySize; i++)
    {
        if (!indexArr[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
