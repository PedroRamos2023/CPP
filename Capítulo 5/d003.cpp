#include <iostream>
using namespace std;

int main()
{
    const int numProdutos = 5;
    string nomes[numProdutos];
    double valoresCompra[numProdutos];
    double valoresVenda[numProdutos];

    for(int i = 0; i < numProdutos; i++)
    {
        cout << "Informe o nome do produto " << i + 1 << ": ";
        cin >> nomes[i];
        cout << "Informe o valor de compra do produto " << i + 1 << ": ";
        cin >> valoresCompra[i];
        cout << "Informe o valor de venda do produto " << i + 1 << ": ";
        cin >> valoresVenda[i];
    }

    cout << "\nProdutos cadastrados:" << endl;
    for(int i = 0; i < numProdutos; i++)
    {
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: " << nomes[i] << endl;
        cout << "Valor de Compra: " << valoresCompra[i] << endl;
        cout << "Valor de Venda: " << valoresVenda[i] << endl;
        cout << endl;
    }

    return 0;
}