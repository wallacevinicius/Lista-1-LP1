#include "relogio.h"

Relogio::Relogio(){
	this->hora = 0;
	this->minuto = 0;
	this->segundo = 0;
}

Relogio::~Relogio(){
	//nothing yet
}

void Relogio::setHorario(int hora, int minuto, int segundo){
	this->hora = hora;
	this->minuto = minuto;
	this->segundo = segundo;
}

int Relogio::getHora(){
	return this->hora;
}

int Relogio::getMinuto(){
	return this->minuto;
}

int Relogio::getSegundo(){
	return this->segundo;
}

void Relogio::avancarHorario(){
	if(segundo < 59){
		segundo++;
	}

	if(segundo == 59){
		segundo = 0;
		if(minuto == 59){
			minuto = 0;
			hora++;
		}else{
			minuto++;
		}
	}

	if(hora > 23){
		hora = 0;
	}
}