#include <iostream>
#include <string>

using namespace std;
struct Filme{
    string titulo;
    double nota;
    string comentario;
    bool paraMenores;
};

const int NUMERO_FILMES = 5;

int main(int argc, const char * argv[]){
Filme filmes[NUMERO_FILMES];
    for (int i = 0; i < NUMERO_FILMES; i++)
    {
        cout << "Informe o nome do Filme " << i + 1 << ": " << endl;
        getline(cin, filmes[i].titulo);
        
        cout << "Informe a nota do filme de (0 a 10): " << endl;
        cin >> filmes[i].nota;
        
        //Limpa o bufer de nova linha.
        cin.ignore();
        cout << "Escreva um comentário sobre o filme: " << endl;
        getline(cin, filmes[i].comentario);
        
        cout << "Dê a sua opinião! O filme é aproriado para menodes de 18 anos? (SIM ou NÂO) " << endl;
        cin >> filmes[i].paraMenores;
        cin.ignore();
    }

        std::cout << "\n--- Avaliações dos Filmes ---\n";
        for (int i = 0; i < NUMERO_FILMES; ++i) {
            std::cout << "\nFilme " << i + 1 << ":\n";
            std::cout << "Título: " << filmes[i].titulo << "\n";
            std::cout << "Nota: " << filmes[i].nota << "\n";
            std::cout << "Comentário: " << filmes[i].comentario << "\n";
            std::cout << "Este filme é apropriado para menores de idade: " << (filmes[i].paraMenores ? "Sim" : "Não") << "\n";
        }
 
    return 0;
}
