#include "Bibliotheque.h"
using namespace std;

void Bibliotheque::ajouterLivre(const shared_ptr<Livre>& livre) {
	livres.push_back(livre);
}

void Bibliotheque::ajouterAuteur(const shared_ptr<Auteur>& auteur) {
	auteurs.push_back(auteur);
}

shared_ptr<Auteur> Bibliotheque::rechAuteurLivresDonnes(const string& titre) {
	for (const auto& livre : livres) {
		if (livre->getTitre() == titre) {
			return livre->getAuteur();
		}
	}
	return nullptr;
}

vector<shared_ptr<Livre>> Bibliotheque::rechLivresAuteurDonne(const string& nom) {
	vector<shared_ptr<Livre>> livresAuteur;
	for (const auto& livre : livres) {
		if (livre->getAuteur()->getNom() == nom) {
			livresAuteur.push_back(livre);
		}
	}
	return livresAuteur;
}

vector<shared_ptr<Livre>> Bibliotheque::chercherLivresParAuteur(const string& nomAuteur) const {
	vector<shared_ptr<Livre>> livresAuteur;
	for (const auto& livre : livres) {
		if (livre->getAuteur()->getNom() == nomAuteur) {
			livresAuteur.push_back(livre);
		}
	}
	return livresAuteur;
}

shared_ptr<Auteur> Bibliotheque::chercherAuteurParNom(const string& nom) const {
	for (const auto& auteur : auteurs) {
		if (auteur->getNom() == nom) {
			return auteur;
		}
	}
}

vector<shared_ptr<Livre>> Bibliotheque::getLivres() {
	return livres;
}