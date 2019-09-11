#include <iostream>
#include <string>
using namespace std;
//美团后台开发第二题
int main()
{
    int n;
    string a = "A";
    string b = "B";
    string c = "C";
    while (cin >> n)
    {
        string res = "";
        int num_b = 0;
        int num_c = 0;
        int temp = 1;
        while (temp <= n)
        {
            if (temp % 2 == 1) {
                res = res + a;
                temp++;

            }
            else
            {
                if (num_b >= num_c) {
                    res = res + b;
                    num_c++;
                    temp++;

                }
                else
                {
                    res = res + c;
                    num_b++;
                    temp++;

                }

            }

        }
        cout << res << endl;


    }
    return 0;

}
