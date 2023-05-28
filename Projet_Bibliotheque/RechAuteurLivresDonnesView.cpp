#include "RechAuteurLivresDonnesView.h"
#include <iostream>
using namespace std;

RechAuteurLivresDonnesView::RechAuteurLivresDonnesView(const shared_ptr<Controller>& controller) 
	: controller(controller) {}

void RechAuteurLivresDonnesView::afficher() const {
	string titre;
	cout << "Entrez le titre du livre : ";
	getline(cin, titre);
	controller->rechAuteurLivresDonnes(titre);
}