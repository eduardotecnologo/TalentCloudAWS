#include <iostream>
#include <string>

struct Filme {
    std::string titulo;
    double nota;
    std::string comentario;
    bool paraMenores;
};

const int NUMERO_FILMES = 5;

int main() {
    Filme filmes[NUMERO_FILMES];

    // Preenche as informações dos filmes
    for (int i = 0; i < NUMERO_FILMES; ++i) {
        std::cout << "Informe o título do filme " << i + 1 << ": ";
        std::getline(std::cin, filmes[i].titulo);

        std::cout << "Informe a nota do filme (0 a 10): ";
        std::cin >> filmes[i].nota;

        std::cin.ignore(); // Limpa o buffer do newline deixado pelo std::cin
        std::cout << "Adicione um comentário sobre o filme: ";
        std::getline(std::cin, filmes[i].comentario);

        std::cout << "O filme é apropriado para menores de idade? (1 para Sim, 0 para Não): ";
        std::cin >> filmes[i].paraMenores;

        std::cin.ignore(); // Limpa o buffer do newline deixado pelo std::cin
    }

    // Exibe as informações dos filmes
    std::cout << "\n--- Avaliações dos Filmes ---\n";
    for (int i = 0; i < NUMERO_FILMES; ++i) {
        std::cout << "\nFilme " << i + 1 << ":\n";
        std::cout << "Título: " << filmes[i].titulo << "\n";
        std::cout << "Nota: " << filmes[i].nota << "\n";
        std::cout << "Comentário: " << filmes[i].comentario << "\n";
        std::cout << "Apropriado para menores de idade: " << (filmes[i].paraMenores ? "Sim" : "Não") << "\n";
    }

    return 0;
}
