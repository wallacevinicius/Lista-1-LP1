#include <iostream>
#include "relogio.h"

using namespace std;

int main(){
	Relogio *ponteiro1 = new Relogio();
	Relogio *ponteiro2 = new Relogio();

	ponteiro1->setHorario(23, 59, 59);
	ponteiro2->setHorario(4, 45, 59);

	cout << ponteiro1->getHora() << ":" << ponteiro1->getMinuto() << ":" << ponteiro1->getSegundo() << endl;
	cout << ponteiro2->getHora()  << ":" << ponteiro2->getMinuto() << ":" << ponteiro2->getSegundo() << endl;

	ponteiro1->avancarHorario();
	ponteiro2->avancarHorario();

	cout << endl << "Avançar 1 segundo: " << endl;

	cout << ponteiro1->getHora() << ":" << ponteiro1->getMinuto() << ":" << ponteiro1->getSegundo() << endl;
	cout << ponteiro2->getHora()  << ":" << ponteiro2->getMinuto() << ":" << ponteiro2->getSegundo() << endl;
	
	delete ponteiro1;
	delete ponteiro2;
}