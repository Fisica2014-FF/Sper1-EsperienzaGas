#include <iostream>
#include <cmath>

using namespace std;
int main() {
	
	//long double media = 0;
	long double x;
	long double somma_x = 0;
	long double somma_sigma2 = 0;
	long i = 0;
	while (cin >> x) {
		cin >> sigma_x;
		somma_x += x * 1 / (sigma_x * sigma_x);
		somma_sigma2 += 1 / (sigma_x * sigma_x);
		i++;
	}
	cout << somma_x / somma_sigma2 << endl;
	cout << sqrt(1 / somma_sigma2) << endl;
}
