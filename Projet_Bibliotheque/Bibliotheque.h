#pragma once
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_h

#include <vector>
#include <memory>
#include "Livre.h"
#include "Auteur.h"
using namespace std;

class Bibliotheque {
public:
	static Bibliotheque& getInstance() {
		static Bibliotheque instance;
		return instance;
	}//Bibliotheque() = default;

	void ajouterLivre(const shared_ptr<Livre>& livre);
	void ajouterAuteur(const shared_ptr<Auteur>& auteur);
	shared_ptr<Auteur> rechAuteurLivresDonnes(const string& nom);
	vector<shared_ptr<Livre>> rechLivresAuteurDonne(const string& titre);
	vector<shared_ptr<Livre>> chercherLivresParAuteur(const string& nomAuteur) const;
	shared_ptr<Auteur> chercherAuteurParNom(const string& nom) const;
	vector<shared_ptr<Livre>> getLivres();

private:
	Bibliotheque() = default;
	~Bibliotheque() = default;
	Bibliotheque(const Bibliotheque&) = delete;
	Bibliotheque& operator=(const Bibliotheque&) = delete;
	vector<shared_ptr<Livre>> livres;
	vector<shared_ptr<Auteur>> auteurs;
};

#endif // !BIBLIOTHEQUE_H
