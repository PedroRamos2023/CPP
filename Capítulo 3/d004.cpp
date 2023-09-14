#include <iostream>
#include <string>
using namespace std;

int main() {
    string tipoAutomovel;
    int numeroFinalPlaca;
    int diaLimite;

    cout << "Digite o tipo de automóvel (carro ou camihão): ";;
    cin >> tipoAutomovel;

    cout << "Digite o número final da placa: ";
    cin >> numeroFinalPlaca;

    if(tipoAutomovel == "carro" || tipoAutomovel == "Carro" || tipoAutomovel == "CARRO") {
        if(numeroFinalPlaca >= 1 && numeroFinalPlaca <= 3) {
            diaLimite = 30;
        } else if(numeroFinalPlaca >= 4 && numeroFinalPlaca <= 6) {
            diaLimite = 15;
        } else {
            diaLimite = 0;
        }
    } else if(tipoAutomovel == "caminhao" || tipoAutomovel == "Caminhao" || tipoAutomovel == "CAMINHAO") {
        if(numeroFinalPlaca >= 1 && numeroFinalPlaca >= 2) {
            diaLimite = 30;
        } else if(numeroFinalPlaca >= 3 && numeroFinalPlaca <= 4) {
            diaLimite = 15;
        } else {
            diaLimite = 0;
        }
    } else {
        cout << "Tipo de automóvel inválido." << endl;
        return 1;
    }

    if(diaLimite > 0) {
        cout << "O licenciamento deve ser feito até o dia " << diaLimite << " do mês atual." << endl;
    } else {
        cout<< "O licenciamento não precisa ser feito este mês." << endl;
    }

    return 0;
}