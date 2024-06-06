#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 2;
    int previousDifference = arr[1] - arr[0];
    int currentLength = 2;

    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == previousDifference)
            currentLength++;
        else
        {
            currentLength = 2;
            previousDifference = arr[i] - arr[i - 1];
        }

        ans = max(ans, currentLength);
    }

    cout << ans << endl;
    return 0;
}
