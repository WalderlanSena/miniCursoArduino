/**
 * Mini Curso de Arduino (UNO)
 * @author: Walderlan Sena <walderlan@mentesvirtuaissena.com>
 * @github: https://github.com/WalderlanSena/miniCursoArduino
 * @exemplo: 01 - Criando o primeiro sketch: Blink
 * @license: GPL License
 */

#define LED 13                //Definição da constante LED pino 13

void setup () 
{
  pinMode(LED, OUTPUT);       //Setando o pino 13 como saida
}//end setup

void loop () 
{
  digitalWrite(LED, HIGH);    //Enviando o valor maximo
  delay(1000);                //Esperando 1000ms
  digitalWrite(LED, LOW);     //Enviando o valor minimo
  delay(100);                 //Esperando 100ms
}//end loop
