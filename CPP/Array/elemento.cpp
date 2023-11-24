#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> list_music = {"Djavan", "Roberto Carlos", "Elis Regina", "Tom Jobim", "Milton Nascimento", "Chico Buarque", "Nara Leão", "Pitty", "Simonal", "Moacir Santos", "Caetano Veloso", "Elza Soares", "Paulinho da Viola", "Yamandú Costa", "Gal Costa"};
        size_t qtd_element = list_music.size();
        string dado_indice_2 = list_music[2];
        string dado_indice_9 = list_music[9];
        string dado_indice_14 = list_music[14];

        cout << "Quantidade de elementos: " << qtd_element << std::endl;
        cout << "Dado no índice 2: " << dado_indice_2 << std::endl;
        cout << "Dado no índice 9: " << dado_indice_9 << std::endl;
        cout << "Dado no índice 14: " << dado_indice_14 << std::endl;
    return 0;
}