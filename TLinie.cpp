#include "TLinie.hpp"
TLinie::TLinie()
{
    setP1(0, 0);
    setP2(0, 0);
}

TLinie::TLinie(TPunkt p1, TPunkt p2)
{
    setP1(p1.getX(), p1.getY());
    setP2(p2.getX(), p2.getY());
}
void TLinie::setP1(double x, double y)
{
    p1.setX(x);
    p1.setY(y);
}
void TLinie::setP2(double x, double y)
{
    p2.setX(x);
    p2.setY(y);
}
TPunkt TLinie::getP1() const
{
    return p1;
}
TPunkt TLinie::getP2() const
{
    return p2;
}
double TLinie::rufeAnzeige()
{
    return anzeige->laenge(*this);
}

ostream& operator<<(ostream& os, const TLinie& tl){
    return os << "P1:" <<tl.getP1() << ", P2:" << tl.getP2();
}

void TLinie::setAnzeige(Anzeige* anzeige){
    this->anzeige = anzeige;
}