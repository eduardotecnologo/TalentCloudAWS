//
//  main.cpp
//  calcularIMC
//
//  Created by edudeveloper on 08/11/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double peso, altura, imc;
    
    cout << "Digite o peso em quilograma!";
    cin >> peso;
    cout << "Digite a altura e metros!";
    cin >> altura;
    
    imc = peso / (altura * altura);
    
    cout << "Seu IMVC é:  " << imc << endl;
    
    if (imc < 18.5) {
            std::cout << "Você está abaixo do peso." << std::endl;
        } else if (imc < 25) {
            std::cout << "Seu peso está saudável." << std::endl;
        } else if (imc < 30) {
            std::cout << "Você está com sobrepeso." << std::endl;
        } else {
            std::cout << "Você está obeso." << std::endl;
        }
    return 0;
}
