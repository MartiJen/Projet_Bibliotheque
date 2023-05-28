#pragma once
#ifndef MENUVIEW_H
#define MENUVIEW_H

#include "Controller.h"
using namespace std;

class MenuView {
public:
	MenuView(const shared_ptr<Controller>& controller);
	void afficherMenu();
	void afficherAjouterLivre();
	void afficherAjouterAuteur();
	void afficherRechAuteurLivresDonnes();
	void afficherRechLivresAuteurDonne();

private:
	shared_ptr<Controller> controller;

};

#endif // !MENUVIEW_H
