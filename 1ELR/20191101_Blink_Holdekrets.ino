//#########################################################################################################################################################################################################################################
//#########################################################################################################################################################################################################################################
//#################   Eksempelprogram for en digital holdekrets skrevet i programmerinsspråket C/C++ i Arduino for elever ved robotikklinja i 1ELR        #######################################################################################
//#################   Dato: 1. nov. 2019                                                                                                           #######################################################################################
//#################   Forfatter: James Fox                                                                                                          #######################################################################################
//#################   Sted: Kuben vgs.                                                                                                              #######################################################################################
//#################   Sist modifisert av (sted/dato):                                                                                               #######################################################################################
//#########################################################################################################################################################################################################################################
//#########################################################################################################################################################################################################################################


//Deklarering- og Initialiseringsseksjon (skape variabler og gi dem startverdier)
//_________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
 //Bool
  boolean bMinneBitBryterHoldekrets = false; // Deklarerer (skaper) en variabel med navn bMinneBitBryterHoldekrets og initialiserer (gir den en startverdi) med verdien LOW=false=0
  boolean bKnappTilstand = 0; // Deklarerer en variabel med navn bKnappTilstand og initialiserer (gir den en startverdi) med verdien LOW=false=0(=lav=0V etc.)
  boolean bForrigeLoopKnappTilstand = LOW; // Deklarerer en variabel med navn bForrigeLoopKnappTilstand og initialiserer (gir den en startverdi) med verdien LOW=false=0
 //int-variabeler som skal brukes som innganger
  const int diKnapp = 2; // Deklarerer en konstant variabel(kan ikke endres senere) med navn diKnapp av datatypen int (heltall) og initialiserer (gir den en startverdi) hvor vi setter den lik 2
 //int-variabeler som skal brukes til Utganger
  const int doHoldeKretsLED = 3; // Deklarerer en konstant variabel med navn doHoldeKretsLED av datatypen int (heltall) og initialiserer (gir den en startverdi) hvor vi setter den lik 3
//_________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
// setup-funksjonen kjører kun en gang etter du laster opp programmet, trykker på reset-knappen eller setter på spenning på Arduino'en
void setup() 
{
  // Inputs
  pinMode(diKnapp, INPUT); //Funksjonen pinMode() får verdien 2 gjennom variabelen diKnapp. Digital I/O nr. 2 på Arduinoen brukes altså som digital inngang (di)
  // Outputs
  pinMode(doHoldeKretsLED, OUTPUT); //LED'en som viser selve holdekretsen er koblet til utgang 3. do står for digital output (utgang)
}

// the loop function runs over and over again forever
void loop() 
{
  bKnappTilstand = digitalRead(diKnapp); // Tilstanden(sjekk av inngang) til trykknappen skrives til et minnebit (av datatypen bool som kun lagrer binære verdier: true=HIGH=1 og false=LOW=0). Vi lager et minnebit 
                                         //av flere årsaker, deriblandt for å "fryse verdien" til trykknappen når den går gjennom resten av instruksjonene i loopen. (Logikken kan bli feil om en slipper knappen midtveis i instruksjonene)
  if ( (bKnappTilstand == HIGH) && (bForrigeLoopKnappTilstand == LOW) ) // Veivalg med bruk av if-betingelse: Om minnebit'et til trykknappen er lik høy OG (AND) forrige verdi til trykknappen var lav i forrige runde i loopen, da går vi inn i IF-setningen 
                                                                        //(vi har altså akkurat trykket inn knappen der den nettopp har gått fra lav til høy)
  {
    // IF-setningen med tilhørende else nedenfor kunne ha vært erstattet med: "bMinneBitBryterHoldekrets = !bMinneBitBryterHoldekrets"
    if (bMinneBitBryterHoldekrets == HIGH) // Denne variabelen er selve "Holdekrets-variabelen". Det er altså lov å lage en ny if-setning inni en annen if-setning (dette kalles "nesting" på IT-nerde-fagspråket)
    {
      bMinneBitBryterHoldekrets = LOW; // Har den vært høy, slår vi den nå av siden den skal "byttes om" neste gang vi trykker på knappen
    }
    else // Her kunne vi erstattet else med en ny if-setning som hadde vært: if (bMinneBitBryterHoldekrets == LOW)... -Vi kan altså ha en if-setning uten en else, men ikke en else uten en if-setning!
    {
      bMinneBitBryterHoldekrets = HIGH; // Er bMinneBitBryterHoldekrets lav, settes den altså til høy
    }   
  }
  digitalWrite(doHoldeKretsLED, bMinneBitBryterHoldekrets); // Her "skriver vi" eller setter utgangen
  bForrigeLoopKnappTilstand = bKnappTilstand; // Her "synkroniserer" vi den aktuelle knappetilstanden som er i ferd med å bli "foreldet" siden vi er på slutten av syklusen i loop-funksjonen. Den forrige knappetilstanden 
                                              // bForrigeLoopKnappTilstand skrives altså over med den "nye" verdien fra bKnappTilstand
  delay(20); /*enkel måte (litt primitiv) å fjernere "debouncing" på -rett og slett tilbakeslag som oppstår når det oppstår mange små raske gnister i det en mekanisk kontakt som lukkes/sluttes
              jeg har valgt å utelate timere og interrupter (stigende og synkende flanke) i dette eksempelet. -Det er ting vi kan bygge på senere for å lage ennå bedre programmer :-)  */
}
