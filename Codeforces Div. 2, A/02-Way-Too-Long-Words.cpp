#include <iostream>

using namespace std;

int main()
{
        int n;
        cin >> n;
        while (n--)
        {
                string str;
                cin >> str;
                int temp = str.size();
                if (temp <= 10)
                {
                        cout << str << endl;
                }
                else
                {
                        int value = str.size() - 2;
                        cout << str[0] << value << str[str.size() - 1] << endl;
                }
        }
        return 0;
}