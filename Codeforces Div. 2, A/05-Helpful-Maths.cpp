#include <bits/stdc++.h>
using namespace std;
string bubbleSort(string arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i = i + 2)

    {
        for (j = 0; j < n - i - 2; j = j + 2)
            if (arr[j] > arr[j + 2])
            {
                swap(arr[j], arr[j + 2]);
            }
        // cout<<arr<<endl;
    }
    return arr;
}
int main()
{
    string sl;
    cin >> sl;
    // cout<<sl<<endl;
    int temp = sl.size();
    // for(int i=0;i<temp;i=i+2){
    //         if(sl[i]>sl[i+2] && i+2<temp){
    //                 swap(sl[i],sl[i+2]);
    //         }
    // }
    sl = bubbleSort(sl, temp);
    cout << sl << endl;
}
