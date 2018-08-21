#include <iostream>
#include "televisao.h"

using namespace std;

int main(){
	Televisao *controle1 = new Televisao();
	Televisao *controle2 = new Televisao();

	controle1->setCanal(998);
	controle1->setVolume(99);

	controle2->setCanal(1);
	controle2->setVolume(2);

	cout << controle1->getCanal() << " - " << controle1->getVolume() << endl;
	cout << controle2->getCanal() << " - " << controle2->getVolume() << endl;

	controle1->aumentarVol(); //Passa a ser 100
	controle1->aumentarVol(); //Continua 100
	controle1->aumentarVol(); //Continua 100
	controle1->passarCanal(); //Passa a ser 999
	controle1->passarCanal(); //Passa a ser 0;

	controle2->diminuirVol(); //Passa a ser 1
	controle2->diminuirVol(); //Passar a ser 0
	controle2->diminuirVol(); //Continua 0
	controle2->diminuirVol(); //Continua 0
	controle2->voltarCanal(); //Passa a ser 0
	controle2->voltarCanal(); //Passa a ser 999

	cout << endl << controle1->getCanal() << " - " << controle1->getVolume() << endl;
	cout << controle2->getCanal() << " - " << controle2->getVolume() << endl;

	delete controle1;
	delete controle2;
}