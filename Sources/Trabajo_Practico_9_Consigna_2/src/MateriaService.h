/*
 * MateriaService.h
 *
 *  Created on: 8 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#ifndef MATERIASERVICE_H_
#define MATERIASERVICE_H_
#include <iostream>
#include <fstream>

#include "Materia.h"
using namespace std;


class MateriaService {
public:
	void write(ofstream*, Materia*);
};

#endif /* MATERIASERVICE_H_ */
