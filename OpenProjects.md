# Oversikt åpne prosjekter
Vi har en hel del åpne prosjekter på robotikklinja. Dette er en grov oversikt. Jakob supplerer gjerne med mer informasjon etter intresse. Spør på teams om det dere er intressert i så fyller jeg på her.


## Hydralikk-anlegg

*Bygg et styreskap til vårt nye Hydralikk-anlegg!* 

Minimum: Skåpet trenger en frekvensomformer og PLS for styring av en induksjonsmotor og to 24V ventiler. Knapp-boks og nødstop. 

Mer ønsket funksjoner:
* Återkobling fra frekvensomformer om belastning til PLS. (ukomplisert, detekterer når den når endeposisjon)
* Digitale eller analoge sensorer for å måle posisjon av stemplene med PLS. Har linjere sensorer og vinkelssensorer, det vanskelige er å montere dem på en trygg måte. 

## Trykkluft-stasjon

* *Montere sylindrene så at de kan skyve en kloss rundt i en firkant. Styreskap finns allerede.* 
* Ev bygge en egen ny mini-fabrikk. Finns massor med variert utstyr.

## Heis-system

### Heis-modell

Montere delene og bygge kontrollskap for en 3 etg heis Vi har deler. 

Vi har delene, du designer, bygger og kobler.

* Induksjonsmotor med frekvensomformer
* Kapasitive sensorer
* Encoder
* Knappeboks
* El-Skåp med PLS

### Dør modell med laserbarrier

Bygge en dør-modell og kontrollskap. Denne kan etterpå bli brukt av elevene som "garasjeport" eller "heisdør".  

Vi har delene, du designer, bygger og kobler. Du trenger å gjøre utviklingsarbeid i fusion360 og 3D-printing.

* Linjer føring
* DC motor 24V (relestyrt)
* 3D printe rack and pinion
* Endebryter
* Laserbarrier med reflektor
* PIR sensor
* Knappeboks
* PLS

 # UR robots

Her kan man gjøre mye forksjelligt

* Øve og sen holde introkurs for elektro vg1 eller lærer.
* Robot vision med gripper. Montere, kalibrere og teste, lage elevoppgave. 
* Robot vision med Webcam, PC og OpenCV + Modubus til robot. Eksempler finnes.
* 3D print. Forbedre innfesting av belter og sensorer. Jigger for re-gripping av materialer, magasin for klosser. 
* Stable tårn med robot-algoritme, kloss-magasin finnes ferdig printet. 
* Montere trykklyft til robot, vaccum og gripper.  
* Modbus kommunikasjon til PLS, guide finns.
* Integrere sikkerhets-utstyr: laserbarrier ![RoboComp](https://robocup.website/) Oslo oppgaven ![youtube](https://youtu.be/gx-mJjD3hwU)
* 3D-printe et hode til robot-kroppen som kommer. Ev motorisere det, legge til mic og kamera. 

# Videreutvikle eller arbeide med ferdige stasjoner

### Veiecelle med samlebånd

Testkjøre og gjøre det til en bruklig elev-stasjon med eksempler på oppgaver.

https://github.com/robotikklinja/veiecelle

### Flow and level control

"Vanntanken"

*Installere og koble sikkerhets-sensorer i tankene og Ø22mm potentiometer i knappeboks*

Mulighet å fordype seg i regulering og teste og viderutvikle nye øvninger.  

Eventuellt:
* lodde/koble återkobling for endebryter i motorventiler. 
* installere en over-flow slange.

https://github.com/robotikklinja/Flow-and-level-control


### Kjøleskap

Ferdigstille stajsonen. Mulighet at øve seg på regulering. 

* Sikkre varmekabelen, nå er tapen en brannrisk.
* Prøve Av/På regulering med PLS. Datalogging, energibruk og temeperatur. 
* Lage elevoppgaver.

### Varme-reguleringsstasjon

Fordyping i regulering, HMI eller CNC eller 3D-printe moulds for å produsere ting med stasjonen. 

Prøve lage ting med lav-temp plastik og leire. Inspirasjon ![Necromoulds](https://necromolds.com/)

# Helt nye elev-stasjoner

Vi har utstyret men har ikke begynt å bygge disse ennå

### Fartskontroll av induksjonsmotor med DC-generator

Bygge en regulerings-øvings-rigg der en induksjonsmotor genererer strøm.

Oppskrift:
* Koble en induksjonsmotor til en 24V DC-motor motor-akse-til-motor-akse. (pass på "snagging"-risiko)
* DC-motoren blir en generator. 
* Koble generatoren til en stor resistiv last via rele. (Har tre lastkombinasjoner, alternativt kan vi bruke solid state relay for å pulse)
* Overvåke RPM til motoren, eller effekt over lasten og kompensere med PLS når lasten endres med rele og knapper

Alternativt utførende er å bruke en stor BLDC som generator, då kan vi bruke en Solid state relay eller Solid state regulator for å dynamisk koble inn lasten. 

### DC motor med hastighetsstyring

Bygge en regulerings-øvings-rigg med 24V DC motor.

Vi har:
24VDC motor, Hall sensor for å måle RPM, og en tinnløs DC motor driver som vi kan PLS styre. 
Koble motoren til en noe, et svingjul med brems eller en vifte så at vi får en trygg belastning vi kan endre litt på. 
Bruke PLS for å lage en fartsholder som kompenserer for endring i belasting. 

## ARDUINO

### Mobil robot(gressklipper) med LIDAR
 
 Vi har kjøpt inn to LIDAR sensorer som vi ønsker å montere på robotgressklipperen. Først bør vi teste dem med PC / arduino. 
 
 Roboten trenger en fastmontert "hjerne", laderutine og online dokumentasjon med forslag på elevoppgaver
 
 Styres med ESP32 med display. Wifi-microkontroller som kan ta arduino-kode

### Hector CNC

Få opp CNCn i bruk, som Pen-plotter, pneumatic-vaccum-picker eller fresemaskin.

https://github.com/robotikklinja/cnc-fres

### Pen Plotter

Den sitter montert på tavla i vg2-klasserom. Kan brukes for matte/programmering/fysikk-fordyping.
Bygge en fast montert "hjerne" til den. Gjøre ting bedre. Alt utstyr finns på huset. 

https://www.youtube.com/watch?v=T0jwdrgVBBc

### Stepper-samlebånd

Vi har et samlebånd koblet til en steppermotor. Det kan styres via arduino. 

### Kulebane

Vi har en lite kulebane med en steppermotor. Det kan videreutvikles og styres via arduino.

videreutvikling: Koble inn sensorer. Legge til knapper. 

## BECKOFF PLS

Vår tidligere lærer-kollega og inisjativtaker bak robotikklinja James Fox arbeider nå for Beckhoff 

Der skall han utvikle en pakke for norges automatiserings-utdanninger. Basert på utstyret vi har på skolen. 

Vore det ikke en perfekt person at spørre om utplassering for?

Mail: j.fox@beckhoff.no 

### Beckoff PLS

* Vi har mange fine Beckhoff-PLSer med forskjellige ekspansjons-moduler og HMI touch screens. 
* Du kan prøve at lage et eget prosjekt med moduler-PLS med mulighet til tekstprogrammering og HMI-touch-screen.
* James kan ordne online-kurs-access

https://github.com/robotikklinja/Beckhoff-PLS

### Anodiseringsanlegg

Vi har et halvferdig anlegg som skulle styres av Beckhoff PLS.

Bechoff servo + PLC + mekanisk arbeid. 

https://github.com/robotikklinja/anodiseringsanlegg

https://github.com/robotikklinja/Beckhoff-PLS

### KUKA robot

Integrere sikkerhetsburets sensorer og lås, og kollisions-gripper med roboten. Bruker Bechoff IOs og ev Beckhoff-PLS.
Lurt at gjøre som utplassert på Beckoff for James

https://github.com/robotikklinja/KUKA-KR6-R700-sixx

https://github.com/robotikklinja/Beckhoff-PLS

