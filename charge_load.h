#ifndef CHARGE_LOAD_H_INCLUDED
#define CHARGE_LOAD_H_INCLUDED
#include "physics.h"
#include <stdbool.h>



///
/*

A Charge_x.txt file fel�p�t�se:
A sorok a t�lt�sek adatait tartalmazz�k sz�k�zzel elv�lasztva egym�st�l:
er�ss�g, x koordin�ta, y koordin�ta, x ir�ny� sebess�g, y ir�ny� sebess�g, hat�t�v.
Az els� sor mindig a kil�ni k�v�t t�lt�s adatait jelenti, a t�bbi pedig a statikus t�lt�seket

*/
///


bool toltes_foglal(Charge * c, int meret);
void toltes_fill(Charge c, char* toltes_helye);
void free_Charge(Charge *c, int number_of_maps);
void load_charges(Charge *c, char *toltes_helye);
void load_all_charges(Charge* c, int number_of_maps);
#endif // CHARGE_LOAD_H_INCLUDED
