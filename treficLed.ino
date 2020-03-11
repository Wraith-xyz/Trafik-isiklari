int pin, i;
int array_L[3] = {2, 3, 4};
int array_R[3] = {10, 11, 12};
int trafic_Deley = 5000;

void setup() {
  for (i = 0; i < 3; i++) {
    pinMode(array_L[i], OUTPUT);
    pinMode(array_R[i], OUTPUT);
    pinMode(9, OUTPUT);
    digitalWrite(9, LOW);


  }
}


void loop() {
  redy();//flasher 10 orang led

  while (i = 1) {
    rund_1();//red_L = off , gre_R=on
    delay(trafic_Deley);
    rund_2();//flssh gnd_L +org_L + red_L =on
    delay(1000);
    rund_3();
    delay(trafic_Deley);
    rund_4();
    delay(2000);
    rund_5();


    //    while (i = 1) {}

  }//end while
}
void rund_5() {
  digitalWrite(array_R[2], LOW);
  digitalWrite(array_R[1], HIGH);
  delay(1000);
  digitalWrite(array_R[1], LOW);
  digitalWrite(array_R[0], HIGH);







}
void rund_4() {
  for (i = 0; i < 3; i++) {
    digitalWrite(array_L[0], LOW);
    delay(500);
    digitalWrite(array_L[0], HIGH);
    delay(500);
  }
  digitalWrite(array_L[0], LOW);
  digitalWrite(array_L[1], HIGH);
  delay(1000);
  digitalWrite(array_L[1], LOW);
  digitalWrite(array_L[2], HIGH);





}
void rund_3() {
  digitalWrite(array_L[2], LOW);
  digitalWrite(array_L[1], HIGH);
  delay(1000);
  digitalWrite(array_L[1], LOW);
  digitalWrite(array_L[0], HIGH);
}
void rund_2() {
  for (i = 0; i < 3; i++) {
    digitalWrite(array_R[0], LOW);
    delay(500);
    digitalWrite(array_R[0], HIGH);
    delay(500);
  }
  //////////////
  digitalWrite(array_R[0], LOW);
  digitalWrite(array_R[1], HIGH);
  delay(1000);
  digitalWrite(array_R[1], LOW);
  digitalWrite(array_R[2], HIGH);







}
void rund_1() {
  digitalWrite(array_L[2], HIGH);
  digitalWrite(array_R[0], HIGH);
}//end rund_1



void redy() {
  for (i = 0; i < 10; i++) {
    digitalWrite(array_L[1], HIGH);
    digitalWrite(array_R[1], HIGH);
    delay(400);
    digitalWrite(array_L[1], LOW);
    digitalWrite(array_R[1], LOW);
    delay(400);
  }
}//end redy
