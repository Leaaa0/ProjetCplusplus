#include <iostream>
#include <string>
using namespace std;

class Etudiant;

class Diplome {
    int code; 
    string nomNational;   
    string dateObtention; 
    string lieu;  
    Etudiant *etudiant;           

    public:
        // Constructeurs
        Diplome(int c, string nom, string date, string l);

    int getCode() const { return code; }
    string getNomNational() const { return nomNational; }
    string getDateObtention() const { return dateObtention; }
    string getLieu() const { return lieu; }   

    void afficher() const {
        cout << "Diplôme : " << nomNational << "\n"
             << "Code : " << code << "\n"
             << "Date d'obtention : " << dateObtention << "\n"
             << "Lieu : " << lieu << endl;
    }
};