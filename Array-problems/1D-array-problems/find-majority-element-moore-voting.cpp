#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int count = 0;
    int element;

    for (int i : v)
    {
        if (count == 0)
        {
            count = 1;
            element = i;
        }
        else if (element == i)
            count++;
        else
            count--;
    }

    count = 0;

    for (int i : v)
    {
        if (i == element)
            count++;
    }

    if (count > n / 2)
        cout << element << endl;
    else
        cout << "No majority element" << endl;

    return 0;
}

