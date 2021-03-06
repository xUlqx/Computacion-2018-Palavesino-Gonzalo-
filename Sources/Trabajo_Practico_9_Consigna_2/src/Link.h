/*
 * Link.h
 *
 *  Created on: 11 jun. 2018
 *      Author: Gonzalo Palavesino
 */

#ifndef LINK_H_
#define LINK_H_
#include "LinkNode.h"

class Link {
private:
	LinkNode* start;
public:
	Link();
	void add(Materia*);
	bool remove(Materia*);
	void show();
	LinkNode* getStart();
	void setStart(LinkNode*);
};

#endif /* LINK_H_ */
