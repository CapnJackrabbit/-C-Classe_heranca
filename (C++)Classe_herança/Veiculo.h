#pragma once
#include<iostream>

using namespace std;

class Veiculo
{

public:

	Veiculo()
	{
		//cout << "Ve�culo constru�do (Ve�culo)\n\n";
	}

	void ligar()
	{
		cout << "Ve�culo ligado\n";
	}

	void desligar()
	{
		cout << "Ve�culo desligado\n";
	}

	void acender_farois()
	{
		cout << "Far�is acesos\n";
	}

	void apagar_farois()
	{
		cout << "Far�is apagados\n";
	}
	
};

