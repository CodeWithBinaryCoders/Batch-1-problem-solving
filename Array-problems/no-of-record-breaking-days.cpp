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

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int count = 0;
    int maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum && arr[i] > arr[i + 1])
            count++;
        
        maximum = max(maximum, arr[i]);
    }

    cout << count << endl;

    return 0;
}

