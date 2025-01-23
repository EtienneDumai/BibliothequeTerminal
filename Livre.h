#include <iostream>
using namespace std;
class Livre
{
private:
    int id;
    string titre;
    string auteur;
    string editeur;
    int annee;

public:
    Livre(string titre, string auteur, string editeur, int annee)
    {    }
    ~Livre();
    int getId() { }
    void setId(int id) {  }
    string getTitre() {  }
    void setTitre(string titre) {  }
    string getAuteur() {  }
    void setAuteur(string auteur) {  }
    string getEditeur() {  }
    void setEditeur(string editeur) {  }
    int getAnnee() {  }
    void setAnnee(int annee) {  }

};


