#include <iostream>

using namespace std;

int main()
{
        int n;
        cin >> n;
        while (n--)
        {
                string st;
                cin >> st;
                int temp = st.size();
                if (temp <= 10)
                {
                        cout << st << endl;
                }
                else
                {
                        int value = st.size() - 2;
                        cout << st[0] << value << st[st.size() - 1] << endl;
                }
        }
        return 0;
}