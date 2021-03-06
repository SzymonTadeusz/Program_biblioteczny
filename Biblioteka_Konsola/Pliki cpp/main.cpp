#include <iostream>
#include "../Pliki naglowkowe/Egzemplarz.h"
#include "../Pliki naglowkowe/Katalog.h"
#include "../Pliki naglowkowe/Ksiazka.h"
#include "../Pliki naglowkowe/MenadzerBiblioteki.h"
#include "../Pliki naglowkowe/KonektorDB.h"


using namespace std;
int main()
{
	Katalog* SciFi = new Katalog();
	Ksiazka*  AnM = new Ksiazka("12345-12345-A12", "Analiza calek z funkcji zespolonych zmiennej rzeczywistej", "Mariusz Jurkiewicz", 1994, "Krysicki & Wlodarski Studio",
		"-brak opisu-", "Fantastyczna literatura", "[...] Dowod (trywialny): Polozmy x rowne eps...");
	Ksiazka*  KsTestowa = new Ksiazka("12345678", "Ksiazka Testowa", "Piotr Naspirski", 2015, "Naspir Sp. Z. O. O.",
		"-brak opisu-", "Seria dla bystrzakow", "[...]");
	Ksiazka*  PCL_WK = new Ksiazka("98765-76543-C04", "Sterownik windy dla bystrzakow", "W. Kwiatkowski", 2009, "PWN",
		"-brak opisu-", "\"For dummies series\"", "Wykonanie sterowania windy towarowej wymaga znajomosci wielu\nzagadnien teoretycznych, poczawszy od rachunku rozniczkowego...");
	SciFi->DodajKsiazke(AnM);
	SciFi->DodajKsiazke(KsTestowa);
	SciFi->DodajKsiazke(PCL_WK);
	MenadzerBiblioteki* Menadzer = new MenadzerBiblioteki();
	Menadzer->DodajKatalog(SciFi);

	Menadzer->WyswietlMenuGlowne();	

	delete Menadzer;
	return 0;
}