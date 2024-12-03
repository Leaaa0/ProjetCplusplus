#include <iostream>
#include <string>
#include <vector> 
using namespace std;

class Diplome;
class Inscription;
class Experience;
class RendezVous;

class Etudiant {
    int numeroEtudiant;
    string nom;
    string prenom;
    string adresse;
    string telephone;
    vector<Experience*> ses_experiences;
    vector<Diplome*> ses_diplomes;
    vector<RendezVous*> ses_rdv;
    Inscription *inscription;

    public:
    //constructeur
    Etudiant(int n,string nom, string prenom, string adr, string tel);

    //Acces au variable
    int getNumeroEtudiant() const { return numeroEtudiant; }
    string getNom() const { return nom; }
    string getPrenom() const { return prenom; }
    string getAdresse() const { return adresse; }
    string getTelephone() const { return telephone; }

    virtual void Affiche() const; 
};

class PremierCycle: public Etudiant{
    string serie;
    int annee;
    string lieu;

    public:
    PremierCycle(int n,string nom, string prenom, string adr, string tel,string s,int an,string l): Etudiant(n,nom,prenom,adr,tel){serie = s; annee = an;lieu = l;};

    string getSerie() const { return serie; }
    int getAnnee() const { return annee; }
    string getLieu() const { return lieu; }

    void Affiche() const {
        Etudiant::Affiche();
        cout << "Série : " << serie << "\n"
             << "Année : " << annee << "\n"
             << "Lieu : " << lieu << endl;
    }
};

class DeuxiemeCycle: public Etudiant{

    string discipline;

    public:
    DeuxiemeCycle(int n,string nom, string prenom, string adr, string tel,string d): Etudiant(n,nom,prenom,adr,tel){discipline =d;};

    string getDiscipline() const { return discipline; }

    void Affiche() const {
        Etudiant::Affiche(); 
        cout << "Discipline : " << discipline << endl;
    }

};