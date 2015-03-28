#pragma once
#include <string>
#include <vector>
#include <list>
#include <iostream>

#include "Katalog.h"

class MenadzerBiblioteki
{
private:
	Katalog ListaKatalogow[10];

public:
	 // Funkcja WyswietlKatalogi wyswietla dostepne katalogi, np. beletrystykę, literaturę naukową itp.
	void WyswietlKatalogi();
	 //Funkcja WyswietlKatalog przyjmuje indeks Katalogu, dla obiektu w ListaKatalogow o danym indeksie wywoluje metode Katalog::WyswietlKatalog().
	void WyswietlKatalog(int indKat);
	void WyswietlKsiazke(int indKat, int indKsi);
	void WyswietlRozdzial(int indKat, int indKsi);
};
