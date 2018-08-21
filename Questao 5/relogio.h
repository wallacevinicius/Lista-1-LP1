#ifndef RELOGIO_H_
#define RELOGIO_H_
#include <iostream>

class Relogio{
	private:
		int hora;
		int minuto;
		int segundo;
	public:
		Relogio();
		virtual ~Relogio();
		void setHorario(int, int, int);
		int getHora();
		int getMinuto();
		int getSegundo();
		void avancarHorario();
};

#endif