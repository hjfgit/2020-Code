#include <iostream>
#include <unordered_map>
#include <string>
//unordermap练习
using namespace std;
int main()
{

    unordered_map<int,string> un_map;
    int n;
    string s;
    cin >> n;
    while(n > 0)
    {
        cin >> s;
        un_map.insert(make_pair(n--,s));
    }
    for(auto i = un_map.begin(); i != un_map.end(); ++i){
        cout << i -> first << ":" << i -> second << endl;
    }
    cout << un_map.size() << endl;
    return 0;
}

