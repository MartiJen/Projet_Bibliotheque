#pragma once
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include <memory>
#include "Bibliotheque.h"
#include "Livre.h"
#include "Auteur.h"
using namespace std;

class Controller {
public:
	Controller(const shared_ptr<Bibliotheque>& bibliotheque);

	void ajouterLivre(const string& titre, const shared_ptr<Auteur>& auteur);
	void ajouterAuteur(const string& nom);
	void rechAuteurLivresDonnes(const string& titre);
	void rechLivresAuteurDonne(const string& nomAuteur);
	shared_ptr<Auteur> chercherAuteurParNom(const string& nom);
	vector<shared_ptr<Livre>> getLivres();

private:
	shared_ptr<Bibliotheque> bibliotheque;
};

#endif