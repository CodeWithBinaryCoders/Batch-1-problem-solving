#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Dutch national flag algorithm
    int start = 0, mid = 0, end = n - 1;

    while (mid <= end)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid++], arr[start++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[end--]);
            break;
        }
    }

    for (int i : arr)
        cout << i << " ";

    cout << endl;

    return 0;
}
