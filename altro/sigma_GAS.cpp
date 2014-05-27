#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>      // std::stringstream

using namespace std;
int main(int numParam, char * args[]) {
	
	//long double media = 0;
	long double somma_tre, somma_quad = 0;
	long double uno,due,tre = -1;
	vector<long double> dati;
	long long n = 0;

	string riga;
	
	while (getline(cin,riga) ) {
		stringstream sriga;
		sriga << riga;
		
		//Outputtiamo i risultati
		if (riga == "@") {
			cerr << "Riga con @";
			
			//Media
			long double media = somma_tre / n;
			cerr << media << endl;
			
			for (double dato : dati)
				somma_quad += (dato - media) * (dato - media);
			long double errore = sqrt( somma_quad / (n - 1) );
			
			if (errore > 0.00000001)
			  cout << errore << endl;
			
			uno = -INFINITY;
			due = -INFINITY;
			tre = -INFINITY;
			somma_tre = 0;
			somma_quad = 0;
			dati.clear();
			n = 0;
			continue;
		} else {
		
		sriga >> uno >> due >> tre;
		somma_tre += tre;
		dati.push_back(tre);
		n++;
		}
	}
}
