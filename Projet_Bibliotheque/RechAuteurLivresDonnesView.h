#pragma once
#ifndef RECHAUTEURLIVRESDONNESVIEW_H
#define RECHAUTEURLIVRESDONNESVIEW_H

#include <string>
#include "Controller.h"
using namespace std;

class RechAuteurLivresDonnesView {
public:
	RechAuteurLivresDonnesView(const shared_ptr<Controller>& controller);

	void afficher() const;

private:
	shared_ptr<Controller> controller;
};

#endif // !RECHAUTEURLIVRESDONNESVIEW_H
