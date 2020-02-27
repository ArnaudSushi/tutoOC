#ifndef DEF_GUERRIER
#define DEF_GUERRIER
 
#include <iostream>
#include <string>
#include "Personnage.h"

class Guerrier : public Personnage {

    public:

    void frapperCommeUnSourdAvecUnMarteau() const;
};

#endif