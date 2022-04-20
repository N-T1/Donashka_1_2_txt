#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct  Complex
{
    double re = 0;
    double im = 0;

    void print();

    Complex sum(Complex cmp);
    Complex ruz(Complex cmp);
    Complex proizv(Complex cmp);
    Complex del(Complex cmp);

    double modul();

};

//int col = 0;
//vector <Complex> comp;
//vector <double> dbl;
//
//Complex c{ 0,0 };
//string str;
//ifstream fin;
//double a = 0;



#endif