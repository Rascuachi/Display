void numeros(int A, int B, int C, int D) {
  if ((!D && !C && !B && A) || (!D && C && !B && !A)) {  // A
    digitalWrite(7, LOW);
  } else {
    digitalWrite(7, HIGH);
  }

  if ((!D && C && !B && A) || (!D && C && B && !A)) {  // B
    digitalWrite(8, LOW);
  } else {
    digitalWrite(8, HIGH);
  }

  if ((!D && !C && !B && !A) || (!D && !C && !B && A) || (!D && C && B && A)) {  // C
    digitalWrite(9, LOW);
  } else {
    digitalWrite(9, HIGH);
  }

  if ((!D && !C && !B && A) || (!D && !C && B && !A) || (!D && !C && B && A) || (!D && C && B && A)) {  // D
    digitalWrite(10, LOW);
  } else {
    digitalWrite(10, HIGH);
  }

  if (!D && !C && B && !A) {  // E
    digitalWrite(11, LOW);
  } else {
    digitalWrite(11, HIGH);
  }

  if ((!D && !C && !B && A) || (!D && C && !B && !A) || (!D && C && B && A)) {  // F
    digitalWrite(12, LOW);
  } else {
    digitalWrite(12, HIGH);
  }

  if ((!D && !C && !B && A) || (!D && !C && B && A) || (!D && C && !B && !A) || (!D && C && !B && A) || (!D && C && B && A)) {  // G
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}

void letras(int A, int B, int C, int D) {
  if ((D && !C && B && A) || (D && C && !B && A)) {  // A
    digitalWrite(7, LOW);
  } else {
    digitalWrite(7, HIGH);
  }

  if ((D && !C && B && A) || (D && C && !B && !A) || (D && C && B && !A) || (D && C && B && A)) {  // B
    digitalWrite(8, LOW);
  } else {
    digitalWrite(8, HIGH);
  }

  if (D && C && !B && !A) {  // C
    digitalWrite(9, LOW);
  } else {
    digitalWrite(9, HIGH);
  }

  if (D && C && !B && A) {  // D
    digitalWrite(10, LOW);
  } else {
    digitalWrite(10, HIGH);
  }

  if ((D && C && !B && !A) || (D && C && B && !A) || (D && C && B && A)) {  // E
    digitalWrite(11, LOW);
  } else {
    digitalWrite(11, HIGH);
  }

  if ((D && !C && !B && A) || (D && !C && B && !A) || (D && C && B && A)) {  // F
    digitalWrite(12, LOW);
  } else {
    digitalWrite(12, HIGH);
  }

  if (D && !C && !B && A) {  // G
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}

void setup() {
  //NUMERO
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  //CONTROLADOR
  pinMode(7, OUTPUT);  // A
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int A = digitalRead(2);
  int B = digitalRead(3);
  int C = digitalRead(4);
  int D = digitalRead(5);

  if (!D) {
    numeros(A, B, C, D);
  } else {
    letras(A, B, C, D);
  }
}
