g++ -c TPunkt.cpp -o output\TPunkt.o
g++ -c TLinie.cpp -o output\TLinie.o
g++ -c TRechteck.cpp -o output\TRechteck.o
g++ -c TKreis.cpp -o output\TKreis.o
g++ -c Anzeige.cpp -o output\Anzeige.o
g++ -c Main.cpp -o output\Main.o
g++ -std=c11 -Wall output\Anzeige.o output\TRechteck.o output\TKreis.o output\TPunkt.o output\TLinie.o output\Main.o
