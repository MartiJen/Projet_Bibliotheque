#include "RechLivresAuteurDonneView.h"
#include <iostream>
using namespace std;

RechLivresAuteurDonneView::RechLivresAuteurDonneView (const shared_ptr<Controller>& controller) 
	: controller(controller) {}

void RechLivresAuteurDonneView::afficher() const {
	string nomAuteur;
	cout << "Entrez le nom de l'auteur : ";
	getline(cin, nomAuteur);
	controller->rechLivresAuteurDonne(nomAuteur);
	
	
	/*vector<shared_ptr<Livre>> livres = controller->rechLivresAuteurDonne(nomAuteur);
	if (!livres.empty()) {
		cout << "Voici les livres écrit par " << nomAuteur << " :\n";
		for (const auto& livre : livres) {
			cout << " - " << livre->getTitre() << "\n";
		}
	}
	else {
		cout << "Aucun livre par \"" << nomAuteur << "\" n'a trouvé.\n";
	}*/
}