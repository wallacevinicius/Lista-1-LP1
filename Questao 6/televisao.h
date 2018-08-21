#ifndef TELEVISAO_H_
#define TELEVISAO_H_
#include <iostream>

class Televisao{
	private:
		int volume;
		int canal;
	public:
		Televisao();
		virtual ~Televisao();
		void aumentarVol();
		void diminuirVol();
		void passarCanal();
		void voltarCanal();
		void setCanal(int);
		void setVolume(int);
		int getVolume();
		int getCanal();
};

#endif