#ifndef LINKLISTCLASS_H_INCLUDED
#define LINKLISTCLASS_H_INCLUDED

#include <iostream>
#include "complexclass.h"

using namespace std;

struct node{

	comp C;
	node *next;

};

class linklist{

    private:

		node *head;

	public:

		linklist();

		void insert_at_start();
		void delete_at_start();
		void insert_at_end();
		void delete_at_end();
		void insert_at_mid(int n);
		void delete_at_mid(int n);
		void insert_at_start(comp a);
		void insert_at_end(comp a);
		void insert_at_mid(int n, comp a);
		void val_at_pos(int n);
		void traverse();

};

#endif // LINKLISTCLASS_H_INCLUDED
