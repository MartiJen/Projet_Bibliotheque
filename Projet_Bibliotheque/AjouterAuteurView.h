#pragma once
#ifndef AJOUTERAUTEURVIEW_H
#define AJOUTERAUTEURVIEW_H

#include <string>
#include "Controller.h"
using namespace std;

class AjouterAuteurView {
public:
	AjouterAuteurView(const shared_ptr<Controller>& controller);

	void afficher() const;

private:
	shared_ptr<Controller> controller;
};

#endif // !AJOUTERAUTEURVIEW_H
