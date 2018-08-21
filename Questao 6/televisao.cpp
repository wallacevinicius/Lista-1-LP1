#include "televisao.h"

Televisao::Televisao(){
	this->volume = 0;
	this->canal = 0;
}

Televisao::~Televisao(){
	//nothing yet
}

void Televisao::aumentarVol(){
	this->volume++;
	if(this->volume > 100){
		volume = 100;
	}
}

void Televisao::diminuirVol(){
	this->volume--;
	if(this->volume < 0){
		volume = 0;
	}
}

void Televisao::passarCanal(){
	this->canal++;
	if(this->canal > 999){
		canal = 0;
	}
}

void Televisao::voltarCanal(){
	this->canal--;
	if(this->canal < 0){
		canal = 999;
	}
}

void Televisao::setCanal(int canal){
	this->canal = canal;
}

void Televisao::setVolume(int volume){
	this->volume = volume;
}

int Televisao::getVolume(){
	return this->volume;
}

int Televisao::getCanal(){
	return this->canal;
}