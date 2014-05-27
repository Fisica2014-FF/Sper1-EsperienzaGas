//
//  Programma Moli.cpp
//  
//
//  Created by Simone Frau on 24/05/14.
//
//

#include <iostream>

using namespace std;

int main ()
{
    long double p,v,t = 0;
    
    while (cin >> p)
    {
	cin >> v;
	cin >> t;
        cout << ((0.117866775) * p) / ( v * (t + 273.15)) << endl;
    }
    
    return 0;
}
