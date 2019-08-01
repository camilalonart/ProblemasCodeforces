#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string ans="";
    if(s.at(8)=='P'){
        if(s.at(0)=='1'&&s.at(1)=='2'){
            ans="00:00:00";
        }
       int n = stoi(s.substr (0,2)) + 12;
       ans=to_string(n) + s.substr (2,6);
    }else{
        ans=s.substr (0,8);
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
