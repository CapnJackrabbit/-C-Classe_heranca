#include <iostream>
#include "Veiculo.h"
#include "Carro.h"
#include "Caminhao.h"
#include <locale.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int codigo = 1;

    Carro carro1(codigo);
    carro1.ligar();
    carro1.acender_farois();
    cout << "\nA cor do veículo é " << carro1.get_cor() <<"\n\n";
    cout << "A velocidade máxima é " << carro1.get_vel() << "\n\n";
    cout << "O peso do veículo é " << carro1.get_peso() << "\n\n";
    cout << "____________________________________________________\n\n";
    
    Caminhao caminhao1(codigo);
    caminhao1.ligar();
    caminhao1.acender_farois();

}
