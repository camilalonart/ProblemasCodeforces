#include <iostream>
using namespace std;
int metodo(int num, int iter);
int main() {
	int n, k;
    cin >> n;
	cin >> k;
	cout<<metodo(n,k)<<endl;
	return 0;
}

int metodo(int num, int iter){
	if(iter==0)
		return num;
	if(num%10==0)
		metodo(num/10,iter-1);
	else{
		metodo(num-1,iter-1);
	}
}