int led = 9;
int brightness = 0;   
int fadeAmount = 5;    
int sun = 0;

void setup() {
  pinMode(led, OUTPUT);
}
/* Un dia marciano equivale a 24 horas 39 minutos 35.244 segundos, es decir 887752.244 segundos
 * El programa completa un ciclo de encendido apagado en 102 ciclos
 * Por tanto debe tener un delay de 887752244/102~=8703453 milisegundos
 * 
 * Programa basado en los ejemplos de Arduino y adaptado para la camara de simulacion de ambiente marciano por Julian Camilo Paez Piñeros (jcpaezp@unal.edu.co)
 */
void loop() {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    sun = sun + 1;
  }
  if (sun == 2){
    //exit(0);
  }
  delay(8703453);
}
