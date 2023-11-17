#pragma once
#include "TLinie.hpp"
#include "TKreis.hpp"
#include "TRechteck.hpp"
#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

class TLinie;
class TKreis;
class TRechteck;
class Anzeige{
	public:
		Anzeige();
		double laenge(TLinie& tl);
		double flaeche(TKreis& tk);
		double flaeche(TRechteck& tr);
	private:
		const double PI  =3.141592653589793238463;	
};
