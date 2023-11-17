#include "TKreis.hpp"

TKreis::TKreis() {
    TPunkt p;
    setCenter(p);
    setRadius(0.0);
}

void TKreis::initializeAnzeige() {
    anzeige = new Anzeige();
}

TKreis::TKreis(TPunkt center, double radius) {
    this->center = new TPunkt(center);
    this->radius = radius;
	initializeAnzeige();
}

void TKreis::setCenter(TPunkt center) {
    *this->center = center;
}

TPunkt TKreis::getCenter() const{
    return *center;
}

double TKreis::getRadius() const{
    return radius;
}

void TKreis::setRadius(double radius) {
    this->radius = radius;
}

double TKreis::rufeAnzeige() {
    return anzeige->flaeche(*this);
}

ostream& operator<<(ostream& os, const TKreis& tk){
    return os << "Mittelpunkt: " << tk.getCenter() << ", Radius: " << tk.getRadius();
}