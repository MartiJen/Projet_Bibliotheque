#include "Livre.h"
#include "Auteur.h"
using namespace std;

Livre::Livre(const string &titre, const shared_ptr<Auteur>& auteur) 
	: titre(titre), auteur(auteur) {}

const string& Livre::getTitre() const {
	return titre;
}

const shared_ptr<Auteur>& Livre::getAuteur() const {
	return auteur;
}