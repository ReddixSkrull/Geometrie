#pragma once
#include <iostream>
#include "TPunkt.hpp"
#include "Anzeige.hpp"

using namespace std;

class TRechteck {
private:
    TPunkt tp1;
    TPunkt tp2;
    TPunkt tp3;
    TPunkt tp4;
    Anzeige* anzeige;
public:
    TRechteck(/* args */);
    TRechteck(TPunkt tp1,TPunkt tp2,TPunkt tp3,TPunkt tp4);
    TPunkt getP1() const;
    TPunkt getP2() const;
    TPunkt getP3() const;
    TPunkt getP4() const;
    void setP1(TPunkt tp1);
    void setP2(TPunkt tp2);
    void setP3(TPunkt tp3);
    void setP4(TPunkt tp4);
    double rufeAnzeige();
    friend ostream& operator<<(ostream& os, const TRechteck& tr);
};


