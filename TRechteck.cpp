#include "TRechteck.hpp"

TRechteck::TRechteck(/* args */){
    
}

TRechteck::TRechteck(TPunkt tp1,TPunkt tp2,TPunkt tp3,TPunkt tp4){
    this->tp1 = tp1;
    this->tp2 = tp2;
    this->tp3 = tp3;
    this->tp4 = tp4;
}
 TPunkt TRechteck::getP1() const{
    return tp1;
}
TPunkt TRechteck::getP2() const{
    return tp2;
}
TPunkt TRechteck::getP3() const{
    return tp3;
}
TPunkt TRechteck::getP4() const{
    return tp4;
}
void TRechteck::setP1(TPunkt tp1){
    this->tp1 = tp1;
}
void TRechteck::setP2(TPunkt tp2){
    this->tp2 = tp2;
}
void TRechteck::setP3(TPunkt tp3){
    this->tp3 = tp3;
}
void TRechteck::setP4(TPunkt tp4){
    this->tp4 = tp4;
}

double TRechteck::rufeAnzeige(){
    return anzeige->flaeche(*this);
}

void TRechteck::setAnzeige(Anzeige* anzeige){
    this->anzeige = anzeige;
}

ostream& operator<<(ostream& os, const TRechteck& tr){
	return os << "P1:" << tr.getP1() <<", P2:" << tr.getP2() <<", P3:" << tr.getP3() <<", P4:" << tr.getP4();
}