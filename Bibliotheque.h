#include <iostream>
#include <vector>
#include "Livre.h"
using namespace std;

class Bibliotheque
{
private:
    vector<Livre> livres;
    string nom;
    string lieu;
public:

    Bibliotheque(string bom, string lieu, vector<Livre> livres);
    ~Bibliotheque();
    bool ajouterLivre(Livre livre);

};

