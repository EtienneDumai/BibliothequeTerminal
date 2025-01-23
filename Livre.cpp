#include "Livre.h"
#include <iostream>
using namespace std;

//Constructeur
Livre::Livre(string titre, string auteur, string editeur, int annee)
{
    this->titre = titre;
    this->auteur = auteur;
    this->editeur = editeur;
    this->annee = annee;
}

//Getters
int Livre::getId()
{
    return id;
}
string Livre::getTitre()
{
    return titre;
}
string Livre::getAuteur()
{
    return auteur;
}
int Livre::getAnnee()
{
    return annee;
}

//Setters
void Livre::setId(int id)
{
    this->id = id;
}
void Livre::setTitre(string titre)
{
    this->titre = titre;
}
void Livre::setAuteur(string auteur)
{
    this->auteur = auteur;
}
void Livre::setAnnee(int annee)
{
    this->annee = annee;
}
