#include "linklistclass.h"

        linklist::linklist(){

			head = NULL;

		}

		void linklist::insert_at_start(){

			node *next = new node;

			next->C.user_input();

			next->next = head;
			head = next;

		}

		void linklist::delete_at_start(){

			node *temp;
			temp = head->next;
			delete head;
			head = temp;

		}

		void linklist::insert_at_end(){

			node *next = new node;

			next->C.user_input();

			next->next = NULL;
			node *temp;
			temp = head;

			while(!temp->next == NULL){
				temp = temp->next;
			}

			temp->next = next;

		}

		void linklist::delete_at_end(){

			node *c;
			node *p;
			c = head;

			while(c->next != NULL){
				p = c;
				c = c->next;
			}

			delete c;
			c = NULL;
			p->next = NULL;

		}

		void linklist::insert_at_mid(int n){

			node *next = new node;

			next->C.user_input();

			node *c;
			node *p;
			c = head;

			for(int i = 0; i < n; i++){
				p = c;
				c = c->next;
			}

			next->next = c;
			p->next = next;

		}

		void linklist::delete_at_mid(int n){

			node *c;
			node *p;
			c = head;

			for(int i = 0; i < n-1; i++){
				p = c;
				c = c->next;
			}

			p->next = c->next;
			delete c;
			c = NULL;

		}

		void linklist::val_at_pos(int n){

            node *temp;
            temp = head;

            for(int i = 0; i < n-1; i++){
				temp = temp->next;
			}

			temp->C.display();

		}

		void linklist::traverse(){

            node *temp;
			temp = head;

			while(temp != NULL){
				temp->C.display();
				temp = temp->next;
            }
			cout << endl;

		}

		void linklist::insert_at_start(comp a){

			node *next = new node;

			next->C = a;

			next->next = head;
			head = next;

		}

		void linklist::insert_at_end(comp a){

			node *next = new node;

			next->C = a;

			next->next = NULL;
			node *temp;
			temp = head;

			while(!temp->next == NULL){
				temp = temp->next;
			}

			temp->next = next;

		}

		void linklist::insert_at_mid(int n, comp a){

			node *next = new node;

			next->C = a;

			node *c;
			node *p;
			c = head;

			for(int i = 0; i < n; i++){
				p = c;
				c = c->next;
			}

			next->next = c;
			p->next = next;

		}
