#include <iostream>
#include <string>
using namespace std;
void rotateString(string &str, int offset) {
    // write your code here
    // lintcode 旋转字符串，从后往前替换，每次把所有元素后移一个位置。循环到offset 为0；
    int space = str.size();
    if(offset == 0 || space == 1 || space ==0) return ;
    offset %= space;
    for(int i = 1; i <= offset; i++){
        char a = str[0];
        for(int j =space-1; j >0;--j)
        {
            str[(j+1)%space]= str[j];
        }
        str[1] = a;
        std::cout << i << ":" << str << std::endl;
    }
}
int main()
{
    string s;
    int n;
    while(std::cin >> s >> n){
        rotateString(s,n);
    }

    return 0;
}

