#ifndef COMPLEXCLASS_H_INCLUDED
#define COMPLEXCLASS_H_INCLUDED

using namespace std;

class comp {

    private:

        double r;
        double i;

    public:

        comp();
        comp(double realpart, double imaginarypart);
        void user_input();
        void display();
        comp add(comp a);
        comp sub(comp a);
        comp mul(comp a);
        comp div(comp a);

};

#endif // COMPLEXCLASS_H_INCLUDED
