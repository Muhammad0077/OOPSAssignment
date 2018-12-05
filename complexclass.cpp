#include "complexclass.h"

        comp::comp(): r(0), i(0){
        };

        comp::comp(double rpart, double ipart): r(rpart), i(ipart){
        };

        void comp::user_input(){

            cout << "Enter the r part: ";
            cin >> r;

            cout << "Enter the i part: ";
            cin >> i;

        }

        void comp::display(){

            if(i >= 0){
                cout << r << " + " << i << "j" << endl;
            }
            else{
                cout << r << i << "j" << endl;
            }
        }

        comp comp::add(comp a){

            comp ctemp;
            ctemp.r = r + a.r;
            ctemp.i = i + a.i;
            return ctemp;

        }

        comp comp::sub(comp a){

            comp ctemp;
            ctemp.r = r - a.r;
            ctemp.i = i - a.i;
            return ctemp;

        }

        comp comp::mul(comp a){

            comp ctemp;
            ctemp.r = (r * a.r) - (i * a.i);
            ctemp.i = (r * a.i) + (i * a.r);
            return ctemp;

        }

        comp comp::div(comp a){

            if(a.r == 0 && a.i == 0){
                throw 0;
            }

            comp ctemp;
            ctemp.r = ((r * a.r) + (i * a.i)) / ((a.r * a.r) + (a.i * a.i));
            ctemp.i = ((i * a.r) - (r * a.i)) / ((a.r * a.r) + (a.i * a.i));
            return ctemp;

        }
