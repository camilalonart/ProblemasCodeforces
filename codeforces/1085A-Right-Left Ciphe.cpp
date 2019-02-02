
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string encrypted, word = "";
    cin >> encrypted;
    int n, pos;
    n = encrypted.size();
    n % 2 == 0 ? pos = (n/2)-1 : pos = n/2;
    word += encrypted.at(pos);
    for(int i = 1; i < n; i++){
        i%2==0 ? pos-=i : pos+=i;
        word += encrypted.at(pos);
    }
    cout << word;
    return 0;
}


