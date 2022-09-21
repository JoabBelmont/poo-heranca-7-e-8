#include <iostream>
using namespace std;
#include "anfibio.h"

int main (){
    VeiculoAnfibio * v = new VeiculoAnfibio("900kg", "5", "Toyota");

    v->print();

    return 0;
}