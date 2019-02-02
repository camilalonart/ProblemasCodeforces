#include <iostream>
#include <math.h>
using namespace std;
int cant(int plata, int contador);
int main() {
	int n;
	cin >> n;
	cout << cant(n,0);
	return 0;
}

int cant(int plata, int contador){
	if(plata==0)
		return contador;
	if(plata%100==0)
		cant(plata/100, contador+=plata/100);
	else if(plata%20==0)
		cant(plata/20, contador+=plata/20);
	else if(plata%10==0)
		cant(plata/10, contador+=plata/10);
	else if(plata%5==0)
		cant(plata/5, contador+=plata/5);
	else if(plata%1==0)
		cant(plata-1, contador++);
}