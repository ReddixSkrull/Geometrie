#pragma once
#include <iostream>

using namespace std;


class TPunkt {
private:
    double x;
    double y;

public:
    TPunkt();
    TPunkt(double x, double y);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    friend TPunkt operator-(TPunkt const& p1, TPunkt const& p2);
    friend ostream& operator<<(ostream& os,const TPunkt& tp);
};

