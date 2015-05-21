//
//  main.cpp
//  Mon Premier Programme
//
//  Created by Florian TREBES on 02/05/2015.
//  Copyright (c) 2015 TREBES. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "math.cpp"

using namespace std;

double afficherDemande(char var)
{
    double sortie;
    cout << "Taper la valeur de " << var << " :";
    cin >> sortie;
    return sortie;
}
int calcul()
{
    double a,b;
    a= afficherDemande('A');
    b= afficherDemande('B');
    double const somme(pow(a,b));
    cout <<somme;
    return 0;
}
int main()
{
    int const nombreNotes(5);
    int notes[nombreNotes];
    notes[0]=5;
    notes[1]=5;
    notes[2]=5;
    notes[3]=5;
    notes[4]=5;
    double moyenne;
    for(int i(0);i<nombreNotes;++i)
    {
        moyenne+=notes[i];
    }
    moyenne/=nombreNotes;
    cout << moyenne;
    return 0;

    
}

