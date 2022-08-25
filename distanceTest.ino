
int led = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 22;
int led10 = 23;
int led11 = 24;
int led12 = 25;
int led13 = 26;
int led14 = 27;
const int Trigger = 52;
const int Echo = 53;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);

}

void loop() {
   long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59;             //escalamos el tiempo a una distancia en cm
  
  Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(100);          //Hacemos una pausa de 100ms
   if(d <= 80){
      digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  digitalWrite(led14, HIGH);
    digitalWrite(led, LOW);
    delay(4000);
      digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);
    delay(4000);  
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(4000);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(4000);
      digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    delay(4000);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    delay(4000);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    delay(4000);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, LOW);
    delay(4000);
      digitalWrite(led8, HIGH);
    digitalWrite(led9, LOW);
    delay(4000);
      digitalWrite(led9, HIGH);
    digitalWrite(led10, LOW);
    delay(4000);
      digitalWrite(led10, HIGH);
    digitalWrite(led11, LOW);
    delay(4000);
      digitalWrite(led11, HIGH);
    digitalWrite(led12, LOW);
    delay(4000);
      digitalWrite(led12, HIGH);
    digitalWrite(led13, LOW);
    delay(4000);
      digitalWrite(led13, HIGH);
    digitalWrite(led14, LOW);
    delay(4000);
      digitalWrite(led14, HIGH);

   }
  // put your main code here, to run repeatedly:

}
