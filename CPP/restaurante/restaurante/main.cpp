#include <iostream>

int main() {
    int numeroDePessoas;
    char fumante, animaisDeEstimacao;

    std::cout << "Quantas pessoas estão no grupo? ";
    std::cin >> numeroDePessoas;

    if (numeroDePessoas >= 5) {
        std::cout << "O grupo tem 5 ou mais pessoas, eles devem ser alocados no 1º andar." << std::endl;
    } else {
        std::cout << "O grupo tem menos de 5 pessoas." << std::endl;

        std::cout << "Algum membro do grupo é fumante? (S/N) ";
        std::cin >> fumante;

        std::cout << "Algum membro do grupo tem animais de estimação? (S/N) ";
        std::cin >> animaisDeEstimacao;

        if (fumante == 'S' || animaisDeEstimacao == 'S') {
            std::cout << "O grupo tem um fumante ou alguém com animais de estimação, eles devem ser alocados na área externa." << std::endl;
        } else {
            std::cout << "O grupo pode ser alocado no térreo." << std::endl;
        }
    }

    return 0;
}

/*Quantas pessoas estão no grupo? 5
O grupo tem 5 ou mais pessoas, eles devem ser alocados no 1º andar.
Program ended with exit code: 0
 ------------------------------------------------------------------
 Quantas pessoas estão no grupo? 2
 O grupo tem menos de 5 pessoas.
 Algum membro do grupo é fumante? (S/N) S
 Algum membro do grupo tem animais de estimação? (S/N) S
 O grupo tem um fumante ou alguém com animais de estimação, eles devem ser alocados na área externa.
 Program ended with exit code: 0
*/
