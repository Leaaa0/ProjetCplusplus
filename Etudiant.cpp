#include <iostream> 
#include <string> 
using namespace std; 
 
#include "Etudiant.hpp"

Etudiant::Etudiant(int n,string nom, string prenom, string adr, string tel){
    numeroEtudiant = n; nom = nom; prenom =prenom; adresse = adr ; telephone = tel;
}

void Etudiant::Affiche() const {
        cout << "Numéro d'étudiant : " << numeroEtudiant << "\n"
             << "Nom : " << nom << "\n"
             << "Prénom : " << prenom << "\n"
             << "Adresse : " << adresse << "\n"
             << "Téléphone : " << telephone << endl;
    }

