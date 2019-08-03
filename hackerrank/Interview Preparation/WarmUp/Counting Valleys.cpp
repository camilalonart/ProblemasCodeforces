#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int l = 0;
    int c=0;
    for(int i = 0; i <n;i++){
        int la = l;
        if(s.at(i)=='U'){
            l++;
        }else{
            l--;
        }
        if(la == -1 && l == 0){
            c++;
        }
    }
    return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
