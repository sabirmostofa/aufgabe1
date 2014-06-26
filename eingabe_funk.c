/* if stdio.h not included, why shows printf, scanf implicit */
#include <stdio.h>
#include "globals.h"
#include "eingabe_funk.h"

float gefahrene_km, verbrauchte_benzin, kosten_benzin_euro, kosten_pro_gallon_dollar, dollar_euro;

/** Erzeugt die Eingabe aller benögite Info 
 */

/** löscht input buffer

* @param 
* @return 

*/


void flush_input()
{
  int c = 0;
   do
   {
     c = getchar();
   } while (c != EOF && c != '\n');
}


/** nimmt float eingabe

* @param 
* @return input variabl

*/



float float_eingabe(){
  float eingabe;
  while (!scanf("%f", &eingabe))
  {
    printf("Falsche eingabe, die eingegeben zahl muss eine Zahl sein\n ");
    flush_input();
  }
 return eingabe;
}

/** Erzeugt die Eingabe aller benögite Info 
 */


void eingabe_funk()
{
  printf("Wie viel Kilometer sind Sie mit Ihrem PKW gefahren?:\t");
  gefahrene_km = float_eingabe() ;
 
  printf("Wie viel Liter Benzin haben Sie dabei verbraucht?:\t");
  verbrauchte_benzin = float_eingabe();
 
  printf("Wie viel Euro kostet ein Liter Benzin in Deutschland?:\t");
  kosten_benzin_euro = float_eingabe() ;
 
  printf("Wie viel Dollar kostet eine Gallone Benzin in den USA?:\t");
  kosten_pro_gallon_dollar = float_eingabe();
 
  printf("Wie viel Euro erhaelt man für einen Dollar?:\t");
  dollar_euro = float_eingabe();
}
