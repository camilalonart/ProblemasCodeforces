#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    //se encuentra cuantas a´s en aba
    //se multiplica por n/s.length() para ver cuantas veces la palabra cabe completa
    //se saca modulo de n % s.length() para saber la ultima repeticion de la palabra            cuantas letras alcanza a tener
    //substring hasta esa posicion
    //se le encuentran las a's y se suman a las otras
    int c = 0;
    if(s.at(0)=='a' && s.length()==1)
        return n;
    for(int i =0; i <s.length();i++){
        if(s.at(i)=='a'){
            c++;    
        }    
    }
    c = c* (n/s.length());
    int na = n % s.length();
    if(na !=0){
        string ultima = s.substr(0,na);
        for(int i =0; i <ultima.length();i++){
            if(ultima.at(i)=='a'){
                c++;    
            }    
        }
    }else{
        c+=na;
    }
    return c;
  
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
