#include "TPunkt.hpp"

	TPunkt::TPunkt() {
	    setX(0);
	    setY(0);
	}
	
	TPunkt::TPunkt(double x, double y) {
	    setX(x);
	    setY(y);
	}
	
	double TPunkt::getX() const {
	    return x;
	}
	
	double TPunkt::getY() const {
	    return y;
	}
	
	void TPunkt::setX(double x) {
	    this->x = x;
	}
	
	void TPunkt::setY(double y) {
	    this->y = y;
	}
	
	TPunkt operator-(TPunkt const& p1, TPunkt const& p2) {
	    return TPunkt{p1.getX() - p2.getX(), p1.getY() - p2.getY()};
	}

	ostream& operator<<(ostream& os,const TPunkt& tp){
		return os << "(" << tp.getX() << ";" << tp.getY() << ")";
	}


