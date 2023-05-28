#include "MenuView.h"
#include "Auteur.h"
#include <iostream>
#include "AjouterLivreView.h"
#include "AjouterAuteurView.h"
#include "RechAuteurLivresDonnesView.h"
#include "RechLivresAuteurDonneView.h"
#include <cstdlib>
using namespace std;

MenuView::MenuView(const shared_ptr<Controller>& controller)
	: controller(controller) {}

void MenuView::afficherMenu() {
	while (true) {
		cout << "1. Ajouter un livre/BD\n"
			 << "2. Ajouter un auteur\n"
			 << "3. Rechercher l'auteur d'un livre donné\n"
			 << "4. Rechercher les livres d'un auteur donné\n"
			 << "5. Quitter\n"
			 << "Veuillez enter votre choix : ";
		int choix;
		cin >> choix;
		cin.ignore();

		switch (choix) {
		case 1:
			afficherAjouterLivre();
			break;
		case 2:
			afficherAjouterAuteur();
			break;
		case 3:
			afficherRechAuteurLivresDonnes();
			break;
		case 4:
			afficherRechLivresAuteurDonne();
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Choix invalide, veuillez réessayer.\n";
		}
	}
}

void MenuView::afficherAjouterLivre() {
	system("cls");
	AjouterLivreView view(controller);
	view.afficher();

	vector<shared_ptr<Livre>> livres = controller->getLivres();
	cout << "liste des livres :\n";
	for (const auto& livre : livres) {
		cout << livre->getTitre() << "\n";
	}
}

void MenuView::afficherAjouterAuteur() {
	system("cls");
	AjouterAuteurView view(controller);
	view.afficher();
}

void MenuView::afficherRechAuteurLivresDonnes() {
	system("cls");
	RechAuteurLivresDonnesView view(controller);
	view.afficher();
}

void MenuView::afficherRechLivresAuteurDonne() {
	system("cls");
	RechLivresAuteurDonneView view(controller);
	view.afficher();
}