#pragma once
#ifndef RECHLIVRESAUTEURDONNEVIEW_H
#define RECHLIVRESAUTEURDONNEVIEW_H

#include <string>
#include "Controller.h"
using namespace std;

class RechLivresAuteurDonneView {
public:
	RechLivresAuteurDonneView(const shared_ptr<Controller>& controller);

	void afficher() const;


private:
	shared_ptr<Controller> controller;
};

#endif // !RECHLIVRESAUTEURDONNEVIEW_H
