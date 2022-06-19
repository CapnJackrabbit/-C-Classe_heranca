#pragma once
#include<iostream>

using namespace std;

class Veiculo
{

public:

	Veiculo()
	{
		//cout << "Veículo construído (Veículo)\n\n";
	}

	void ligar()
	{
		cout << "Veículo ligado\n";
	}

	void desligar()
	{
		cout << "Veículo desligado\n";
	}

	void acender_farois()
	{
		cout << "Faróis acesos\n";
	}

	void apagar_farois()
	{
		cout << "Faróis apagados\n";
	}
	
};

