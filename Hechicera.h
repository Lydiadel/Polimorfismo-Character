//
//  Hechicera.h
//  Tarea 03 herencia
//
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 29/05/21.
//

#ifndef Hechicera_h
#define Hechicera_h
#include "Personaje.h"

class Hechicera: public Personaje{
    public:
        Hechicera();
        Hechicera(int, int, string, int);
        int getArma();
        int getMascota();
        void setArma(int);
        void setMascota(int);
        void shoot();
    private:
        int arma;
        int mascota;
};

//Getters

Hechicera::Hechicera(): Personaje(){
    arma= 0;
}

Hechicera::Hechicera(int weapon, int pet, string n, int healthp): Personaje(n, healthp){
    arma = weapon;
    mascota = pet;
    Nombre= n;
    HP = healthp;
}
//Getters
int Hechicera::getArma(){
    return arma; 
}

int Hechicera::getMascota(){ 
    return mascota; 
}

//Setters
void Hechicera::setArma(int weapon){
    arma = weapon;
} 

void Hechicera::setMascota(int pet){
    mascota = pet;
}


void Hechicera::shoot(){ 
    cout << "Soy una hechicera y disparo hechizos" << endl;
}

#endif /* Hechicera_h */
