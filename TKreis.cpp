#include "TKreis.hpp"

TKreis::TKreis() {
    TPunkt p;
    setCenter(p);
    setRadius(0.0);
}

TKreis::TKreis(TPunkt center, double radius) {
    this->center = new TPunkt(center);
    this->radius = radius;
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

void TKreis::setAnzeige(Anzeige* anzeige){
    this->anzeige = anzeige;
}

ostream& operator<<(ostream& os, const TKreis& tk){
    return os << "Mittelpunkt: " << tk.getCenter() << ", Radius: " << tk.getRadius();
}