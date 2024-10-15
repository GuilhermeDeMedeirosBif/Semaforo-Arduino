#define led_red 8
#define led_yellow 9
#define led_green 10

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void red(int tmp) {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(tmp * 1000);
}

void yellow(int tmp) {
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(tmp * 1000);
}

void green(int tmp) {
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(tmp * 1000);
}

void loop() {
  red(7);

  yellow(9);

  green(2);

}
