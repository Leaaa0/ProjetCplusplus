#include <iostream>
#include <string>
using namespace std;

class Etudiant;

class Inscription{
    string dateInscription;
    int numeroAnnee;
    Etudiant *etudiant;

    public:
    Inscription(string d, int n){dateInscription =d; numeroAnnee =n;};
    
    void Affiche() const {
        cout << "Date d'inscription : " << dateInscription << "\n"
             << "Numéro de l'année : " << numeroAnnee << endl;
    }

};