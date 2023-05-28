#pragma once
#ifndef BD_H
#define BD_h

#include <string>
#include "Livre.h"
using namespace std;

class BD : public Livre {
public:
	BD(const string& titre, const shared_ptr<Auteur>& auteur, const string& dessinateur);

	const string& getDessinateur() const;

private:
	string dessinateur;
};

#endif // !BD_H
