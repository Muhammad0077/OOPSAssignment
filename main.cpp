#include <iostream>
#include "linklistclass.h"
#include "complexclass.h"
#include "linklistclass.cpp"
#include "complexclass.cpp"

using namespace std;

int main(){
    try{
        linklist l1;

        comp c1(4, 5);
        comp c2(3, -3);
        comp c3(4, 3);

        l1.insert_at_start(c1);
        l1.insert_at_end(c2);
        l1.insert_at_end(c3);
        l1.traverse();

        comp c4 = c1.add(c2);
        l1.insert_at_end(c4);
        l1.traverse();

        comp c5 = c1.sub(c3);
        l1.insert_at_end(c5);
        l1.traverse();

        comp c6 = c2.mul(c3);
        l1.insert_at_end(c6);
        l1.traverse();

        l1.delete_at_mid(4);
        l1.traverse();

        comp c7 = c1.div(c3);
        l1.insert_at_end(c7);
        l1.traverse();
    }

    catch(int num){
        cout << endl << "This complex number is not divisible." << endl;
    }
}
