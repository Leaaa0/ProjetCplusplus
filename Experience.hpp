#include <iostream>
#include <string>
using namespace std;

class Etudiant;

class Experience {
    string dateDebut;
    string dateFin;
    string nomEntreprise;
    string fonction;
    Etudiant *etudiant;

    public:
    Experience(string dD, string dF, string n, string f){
        dateDebut = dD; dateFin= dF; nomEntreprise = n; fonction = f;};

    void Affiche() const{
        cout << "Expérience Professionnelle :" << endl;
        cout << "  Date de début      : " << dateDebut << endl;
        cout << "  Date de fin        : " << dateFin << endl;
        cout << "  Nom de l'entreprise: " << nomEntreprise << endl;
        cout << "  Fonction occupée   : " << fonction << endl;
    };
    

};