#include "Bibliotheque.h"
using namespace std;

Bibliotheque::Bibliotheque(string nom, string lieu, vector<Livre> livres)
{
    this->nom = nom;
    this->lieu = lieu;
    this->livres = livres;
}


Bibliotheque::~Bibliotheque()
{
}

bool Bibliotheque::ajouterLivre(Livre livre)
{
    livres.push_back(livre);
    if (livres.)
    {
        /* code */
    }
    
}