#include <iostream>
#include <string>
using namespace std;

class RendezVous;

class Entreprise {

    string nom;
    string adresse;
    string nomContact;
    string telContact;

public:
    Entreprise(string n, string addr, string contact, string tel){ nom =n; adresse= addr; nomContact = contact; telContact=tel;}

    void Affiche() const {
        cout << "Entreprise :" << endl;
        cout << "  Nom         : " << nom << endl;
        cout << "  Adresse     : " << adresse << endl;
        cout << "  Contact     : " << nomContact << endl;
        cout << "  Téléphone   : " << telContact << endl;
    }

    string getNom() const { return nom; }
    string getAdresse() const { return adresse; }
    string getNomContact() const { return nomContact; }
    string getTelContact() const { return telContact; }

};