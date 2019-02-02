#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,pos;
	string f,s;
	cin >> n >> f;
	pos = n - 1;
	for (int i = 0; i < n - 1; ++i) {
		if (f[i+1] < f[i]) {
			pos = i;
			break;
		}
	}
	s = f.substr(0, pos) + f.substr(pos + 1);
	cout << s;
	return 0;
}


/*#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, pos=-1;
    string s;
    cin >> n >> s;
    char mayor = 'A';
    for(int i = 0; i < n; i++){
        if(s.at(i) > mayor){
            mayor = s.at(i);
            pos = i;
        }
    }
    s.erase(pos,1); 
    cout << s;
    return 0;
}*/