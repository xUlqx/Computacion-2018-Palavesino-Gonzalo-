/*
 * QueueNode.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#ifndef QUEUENODE_H_
#define QUEUENODE_H_
#include "Alumno.h"
#include "Stack.h"

class QueueNode {
private:
	Alumno* value;
	Stack* stack;
	QueueNode* next;
public:
	QueueNode();
	QueueNode* getNext();
	void setNext(QueueNode*);
	Alumno* getValue();
	void setValue(Alumno*);
	Stack* getStack();
	void setStack(Stack*);
};

#endif /* QUEUENODE_H_ */
