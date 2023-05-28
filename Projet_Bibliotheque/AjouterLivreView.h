#pragma once
#ifndef AJOUTERLIVREVIEW_H
#define AJOUTERLIVREVIEW_H

#include "Controller.h"
using namespace std;

class AjouterLivreView {
public:
	AjouterLivreView(const shared_ptr<Controller>& controller);
	void afficher();

private:
	shared_ptr<Controller> controller;
};

#endif // !AJOUTERLIVREVIEW_H
