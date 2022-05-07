#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    string main_string;
    cin >> main_string;
    transform(main_string.begin(), main_string.end(), main_string.begin(), ::tolower);
    main_string.erase(remove(main_string.begin(), main_string.end(), 'a'), main_string.end());
    main_string.erase(remove(main_string.begin(), main_string.end(), 'e'), main_string.end());
    main_string.erase(remove(main_string.begin(), main_string.end(), 'i'), main_string.end());
    main_string.erase(remove(main_string.begin(), main_string.end(), 'o'), main_string.end());
    main_string.erase(remove(main_string.begin(), main_string.end(), 'u'), main_string.end());
    main_string.erase(remove(main_string.begin(), main_string.end(), 'y'), main_string.end());

    int temp = main_string.size();
    int prodoct = temp * 2;
    for (int i = 0; i < prodoct; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            string ram = ".";
            //  main_string.insert(i,ram);
            main_string.insert(i, ram);
        }
    }

    cout << main_string;

    return 0;
}