#include "Anzeige.hpp"

Anzeige::Anzeige(){}

double Anzeige::laenge(TLinie& tl){
	TPunkt tempPunkt = tl.getP1() - tl.getP2(); 
	double squaredsum = sqrt(pow(tempPunkt.getX(), 2) + pow(tempPunkt.getY(), 2));
	return squaredsum;
}

double Anzeige::flaeche(TKreis& tk){
	return PI * pow(tk.getRadius(),2);
}

double Anzeige::flaeche(TRechteck& tr){
	TLinie tl1(tr.getP1(), tr.getP2());
	TLinie tl2(tr.getP2(), tr.getP3());
	return laenge(tl1) * laenge(tl2);
}

