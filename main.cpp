#include <iostream>
#include "matematicas.h"

using namespace std;


/*
extern "C" float suma(float a, float b);
extern "C" float resta(float a, float b);
extern "C" float multiplicar(float a, float b);
extern "C" float divide(float a, float b);

No "matematicas.h"
-------------------------------------------------------
extern "C"
{
float suma(float a, float b);
float resta(float a, float b);
float multiplicar(float a, float b);
float divide(float a, float b);
}

No "matematicas.h"
--------------------------------------------------------

Esta en "h"; This here in "h"->#include "matematicas.h"

*/


int main()
{
    float a, b;
    a = 4.5f;
    b = 0.7;
    cout << suma(a,b) << endl;
    cout << resta(a,b) << endl;
    cout << multiplicar(a,b) << endl;
    cout << divide(a,b) << endl;
    return 0;
}
