/*
 * Arduino mega bordje gemaakt waar het display op past
 * Sensors:
 * BME680:
 * CS   29
 * SDI  27
 * SDO  25
 * SCK  23
 * 
 * Dit sensor heeft een afwijking ten gevolge van de temperatuur. dit zou een bug in de driver kunne zijn.
 * 
 * INA260
 * I2C
 * SDA  20
 * SCL  21
 * 
 * Water sensor: 2 elektroden in het water.
 * Onderste busje = common kleur zwart
 * tweede busje = ref kleur zwart
 * vergulde draad = meet kleur rood
 * ref: (Ref A8 & Common)twee contacten die een vaste afstand hebben van elkaar.
 * de weerstand in kraanwater is ca 5K 
 * op A8 zit 4K7 naar de aarde
 * als common 5V is staat hier dus 2.5V op 
 * meet: op de meet elektrode staat een weerstand van ca 217K als 
 * deze ondergedompeld is.
 * Op A9 zit een weerstand van 220K naar gnd.
 * Dus als de common op 5V zit staat hier met een volle tank ca 2.5V op.
 * Als het water zouter wordt zal de spanning op A8 hoger worden. Je zou dit als
 * refferentie voor een volle tank kunnen nemen. 
 * als A8 ~ 0v && A9 ~ 0V dan is het water nivo te laag, tank leeg
 * als A8 ~ 0V && A9 > 0V dan is referentie elektrode A8 stuk
 * 
 * 
 * 
 */

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
