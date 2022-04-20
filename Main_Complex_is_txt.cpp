#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include "Complex_txt.h"



int main()
{
    setlocale(LC_ALL, "ru");

   /* Complex a{ 2,3 };
    Complex b{ 4,-5 };

    a.sum(b).print();
    a.ruz(b).print();
    a.proizv(b).print();
    a.del(b).print();*/

    int col = 0;
    vector <Complex> comp;
    vector <double> dbl;

    Complex c{ 0,0 };
    string str;
    ifstream fin;
    double a = 0;
    int l = 0;


      fin.open("c:\\Настя\\Проц прогр семестр 2\\Complex_is_txt\\Complex.txt");   
   
    if (fin.is_open())
    {
        while (getline(fin, str))
        {
            dbl.push_back(atof(str.c_str()));
        }
    }
  
    /*for (int i = 0; i < dbl.size(); i++)
    {
        cout << dbl[i] << " ";
    }*/

   
 /*   for (auto x : dbl)
    {
        cout << x << " ";
    }
    cout << endl;*/

    for (int i = 0; i < dbl.size(); i = i + 2)
    {
        c.re = dbl[i];
        c.im = dbl[i + 1];
        comp.push_back(c);

    }
   
    col = comp.size();
    cout << "Количество комплексных чисел: " << col << endl;;
    
   /* for (int i = 0; i < comp.size(); i++)
    {
        comp[i].print();
    }
    cout << endl;*/

    //for (int i = 0; i < comp.size(); i++) // проверка модулей
    //{
    //    cout << comp[i].modul() << " ";
    //}
    //cout << endl;

    for (int i = 0; i < comp.size(); i++)
    {

        if (a < comp[i].modul())
        {
            a = comp[i].modul();
            l = i;
        }
    }
    cout << "Число с макимальным модулем: ";
    comp[l].print();
    //cout << "Максимальный модуль равен " << a << endl;

    fin.close(); // закрываем файл

}