// reduce an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }

    vector<pair<int, int> > result;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        p.first = v[i];
        p.second = i;

        result.push_back(p);
    }

    sort(result.begin(), result.end());

    for (int i = 0; i < n; i++)
        v[result[i].second] = i;

    for (int i : v)
        cout << i << " ";

    cout << endl;

    return 0;
}
