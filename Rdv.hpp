#include <iostream>
#include <string>
using namespace std;

class Etudiant; // Déclaration de la classe Etudiant
class Entreprise; // Déclaration de la classe Entreprise

class RendezVous {
    string date;
    string heureDebut;
    string heureFin;
    Etudiant* etudiant;
    Entreprise* entreprise;
    Etudiant *etudiant;
    Entreprise *entreprise;
    

public:
    RendezVous(string d, string hd, string hf, Etudiant* e, Entreprise* ent);

    void Affiche() const;

    // Vérifier si deux rendez-vous se chevauchent
    bool chevauche(RendezVous& autreRdv) const;

    // Getters pour accéder aux données
    string getDate() const;
    string getHeureDebut() const;
    string getHeureFin() const;
    Etudiant* getEtudiant() const;
    Entreprise* getEntreprise() const;
};
