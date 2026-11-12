#include <iostream>
#include <string>

#define MAX 10

using namespace std;

struct Usuario {
    int MatriculadoUsuario;
    string nome;
    string tipo;
};

struct Livro {
    int CodigoLivro;
    string Titulodolivro;
    string Autor;
    string Edicao;
};


void mostrarMenu() {
    cout << "----------------------- MENU -----------------------\n";
    cout << "1 - para Cadastrar Usuario.\n";
    cout << "2 - para Cadastrar Livro.\n";
    cout << "3 - para Mostrar Usuarios cadastrados.\n";
    cout << "4 - para Mostrar Livros cadastrados.\n";
    cout << "5 - para Buscar livros por usuarios.\n";
    cout << "6 - para Relatorio Geral.\n";
    cout << "0 - para sair.\n";
    cout << "----------------------------------------------------\n\n";
    cout << "Digite sua opcao: ";
}

void cadastrarUsuario (Usuario vet[], int i) {
    cout << "\n--- Cadastro Usuario ---\n";
    cout << "Digite a matricula: ";
    cin >> vet[i].MatriculadoUsuario;
    cin.ignore();
    cout << "Digite o nome: ";
    getline(cin, vet[i].nome);
    cout << "Digite o tipo: ";
    cin >> vet[i].tipo;
}

void CodigoLivro (Livro vet[], int i) {
    cout << "\n--- Cadastro Livro ---\n";
    cout << "Digite o codigo do livro: ";
    cin >> vet[i].CodigoLivro;
    cin.ignore();
    cout << "Digite o Titulo do livro: ";
    getline(cin, vet[i].Titulodolivro);
    cout << "Digite a autor do livro: ";
    cin >> vet[i].Autor;
    cout << "Digite a edicao do livro: ";
    cin >> vet[i].Edicao;
}

void ListarUsuarios (Usuario vet[], int n) {
    cout << "\n=== Listar usuarios ===\n";
    for (int i = 0; i < n; i++) {
        cout << "---------------------------------\n";
        cout << "Matricula: " << vet[i].MatriculadoUsuario << endl;
        cout << "Nome: " << vet[i].nome << endl;
        cout << "Tipo: " << vet[i].tipo << endl;
    }
    if (n == 0) cout << "Nenhum funcionario cadastrado.\n";
    cout << "---------------------------------\n";
}

void LsitarLivros (Livro vet[], int n) {
    cout << "\n=== Listar livros ===\n";
    for (int i = 0; i < n; i++) {
        cout << "---------------------------------\n";
        cout << "Livro: " << vet[i].Titulodolivro << endl;
        cout << "Autor: " << vet[i].Autor << endl;
        cout << "Edicao: " << vet[i].Edicao << endl;
    }
    if (n == 0) cout << "Nenhum funcionario cadastrado.\n";
    cout << "---------------------------------\n";
}






    return 0;
    }

