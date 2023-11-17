#pragma once
#include "Anzeige.hpp"
#include "TPunkt.hpp"
class Anzeige;
class TLinie : public TPunkt {
	private:
		TPunkt p1;
		TPunkt p2;
		Anzeige* anzeige;
	public:
		TLinie();
		TLinie(TPunkt p1, TPunkt p2);
		void setP1(double x, double y);
		void setP2(double x, double y);
		TPunkt getP1() const;
		TPunkt getP2() const;
		double rufeAnzeige();
		friend ostream& operator<<(ostream& os, const TLinie& tl);
};
