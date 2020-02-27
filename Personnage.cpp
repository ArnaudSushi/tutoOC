#include <string.h>

#include "Personnage.h"

using namespace std;

// Méthodes

Personnage::Personnage() : m_arme(0), m_vie(100), m_mana(100) {
    m_arme = new Arme();
}

Personnage::Personnage(string nomArme, int degatArme) : m_vie(100), m_mana(100), m_arme(0) {
    m_arme = new Arme(nomArme, degatArme);
}

void Personnage::recevoirDegats(int nbDegats) {
    m_vie -= nbDegats;

    if (m_vie < 0) {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible) {
    cible.recevoirDegats(m_arme->getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie += quantitePotion;

    if (m_vie > 100) {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const {
    return m_vie > 0;
}

void Personnage::afficherEtat() const {
    cout << "Vie : " << m_vie << endl;
    cout << "Mana :" << m_mana << endl;
    m_arme->afficher();
}

Personnage::~Personnage() {
    delete m_arme;
}