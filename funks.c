#include <stdio.h>
#include "funks.h"
#include "globals.h"


/* Alle Werte in Euro  */

/** Rechnet Benzin Preis pro gallon in euro

* @param
* @return Benzin Preis pro gallon in euro

*/

float rechne_kosten_pro_gallon()
{
  return gallon_to_liter*kosten_benzin_euro;
}


/* Alle Werte in Euro  */

/** Rechnet Benzin Preis pro gallon in euro

* @param
* @return Benzin Preis pro gallon in euro

*/
float rechne_benzin_pro_hundert(){
  return verbrauchte_benzin/gefahrene_km*100 ;

}


/* Alle Werte in Euro  */

/** Rechnet pro km kosten  in euro

* @param
* @return kosten pro km

*/
float rechne_kosten_pro_km()
{
  return (verbrauchte_benzin/gefahrene_km)*kosten_benzin_euro;
}


/** Rechnet ganze kosten in euro 

* @param
* @return gesamtkosten in euro 

*/
float rechne_kosten_ganze()
{
   return verbrauchte_benzin*kosten_benzin_euro;
}






/** Rechnet Kosten pro Meile in dollar

* @param
* @return Benzin Preis pro gallon in euro

*/

float rechne_kosten_pro_meile() 
{
  return (verbrauchte_benzin/gefahrene_km)*kosten_benzin_euro*mile_to_km;
}




/** Rechnet 1 euro gleich wie viel dollar ist

* @param
* @return Wie viel dollar ein Euro ist 

*/
float euro_dollar(){
  return 1/dollar_euro;
}


/** Rechnet gefahren meilen pro gallone 

* @param
* @return meilen pro gallone

*/
float rechne_meilen_pro_gallone()
{
	return (gefahrene_km/(verbrauchte_benzin/gallon_to_liter))*(1/mile_to_km) ;
}


/** Rechnet pro km kosten in dolalr 

* @param
* @return pro km kosten in dolalr

*/
float rechne_kosten_pro_km_dollar()
{
	return   ((verbrauchte_benzin/gallon_to_liter)*kosten_pro_gallon_dollar ) /gefahrene_km;
}


/** Rechnet gesamtkosten in Dollar

* @param
* @return gesamkosten in dollar

*/
float rechne_kosten_ganze_dollar()
{
	return (verbrauchte_benzin/gallon_to_liter)*kosten_pro_gallon_dollar;
}
