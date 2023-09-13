#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &v, int temp)
{
    if (v.size() == 0 || v.top() <= temp)
    {
        v.push(temp);
        return;
    }

    int val = v.top();
    v.pop();
    insert(v, temp);
    v.push(val);
    return;
}
void sort(stack<int> &v)
{
    if (v.size() == 1)
        return;

    int temp = v.top();
    v.pop();
    sort(v);
    insert(v, temp);
    return;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        stack<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push(x);
        }

        sort(v);

        while (!v.empty())
        {
            cout << v.top() << " ";
            v.pop();
        }

        cout << endl;
    }


}