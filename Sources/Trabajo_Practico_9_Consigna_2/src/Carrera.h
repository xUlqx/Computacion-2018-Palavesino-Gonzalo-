/*
 * Carrera.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#ifndef CARRERA_H_
#define CARRERA_H_
#include "Link.h"

class Carrera {

public:
	Carrera();
	Link* getMaterias();
	void setMaterias(Link*);
	void finalshow();

private:
	Link* materias;
};

#endif /* CARRERA_H_ */
