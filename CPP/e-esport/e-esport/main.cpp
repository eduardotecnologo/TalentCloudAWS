//
//  main.cpp
//  e-esport
//
//  Created by edudeveloper on 08/11/23.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string nomeEquipe;
    // insert code here...
    cout << "Digite o nome da equipe: ";
    getline(cin, nomeEquipe);
    
    for (int i = 1; i <= 5; i++)
    {
        cout << nomeEquipe << " - " << i <<endl;
    }
    return 0;
}
/*
 Digite o nome da equipe: Os Lutadores
 Os Lutadores - 1
 Os Lutadores - 2
 Os Lutadores - 3
 Os Lutadores - 4
 Os Lutadores - 5
 Program ended with exit code: 0
 */
