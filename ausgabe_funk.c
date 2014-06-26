/*warum muss man nochmal eingabe.h includieren? wie compiler funktioniert? */

#include <stdio.h>
#include "globals.h"
#include "ausgabe_funk.h"
#include "funks.h"

float gallon_to_liter, mile_to_km;

/** Zeigt die berechnete info auf der Konsole 
 */
void ausgabe_funk()
{ 
  gallon_to_liter = 3.78541;
  mile_to_km = 1.60934;
  printf("\n\nAufgrund Ihrer Eingaben habe ich folgende Daten berechnet:\n\n");
  /* Ausgabe Deutshland*/
  printf("Kosten für die Fahrt in Deutschland:\n\n");
  printf("Kosten für einen Liter Benzin in Deutschland:%5.1f  Euro\n", kosten_benzin_euro);
  printf("Kosten für eine Gallone Benzin in Deutschland:%4.1f Euro  \n", rechne_kosten_pro_gallon());
  printf("Verbrauchte Liter pro 100 Kilometer:%15.1f Liter\n", rechne_benzin_pro_hundert() );
  printf("Benzinkosten für einen Kilometer Fahrt:%11.1f Euro\n", rechne_kosten_pro_km());
  printf("Benzinkosten für eine Meile Fahrt:%16.1f Euro\n", rechne_kosten_pro_meile() );
  printf("Benzinkosten für die gesamte Strecke in Euro:%5.1f Euro\n\n", rechne_kosten_ganze());

 /* Ausgabe USA*/
  printf("Kosten für die Fahrt in den USA:\n\n");
  printf("Kosten für einen Liter Benzin in den USA:\t %f  Dollar\n", kosten_pro_gallon_dollar/gallon_to_liter);
  printf("Kosten für eine Gallone Benzin in den USA:\t %f Dollar  \n", kosten_pro_gallon_dollar);
  printf("Gefahrene Meilen pro Gallone:\t\t\t %f Meilen\n", rechne_meilen_pro_gallone() );
  printf("Benzinkosten für einen Kilometer Fahrt:\t\t %f Dollar\n", rechne_kosten_pro_km_dollar() );
  printf("Benzinkosten für eine Meile Fahrt:\t\t %f Dollar\n", rechne_kosten_pro_km_dollar()*mile_to_km );
  printf("Benzinkosten für die gesamte Strecke in Dollar:\t %f Dollar\n\n", rechne_kosten_ganze_dollar() );

 /*Vergleich und Fazit*/
 printf("Vergleich:\n\nGesamtkosten Deutschland minus Gesamtkosten USA in Euro:\t\t %f\n\n", rechne_kosten_ganze() - (rechne_kosten_ganze_dollar()*dollar_euro) );
 printf("Fazit:\n\nDie Kosten in den USA betragen nur %3.1f Prozent der Kosten in Deutschland\n", (rechne_kosten_ganze_dollar()*dollar_euro)/rechne_kosten_ganze()*100 );
}
