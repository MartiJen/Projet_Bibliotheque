#include "AjouterLivreView.h"
#include "Auteur.h"
#include <iostream>
using namespace std;

AjouterLivreView::AjouterLivreView(const shared_ptr<Controller>& controller) 
	: controller(controller) {}

void AjouterLivreView::afficher() {
	string titre;
	string nomAuteur;

	cout << "Entrez le titre du livre : ";
	getline(cin, titre);
	cout << "Entrez le nom de l'auteur : ";
	getline(cin, nomAuteur);

	shared_ptr<Auteur> auteur = controller->chercherAuteurParNom(nomAuteur);
	if (!auteur) {
		auteur = make_shared<Auteur>(nomAuteur);
		controller->ajouterAuteur(nomAuteur);
		controller->ajouterLivre(titre, auteur);
		cout << "Le livre \"" << titre << "\" de l'auteur " << nomAuteur << " a été ajouté avec succès.\n";
	}
	else {
		controller->ajouterLivre(titre, auteur);
		cout << "Le livre \"" << titre << "\" de l'auteur " << nomAuteur << " a été ajouté avec succès.\n";
	}
}