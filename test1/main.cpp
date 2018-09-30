#include <iostream>
#include <stdio.h>

using namespace std;

const float pi = 3.14;
float fRad,farea;


int main()
{
    printf("r = ");
    scanf("%f", &fRad);
    farea = pi*fRad*fRad;
    printf("Area = %f\n", farea);
    cout << pi <<" "<< fRad <<" "<< farea;
}
