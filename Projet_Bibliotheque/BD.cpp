#include "BD.h"
using namespace std;

BD::BD(const string& titre, const shared_ptr<Auteur>& auteur, const string& dessinateur) 
	: Livre(titre, auteur), dessinateur(dessinateur) {}

const string& BD::getDessinateur() const {
	return dessinateur;
}