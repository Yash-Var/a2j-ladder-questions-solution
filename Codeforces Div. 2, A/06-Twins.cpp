#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubbleSort(a, n);
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += a[i];
    }

    int sum = 0;
    int ram = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += a[i];
        temp -= a[i];

        ram++;
        if (sum == temp)
        {
            cout << ram + 1 << endl;
            break;
        }
        else if (sum > temp)
        {
            cout << ram << endl;
            break;
        }
    }
}