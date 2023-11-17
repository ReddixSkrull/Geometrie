#include <iostream>

#include "TPunkt.hpp"
#include "TLinie.hpp"
#include "TKreis.hpp"
#include "TRechteck.hpp"

using namespace std;

int main(){
	TPunkt tp;
	tp.setX(2);
	tp.setY(2);
	cout << "TPunkt: "<< tp << endl;
	
	TPunkt tpA(2,1);
	TPunkt tpB(2,4);
	TLinie tl1(tpA, tpB);
	cout << "Linie " <<tl1 << endl;
	
	TPunkt kreisZentrum(1,2);
	TKreis tkreis(kreisZentrum,4.5);
	cout << "Kreis: " << tkreis << endl;

	TPunkt tp1(1,1);
	TPunkt tp2(1,5);
	TPunkt tp3(6,5);
	TPunkt tp4(6,1);
	TRechteck tr(tp1,tp2,tp3,tp4);
	cout << "Rechteck: " << tr << endl;

	cout << "Flaechen:" << endl; 
	cout << " - Linie laenge: " << "\t" << tl1.rufeAnzeige() << " LE²" << endl;
	cout << " - Kreis flaeche: "<< "\t" << tkreis.rufeAnzeige() << " LE²" << endl;
	cout << " - Rechteck flaeche: " << "\t" << tr.rufeAnzeige() << " LE²" << endl;
	return 0;
}
