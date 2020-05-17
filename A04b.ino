#define vm 8
#define al 9
#define vd 10

void setup () {
    pinMode(vm,OUTPUT);
    pinMode(al,OUTPUT);
    pinMode(vd,OUTPUT);
}

void vermelho (int tempo) {
     digitalWrite(vm,HIGH);
    digitalWrite(al,LOW);
    digitalWrite(vd,LOW);
    delay(tempo);
}


void amarelo (int tempo) {
    digitalWrite(vm,LOW);
    digitalWrite(al,LOW);
    digitalWrite(vd,HIGH);
    delay(tempo);
}

void verde (int tempo) {
    digitalWrite(vm,LOW);
    digitalWrite(al,HIGH);
    digitalWrite(vd,LOW);
    delay(tempo);
}

void loop () {
    vermelho(3000);
    amarelo(3000);
    vermelho(1000);
    verde(3000);
}