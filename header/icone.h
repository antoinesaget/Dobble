#ifndef _ICONE_
#define _ICONE_

#include <Vect2.h>

typedef int Image;

typedef struct {
    float distance;
    float angle;
    float scale;
    float rotation;
    
    Image image;

    Vect2 position;
    Vect2 speed;
    Vect2 acceleration;
} Icone;


Icone nouvelIcone();

int estDansIcone(Icone I, Vect2 centreCarte, Vect2 posClic);

void positionAleatoire(Icone* icone);
void scaleAleatoire(Icone* icone);
void rotationAleatoire(Icone* icone);
void angleAleatoire(Icone* icone);

void fromComplexToXY(Icone* icone);
void fromXYtoComplex(Icone* icone);

void updateIcone(Icone* icone);

#endif /* _ICONE_ */
