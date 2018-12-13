#include <iostream>
using namespace std;

int main() {
	int n; 
    cin >> n;
	
	int m = 0;
	for(int i = 0; i < n; i++) {
		int actual; 
        cin >> actual;
		m = max(m, actual);
	}
	puts(m == 1 ? "HARD" : "EASY");
	return 0;
}