#pragma once
#ifndef AUTEUR_H
#define AUTEUR_H

#include <string>
#include <vector>
#include <memory>
using namespace std;

class Livre;

class Auteur {

public:
	Auteur(const string& nom);

	const string& getNom() const;
	const vector<shared_ptr<Livre>>& getLivres() const;

private:
	string nom;
	vector<shared_ptr<Livre>> livres;
};


#endif