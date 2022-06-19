#pragma once
#include<iostream>
#include "Veiculo.h"

using namespace std;

class Carro : public Veiculo
{
private:
	float vel_max;
	float peso;
	string cor;

public:
	Carro(int codigo)
	{
		cout << "Veículo construído (Carro)\n\n";
		this->vel_max = 160;
		this->cor = "Vermelho";
		this->peso = 1300;
	}

	float get_peso()
	{
		return peso;
	}

	float get_vel()
	{
		return vel_max;
	}

	string get_cor()
	{
		return cor;
	}
};


