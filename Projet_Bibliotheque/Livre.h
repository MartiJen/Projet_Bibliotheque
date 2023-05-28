#pragma once
#ifndef LIVRE_H
#define LIVRE_H

using namespace std;
#include <string>
#include<memory>

class Auteur;

class Livre {
public:
	Livre(const string& titre, const shared_ptr<Auteur>& auteur);
	const string& getTitre() const;
	const shared_ptr<Auteur>& getAuteur() const;

private:
	string titre;
	shared_ptr<Auteur> auteur;
};

#endif
