\\fazendo uma sinaleira (jeito ineficiente)

int led_verm=8
int led_ama=9
int led_verd=10

void setup() {
    pinMode(led_verm,OUTPUT);
    pinMode(led_ama,OUTPUT);
    pinMode(led_verd,OUTPUT);
}

void loop() {
    digitalWrite(led_verm,HIGH);
    digitalWrite(led_ama,LOW);
    digitalWrite(led_verd,LOW);
    delay(7000);

    digitalWrite(led_verm,LOW);
    digitalWrite(led_ama,LOW);
    digitalWrite(led_verd,HIGH);
    delay(7000);

    digitalWrite(led_verm,LOW);
    digitalWrite(led_ama,HIGH);
    digitalWrite(led_verd,LOW);
    delay(2000);

}