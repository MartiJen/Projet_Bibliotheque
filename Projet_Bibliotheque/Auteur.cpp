#include "Auteur.h"
#include "Livre.h"

Auteur::Auteur(const string& nom) 
	: nom(nom) {}

const string& Auteur::getNom() const {
	return nom;
}

const vector<shared_ptr<Livre>>&  Auteur::getLivres() const {
	return livres;
}
