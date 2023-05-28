#include "Controller.h"
#include "Bibliotheque.h"
#include "Livre.h"
#include "Auteur.h"
#include <iostream>
using namespace std;

Controller::Controller(const shared_ptr<Bibliotheque>& bibliotheque) 
	: bibliotheque(bibliotheque) {}

void Controller::ajouterLivre(const string& titre, const shared_ptr<Auteur>& auteur) {
	bibliotheque->ajouterLivre(make_shared<Livre>(titre, auteur));
}

void Controller::ajouterAuteur(const string& nom) {
	bibliotheque->ajouterAuteur(make_shared<Auteur>(nom));
}

void Controller::rechAuteurLivresDonnes(const string& titre) {
	shared_ptr<Auteur> auteur = bibliotheque->rechAuteurLivresDonnes(titre);
	if (auteur) {
		cout << "L'auteur du livre \"" << titre << "\" est " << auteur->getNom() << ".\n";
	}
	else {
		cout << "Aucun livre avec le titre \"" << titre << "\" n'a été trouvé.\n";
	}
}

void Controller::rechLivresAuteurDonne(const string& nomAuteur) {
	vector<shared_ptr<Livre>> livres = bibliotheque->rechLivresAuteurDonne(nomAuteur);
	if (!livres.empty()) {
		cout << "Livres écrits par " << nomAuteur << " :\n";
		for (const auto& livre : livres) {
			cout << " - " << livre->getTitre() << "\n";
		}
	}
	else {
		cout << "Aucun livre par \"" << nomAuteur << "\" n'a été trouvé. \n";
	}
}

shared_ptr<Auteur> Controller::chercherAuteurParNom(const string& nom) {
	return bibliotheque->chercherAuteurParNom(nom);
}

vector<shared_ptr<Livre>> Controller::getLivres() {
	return bibliotheque->getLivres();
}
