#include "AjouterAuteurView.h"
#include <iostream>
using namespace std;

AjouterAuteurView::AjouterAuteurView(const shared_ptr<Controller>& controller) 
	: controller(controller) {}

void AjouterAuteurView::afficher() const {
	string nom;
	cout << "Entrez le nom de l'auteur : ";
	getline(cin, nom);
	controller->ajouterAuteur(nom);
	cout << "L'auteur " << nom << " a été ajouté avec succès.\n";

	/*char reponse;
	cout << "Est-ce que c'est une BD . (O/N) : ";
	cin >> reponse;
	cin.ignore(numeric_limits <streamsize>::max(), '\n'); //Effecer le tampon
	if (reponse == 'o' || reponse == 'O') {
		cout << "Vous pouvez ajouter une BD pour cet auteur/dessinateur en utilisant l'option 'Ajouter Livre/Bd'.\n";
	}*/
}