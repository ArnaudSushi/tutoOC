#include <iostream>
#include <string> // Obligatoire pour pouvoir utiliser les objets string

#include "Personnage.h"

using namespace std;

int main() {

    Personnage david, goliath("Épée aiguisée", 20);
    //Création de 2 objets de type Personnage : david et goliath
 
    goliath.attaquer(david); //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath réattaque david
    david.attaquer(goliath); //david contre-attaque... c'est assez clair non ?
    
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    cout << "David" << endl;
    david.afficherEtat();
    cout << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}