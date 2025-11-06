#include <iostream>
#include <queue>   // biblioteca para usar fila
#include <string>  // biblioteca para usar strings
using namespace std;

int main() {
    // Criação da fila
    queue<string> fila;

    // Inserção de 6 itens (exemplo: super-heróis)
    fila.push("Homem de Ferro");
    fila.push("Capitão América");
    fila.push("Thor");
    fila.push("Hulk");
    fila.push("Viúva Negra");
    fila.push("Gavião Arqueiro");

    cout << "=== Verificacao Inicial ===" << endl;
    cout << "Primeiro item da fila: " << fila.front() << endl;
    cout << "Ultimo item da fila: " << fila.back() << endl;
    cout << "Tamanho total da fila: " << fila.size() << endl;

    // Processamento FIFO: remover 2 itens
    cout << "\nRemovendo dois itens (FIFO)..." << endl;
    fila.pop();
    fila.pop();

    cout << "\n=== Verificacao Final ===" << endl;
    cout << "Novo primeiro item da fila: " << fila.front() << endl;
    cout << "Novo ultimo item da fila: " << fila.back() << endl;
    cout << "Novo tamanho da fila: " << fila.size() << endl;

    // Verificando se a fila está vazia
    cout << "\nA fila esta vazia? " << (fila.empty() ? "Sim" : "Nao") << endl;

    return 0;
}
----
