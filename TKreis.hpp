#pragma once
#include <iostream>
#include <cmath>
#include "TPunkt.hpp"
#include "Anzeige.hpp"

using namespace std;

class Anzeige;

class TKreis {
private:
    TPunkt* center;
    double radius;
    Anzeige* anzeige;
	void initializeAnzeige();
public:
    TKreis();
    TKreis(TPunkt center, double radius);
    void setCenter(TPunkt center);
    TPunkt getCenter() const;
    double getRadius() const;
    void setRadius(double radius);
    double rufeAnzeige();
    friend ostream& operator<<(ostream& os, const TKreis& tk);
};
