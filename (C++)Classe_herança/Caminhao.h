#pragma once
#include <iostream>
#include "Veiculo.h"

using namespace std;

class Caminhao : public Veiculo
{
private:
	float vel_max;
	float peso;
	string cor;

public:
	Caminhao(int codigo)
	{
		cout << "Veículo construído (Caminhão)\n\n";
		this->vel_max = 150;
		this->peso = 14500;
		this->cor = "Azul";
	}

	float get_vel()
	{
		return vel_max;
	}

	float get_peso()
	{
		return peso;
	}

	string get_cor()
	{
		return cor;
	}
};

