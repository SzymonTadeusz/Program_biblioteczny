#pragma once
#include <vector>
#include <list>
#include <iostream>

#include "Egzemplarz.h"
using namespace std;
class Ksiazka {
	friend class KonektorDB;

private:
	char ISBN[15];
	std::string Tytul;
	std::string Autor;
	int RokWydania;
	std::string Wydawnictwo;
	std::string Opis;
	std::string Typ;
	std::string Gatunek[5];
	Egzemplarz ListaEgz[20];
	std::vector<Egzemplarz> ListaEgz2;
	std::string PierwszyRozdz;
public:
	string getTytul();
	string getAutor();
	string getPierwszyRozdzial();

	void WyswietlKsiazke();
	void WyswietlRozdzial();
	Ksiazka();
	Ksiazka(char[], string, string, int, string);
	Ksiazka(char[], string, string, int, string, string, string, string);
	Ksiazka(char[], string, string, int, string, string, string, string[], vector<Egzemplarz>, string);
	~Ksiazka();
};
